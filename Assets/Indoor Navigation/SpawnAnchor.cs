using Microsoft.MixedReality.Toolkit.Utilities.Solvers;
using MRTK.Tutorials.AzureCloudServices.Scripts.Domain;
using MRTK.Tutorials.AzureCloudServices.Scripts.Managers;
using MRTK.Tutorials.AzureCloudServices.Scripts.UX;
using Newtonsoft.Json.Linq;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class SpawnAnchor : MonoBehaviour
{
    public Database DataBase => database;

    [SerializeField]
    private Database database;
    [SerializeField]
    private AnchorManager sceneController1;

    public GameObject prefab,prefab2;

    public Vector3 mainPos, refPos;
    private double offsetX,offsetY,offsetZ;

    private GameObject EmptyObj;

    public Dictionary<string,GameObject> connectedActiveAnchors = new Dictionary<string,GameObject>();

    public Dictionary<string, double> edgesDict = new Dictionary<string, double>();
    public Dictionary<string, Dictionary<string, double>> VerticeDetail = new Dictionary<string, Dictionary<string, double>>();

    public Dictionary<string, Tuple<double, double>> angleDetail = new Dictionary<string, Tuple<double, double>>();
    public Dictionary<string, int> urCounter = new Dictionary<string, int>();

    public Camera cam;
    //public CreateAnchors createAnchors;
    public int offsetCounter;
    public bool corEnd = false;
    public bool rotateDir;
    Vector3 mainAnchorPos;
    public string shiftedName;
    public List<string> mainachName;
    public Material mat;

    public Dictionary<int, int> offsets = new Dictionary<int, int>();
    public Dictionary<int, bool> corChecker = new Dictionary<int, bool>();
    public Dictionary<int, int> offsetLR = new Dictionary<int, int>();
    public int maxx=0;
    public async Task GetMaxInt()
    {
        var allConnect = await database.GetAllTrackedNBObjects();
        foreach (var t in allConnect)
        {
            if (maxx < t.counter)
            {
                maxx = t.counter;
            }
            if (!offsets.ContainsKey(t.counter))
            {
                offsets.Add(t.counter, default(int));
                corChecker.Add(t.counter, false);
                offsetLR.Add(t.counter, 0); 
            }
        }
    }

    public async void SubmitQuery()
    {
        var project = await FindObjectAll();
        //foreach(var a in project)
        //{
        //    Debug.Log(a.SpatialAnchorId);
        //}
        //Debug.Log(project);
        StartFindLocation(project);
    }
    public async Task addMainSA()
    {
        var s = FindObjectOfType<AnchorManager>();
        
        foreach(KeyValuePair<string,AnchorPosition> aA in s.activeAnchors)
        {
            var z = await database.FindTrackedObjectBySpId(aA.Key);
            EmptyObj = new GameObject("holder");
            EmptyObj.transform.position = aA.Value.transform.position;
            
            if(z.Name == "Ref")
            {
                refPos = aA.Value.transform.position;
            }
            else
            {
                mainPos = aA.Value.transform.position;
                connectedActiveAnchors[z.Name] = EmptyObj;
                mainachName.Add(z.Name);
            }
            //Vector3 zzz = aA.Value.transform.position - cam.transform.position;
            //Quaternion rota = Quaternion.LookRotation(zzz, Vector3.up);
            //Debug.Log("***********************:" + cam.transform.rotation);
            //cam.transform.rotation = rota;
            //Debug.Log("***********************:" + cam.transform.rotation);

        }
    }
    public async void findNextAnchor(string key)
    {
        var queryData = await database.FindNextConnected(key);
        
        foreach (var i in queryData)
        {
            Debug.Log(i);
            
            Vector3 recoverC;
            if (key == "main")
            {
                //Debug.Log(c.ConnectSpatialAnchor);
                var z = Resources.FindObjectsOfTypeAll<CreateAnchors>();
                var s = z[0];
                await s.GetMainPos(i.ConnectSpatialAnchor);
                recoverC = s.GetMainCoord.position;
                mainAnchorPos = s.GetMainCoord.position;
            }
            else
            {
                recoverC = connectedActiveAnchors[i.ConnectSpatialAnchor].transform.position;
            }
            var x = Instantiate(prefab);
            float x_value = recoverC.x - (float)i.Xvalue;
            float y_value = recoverC.y - (float)i.Yvalue;
            float z_value = recoverC.z - (float)i.Zvalue;
            //float x_value = (float)offsetX + (float)i.Xvalue;
            //float y_value = (float)offsetY + (float)i.Yvalue;
            //float z_value = (float)offsetZ + (float)i.Zvalue;

            Debug.Log("1:  "+x_value + " " + y_value + " " + z_value);
            Vector3 loc = new Vector3(x_value, y_value, z_value);
            Debug.Log("loc " + loc);
            x.transform.position = loc;


            //var y = Instantiate(prefab2);
            //float xxx =  StringToVector3(i.Direction).x - (float)i.Xvalue;
            //float yyy = StringToVector3(i.Direction).y - (float)i.Yvalue;
            //float zzz = StringToVector3(i.Direction).z - (float)i.Zvalue;
            //Vector3 loc2 = new Vector3(xxx, yyy, zzz);
            //y.transform.position = loc;

            //y.transform.rotation = newR;
            //Debug.Log(Quaternion.AngleAxis((float)i.Angle, recoverC).eulerAngles);
            //Debug.Log(y.transform.position + " Dis: " + Vector3.Distance(y.transform.position,recoverC));
            //y.transform.rotation = Quaternion.AngleAxis((float)i.Angle, Vector3.right);
            //y.transform.RotateAround(recoverC, new Vector3(0, 1, 0), (float)i.Angle);
            //y.transform.RotateAround(recoverC, Vector3.up, Vector3.Angle(x.transform.position - recoverC, Vector3.forward)- (float)i.Angle);
            var dddd = refPos - mainPos;
            Debug.Log(i.Name + " : " + i.Angle + " : " + Vector3.Angle(x.transform.position - mainAnchorPos, dddd));
            //Debug.Log(Vector3.Angle(x.transform.position-recoverC, dddd));
            //Debug.Log(Vector3.Angle(y.transform.position-recoverC, dddd));
            //var tttt= recoverC - x.transform.position;
            Debug.Log("TRY GET D: " + dddd);
            //print("PFFFF " + offsetCounter);
            Debug.Log(i.counter+":"+offsets[i.counter] + ":" + default(int));
            if (offsets[i.counter] == default(int))
            {
                shiftedName = i.Name;
                Debug.Log("SHIFTEEDNAME: " + i.Name);
                StartCoroutine(WrapperCor((float)i.Angle, x, mainAnchorPos, dddd, i.counter, i.Dir));

            }
            



            //var t = (recoverC - x.transform.position);
            //var r = Vector3.Distance(recoverC, x.transform.position);
            //Vector3 or = Vector3.forward * r;
            //or = Quaternion.LookRotation(t) * or;
            //y.transform.rotation = Quaternion.LookRotation(t);
            //Debug.Log("DIRECTION: " + t);
            //float distance = Vector3.Distance(recoverC, x.transform.position);
            //Debug.Log(StringToVector3(i.Direction));
            //y.transform.position = recoverC + StringToVector3(i.Direction) * (float)i.Distance;
            //Debug.Log("-"+y.transform.position);
            //y.transform.localEulerAngles = new Vector3((float)353.4, (float)338.6, (float)357.3);
            //y.transform.position = y.transform.TransformDirection(StringToVector3(i.Direction));
            //Debug.Log(y.transform.position);
            //y.transform.RotateAround(recoverC, Vector3.forward, 23);
            //Debug.Log(Quaternion.AngleAxis(23f, recoverC).eulerAngles);



            //float dot = Vector3.Dot(x.transform.position, recoverC);
            //dot = dot / (x.transform.position.magnitude * recoverC.magnitude);
            //var acos = Mathf.Acos(dot);
            //var angle = acos * 180 / Math.PI;
            //Debug.Log("ANGLEEEEEEE: " + angle);

            //var y = Instantiate(prefab2);
            //x_value = (float)(x_value - offsetX);
            //y_value = (float)(y_value - offsetY);
            //z_value = (float)(z_value - offsetZ);
            //Debug.Log("2:  " + x_value + " " + y_value + " " + z_va\
            //
            //lue);

            //Vector3 loc2 = new Vector3(x_value, y_value, z_value);
            //Debug.Log("loc " + loc2);
            //y.transform.position = loc2;

            connectedActiveAnchors[i.Name] = x;
            urCounter[i.Name] = i.counter;
            //List<String> tempList = = new List<string>[i.Angle, (int)Vector3.Angle(x.transform.position - mainAnchorPos, dddd)];
            angleDetail[i.Name] = new System.Tuple<double, double>(i.Angle, (double)Vector3.Angle(x.transform.position - mainAnchorPos, dddd));
            //x.transform.GetChild(0).GetComponent<Renderer>().material = mat;
            

            findNextAnchor(i.Name);
        }
        Debug.Log("TOTAL ACTIVE ANCHOR LOADED: "+connectedActiveAnchors.Count);
        return;
    }
    IEnumerator WrapperCor(float targetAngle, GameObject x, Vector3 ori, Vector3 dir, int offsetNo, string LR)
    {
        yield return StartCoroutine(UpdateLoc(targetAngle,x,ori,dir,offsetNo,LR));
        var aa = !corChecker.ContainsValue(false);
        Debug.Log("completed : "+ aa);

        if (!corChecker.ContainsValue(false))
        {
            checkcor();
        }
        //findNextAnchor(nextLF);
        //checkcor();
    }

    IEnumerator UpdateLoc(float targetAngle, GameObject x, Vector3 ori, Vector3 dir, int offsetNo, string leftRight)
    {
        offsets[offsetNo] = 0;
        var directionSA = refPos - ori;
        var temp = targetAngle - Vector3.Angle(x.transform.position - ori, dir);
        Debug.Log(Vector3.Angle(x.transform.position - ori, dir));
        x.transform.RotateAround(ori, Vector3.up, 5 * Time.deltaTime);
        var temp2 = targetAngle - Vector3.Angle(x.transform.position - ori, dir);
        Debug.Log(Vector3.Angle(x.transform.position - ori, dir));
        Debug.Log("Temp: " + temp + " Temp2: " + temp2); 
        if (temp < temp2)
        {
            offsetLR[offsetNo] = 1;
            offsets[offsetNo] = 1;
        }
        else
        {
            offsetLR[offsetNo] = 2;
        }
        while (true)
        {
            Debug.Log(targetAngle + " : " + Vector3.Angle(x.transform.position-ori, dir) + " : " + rotateDir + " : " + (5*Time.deltaTime));
            //x.transform.RotateAround(ori, Vector3.up, 5 * Time.deltaTime);
            //offsets[offsetNo]++;
            //if (Vector3.Angle(x.transform.position - ori, dir) <= Mathf.RoundToInt(targetAngle) || offsetLR[offsetNo] == 1)
            if (offsetLR[offsetNo] == 1)
            {
                //rotateDir = true;
                
                x.transform.RotateAround(ori, Vector3.up, 5 * Time.deltaTime);
                offsets[offsetNo]++;
                //if (offsetLR[offsetNo] == 0)
                //{
                //    offsetLR[offsetNo] = 1;
                //}
            }
            //else if (Vector3.Angle(x.transform.position - ori, dir) >= Mathf.RoundToInt(targetAngle) || offsetLR[offsetNo] == 2)
            else if (offsetLR[offsetNo] == 2)
            {
                //rotateDir = false;
                x.transform.RotateAround(ori, Vector3.down, 5 * Time.deltaTime);
                offsets[offsetNo]++;
                //if (offsetLR[offsetNo] == 0)
                //{
                //    offsetLR[offsetNo] = 2;
                //}
            }
            if (Mathf.RoundToInt(targetAngle) - 1 <= Vector3.Angle(x.transform.position - ori, dir) && Vector3.Angle(x.transform.position - ori, dir) <= Mathf.RoundToInt(targetAngle) + 1 )
            {
                Debug.Log((x.transform.position-ori) + " : " + directionSA);
                if(leftRight == "left")
                {
                    if ((x.transform.position - ori).x < directionSA.x)
                    {
                        Debug.Log("reached :" + offsets[offsetNo]);
                        x.transform.GetChild(0).GetComponent<Renderer>().material = mat;
                        corChecker[offsetNo] = true;
                        yield break;
                    }
                }
                else
                {
                    if ((x.transform.position - ori).x > directionSA.x)
                    {
                        Debug.Log("reached2 :" + offsets[offsetNo]);
                        x.transform.GetChild(0).GetComponent<Renderer>().material = mat;
                        corChecker[offsetNo] = true;
                        yield break;
                    }
                }
                
            }
            yield return new WaitForSeconds(1 / 3);
            //if(LR == "right")
            //{
            //    if (Vector3.Angle(x.transform.position - ori, dir) <= Mathf.RoundToInt(targetAngle))
            //    {
            //        //if(Mathf.RoundToInt(Vector3.Angle(ori, y.transform.position)) == 180)
            //        //{
            //        //    Instantiate(prefab2, y.transform);
            //        //    Debug.Log("1.180");
            //        //    break;
            //        //}
            //        //if (Mathf.RoundToInt(Vector3.Angle(ori, y.transform.position)) == 1)
            //        //{
            //        //    Instantiate(prefab2, y.transform);
            //        //    Debug.Log("1.1");
            //        //    break;
            //        //}
            //        rotateDir = true;
            //        x.transform.RotateAround(ori, Vector3.up, 5 * Time.deltaTime);
            //        offsetCounter++;
            //    }
            //    else if (Vector3.Angle(x.transform.position - ori, dir) >= Mathf.RoundToInt(targetAngle))
            //    {
            //        //if (Mathf.RoundToInt(Vector3.Angle(ori, y.transform.position)) == 180)
            //        //{
            //        //    Instantiate(prefab2, y.transform);
            //        //    Debug.Log("2.180");
            //        //    break;
            //        //}
            //        //if (Mathf.RoundToInt(Vector3.Angle(ori, y.transform.position)) == 1)
            //        //{
            //        //    Instantiate(prefab2, y.transform);
            //        //    Debug.Log("2.1");
            //        //    break;
            //        //}
            //        rotateDir = false;
            //        x.transform.RotateAround(ori, Vector3.down, 5 * Time.deltaTime);
            //        offsetCounter++;
            //    }
            //    if (Mathf.RoundToInt(targetAngle) - 1 <= Vector3.Angle(x.transform.position - ori, dir) && Vector3.Angle(x.transform.position - ori, dir) <= Mathf.RoundToInt(targetAngle) + 1)
            //    {
            //        Debug.Log("reached :" + offsetCounter);
            //        x.transform.GetChild(0).GetComponent<Renderer>().material = mat;
            //        yield break;
            //    }
            //    yield return new WaitForSeconds(1 / 3);
            //}
            //else
            //{
            //    if (Vector3.Angle(x.transform.position - ori, dir) <= Mathf.RoundToInt(targetAngle))
            //    {
            //        //if(Mathf.RoundToInt(Vector3.Angle(ori, y.transform.position)) == 180)
            //        //{
            //        //    Instantiate(prefab2, y.transform);
            //        //    Debug.Log("1.180");
            //        //    break;
            //        //}
            //        //if (Mathf.RoundToInt(Vector3.Angle(ori, y.transform.position)) == 1)
            //        //{
            //        //    Instantiate(prefab2, y.transform);
            //        //    Debug.Log("1.1");
            //        //    break;
            //        //}
            //        rotateDir = true;
            //        x.transform.RotateAround(ori, Vector3.down, 5 * Time.deltaTime);
            //        offsetCounter++;
            //    }
            //    else if (Vector3.Angle(x.transform.position - ori, dir) >= Mathf.RoundToInt(targetAngle))
            //    {
            //        //if (Mathf.RoundToInt(Vector3.Angle(ori, y.transform.position)) == 180)
            //        //{
            //        //    Instantiate(prefab2, y.transform);
            //        //    Debug.Log("2.180");
            //        //    break;
            //        //}
            //        //if (Mathf.RoundToInt(Vector3.Angle(ori, y.transform.position)) == 1)
            //        //{
            //        //    Instantiate(prefab2, y.transform);
            //        //    Debug.Log("2.1");
            //        //    break;
            //        //}
            //        rotateDir = false;
            //        x.transform.RotateAround(ori, Vector3.up, 5 * Time.deltaTime);
            //        offsetCounter++;
            //    }
            //    if (Mathf.RoundToInt(targetAngle) - 1 <= Vector3.Angle(x.transform.position - ori, dir) && Vector3.Angle(x.transform.position - ori, dir) <= Mathf.RoundToInt(targetAngle) + 1)
            //    {
            //        Debug.Log("reached :" + offsetCounter);
            //        x.transform.GetChild(0).GetComponent<Renderer>().material = mat;
            //        yield break;
            //    }
            //    yield return new WaitForSeconds(1 / 3);
            //}

            //else
            //{
            //    y.transform.RotateAround(ori, Vector3.down, 10 * Time.deltaTime);
            //}
            //yield return new WaitForSeconds(1/3);
        }
        //if (desti != new Vector3(0, 0, 0))
        //{

        //    var closeToDest = 1;
        //    Debug.Log(Vector3.Distance(desti, cam.transform.position));
        //    if (Vector3.Distance(desti, cam.transform.position) < closeToDest)
        //    {
        //        Debug.Log("TotalNoOfLine: " + lineList.Count);
        //        foreach (var u in lineList)
        //        {
        //            Destroy(u);
        //        }
        //        //Destroy(abc);
        //        CancelInvoke();
        //    }

        //}
    }
    public void checkcor()
    {
        var tempDict = new Dictionary<string, GameObject>(connectedActiveAnchors);
        tempDict.Remove(shiftedName);
        foreach(var m in mainachName)
        {
            tempDict.Remove(m);
        }
        foreach (KeyValuePair<string, GameObject> spawned in tempDict)
        {
            Debug.Log("LLULLULLL: " + spawned.Key);
            int whatUrCounter = urCounter[spawned.Key];

            if (offsetLR[whatUrCounter] == 1)
            {
                spawned.Value.transform.RotateAround(mainAnchorPos, Vector3.up, 5 * Time.deltaTime * offsets[whatUrCounter]);
                
            }
            else
            {
                spawned.Value.transform.RotateAround(mainAnchorPos, Vector3.down, 5 * Time.deltaTime * offsets[whatUrCounter]);
            }
            spawned.Value.transform.GetChild(0).GetComponent<Renderer>().material = mat;
        }
    }
    

    public async void GetConnect()
    {

        //Debug.Log("BEfore change:" + mycam.transform.rotation);
        //mycam.transform.rotation = new Quaternion(0f, 0f, 0f, 1f);
        //Debug.Log("After change:" + mycam.transform.rotation);
        //Debug.Log(offset);
        //List<NearbyObject> cntAnc = await FindConnectObjAll();
        //List<NearbyObject> cntAnc2 = new List<NearbyObject>(cntAnc);
        //Debug.Log(cntAnc.Count);
        //var te = cntAnc.ToList();
        await addMainSA();
        await GetMaxInt();
        Debug.Log("MAXXXXXX " + maxx);
        string lookFor = "main";
        findNextAnchor(lookFor);
        

        //Debug.Log("START: " + cntAnc.Count);
        //while (cntAnc2.Count != 0)
        //{
        //    Debug.Log("LEFT: " + cntAnc.Count);
        //    foreach(var c in cntAnc)
        //    {
        //        Vector3 recoverC;
        //        if (lookFor == c.PartitionKey)
        //        {
        //            if (c.PartitionKey == "main")
        //            {
        //                Debug.Log(c.ConnectSpatialAnchor);
        //                var z = Resources.FindObjectsOfTypeAll<CreateAnchors>();
        //                var s = z[0];
        //                await s.Test(c.ConnectSpatialAnchor);
        //                recoverC = s.GetMainCoord.position;
        //            }
        //            else
        //            {
        //                recoverC = connectedActiveAnchors[c.ConnectSpatialAnchor].transform.position;
        //            }
        //            var x = Instantiate(prefab);
        //            float x_value = recoverC.x - (float)c.XvalueA;
        //            float y_value = recoverC.y - (float)c.YvalueA;
        //            float z_value = recoverC.z - (float)c.ZvalueA;
        //            Vector3 loc = new Vector3(x_value, y_value, z_value);
        //            x.transform.position = loc;

        //            connectedActiveAnchors[c.Name] = x;
        //            lookFor = c.Name;
        //            cntAnc2.Remove(c);
        //        }
        //    }
        //}

        
        //foreach (var c in cntAnc)
        //{
            
        //    Vector3 recoverC;
            
        //    Debug.Log(c.PartitionKey);
        //    Debug.Log(c.PartitionKey == "main");
        //    if (c.PartitionKey == "main")
        //    {
        //        Debug.Log(c.ConnectSpatialAnchor);
        //        var z = Resources.FindObjectsOfTypeAll<CreateAnchors>();
        //        var s = z[0];
        //        await s.Test(c.ConnectSpatialAnchor);
        //        recoverC = s.GetMainCoord.position;
        //    }
        //    else
        //    {
        //       recoverC = connectedActiveAnchors[c.ConnectSpatialAnchor].transform.position;
        //    }
        //    //Transform testttt = s.GetMainCoordR;
        //    Debug.Log("accessDB V3: " + recoverC);

        //    //Vector3 recoverRef = s.GetRefCoord;
        //    //Debug.Log("accessDB V3 Ref: " + recoverRef);

        //    var x = Instantiate(prefab);
        //    float x_value = recoverC.x - (float)c.XvalueA;
        //    float y_value = recoverC.y - (float)c.YvalueA;
        //    float z_value = recoverC.z - (float)c.ZvalueA;
        //    Vector3 loc = new Vector3(x_value, y_value, z_value);
        //    x.transform.position = loc;

        //    connectedActiveAnchors[c.Name] = x;
        //    //x.transform.parent = s.GetMainCoord;

        //    //var bbb = s.GetMainCoord.transform.childCount;
        //    //Debug.Log("No of Child: " + bbb);

        //    //var co = s.GetMainCoord.transform.GetChild(0).name;
        //    //Debug.Log("Child Name: " + co);

        //    float testD = Vector3.Distance(x.transform.position, recoverC);
        //    Debug.Log("L Dist: "+testD);
            //x.transform.rotation = testttt.rotation;

            //var xx = Instantiate(prefab);
            //float ref_x_value = recoverRef.x - (float)c.XvalueB;
            //float ref_y_value = recoverRef.y - (float)c.YvalueB;
            //float ref_z_value = recoverRef.z - (float)c.ZvalueB;
            //Vector3 locx = new Vector3(ref_x_value, ref_y_value, ref_z_value);
            //xx.transform.position = locx;

            //offset.x = ref_x_value - x_value;
            //offset.y = ref_y_value - y_value;
            //offset.z = ref_z_value - z_value;


            //var yy = Instantiate(testprefab);
            //float aa = x.transform.position.x + offset.x;
            //float bb = x.transform.position.y + offset.y;
            //float cc = x.transform.position.z + offset.z;
            //Vector3 abc = new Vector3(aa, bb, cc);
            //yy.transform.position = abc;
            //yy.transform.position.x = x.transform.position.x+offset.x;


        //    //Vector3 tgDir = recoverC - x.transform.position;
        //    //float ag = Vector3.Angle(tgDir, x.transform.forward);
        //    //Debug.Log("ANGLE TEST:" + ag);
        //}
        //foreach (var c in cntAnc)
        //{
        //    var x = Instantiate(prefab);
        //    float x_value = (float)c.Xvalue;
        //    float y_value = (float)c.Yvalue;
        //    float z_value = (float)c.Zvalue;
        //    Vector3 loc = new Vector3(x_value, y_value, z_value);
        //    x.transform.position = loc;
        //}

    }
    private async Task<List<TrackedObject>> FindObjectAll()
    {
        //hintLabel.SetText(loadingText);
        //hintLabel.gameObject.SetActive(true);
        //var projectFromDb = await sceneController.DataManager.FindTrackedObjectByName(searchName);
        var projectFromDb1 = await database.GetAllTrackedObjects();
        //Debug.Log(projectFromDb);
        Debug.Log(projectFromDb1.Count);
        //foreach(var a in projectFromDb1)
        //{
        //    Debug.Log(a.SpatialAnchorId);
        //}
        //if (projectFromDb == null)
        //{
        //    hintLabel.SetText($"No object found with the name '{searchName}'.");
        //    return null;
        //}

        //hintLabel.gameObject.SetActive(false);
        return projectFromDb1;
    }
    private async Task<List<NearbyObject>> FindConnectObjAll()
    {
        var projectFromDb1 = await database.GetAllTrackedNBObjects();
        return projectFromDb1;
    }
    public void StartFindLocation(List<TrackedObject> trackedObject)
    {
        //if (string.IsNullOrEmpty(trackedObject.SpatialAnchorId))
        //{
        //    messageLabel.text = "No spatial anchor has been specified for this object.";
        //    return;
        //}
        //if (sceneController.AnchorManager.CheckIsAnchorActiveForTrackedObject(trackedObject.SpatialAnchorId))
        //{
        //    messageLabel.text = "The spatial anchor for this object is already spawned.";
        //    Debug.Log("ArrowDeB");
        //    sceneController.AnchorManager.GuideToAnchor(trackedObject.SpatialAnchorId);
        //    return;
        //}

        //sceneController.StopCamera();
        //sceneController1.OnFindAnchorSucceeded += HandleOnAnchorFound;
        Debug.Log("ABC: " + trackedObject);
        foreach (var a in trackedObject)
        {
            Debug.Log(a.SpatialAnchorId);
        }
        //Debug.Log(project);
        //List<string> anchorsToFind = new List<string>();
        //foreach (var item in trackedObject)
        //{
        //    anchorsToFind.Add(item.SpatialAnchorId);
        //}
        sceneController1.FindAnchorNew(trackedObject);
    }
    private void HandleOnAnchorFound(object sender, EventArgs e)
    {
        Debug.Log("ObjectCardViewController.HandleOnAnchorFound");
        sceneController1.OnFindAnchorSucceeded -= HandleOnAnchorFound;
        
    }
}
