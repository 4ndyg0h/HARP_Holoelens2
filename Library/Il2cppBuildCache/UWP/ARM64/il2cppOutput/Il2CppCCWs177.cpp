#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>>
struct Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439;
// System.Action`1<System.Single[]>
struct Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_tED77E13BE2DC03A1566A48FDFFAFB5DD41605E70;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct EventFunction_1_t8D6E76DB3F4CEA6D77E4CDCF4CFCA1B1A33B35DA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>>
struct EventFunction_1_t5AB8873D84772BCF077E9CA165D1081872A49688;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>>
struct EventFunction_1_t6C4BDE466A5978FE0CEF13FD3DF90FC630973811;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>>
struct EventFunction_1_t5465873904C474AC221DCF44F710FD54487A2F27;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct EventFunction_1_t9C9F1F66388EF01DF4F3AA47482084635F4EEE1E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>>
struct EventFunction_1_t3253ADDFEA7265300ADC8960950B81FA54DDCCC4;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>>
struct EventFunction_1_tC719D520E8F678842B4340237D2294EFD0972F80;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>>
struct EventFunction_1_tBF954CA12A41833F0D15B2E607ECF59F2C84E678;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>>
struct EventFunction_1_tB508CFAA006FF3367945429E3C9F69EB7CDA5228;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler>
struct EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>
struct EventFunction_1_t12E7658C5544026D856A46440A173242F96EC44C;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler>
struct EventFunction_1_tF81B5FDDB6666DB7C9E99521EA932CD1E044D3A1;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler>
struct EventFunction_1_tF6CD95F6E1166CD63C94ECCB675036979F487E95;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler>
struct EventFunction_1_t71FE931365C0EF215522681D3C8920315E889D4F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler>
struct EventFunction_1_tC908899E305AEAC1A5D6BAB2CD937AB1A26FD493;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler>
struct EventFunction_1_t4B256856AEE0068FA253283964F6E7F860CFEA00;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler>
struct EventFunction_1_t46B838A0C9EB5FF9ACF435959AC0B0A5A3CAA926;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler>
struct EventFunction_1_tC57E1CD95652F75C7DF4A9377691010279215A3A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler>
struct EventFunction_1_t9BC4DC831AD98A1ADB8C8650B8E376F95F4724FD;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler>
struct EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler>
struct EventFunction_1_tDCB4CACC0B3FF37C3E3D1D3B4B25C16B4D1C9D40;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler>
struct EventFunction_1_tAFCD0133A02DD79257577FAE998A07C817B769A8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler>
struct EventFunction_1_t367770E68B290A5DD54E069E04B83F2EE5A59872;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_tAA924F987C20991EA4FADB4E5BE2512CAE7CF8B3;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_t677147EFE2818B54470A3C7DE5D2E76898909703;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct InputEventData_1_t95DB5DCBD9E6D8500526D03385BA8980D237639D;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct InputEventData_1_t0B059AD10918AFB11B9DB4D96BBFB18DCD2564BF;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct InputEventData_1_t0559119B71F540C1135C757ADC84980A51945FF5;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct InputEventData_1_tE16B20C8271985A178B5DB29E5A34DFE05836673;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_t858FD731EF453876756A19D55413472BF17D4680;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_t6000E168DC13F7700BE82C48089DCB73AE5E4177;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_tE8B8C9732420F20D517F8474A142DA1F8A4B79C8;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t71F8F8ACD8735BC8A8C729DF30E0227104FDE94B;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t895AE82A37CFF636DC7D13D126A7E414B2E27E19;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_t930E02365E322341542134C91223F4E92BD68A6D;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct SourcePoseEventData_1_tD2E360537D508E781E6A4CB5C07F117A75BFA5CE;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct SourcePoseEventData_1_t4CF714FDA8D8A2F30154DEFCA5DDFD50BF73C90D;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct SourcePoseEventData_1_t7BD4A4A45CD8964D8BE07F796E2BD6FA1BC10102;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct SourcePoseEventData_1_tD6A29A780D21CB1D5B978C7EE6047A91715E070F;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct SourcePoseEventData_1_tA02B5679D1791EEE3396DA686E0EC604FB456816;
// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// Photon.Voice.Unity.AudioOutCapture
struct AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t3BBD6B5E33E10571615F36F94E515C547CE179BF;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData
struct DiagnosticsEventData_tE6F43B8A85611BB3CA342437448140F67F45A6F7;
// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_tDCEC89FE1BD351FCEAA5D6E206AE336C9E55D7BA;
// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_tBF30F5EA28073CC7C0662FDCE74967BB9A7CEE34;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_t3D6DB0D87F242EC41B0CB156BCD95E0C643221E2;
// IActivationFactory
struct Il2CppIActivationFactory;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Photon.Voice.ILogger
struct ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA;
// Windows.Media.Capture.IMediaCaptureStatics
struct IMediaCaptureStatics_t7D1F872129F6A3FD94449667071BCC6F73C3DAAA;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_tF1E8AAA822A4BC884BC20CAB4B84F5826BBE282C;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider
struct IMixedRealityEyeGazeProvider_tA58D39389EFBF18E93F9571A8A101CA593AFD91B;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusProvider
struct IMixedRealityFocusProvider_t3D72F2C8682C942747A76768382D7A84361FAEAB;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider
struct IMixedRealityGazeProvider_t93BFCCC242438F9E1C141DDA2EBBAE784636FDF4;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityRaycastProvider
struct IMixedRealityRaycastProvider_t9EC6792789B657504CA84CD819B3670A7ADAC81F;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tB59192B32609F628212F9A3CF763B719F5668E9F;
// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_tA259F0AF4AE4D857E78B38AF9A3F28F9D0101DE6;
// Windows.Media.Capture.MediaCapture
struct MediaCapture_tAE6EEA0560A75B38B07232CB39FDEEFCF7834521;
// Windows.Media.Capture.MediaCaptureFailedEventArgs
struct MediaCaptureFailedEventArgs_t367A678799346B060B956D7A09266A9E4D198A21;
// Windows.Media.Capture.MediaCaptureFailedEventHandler
struct MediaCaptureFailedEventHandler_t67F2EC5DBFC6ECD77A4883D5E7993B66179078BF;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_tD8A7DA52B58345E748889AF25FDE482C71BD9B4B;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_t735D9F437D72A41A976B094A8B795C79251F4268;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_tF5FCE2C4E2569CEA3657164B90D036ADCEDDAE73;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t4CA250E3F600824482F2D57467018D19A35A3931;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t14C28C7E9710B6738A269692FF4CE275CC5A2070;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler
struct MixedRealityToolkitVisualProfiler_t95A9862102467177D8607B3B9AE653C1A049FE5A;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_tFBAFD0D1BDD92019A946CF2C4D7D4076A1DB34E7;
// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_t00E84586BA3E9F9A4A7EC82F3BE2EC23CF2AFFA9;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker
struct SceneContentTracker_tC8136F19D247D7A7732F5C4EEF541C3FB9C98ED3;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor
struct SceneLightingExecutor_t23DA964728B10C2FA663636EC353F1856A2C9B83;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MediaCaptureFailedEventArgs_t367A678799346B060B956D7A09266A9E4D198A21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MediaCapture_tAE6EEA0560A75B38B07232CB39FDEEFCF7834521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Guid_t ;
struct IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IMediaCaptureFailedEventArgs_t7DF1155C49DD8AEA9E834484125B15B6EC716286;
struct IMediaCaptureFailedEventHandler_t67F2EC5DBFC6ECD77A4883D5E7993B66179078BF_ComCallableWrapper;
struct IMediaCaptureInitializationSettings_t501DB7A0A496BBF20773B34CBC47D019BA5CE5D1;
struct IMediaCapture_tFE423BDE30996E472973B721D6F12E0BC872B959;
struct IMediaEncodingProfile_tFECE1CAE17D88B66C77E64CDC60035422FC42F6D;
struct IMediaExtension_t4686DA4E9199F25B22E97EF5810B76441CEF9B27;
struct IVideoDeviceController_t771157CFEA1B2FDBE84F8303D76DB359BBFAC97F;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() = 0;
};
// Windows.Media.Capture.IMediaCaptureFailedEventArgs
struct NOVTABLE IMediaCaptureFailedEventArgs_t7DF1155C49DD8AEA9E834484125B15B6EC716286 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureFailedEventArgs_get_Message_mE5A728179CEDF4E800E79B29220C2864E57338AC(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureFailedEventArgs_U24__Stripped0_get_Code_m10F983AF424DDB671544D5E23C1965DC80EDC65B() = 0;
};
// Windows.Media.Capture.IMediaCaptureStatics
struct NOVTABLE IMediaCaptureStatics_t7D1F872129F6A3FD94449667071BCC6F73C3DAAA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureStatics_U24__Stripped0_IsVideoProfileSupported_m9C36656496907266030BCE894212DC02EB7B1935() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureStatics_U24__Stripped1_FindAllVideoProfiles_m31C995520FDCB2AAB916F04E0974CE9C8153FBC0() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureStatics_U24__Stripped2_FindConcurrentProfiles_m8DEF9963842DDFC1EF07CC071E6E123222084A60() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureStatics_U24__Stripped3_FindKnownVideoProfiles_mB8EAD2C4188D829124ECBFA1C4BD323AB173FF96() = 0;
};

// System.Object


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MessageDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MessageDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MessageDictionary::_methodKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MessageDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____internalProperties_0)); }
	inline RuntimeObject* get__internalProperties_0() const { return ____internalProperties_0; }
	inline RuntimeObject** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(RuntimeObject* value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____internalProperties_0), (void*)value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____message_1)); }
	inline RuntimeObject* get__message_1() const { return ____message_1; }
	inline RuntimeObject** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(RuntimeObject* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_1), (void*)value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____methodKeys_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____methodKeys_2), (void*)value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
	}
};


// Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat
struct MicAmplifierFloat_t991E0AF1091944A20CCAF02068812176F37F9906  : public RuntimeObject
{
public:
	// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::<AmplificationFactor>k__BackingField
	float ___U3CAmplificationFactorU3Ek__BackingField_0;
	// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::<BoostValue>k__BackingField
	float ___U3CBoostValueU3Ek__BackingField_1;
	// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::<MaxBefore>k__BackingField
	float ___U3CMaxBeforeU3Ek__BackingField_2;
	// System.Single Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::<MaxAfter>k__BackingField
	float ___U3CMaxAfterU3Ek__BackingField_3;
	// System.Boolean Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat::<Disabled>k__BackingField
	bool ___U3CDisabledU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CAmplificationFactorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MicAmplifierFloat_t991E0AF1091944A20CCAF02068812176F37F9906, ___U3CAmplificationFactorU3Ek__BackingField_0)); }
	inline float get_U3CAmplificationFactorU3Ek__BackingField_0() const { return ___U3CAmplificationFactorU3Ek__BackingField_0; }
	inline float* get_address_of_U3CAmplificationFactorU3Ek__BackingField_0() { return &___U3CAmplificationFactorU3Ek__BackingField_0; }
	inline void set_U3CAmplificationFactorU3Ek__BackingField_0(float value)
	{
		___U3CAmplificationFactorU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CBoostValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MicAmplifierFloat_t991E0AF1091944A20CCAF02068812176F37F9906, ___U3CBoostValueU3Ek__BackingField_1)); }
	inline float get_U3CBoostValueU3Ek__BackingField_1() const { return ___U3CBoostValueU3Ek__BackingField_1; }
	inline float* get_address_of_U3CBoostValueU3Ek__BackingField_1() { return &___U3CBoostValueU3Ek__BackingField_1; }
	inline void set_U3CBoostValueU3Ek__BackingField_1(float value)
	{
		___U3CBoostValueU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMaxBeforeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MicAmplifierFloat_t991E0AF1091944A20CCAF02068812176F37F9906, ___U3CMaxBeforeU3Ek__BackingField_2)); }
	inline float get_U3CMaxBeforeU3Ek__BackingField_2() const { return ___U3CMaxBeforeU3Ek__BackingField_2; }
	inline float* get_address_of_U3CMaxBeforeU3Ek__BackingField_2() { return &___U3CMaxBeforeU3Ek__BackingField_2; }
	inline void set_U3CMaxBeforeU3Ek__BackingField_2(float value)
	{
		___U3CMaxBeforeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CMaxAfterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MicAmplifierFloat_t991E0AF1091944A20CCAF02068812176F37F9906, ___U3CMaxAfterU3Ek__BackingField_3)); }
	inline float get_U3CMaxAfterU3Ek__BackingField_3() const { return ___U3CMaxAfterU3Ek__BackingField_3; }
	inline float* get_address_of_U3CMaxAfterU3Ek__BackingField_3() { return &___U3CMaxAfterU3Ek__BackingField_3; }
	inline void set_U3CMaxAfterU3Ek__BackingField_3(float value)
	{
		___U3CMaxAfterU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CDisabledU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MicAmplifierFloat_t991E0AF1091944A20CCAF02068812176F37F9906, ___U3CDisabledU3Ek__BackingField_4)); }
	inline bool get_U3CDisabledU3Ek__BackingField_4() const { return ___U3CDisabledU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CDisabledU3Ek__BackingField_4() { return &___U3CDisabledU3Ek__BackingField_4; }
	inline void set_U3CDisabledU3Ek__BackingField_4(bool value)
	{
		___U3CDisabledU3Ek__BackingField_4 = value;
	}
};


// Photon.Voice.Unity.UtilityScripts.MicAmplifierShort
struct MicAmplifierShort_tD227CCB351537BAD41446C52140D182C83E6138C  : public RuntimeObject
{
public:
	// System.Int16 Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::<AmplificationFactor>k__BackingField
	int16_t ___U3CAmplificationFactorU3Ek__BackingField_0;
	// System.Int16 Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::<BoostValue>k__BackingField
	int16_t ___U3CBoostValueU3Ek__BackingField_1;
	// System.Int16 Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::<MaxBefore>k__BackingField
	int16_t ___U3CMaxBeforeU3Ek__BackingField_2;
	// System.Int16 Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::<MaxAfter>k__BackingField
	int16_t ___U3CMaxAfterU3Ek__BackingField_3;
	// System.Boolean Photon.Voice.Unity.UtilityScripts.MicAmplifierShort::<Disabled>k__BackingField
	bool ___U3CDisabledU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CAmplificationFactorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MicAmplifierShort_tD227CCB351537BAD41446C52140D182C83E6138C, ___U3CAmplificationFactorU3Ek__BackingField_0)); }
	inline int16_t get_U3CAmplificationFactorU3Ek__BackingField_0() const { return ___U3CAmplificationFactorU3Ek__BackingField_0; }
	inline int16_t* get_address_of_U3CAmplificationFactorU3Ek__BackingField_0() { return &___U3CAmplificationFactorU3Ek__BackingField_0; }
	inline void set_U3CAmplificationFactorU3Ek__BackingField_0(int16_t value)
	{
		___U3CAmplificationFactorU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CBoostValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MicAmplifierShort_tD227CCB351537BAD41446C52140D182C83E6138C, ___U3CBoostValueU3Ek__BackingField_1)); }
	inline int16_t get_U3CBoostValueU3Ek__BackingField_1() const { return ___U3CBoostValueU3Ek__BackingField_1; }
	inline int16_t* get_address_of_U3CBoostValueU3Ek__BackingField_1() { return &___U3CBoostValueU3Ek__BackingField_1; }
	inline void set_U3CBoostValueU3Ek__BackingField_1(int16_t value)
	{
		___U3CBoostValueU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMaxBeforeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MicAmplifierShort_tD227CCB351537BAD41446C52140D182C83E6138C, ___U3CMaxBeforeU3Ek__BackingField_2)); }
	inline int16_t get_U3CMaxBeforeU3Ek__BackingField_2() const { return ___U3CMaxBeforeU3Ek__BackingField_2; }
	inline int16_t* get_address_of_U3CMaxBeforeU3Ek__BackingField_2() { return &___U3CMaxBeforeU3Ek__BackingField_2; }
	inline void set_U3CMaxBeforeU3Ek__BackingField_2(int16_t value)
	{
		___U3CMaxBeforeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CMaxAfterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MicAmplifierShort_tD227CCB351537BAD41446C52140D182C83E6138C, ___U3CMaxAfterU3Ek__BackingField_3)); }
	inline int16_t get_U3CMaxAfterU3Ek__BackingField_3() const { return ___U3CMaxAfterU3Ek__BackingField_3; }
	inline int16_t* get_address_of_U3CMaxAfterU3Ek__BackingField_3() { return &___U3CMaxAfterU3Ek__BackingField_3; }
	inline void set_U3CMaxAfterU3Ek__BackingField_3(int16_t value)
	{
		___U3CMaxAfterU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CDisabledU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MicAmplifierShort_tD227CCB351537BAD41446C52140D182C83E6138C, ___U3CDisabledU3Ek__BackingField_4)); }
	inline bool get_U3CDisabledU3Ek__BackingField_4() const { return ___U3CDisabledU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CDisabledU3Ek__BackingField_4() { return &___U3CDisabledU3Ek__BackingField_4; }
	inline void set_U3CDisabledU3Ek__BackingField_4(bool value)
	{
		___U3CDisabledU3Ek__BackingField_4 = value;
	}
};


// Photon.Voice.Unity.MicWrapper
struct MicWrapper_tA6159AB7D765EEC4AA2ED65783AAB96D2DDDF192  : public RuntimeObject
{
public:
	// UnityEngine.AudioClip Photon.Voice.Unity.MicWrapper::mic
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___mic_0;
	// System.String Photon.Voice.Unity.MicWrapper::device
	String_t* ___device_1;
	// Photon.Voice.ILogger Photon.Voice.Unity.MicWrapper::logger
	RuntimeObject* ___logger_2;
	// System.String Photon.Voice.Unity.MicWrapper::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.Unity.MicWrapper::micPrevPos
	int32_t ___micPrevPos_4;
	// System.Int32 Photon.Voice.Unity.MicWrapper::micLoopCnt
	int32_t ___micLoopCnt_5;
	// System.Int32 Photon.Voice.Unity.MicWrapper::readAbsPos
	int32_t ___readAbsPos_6;

public:
	inline static int32_t get_offset_of_mic_0() { return static_cast<int32_t>(offsetof(MicWrapper_tA6159AB7D765EEC4AA2ED65783AAB96D2DDDF192, ___mic_0)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_mic_0() const { return ___mic_0; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_mic_0() { return &___mic_0; }
	inline void set_mic_0(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___mic_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mic_0), (void*)value);
	}

	inline static int32_t get_offset_of_device_1() { return static_cast<int32_t>(offsetof(MicWrapper_tA6159AB7D765EEC4AA2ED65783AAB96D2DDDF192, ___device_1)); }
	inline String_t* get_device_1() const { return ___device_1; }
	inline String_t** get_address_of_device_1() { return &___device_1; }
	inline void set_device_1(String_t* value)
	{
		___device_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___device_1), (void*)value);
	}

	inline static int32_t get_offset_of_logger_2() { return static_cast<int32_t>(offsetof(MicWrapper_tA6159AB7D765EEC4AA2ED65783AAB96D2DDDF192, ___logger_2)); }
	inline RuntimeObject* get_logger_2() const { return ___logger_2; }
	inline RuntimeObject** get_address_of_logger_2() { return &___logger_2; }
	inline void set_logger_2(RuntimeObject* value)
	{
		___logger_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MicWrapper_tA6159AB7D765EEC4AA2ED65783AAB96D2DDDF192, ___U3CErrorU3Ek__BackingField_3)); }
	inline String_t* get_U3CErrorU3Ek__BackingField_3() const { return ___U3CErrorU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CErrorU3Ek__BackingField_3() { return &___U3CErrorU3Ek__BackingField_3; }
	inline void set_U3CErrorU3Ek__BackingField_3(String_t* value)
	{
		___U3CErrorU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_micPrevPos_4() { return static_cast<int32_t>(offsetof(MicWrapper_tA6159AB7D765EEC4AA2ED65783AAB96D2DDDF192, ___micPrevPos_4)); }
	inline int32_t get_micPrevPos_4() const { return ___micPrevPos_4; }
	inline int32_t* get_address_of_micPrevPos_4() { return &___micPrevPos_4; }
	inline void set_micPrevPos_4(int32_t value)
	{
		___micPrevPos_4 = value;
	}

	inline static int32_t get_offset_of_micLoopCnt_5() { return static_cast<int32_t>(offsetof(MicWrapper_tA6159AB7D765EEC4AA2ED65783AAB96D2DDDF192, ___micLoopCnt_5)); }
	inline int32_t get_micLoopCnt_5() const { return ___micLoopCnt_5; }
	inline int32_t* get_address_of_micLoopCnt_5() { return &___micLoopCnt_5; }
	inline void set_micLoopCnt_5(int32_t value)
	{
		___micLoopCnt_5 = value;
	}

	inline static int32_t get_offset_of_readAbsPos_6() { return static_cast<int32_t>(offsetof(MicWrapper_tA6159AB7D765EEC4AA2ED65783AAB96D2DDDF192, ___readAbsPos_6)); }
	inline int32_t get_readAbsPos_6() const { return ___readAbsPos_6; }
	inline int32_t* get_address_of_readAbsPos_6() { return &___readAbsPos_6; }
	inline void set_readAbsPos_6(int32_t value)
	{
		___readAbsPos_6 = value;
	}
};


// Photon.Voice.Unity.MicWrapperPusher
struct MicWrapperPusher_t324867E2CECA78ED13D8858D42FB7BC9AC69CE79  : public RuntimeObject
{
public:
	// UnityEngine.AudioSource Photon.Voice.Unity.MicWrapperPusher::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_0;
	// UnityEngine.AudioClip Photon.Voice.Unity.MicWrapperPusher::mic
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___mic_1;
	// System.String Photon.Voice.Unity.MicWrapperPusher::device
	String_t* ___device_2;
	// Photon.Voice.ILogger Photon.Voice.Unity.MicWrapperPusher::logger
	RuntimeObject* ___logger_3;
	// Photon.Voice.Unity.AudioOutCapture Photon.Voice.Unity.MicWrapperPusher::audioOutCapture
	AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * ___audioOutCapture_4;
	// System.Int32 Photon.Voice.Unity.MicWrapperPusher::sampleRate
	int32_t ___sampleRate_5;
	// System.Int32 Photon.Voice.Unity.MicWrapperPusher::channels
	int32_t ___channels_6;
	// System.Boolean Photon.Voice.Unity.MicWrapperPusher::destroyGameObjectOnStop
	bool ___destroyGameObjectOnStop_7;
	// System.Single[] Photon.Voice.Unity.MicWrapperPusher::frame2
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___frame2_8;
	// System.Action`1<System.Single[]> Photon.Voice.Unity.MicWrapperPusher::pushCallback
	Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * ___pushCallback_9;
	// System.String Photon.Voice.Unity.MicWrapperPusher::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_audioSource_0() { return static_cast<int32_t>(offsetof(MicWrapperPusher_t324867E2CECA78ED13D8858D42FB7BC9AC69CE79, ___audioSource_0)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_0() const { return ___audioSource_0; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_0() { return &___audioSource_0; }
	inline void set_audioSource_0(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_0), (void*)value);
	}

	inline static int32_t get_offset_of_mic_1() { return static_cast<int32_t>(offsetof(MicWrapperPusher_t324867E2CECA78ED13D8858D42FB7BC9AC69CE79, ___mic_1)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_mic_1() const { return ___mic_1; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_mic_1() { return &___mic_1; }
	inline void set_mic_1(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___mic_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mic_1), (void*)value);
	}

	inline static int32_t get_offset_of_device_2() { return static_cast<int32_t>(offsetof(MicWrapperPusher_t324867E2CECA78ED13D8858D42FB7BC9AC69CE79, ___device_2)); }
	inline String_t* get_device_2() const { return ___device_2; }
	inline String_t** get_address_of_device_2() { return &___device_2; }
	inline void set_device_2(String_t* value)
	{
		___device_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___device_2), (void*)value);
	}

	inline static int32_t get_offset_of_logger_3() { return static_cast<int32_t>(offsetof(MicWrapperPusher_t324867E2CECA78ED13D8858D42FB7BC9AC69CE79, ___logger_3)); }
	inline RuntimeObject* get_logger_3() const { return ___logger_3; }
	inline RuntimeObject** get_address_of_logger_3() { return &___logger_3; }
	inline void set_logger_3(RuntimeObject* value)
	{
		___logger_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_3), (void*)value);
	}

	inline static int32_t get_offset_of_audioOutCapture_4() { return static_cast<int32_t>(offsetof(MicWrapperPusher_t324867E2CECA78ED13D8858D42FB7BC9AC69CE79, ___audioOutCapture_4)); }
	inline AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * get_audioOutCapture_4() const { return ___audioOutCapture_4; }
	inline AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA ** get_address_of_audioOutCapture_4() { return &___audioOutCapture_4; }
	inline void set_audioOutCapture_4(AudioOutCapture_tE2CE2A45FD8AC3B6293CB0F0BFDD36AFFA6D1ABA * value)
	{
		___audioOutCapture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioOutCapture_4), (void*)value);
	}

	inline static int32_t get_offset_of_sampleRate_5() { return static_cast<int32_t>(offsetof(MicWrapperPusher_t324867E2CECA78ED13D8858D42FB7BC9AC69CE79, ___sampleRate_5)); }
	inline int32_t get_sampleRate_5() const { return ___sampleRate_5; }
	inline int32_t* get_address_of_sampleRate_5() { return &___sampleRate_5; }
	inline void set_sampleRate_5(int32_t value)
	{
		___sampleRate_5 = value;
	}

	inline static int32_t get_offset_of_channels_6() { return static_cast<int32_t>(offsetof(MicWrapperPusher_t324867E2CECA78ED13D8858D42FB7BC9AC69CE79, ___channels_6)); }
	inline int32_t get_channels_6() const { return ___channels_6; }
	inline int32_t* get_address_of_channels_6() { return &___channels_6; }
	inline void set_channels_6(int32_t value)
	{
		___channels_6 = value;
	}

	inline static int32_t get_offset_of_destroyGameObjectOnStop_7() { return static_cast<int32_t>(offsetof(MicWrapperPusher_t324867E2CECA78ED13D8858D42FB7BC9AC69CE79, ___destroyGameObjectOnStop_7)); }
	inline bool get_destroyGameObjectOnStop_7() const { return ___destroyGameObjectOnStop_7; }
	inline bool* get_address_of_destroyGameObjectOnStop_7() { return &___destroyGameObjectOnStop_7; }
	inline void set_destroyGameObjectOnStop_7(bool value)
	{
		___destroyGameObjectOnStop_7 = value;
	}

	inline static int32_t get_offset_of_frame2_8() { return static_cast<int32_t>(offsetof(MicWrapperPusher_t324867E2CECA78ED13D8858D42FB7BC9AC69CE79, ___frame2_8)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_frame2_8() const { return ___frame2_8; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_frame2_8() { return &___frame2_8; }
	inline void set_frame2_8(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___frame2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frame2_8), (void*)value);
	}

	inline static int32_t get_offset_of_pushCallback_9() { return static_cast<int32_t>(offsetof(MicWrapperPusher_t324867E2CECA78ED13D8858D42FB7BC9AC69CE79, ___pushCallback_9)); }
	inline Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * get_pushCallback_9() const { return ___pushCallback_9; }
	inline Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 ** get_address_of_pushCallback_9() { return &___pushCallback_9; }
	inline void set_pushCallback_9(Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * value)
	{
		___pushCallback_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushCallback_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(MicWrapperPusher_t324867E2CECA78ED13D8858D42FB7BC9AC69CE79, ___U3CErrorU3Ek__BackingField_10)); }
	inline String_t* get_U3CErrorU3Ek__BackingField_10() const { return ___U3CErrorU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CErrorU3Ek__BackingField_10() { return &___U3CErrorU3Ek__BackingField_10; }
	inline void set_U3CErrorU3Ek__BackingField_10(String_t* value)
	{
		___U3CErrorU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_10), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.__Il2CppComObject


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 
{
public:
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Windows.Foundation.Numerics.Matrix4x4
struct Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 
{
public:
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};


// Windows.Media.Capture.MediaCapture
struct MediaCapture_tAE6EEA0560A75B38B07232CB39FDEEFCF7834521  : public Il2CppComObject
{
public:

public:
};

struct MediaCapture_tAE6EEA0560A75B38B07232CB39FDEEFCF7834521_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureStatics
	IMediaCaptureStatics_t7D1F872129F6A3FD94449667071BCC6F73C3DAAA* ____imediaCaptureStatics_t7D1F872129F6A3FD94449667071BCC6F73C3DAAA;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.Capture.MediaCapture"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureStatics_t7D1F872129F6A3FD94449667071BCC6F73C3DAAA* get_____imediaCaptureStatics_t7D1F872129F6A3FD94449667071BCC6F73C3DAAA()
	{
		IMediaCaptureStatics_t7D1F872129F6A3FD94449667071BCC6F73C3DAAA* returnValue = ____imediaCaptureStatics_t7D1F872129F6A3FD94449667071BCC6F73C3DAAA;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IMediaCaptureStatics_t7D1F872129F6A3FD94449667071BCC6F73C3DAAA::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____imediaCaptureStatics_t7D1F872129F6A3FD94449667071BCC6F73C3DAAA), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureStatics_t7D1F872129F6A3FD94449667071BCC6F73C3DAAA;
			}
		}
		return returnValue;
	}
};


// Windows.Media.Capture.MediaCaptureFailedEventArgs
struct MediaCaptureFailedEventArgs_t367A678799346B060B956D7A09266A9E4D198A21  : public Il2CppComObject
{
public:

public:
};


// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531  : public MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE
{
public:

public:
};

struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalReturnKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___InternalReturnKeys_4;
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalExceptionKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___InternalExceptionKeys_5;

public:
	inline static int32_t get_offset_of_InternalReturnKeys_4() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields, ___InternalReturnKeys_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_InternalReturnKeys_4() const { return ___InternalReturnKeys_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_InternalReturnKeys_4() { return &___InternalReturnKeys_4; }
	inline void set_InternalReturnKeys_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___InternalReturnKeys_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalReturnKeys_4), (void*)value);
	}

	inline static int32_t get_offset_of_InternalExceptionKeys_5() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields, ___InternalExceptionKeys_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_InternalExceptionKeys_5() const { return ___InternalExceptionKeys_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_InternalExceptionKeys_5() { return &___InternalExceptionKeys_5; }
	inline void set_InternalExceptionKeys_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___InternalExceptionKeys_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalExceptionKeys_5), (void*)value);
	}
};


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};

// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Matrix4x4>
struct NOVTABLE IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB1385E16B3DF2EBB57B6A2953C5ACFFB0F57E766(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 * comReturnValue) = 0;
};

// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t797E3D527B4C4C6BB4763CF5A73DDF6FA0911019  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_t3BBD6B5E33E10571615F36F94E515C547CE179BF * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t797E3D527B4C4C6BB4763CF5A73DDF6FA0911019, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t797E3D527B4C4C6BB4763CF5A73DDF6FA0911019, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t797E3D527B4C4C6BB4763CF5A73DDF6FA0911019, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_t3BBD6B5E33E10571615F36F94E515C547CE179BF * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_t3BBD6B5E33E10571615F36F94E515C547CE179BF ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_t3BBD6B5E33E10571615F36F94E515C547CE179BF * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t797E3D527B4C4C6BB4763CF5A73DDF6FA0911019, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_typeName_5() { return static_cast<int32_t>(offsetof(BaseService_t797E3D527B4C4C6BB4763CF5A73DDF6FA0911019, ___typeName_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_typeName_5() const { return ___typeName_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_typeName_5() { return &___typeName_5; }
	inline void set_typeName_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___typeName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_5), (void*)value);
	}

	inline static int32_t get_offset_of_isEnabled_9() { return static_cast<int32_t>(offsetof(BaseService_t797E3D527B4C4C6BB4763CF5A73DDF6FA0911019, ___isEnabled_9)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_9() const { return ___isEnabled_9; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_9() { return &___isEnabled_9; }
	inline void set_isEnabled_9(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_9 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_10() { return static_cast<int32_t>(offsetof(BaseService_t797E3D527B4C4C6BB4763CF5A73DDF6FA0911019, ___isMarkedDestroyed_10)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_10() const { return ___isMarkedDestroyed_10; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_10() { return &___isMarkedDestroyed_10; }
	inline void set_isMarkedDestroyed_10(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_10 = value;
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(BaseService_t797E3D527B4C4C6BB4763CF5A73DDF6FA0911019, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType
struct DisplayType_tE852BE74E2CFC8F5655F020A377CE3EF9E02DF91 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayType_tE852BE74E2CFC8F5655F020A377CE3EF9E02DF91, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

// Windows.Media.Capture.IMediaCapture
struct NOVTABLE IMediaCapture_tFE423BDE30996E472973B721D6F12E0BC872B959 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped0_InitializeAsync_mC08D681A3E76F2D2938E224C8213E9A514311B2A() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_InitializeAsync_m6E2047DC64C91C7B34E5F1E645D0567BF778E2BF(IMediaCaptureInitializationSettings_t501DB7A0A496BBF20773B34CBC47D019BA5CE5D1* ___mediaCaptureInitializationSettings0, IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped1_StartRecordToStorageFileAsync_mFE4EDF09039CD9AB0A2C8E86769B3E1B35408E4C() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped2_StartRecordToStreamAsync_m51A260884C8D2535B78E216F91FB9310EB5209BB() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_StartRecordToCustomSinkAsync_m48C4667A736966CDCA72D3A26544E0C62BAB4E05(IMediaEncodingProfile_tFECE1CAE17D88B66C77E64CDC60035422FC42F6D* ___encodingProfile0, IMediaExtension_t4686DA4E9199F25B22E97EF5810B76441CEF9B27* ___customMediaSink1, IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped3_StartRecordToCustomSinkAsync_m633592BBE953B6B3927351A8A1FFE74BB640BABA() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_StopRecordAsync_mD269ECD7C93675D8106B933FBFA6F1D7100BE6D5(IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped4_CapturePhotoToStorageFileAsync_mD236F83AA14523E92800AB196912D33F838F1347() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped5_CapturePhotoToStreamAsync_m5CE8326B45FE63BBD42707D981C1CE3C58E81488() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped6_AddEffectAsync_mD22D089E0E85B755249AFDF4A1E0FB02AA4D2869() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped7_ClearEffectsAsync_m38ECAE1DADA850D741EB59A25666EAFD61D15EC1() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped8_SetEncoderProperty_mE8D45FBF4F22290C83212C2CA0ED24122363A244() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped9_GetEncoderProperty_m9C280DEC5A7BD7BE9DA83024206BC05695AFD47B() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_add_Failed_m7B81BA6CA79F204D4625270717252218F62D3E23(IMediaCaptureFailedEventHandler_t67F2EC5DBFC6ECD77A4883D5E7993B66179078BF_ComCallableWrapper* ___errorEventHandler0, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_remove_Failed_m58BC410F164BEF5610813483C736B79F68F977D1(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___eventCookie0) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped10_add_RecordLimitationExceeded_m4C2E809C80FFEAF172F44EA363473638BB13A147() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped11_remove_RecordLimitationExceeded_mC788AB49FA09E9AA3901879ED1CD7FF6B5C089F2() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped12_get_MediaCaptureSettings_mDC389D007FB863335E281BBBC3BB255BCA22DD04() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped13_get_AudioDeviceController_m432C6E7C9AECF29A5D66E2B0FC54DACE4EC7B6FD() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_get_VideoDeviceController_mBCAE752F9919E06FEB3831ADEE6D7D23400B0BE4(IVideoDeviceController_t771157CFEA1B2FDBE84F8303D76DB359BBFAC97F** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped14_SetPreviewMirroring_mF18988E2FD23BAEDA8A039E99C5D9EE0D5089590() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped15_GetPreviewMirroring_m8823009D567F7A800840D119639B6709BA4C897E() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped16_SetPreviewRotation_m6BC29AF49B8ADA1897C7570CCE91739BB1E795C9() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped17_GetPreviewRotation_m120F40E6AB94A8D68A783726C0FE4FEBE35B7CFC() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped18_SetRecordRotation_m85D73A6FAE3DA0052238EE8AA65DC89693835AE3() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped19_GetRecordRotation_mC696F7066FD24E3B2E190F2CE98559E4D2E6D6C5() = 0;
};

// Windows.Media.Capture.MediaStreamType
struct MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184 
{
public:
	// System.Int32 Windows.Media.Capture.MediaStreamType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_14)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};

// Windows.Foundation.IReference`1<Windows.Media.Capture.MediaStreamType>
struct NOVTABLE IReference_1_t104643937D38C88C645B55BFDFD57B66426E93F1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1252900F9D67B67AD1C5F10EBE51EA2FEF474F5D(int32_t* comReturnValue) = 0;
};

// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_t9CADAB976856ED2B5AA9DFC8029D508D3B4BC12C  : public BaseService_t797E3D527B4C4C6BB4763CF5A73DDF6FA0911019
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_13;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_14;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_t895AE82A37CFF636DC7D13D126A7E414B2E27E19 * ___postponedActions_15;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t71F8F8ACD8735BC8A8C729DF30E0227104FDE94B * ___postponedObjectActions_16;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_tED77E13BE2DC03A1566A48FDFFAFB5DD41605E70 * ___U3CEventHandlersByTypeU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___U3CEventListenersU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_13() { return static_cast<int32_t>(offsetof(BaseEventSystem_t9CADAB976856ED2B5AA9DFC8029D508D3B4BC12C, ___eventExecutionDepth_13)); }
	inline int32_t get_eventExecutionDepth_13() const { return ___eventExecutionDepth_13; }
	inline int32_t* get_address_of_eventExecutionDepth_13() { return &___eventExecutionDepth_13; }
	inline void set_eventExecutionDepth_13(int32_t value)
	{
		___eventExecutionDepth_13 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_14() { return static_cast<int32_t>(offsetof(BaseEventSystem_t9CADAB976856ED2B5AA9DFC8029D508D3B4BC12C, ___eventSystemHandlerType_14)); }
	inline Type_t * get_eventSystemHandlerType_14() const { return ___eventSystemHandlerType_14; }
	inline Type_t ** get_address_of_eventSystemHandlerType_14() { return &___eventSystemHandlerType_14; }
	inline void set_eventSystemHandlerType_14(Type_t * value)
	{
		___eventSystemHandlerType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_14), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_15() { return static_cast<int32_t>(offsetof(BaseEventSystem_t9CADAB976856ED2B5AA9DFC8029D508D3B4BC12C, ___postponedActions_15)); }
	inline List_1_t895AE82A37CFF636DC7D13D126A7E414B2E27E19 * get_postponedActions_15() const { return ___postponedActions_15; }
	inline List_1_t895AE82A37CFF636DC7D13D126A7E414B2E27E19 ** get_address_of_postponedActions_15() { return &___postponedActions_15; }
	inline void set_postponedActions_15(List_1_t895AE82A37CFF636DC7D13D126A7E414B2E27E19 * value)
	{
		___postponedActions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_15), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_16() { return static_cast<int32_t>(offsetof(BaseEventSystem_t9CADAB976856ED2B5AA9DFC8029D508D3B4BC12C, ___postponedObjectActions_16)); }
	inline List_1_t71F8F8ACD8735BC8A8C729DF30E0227104FDE94B * get_postponedObjectActions_16() const { return ___postponedObjectActions_16; }
	inline List_1_t71F8F8ACD8735BC8A8C729DF30E0227104FDE94B ** get_address_of_postponedObjectActions_16() { return &___postponedObjectActions_16; }
	inline void set_postponedObjectActions_16(List_1_t71F8F8ACD8735BC8A8C729DF30E0227104FDE94B * value)
	{
		___postponedObjectActions_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseEventSystem_t9CADAB976856ED2B5AA9DFC8029D508D3B4BC12C, ___U3CEventHandlersByTypeU3Ek__BackingField_17)); }
	inline Dictionary_2_tED77E13BE2DC03A1566A48FDFFAFB5DD41605E70 * get_U3CEventHandlersByTypeU3Ek__BackingField_17() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline Dictionary_2_tED77E13BE2DC03A1566A48FDFFAFB5DD41605E70 ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return &___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_17(Dictionary_2_tED77E13BE2DC03A1566A48FDFFAFB5DD41605E70 * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseEventSystem_t9CADAB976856ED2B5AA9DFC8029D508D3B4BC12C, ___U3CEventListenersU3Ek__BackingField_18)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_U3CEventListenersU3Ek__BackingField_18() const { return ___U3CEventListenersU3Ek__BackingField_18; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_U3CEventListenersU3Ek__BackingField_18() { return &___U3CEventListenersU3Ek__BackingField_18; }
	inline void set_U3CEventListenersU3Ek__BackingField_18(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___U3CEventListenersU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_18), (void*)value);
	}
};

struct BaseEventSystem_t9CADAB976856ED2B5AA9DFC8029D508D3B4BC12C_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TraverseEventSystemHandlerHierarchyPerfMarker_19;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_t9CADAB976856ED2B5AA9DFC8029D508D3B4BC12C_StaticFields, ___enableDanglingHandlerDiagnostics_12)); }
	inline bool get_enableDanglingHandlerDiagnostics_12() const { return ___enableDanglingHandlerDiagnostics_12; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_12() { return &___enableDanglingHandlerDiagnostics_12; }
	inline void set_enableDanglingHandlerDiagnostics_12(bool value)
	{
		___enableDanglingHandlerDiagnostics_12 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return static_cast<int32_t>(offsetof(BaseEventSystem_t9CADAB976856ED2B5AA9DFC8029D508D3B4BC12C_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TraverseEventSystemHandlerHierarchyPerfMarker_19() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_19 = value;
	}
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tA471E102F69DA19F7E4AC51D6AA0CDA768383131  : public BaseEventSystem_t9CADAB976856ED2B5AA9DFC8029D508D3B4BC12C
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseCoreSystem_tA471E102F69DA19F7E4AC51D6AA0CDA768383131, ___U3CRegistrarU3Ek__BackingField_20)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_20() const { return ___U3CRegistrarU3Ek__BackingField_20; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_20() { return &___U3CRegistrarU3Ek__BackingField_20; }
	inline void set_U3CRegistrarU3Ek__BackingField_20(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_20), (void*)value);
	}
};


// Windows.Media.Capture.MediaCaptureFailedEventHandler
struct MediaCaptureFailedEventHandler_t67F2EC5DBFC6ECD77A4883D5E7993B66179078BF  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Media.Capture.MediaCaptureFailedEventHandler
struct IMediaCaptureFailedEventHandler_t67F2EC5DBFC6ECD77A4883D5E7993B66179078BF_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IMediaCapture_tFE423BDE30996E472973B721D6F12E0BC872B959* ___sender0, IMediaCaptureFailedEventArgs_t7DF1155C49DD8AEA9E834484125B15B6EC716286* ___errorEventArgs1) = 0;
};


// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_t40920E2DAB85A413AF81F1B07C781C783C7FDE09  : public BaseCoreSystem_tA471E102F69DA19F7E4AC51D6AA0CDA768383131
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::dataProviders
	List_1_t930E02365E322341542134C91223F4E92BD68A6D * ___dataProviders_21;

public:
	inline static int32_t get_offset_of_dataProviders_21() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t40920E2DAB85A413AF81F1B07C781C783C7FDE09, ___dataProviders_21)); }
	inline List_1_t930E02365E322341542134C91223F4E92BD68A6D * get_dataProviders_21() const { return ___dataProviders_21; }
	inline List_1_t930E02365E322341542134C91223F4E92BD68A6D ** get_address_of_dataProviders_21() { return &___dataProviders_21; }
	inline void set_dataProviders_21(List_1_t930E02365E322341542134C91223F4E92BD68A6D * value)
	{
		___dataProviders_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviders_21), (void*)value);
	}
};

struct BaseDataProviderAccessCoreSystem_t40920E2DAB85A413AF81F1B07C781C783C7FDE09_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::LateUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdatePerfMarker_23;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_22() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t40920E2DAB85A413AF81F1B07C781C783C7FDE09_StaticFields, ___UpdatePerfMarker_22)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_22() const { return ___UpdatePerfMarker_22; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_22() { return &___UpdatePerfMarker_22; }
	inline void set_UpdatePerfMarker_22(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_23() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t40920E2DAB85A413AF81F1B07C781C783C7FDE09_StaticFields, ___LateUpdatePerfMarker_23)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdatePerfMarker_23() const { return ___LateUpdatePerfMarker_23; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdatePerfMarker_23() { return &___LateUpdatePerfMarker_23; }
	inline void set_LateUpdatePerfMarker_23(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdatePerfMarker_23 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910  : public BaseCoreSystem_tA471E102F69DA19F7E4AC51D6AA0CDA768383131
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_21;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticVisualizationParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___diagnosticVisualizationParent_22;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::visualProfiler
	MixedRealityToolkitVisualProfiler_t95A9862102467177D8607B3B9AE653C1A049FE5A * ___visualProfiler_23;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticsSystemProfile
	MixedRealityDiagnosticsProfile_tD8A7DA52B58345E748889AF25FDE482C71BD9B4B * ___diagnosticsSystemProfile_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showDiagnostics
	bool ___showDiagnostics_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfiler
	bool ___showProfiler_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showFrameInfo
	bool ___showFrameInfo_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showMemoryStats
	bool ___showMemoryStats_28;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::frameSampleRate
	float ___frameSampleRate_29;
	// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::eventData
	DiagnosticsEventData_tE6F43B8A85611BB3CA342437448140F67F45A6F7 * ___eventData_30;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowAnchor
	int32_t ___windowAnchor_33;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___windowOffset_34;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowScale
	float ___windowScale_35;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowFollowSpeed
	float ___windowFollowSpeed_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfilerDuringMRC
	bool ___showProfilerDuringMRC_37;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910, ___U3CNameU3Ek__BackingField_21)); }
	inline String_t* get_U3CNameU3Ek__BackingField_21() const { return ___U3CNameU3Ek__BackingField_21; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_21() { return &___U3CNameU3Ek__BackingField_21; }
	inline void set_U3CNameU3Ek__BackingField_21(String_t* value)
	{
		___U3CNameU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticVisualizationParent_22() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910, ___diagnosticVisualizationParent_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_diagnosticVisualizationParent_22() const { return ___diagnosticVisualizationParent_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_diagnosticVisualizationParent_22() { return &___diagnosticVisualizationParent_22; }
	inline void set_diagnosticVisualizationParent_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___diagnosticVisualizationParent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticVisualizationParent_22), (void*)value);
	}

	inline static int32_t get_offset_of_visualProfiler_23() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910, ___visualProfiler_23)); }
	inline MixedRealityToolkitVisualProfiler_t95A9862102467177D8607B3B9AE653C1A049FE5A * get_visualProfiler_23() const { return ___visualProfiler_23; }
	inline MixedRealityToolkitVisualProfiler_t95A9862102467177D8607B3B9AE653C1A049FE5A ** get_address_of_visualProfiler_23() { return &___visualProfiler_23; }
	inline void set_visualProfiler_23(MixedRealityToolkitVisualProfiler_t95A9862102467177D8607B3B9AE653C1A049FE5A * value)
	{
		___visualProfiler_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visualProfiler_23), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticsSystemProfile_24() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910, ___diagnosticsSystemProfile_24)); }
	inline MixedRealityDiagnosticsProfile_tD8A7DA52B58345E748889AF25FDE482C71BD9B4B * get_diagnosticsSystemProfile_24() const { return ___diagnosticsSystemProfile_24; }
	inline MixedRealityDiagnosticsProfile_tD8A7DA52B58345E748889AF25FDE482C71BD9B4B ** get_address_of_diagnosticsSystemProfile_24() { return &___diagnosticsSystemProfile_24; }
	inline void set_diagnosticsSystemProfile_24(MixedRealityDiagnosticsProfile_tD8A7DA52B58345E748889AF25FDE482C71BD9B4B * value)
	{
		___diagnosticsSystemProfile_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticsSystemProfile_24), (void*)value);
	}

	inline static int32_t get_offset_of_showDiagnostics_25() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910, ___showDiagnostics_25)); }
	inline bool get_showDiagnostics_25() const { return ___showDiagnostics_25; }
	inline bool* get_address_of_showDiagnostics_25() { return &___showDiagnostics_25; }
	inline void set_showDiagnostics_25(bool value)
	{
		___showDiagnostics_25 = value;
	}

	inline static int32_t get_offset_of_showProfiler_26() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910, ___showProfiler_26)); }
	inline bool get_showProfiler_26() const { return ___showProfiler_26; }
	inline bool* get_address_of_showProfiler_26() { return &___showProfiler_26; }
	inline void set_showProfiler_26(bool value)
	{
		___showProfiler_26 = value;
	}

	inline static int32_t get_offset_of_showFrameInfo_27() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910, ___showFrameInfo_27)); }
	inline bool get_showFrameInfo_27() const { return ___showFrameInfo_27; }
	inline bool* get_address_of_showFrameInfo_27() { return &___showFrameInfo_27; }
	inline void set_showFrameInfo_27(bool value)
	{
		___showFrameInfo_27 = value;
	}

	inline static int32_t get_offset_of_showMemoryStats_28() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910, ___showMemoryStats_28)); }
	inline bool get_showMemoryStats_28() const { return ___showMemoryStats_28; }
	inline bool* get_address_of_showMemoryStats_28() { return &___showMemoryStats_28; }
	inline void set_showMemoryStats_28(bool value)
	{
		___showMemoryStats_28 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_29() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910, ___frameSampleRate_29)); }
	inline float get_frameSampleRate_29() const { return ___frameSampleRate_29; }
	inline float* get_address_of_frameSampleRate_29() { return &___frameSampleRate_29; }
	inline void set_frameSampleRate_29(float value)
	{
		___frameSampleRate_29 = value;
	}

	inline static int32_t get_offset_of_eventData_30() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910, ___eventData_30)); }
	inline DiagnosticsEventData_tE6F43B8A85611BB3CA342437448140F67F45A6F7 * get_eventData_30() const { return ___eventData_30; }
	inline DiagnosticsEventData_tE6F43B8A85611BB3CA342437448140F67F45A6F7 ** get_address_of_eventData_30() { return &___eventData_30; }
	inline void set_eventData_30(DiagnosticsEventData_tE6F43B8A85611BB3CA342437448140F67F45A6F7 * value)
	{
		___eventData_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_30), (void*)value);
	}

	inline static int32_t get_offset_of_windowAnchor_33() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910, ___windowAnchor_33)); }
	inline int32_t get_windowAnchor_33() const { return ___windowAnchor_33; }
	inline int32_t* get_address_of_windowAnchor_33() { return &___windowAnchor_33; }
	inline void set_windowAnchor_33(int32_t value)
	{
		___windowAnchor_33 = value;
	}

	inline static int32_t get_offset_of_windowOffset_34() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910, ___windowOffset_34)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_windowOffset_34() const { return ___windowOffset_34; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_windowOffset_34() { return &___windowOffset_34; }
	inline void set_windowOffset_34(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___windowOffset_34 = value;
	}

	inline static int32_t get_offset_of_windowScale_35() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910, ___windowScale_35)); }
	inline float get_windowScale_35() const { return ___windowScale_35; }
	inline float* get_address_of_windowScale_35() { return &___windowScale_35; }
	inline void set_windowScale_35(float value)
	{
		___windowScale_35 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_36() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910, ___windowFollowSpeed_36)); }
	inline float get_windowFollowSpeed_36() const { return ___windowFollowSpeed_36; }
	inline float* get_address_of_windowFollowSpeed_36() { return &___windowFollowSpeed_36; }
	inline void set_windowFollowSpeed_36(float value)
	{
		___windowFollowSpeed_36 = value;
	}

	inline static int32_t get_offset_of_showProfilerDuringMRC_37() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910, ___showProfilerDuringMRC_37)); }
	inline bool get_showProfilerDuringMRC_37() const { return ___showProfilerDuringMRC_37; }
	inline bool* get_address_of_showProfilerDuringMRC_37() { return &___showProfilerDuringMRC_37; }
	inline void set_showProfilerDuringMRC_37(bool value)
	{
		___showProfilerDuringMRC_37 = value;
	}
};

struct MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnDiagnosticsChangedPerfMarker_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler> Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChanged
	EventFunction_1_t12E7658C5544026D856A46440A173242F96EC44C * ___OnDiagnosticsChanged_32;

public:
	inline static int32_t get_offset_of_OnDiagnosticsChangedPerfMarker_31() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910_StaticFields, ___OnDiagnosticsChangedPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnDiagnosticsChangedPerfMarker_31() const { return ___OnDiagnosticsChangedPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnDiagnosticsChangedPerfMarker_31() { return &___OnDiagnosticsChangedPerfMarker_31; }
	inline void set_OnDiagnosticsChangedPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnDiagnosticsChangedPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_OnDiagnosticsChanged_32() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910_StaticFields, ___OnDiagnosticsChanged_32)); }
	inline EventFunction_1_t12E7658C5544026D856A46440A173242F96EC44C * get_OnDiagnosticsChanged_32() const { return ___OnDiagnosticsChanged_32; }
	inline EventFunction_1_t12E7658C5544026D856A46440A173242F96EC44C ** get_address_of_OnDiagnosticsChanged_32() { return &___OnDiagnosticsChanged_32; }
	inline void set_OnDiagnosticsChanged_32(EventFunction_1_t12E7658C5544026D856A46440A173242F96EC44C * value)
	{
		___OnDiagnosticsChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDiagnosticsChanged_32), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem
struct MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958  : public BaseCoreSystem_tA471E102F69DA19F7E4AC51D6AA0CDA768383131
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::managerSceneOpInProgress
	bool ___managerSceneOpInProgress_22;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::managerSceneOpProgress
	float ___managerSceneOpProgress_23;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::contentTracker
	SceneContentTracker_tC8136F19D247D7A7732F5C4EEF541C3FB9C98ED3 * ___contentTracker_24;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::lightingExecutor
	SceneLightingExecutor_t23DA964728B10C2FA663636EC353F1856A2C9B83 * ___lightingExecutor_25;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_26;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillLoadContent>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnWillLoadContentU3Ek__BackingField_27;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnContentLoaded>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnContentLoadedU3Ek__BackingField_28;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillUnloadContent>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnWillUnloadContentU3Ek__BackingField_29;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnContentUnloaded>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnContentUnloadedU3Ek__BackingField_30;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillLoadLighting>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillLoadLightingU3Ek__BackingField_31;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnLightingLoaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnLightingLoadedU3Ek__BackingField_32;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillUnloadLighting>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillUnloadLightingU3Ek__BackingField_33;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnLightingUnloaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnLightingUnloadedU3Ek__BackingField_34;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillLoadScene>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillLoadSceneU3Ek__BackingField_35;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnSceneLoaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnSceneLoadedU3Ek__BackingField_36;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillUnloadScene>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillUnloadSceneU3Ek__BackingField_37;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnSceneUnloaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnSceneUnloadedU3Ek__BackingField_38;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SceneOperationInProgress>k__BackingField
	bool ___U3CSceneOperationInProgressU3Ek__BackingField_39;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SceneOperationProgress>k__BackingField
	float ___U3CSceneOperationProgressU3Ek__BackingField_40;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<LightingOperationInProgress>k__BackingField
	bool ___U3CLightingOperationInProgressU3Ek__BackingField_41;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<LightingOperationProgress>k__BackingField
	float ___U3CLightingOperationProgressU3Ek__BackingField_42;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<ActiveLightingScene>k__BackingField
	String_t* ___U3CActiveLightingSceneU3Ek__BackingField_43;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<WaitingToProceed>k__BackingField
	bool ___U3CWaitingToProceedU3Ek__BackingField_44;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_45;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_46;

public:
	inline static int32_t get_offset_of_managerSceneOpInProgress_22() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___managerSceneOpInProgress_22)); }
	inline bool get_managerSceneOpInProgress_22() const { return ___managerSceneOpInProgress_22; }
	inline bool* get_address_of_managerSceneOpInProgress_22() { return &___managerSceneOpInProgress_22; }
	inline void set_managerSceneOpInProgress_22(bool value)
	{
		___managerSceneOpInProgress_22 = value;
	}

	inline static int32_t get_offset_of_managerSceneOpProgress_23() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___managerSceneOpProgress_23)); }
	inline float get_managerSceneOpProgress_23() const { return ___managerSceneOpProgress_23; }
	inline float* get_address_of_managerSceneOpProgress_23() { return &___managerSceneOpProgress_23; }
	inline void set_managerSceneOpProgress_23(float value)
	{
		___managerSceneOpProgress_23 = value;
	}

	inline static int32_t get_offset_of_contentTracker_24() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___contentTracker_24)); }
	inline SceneContentTracker_tC8136F19D247D7A7732F5C4EEF541C3FB9C98ED3 * get_contentTracker_24() const { return ___contentTracker_24; }
	inline SceneContentTracker_tC8136F19D247D7A7732F5C4EEF541C3FB9C98ED3 ** get_address_of_contentTracker_24() { return &___contentTracker_24; }
	inline void set_contentTracker_24(SceneContentTracker_tC8136F19D247D7A7732F5C4EEF541C3FB9C98ED3 * value)
	{
		___contentTracker_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contentTracker_24), (void*)value);
	}

	inline static int32_t get_offset_of_lightingExecutor_25() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___lightingExecutor_25)); }
	inline SceneLightingExecutor_t23DA964728B10C2FA663636EC353F1856A2C9B83 * get_lightingExecutor_25() const { return ___lightingExecutor_25; }
	inline SceneLightingExecutor_t23DA964728B10C2FA663636EC353F1856A2C9B83 ** get_address_of_lightingExecutor_25() { return &___lightingExecutor_25; }
	inline void set_lightingExecutor_25(SceneLightingExecutor_t23DA964728B10C2FA663636EC353F1856A2C9B83 * value)
	{
		___lightingExecutor_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightingExecutor_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3CNameU3Ek__BackingField_26)); }
	inline String_t* get_U3CNameU3Ek__BackingField_26() const { return ___U3CNameU3Ek__BackingField_26; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_26() { return &___U3CNameU3Ek__BackingField_26; }
	inline void set_U3CNameU3Ek__BackingField_26(String_t* value)
	{
		___U3CNameU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillLoadContentU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3COnWillLoadContentU3Ek__BackingField_27)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnWillLoadContentU3Ek__BackingField_27() const { return ___U3COnWillLoadContentU3Ek__BackingField_27; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnWillLoadContentU3Ek__BackingField_27() { return &___U3COnWillLoadContentU3Ek__BackingField_27; }
	inline void set_U3COnWillLoadContentU3Ek__BackingField_27(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnWillLoadContentU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillLoadContentU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnContentLoadedU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3COnContentLoadedU3Ek__BackingField_28)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnContentLoadedU3Ek__BackingField_28() const { return ___U3COnContentLoadedU3Ek__BackingField_28; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnContentLoadedU3Ek__BackingField_28() { return &___U3COnContentLoadedU3Ek__BackingField_28; }
	inline void set_U3COnContentLoadedU3Ek__BackingField_28(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnContentLoadedU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnContentLoadedU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillUnloadContentU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3COnWillUnloadContentU3Ek__BackingField_29)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnWillUnloadContentU3Ek__BackingField_29() const { return ___U3COnWillUnloadContentU3Ek__BackingField_29; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnWillUnloadContentU3Ek__BackingField_29() { return &___U3COnWillUnloadContentU3Ek__BackingField_29; }
	inline void set_U3COnWillUnloadContentU3Ek__BackingField_29(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnWillUnloadContentU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillUnloadContentU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnContentUnloadedU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3COnContentUnloadedU3Ek__BackingField_30)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnContentUnloadedU3Ek__BackingField_30() const { return ___U3COnContentUnloadedU3Ek__BackingField_30; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnContentUnloadedU3Ek__BackingField_30() { return &___U3COnContentUnloadedU3Ek__BackingField_30; }
	inline void set_U3COnContentUnloadedU3Ek__BackingField_30(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnContentUnloadedU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnContentUnloadedU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillLoadLightingU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3COnWillLoadLightingU3Ek__BackingField_31)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillLoadLightingU3Ek__BackingField_31() const { return ___U3COnWillLoadLightingU3Ek__BackingField_31; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillLoadLightingU3Ek__BackingField_31() { return &___U3COnWillLoadLightingU3Ek__BackingField_31; }
	inline void set_U3COnWillLoadLightingU3Ek__BackingField_31(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillLoadLightingU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillLoadLightingU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnLightingLoadedU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3COnLightingLoadedU3Ek__BackingField_32)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnLightingLoadedU3Ek__BackingField_32() const { return ___U3COnLightingLoadedU3Ek__BackingField_32; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnLightingLoadedU3Ek__BackingField_32() { return &___U3COnLightingLoadedU3Ek__BackingField_32; }
	inline void set_U3COnLightingLoadedU3Ek__BackingField_32(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnLightingLoadedU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnLightingLoadedU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillUnloadLightingU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3COnWillUnloadLightingU3Ek__BackingField_33)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillUnloadLightingU3Ek__BackingField_33() const { return ___U3COnWillUnloadLightingU3Ek__BackingField_33; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillUnloadLightingU3Ek__BackingField_33() { return &___U3COnWillUnloadLightingU3Ek__BackingField_33; }
	inline void set_U3COnWillUnloadLightingU3Ek__BackingField_33(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillUnloadLightingU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillUnloadLightingU3Ek__BackingField_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnLightingUnloadedU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3COnLightingUnloadedU3Ek__BackingField_34)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnLightingUnloadedU3Ek__BackingField_34() const { return ___U3COnLightingUnloadedU3Ek__BackingField_34; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnLightingUnloadedU3Ek__BackingField_34() { return &___U3COnLightingUnloadedU3Ek__BackingField_34; }
	inline void set_U3COnLightingUnloadedU3Ek__BackingField_34(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnLightingUnloadedU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnLightingUnloadedU3Ek__BackingField_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillLoadSceneU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3COnWillLoadSceneU3Ek__BackingField_35)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillLoadSceneU3Ek__BackingField_35() const { return ___U3COnWillLoadSceneU3Ek__BackingField_35; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillLoadSceneU3Ek__BackingField_35() { return &___U3COnWillLoadSceneU3Ek__BackingField_35; }
	inline void set_U3COnWillLoadSceneU3Ek__BackingField_35(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillLoadSceneU3Ek__BackingField_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillLoadSceneU3Ek__BackingField_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnSceneLoadedU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3COnSceneLoadedU3Ek__BackingField_36)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnSceneLoadedU3Ek__BackingField_36() const { return ___U3COnSceneLoadedU3Ek__BackingField_36; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnSceneLoadedU3Ek__BackingField_36() { return &___U3COnSceneLoadedU3Ek__BackingField_36; }
	inline void set_U3COnSceneLoadedU3Ek__BackingField_36(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnSceneLoadedU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnSceneLoadedU3Ek__BackingField_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillUnloadSceneU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3COnWillUnloadSceneU3Ek__BackingField_37)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillUnloadSceneU3Ek__BackingField_37() const { return ___U3COnWillUnloadSceneU3Ek__BackingField_37; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillUnloadSceneU3Ek__BackingField_37() { return &___U3COnWillUnloadSceneU3Ek__BackingField_37; }
	inline void set_U3COnWillUnloadSceneU3Ek__BackingField_37(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillUnloadSceneU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillUnloadSceneU3Ek__BackingField_37), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnSceneUnloadedU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3COnSceneUnloadedU3Ek__BackingField_38)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnSceneUnloadedU3Ek__BackingField_38() const { return ___U3COnSceneUnloadedU3Ek__BackingField_38; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnSceneUnloadedU3Ek__BackingField_38() { return &___U3COnSceneUnloadedU3Ek__BackingField_38; }
	inline void set_U3COnSceneUnloadedU3Ek__BackingField_38(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnSceneUnloadedU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnSceneUnloadedU3Ek__BackingField_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSceneOperationInProgressU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3CSceneOperationInProgressU3Ek__BackingField_39)); }
	inline bool get_U3CSceneOperationInProgressU3Ek__BackingField_39() const { return ___U3CSceneOperationInProgressU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CSceneOperationInProgressU3Ek__BackingField_39() { return &___U3CSceneOperationInProgressU3Ek__BackingField_39; }
	inline void set_U3CSceneOperationInProgressU3Ek__BackingField_39(bool value)
	{
		___U3CSceneOperationInProgressU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_U3CSceneOperationProgressU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3CSceneOperationProgressU3Ek__BackingField_40)); }
	inline float get_U3CSceneOperationProgressU3Ek__BackingField_40() const { return ___U3CSceneOperationProgressU3Ek__BackingField_40; }
	inline float* get_address_of_U3CSceneOperationProgressU3Ek__BackingField_40() { return &___U3CSceneOperationProgressU3Ek__BackingField_40; }
	inline void set_U3CSceneOperationProgressU3Ek__BackingField_40(float value)
	{
		___U3CSceneOperationProgressU3Ek__BackingField_40 = value;
	}

	inline static int32_t get_offset_of_U3CLightingOperationInProgressU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3CLightingOperationInProgressU3Ek__BackingField_41)); }
	inline bool get_U3CLightingOperationInProgressU3Ek__BackingField_41() const { return ___U3CLightingOperationInProgressU3Ek__BackingField_41; }
	inline bool* get_address_of_U3CLightingOperationInProgressU3Ek__BackingField_41() { return &___U3CLightingOperationInProgressU3Ek__BackingField_41; }
	inline void set_U3CLightingOperationInProgressU3Ek__BackingField_41(bool value)
	{
		___U3CLightingOperationInProgressU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CLightingOperationProgressU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3CLightingOperationProgressU3Ek__BackingField_42)); }
	inline float get_U3CLightingOperationProgressU3Ek__BackingField_42() const { return ___U3CLightingOperationProgressU3Ek__BackingField_42; }
	inline float* get_address_of_U3CLightingOperationProgressU3Ek__BackingField_42() { return &___U3CLightingOperationProgressU3Ek__BackingField_42; }
	inline void set_U3CLightingOperationProgressU3Ek__BackingField_42(float value)
	{
		___U3CLightingOperationProgressU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_U3CActiveLightingSceneU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3CActiveLightingSceneU3Ek__BackingField_43)); }
	inline String_t* get_U3CActiveLightingSceneU3Ek__BackingField_43() const { return ___U3CActiveLightingSceneU3Ek__BackingField_43; }
	inline String_t** get_address_of_U3CActiveLightingSceneU3Ek__BackingField_43() { return &___U3CActiveLightingSceneU3Ek__BackingField_43; }
	inline void set_U3CActiveLightingSceneU3Ek__BackingField_43(String_t* value)
	{
		___U3CActiveLightingSceneU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActiveLightingSceneU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWaitingToProceedU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3CWaitingToProceedU3Ek__BackingField_44)); }
	inline bool get_U3CWaitingToProceedU3Ek__BackingField_44() const { return ___U3CWaitingToProceedU3Ek__BackingField_44; }
	inline bool* get_address_of_U3CWaitingToProceedU3Ek__BackingField_44() { return &___U3CWaitingToProceedU3Ek__BackingField_44; }
	inline void set_U3CWaitingToProceedU3Ek__BackingField_44(bool value)
	{
		___U3CWaitingToProceedU3Ek__BackingField_44 = value;
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3CSourceIdU3Ek__BackingField_45)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_45() const { return ___U3CSourceIdU3Ek__BackingField_45; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_45() { return &___U3CSourceIdU3Ek__BackingField_45; }
	inline void set_U3CSourceIdU3Ek__BackingField_45(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_45 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958, ___U3CSourceNameU3Ek__BackingField_46)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_46() const { return ___U3CSourceNameU3Ek__BackingField_46; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_46() { return &___U3CSourceNameU3Ek__BackingField_46; }
	inline void set_U3CSourceNameU3Ek__BackingField_46(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_46), (void*)value);
	}
};

struct MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_47;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadNextContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadNextContentPerfMarker_48;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadPrevContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadPrevContentPerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadContentByTagPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadContentByTagPerfMarker_50;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadContentByTagPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnloadContentByTagPerfMarker_51;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadContentPerfMarker_52;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnloadContentPerfMarker_53;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::IsContentLoadedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___IsContentLoadedPerfMarker_54;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::SetLightingScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SetLightingScenePerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::SetManagerScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SetManagerScenePerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadScenesInternalPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadScenesInternalPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadScenesInternalPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnloadScenesInternalPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeLoadedActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeLoadedActionsPerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeWillLoadActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeWillLoadActionsPerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeWillUnloadActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeWillUnloadActionsPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeUnloadedActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeUnloadedActionsPerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::GetScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetScenePerfMarker_63;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::GetLoadedContentScenesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetLoadedContentScenesPerfMarker_64;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_47() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_StaticFields, ___UpdatePerfMarker_47)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_47() const { return ___UpdatePerfMarker_47; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_47() { return &___UpdatePerfMarker_47; }
	inline void set_UpdatePerfMarker_47(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_47 = value;
	}

	inline static int32_t get_offset_of_LoadNextContentPerfMarker_48() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_StaticFields, ___LoadNextContentPerfMarker_48)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadNextContentPerfMarker_48() const { return ___LoadNextContentPerfMarker_48; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadNextContentPerfMarker_48() { return &___LoadNextContentPerfMarker_48; }
	inline void set_LoadNextContentPerfMarker_48(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadNextContentPerfMarker_48 = value;
	}

	inline static int32_t get_offset_of_LoadPrevContentPerfMarker_49() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_StaticFields, ___LoadPrevContentPerfMarker_49)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadPrevContentPerfMarker_49() const { return ___LoadPrevContentPerfMarker_49; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadPrevContentPerfMarker_49() { return &___LoadPrevContentPerfMarker_49; }
	inline void set_LoadPrevContentPerfMarker_49(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadPrevContentPerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_LoadContentByTagPerfMarker_50() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_StaticFields, ___LoadContentByTagPerfMarker_50)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadContentByTagPerfMarker_50() const { return ___LoadContentByTagPerfMarker_50; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadContentByTagPerfMarker_50() { return &___LoadContentByTagPerfMarker_50; }
	inline void set_LoadContentByTagPerfMarker_50(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadContentByTagPerfMarker_50 = value;
	}

	inline static int32_t get_offset_of_UnloadContentByTagPerfMarker_51() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_StaticFields, ___UnloadContentByTagPerfMarker_51)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnloadContentByTagPerfMarker_51() const { return ___UnloadContentByTagPerfMarker_51; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnloadContentByTagPerfMarker_51() { return &___UnloadContentByTagPerfMarker_51; }
	inline void set_UnloadContentByTagPerfMarker_51(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnloadContentByTagPerfMarker_51 = value;
	}

	inline static int32_t get_offset_of_LoadContentPerfMarker_52() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_StaticFields, ___LoadContentPerfMarker_52)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadContentPerfMarker_52() const { return ___LoadContentPerfMarker_52; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadContentPerfMarker_52() { return &___LoadContentPerfMarker_52; }
	inline void set_LoadContentPerfMarker_52(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadContentPerfMarker_52 = value;
	}

	inline static int32_t get_offset_of_UnloadContentPerfMarker_53() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_StaticFields, ___UnloadContentPerfMarker_53)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnloadContentPerfMarker_53() const { return ___UnloadContentPerfMarker_53; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnloadContentPerfMarker_53() { return &___UnloadContentPerfMarker_53; }
	inline void set_UnloadContentPerfMarker_53(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnloadContentPerfMarker_53 = value;
	}

	inline static int32_t get_offset_of_IsContentLoadedPerfMarker_54() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_StaticFields, ___IsContentLoadedPerfMarker_54)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_IsContentLoadedPerfMarker_54() const { return ___IsContentLoadedPerfMarker_54; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_IsContentLoadedPerfMarker_54() { return &___IsContentLoadedPerfMarker_54; }
	inline void set_IsContentLoadedPerfMarker_54(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___IsContentLoadedPerfMarker_54 = value;
	}

	inline static int32_t get_offset_of_SetLightingScenePerfMarker_55() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_StaticFields, ___SetLightingScenePerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SetLightingScenePerfMarker_55() const { return ___SetLightingScenePerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SetLightingScenePerfMarker_55() { return &___SetLightingScenePerfMarker_55; }
	inline void set_SetLightingScenePerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SetLightingScenePerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_SetManagerScenePerfMarker_56() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_StaticFields, ___SetManagerScenePerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SetManagerScenePerfMarker_56() const { return ___SetManagerScenePerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SetManagerScenePerfMarker_56() { return &___SetManagerScenePerfMarker_56; }
	inline void set_SetManagerScenePerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SetManagerScenePerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_LoadScenesInternalPerfMarker_57() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_StaticFields, ___LoadScenesInternalPerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadScenesInternalPerfMarker_57() const { return ___LoadScenesInternalPerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadScenesInternalPerfMarker_57() { return &___LoadScenesInternalPerfMarker_57; }
	inline void set_LoadScenesInternalPerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadScenesInternalPerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_UnloadScenesInternalPerfMarker_58() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_StaticFields, ___UnloadScenesInternalPerfMarker_58)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnloadScenesInternalPerfMarker_58() const { return ___UnloadScenesInternalPerfMarker_58; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnloadScenesInternalPerfMarker_58() { return &___UnloadScenesInternalPerfMarker_58; }
	inline void set_UnloadScenesInternalPerfMarker_58(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnloadScenesInternalPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_InvokeLoadedActionsPerfMarker_59() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_StaticFields, ___InvokeLoadedActionsPerfMarker_59)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeLoadedActionsPerfMarker_59() const { return ___InvokeLoadedActionsPerfMarker_59; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeLoadedActionsPerfMarker_59() { return &___InvokeLoadedActionsPerfMarker_59; }
	inline void set_InvokeLoadedActionsPerfMarker_59(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeLoadedActionsPerfMarker_59 = value;
	}

	inline static int32_t get_offset_of_InvokeWillLoadActionsPerfMarker_60() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_StaticFields, ___InvokeWillLoadActionsPerfMarker_60)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeWillLoadActionsPerfMarker_60() const { return ___InvokeWillLoadActionsPerfMarker_60; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeWillLoadActionsPerfMarker_60() { return &___InvokeWillLoadActionsPerfMarker_60; }
	inline void set_InvokeWillLoadActionsPerfMarker_60(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeWillLoadActionsPerfMarker_60 = value;
	}

	inline static int32_t get_offset_of_InvokeWillUnloadActionsPerfMarker_61() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_StaticFields, ___InvokeWillUnloadActionsPerfMarker_61)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeWillUnloadActionsPerfMarker_61() const { return ___InvokeWillUnloadActionsPerfMarker_61; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeWillUnloadActionsPerfMarker_61() { return &___InvokeWillUnloadActionsPerfMarker_61; }
	inline void set_InvokeWillUnloadActionsPerfMarker_61(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeWillUnloadActionsPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_InvokeUnloadedActionsPerfMarker_62() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_StaticFields, ___InvokeUnloadedActionsPerfMarker_62)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeUnloadedActionsPerfMarker_62() const { return ___InvokeUnloadedActionsPerfMarker_62; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeUnloadedActionsPerfMarker_62() { return &___InvokeUnloadedActionsPerfMarker_62; }
	inline void set_InvokeUnloadedActionsPerfMarker_62(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeUnloadedActionsPerfMarker_62 = value;
	}

	inline static int32_t get_offset_of_GetScenePerfMarker_63() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_StaticFields, ___GetScenePerfMarker_63)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetScenePerfMarker_63() const { return ___GetScenePerfMarker_63; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetScenePerfMarker_63() { return &___GetScenePerfMarker_63; }
	inline void set_GetScenePerfMarker_63(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetScenePerfMarker_63 = value;
	}

	inline static int32_t get_offset_of_GetLoadedContentScenesPerfMarker_64() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_StaticFields, ___GetLoadedContentScenesPerfMarker_64)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetLoadedContentScenesPerfMarker_64() const { return ___GetLoadedContentScenesPerfMarker_64; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetLoadedContentScenesPerfMarker_64() { return &___GetLoadedContentScenesPerfMarker_64; }
	inline void set_GetLoadedContentScenesPerfMarker_64(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetLoadedContentScenesPerfMarker_64 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_tC0EAC5210C1662A605E03808DE42CBB873C5018D  : public BaseDataProviderAccessCoreSystem_t40920E2DAB85A413AF81F1B07C781C783C7FDE09
{
public:
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_24;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_25;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_26;
	// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::currentDisplayType
	int32_t ___currentDisplayType_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::cameraOpaqueLastFrame
	bool ___cameraOpaqueLastFrame_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::useFallbackBehavior
	bool ___useFallbackBehavior_29;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tC0EAC5210C1662A605E03808DE42CBB873C5018D, ___U3CNameU3Ek__BackingField_24)); }
	inline String_t* get_U3CNameU3Ek__BackingField_24() const { return ___U3CNameU3Ek__BackingField_24; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_24() { return &___U3CNameU3Ek__BackingField_24; }
	inline void set_U3CNameU3Ek__BackingField_24(String_t* value)
	{
		___U3CNameU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tC0EAC5210C1662A605E03808DE42CBB873C5018D, ___U3CSourceIdU3Ek__BackingField_25)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_25() const { return ___U3CSourceIdU3Ek__BackingField_25; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_25() { return &___U3CSourceIdU3Ek__BackingField_25; }
	inline void set_U3CSourceIdU3Ek__BackingField_25(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tC0EAC5210C1662A605E03808DE42CBB873C5018D, ___U3CSourceNameU3Ek__BackingField_26)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_26() const { return ___U3CSourceNameU3Ek__BackingField_26; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_26() { return &___U3CSourceNameU3Ek__BackingField_26; }
	inline void set_U3CSourceNameU3Ek__BackingField_26(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_currentDisplayType_27() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tC0EAC5210C1662A605E03808DE42CBB873C5018D, ___currentDisplayType_27)); }
	inline int32_t get_currentDisplayType_27() const { return ___currentDisplayType_27; }
	inline int32_t* get_address_of_currentDisplayType_27() { return &___currentDisplayType_27; }
	inline void set_currentDisplayType_27(int32_t value)
	{
		___currentDisplayType_27 = value;
	}

	inline static int32_t get_offset_of_cameraOpaqueLastFrame_28() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tC0EAC5210C1662A605E03808DE42CBB873C5018D, ___cameraOpaqueLastFrame_28)); }
	inline bool get_cameraOpaqueLastFrame_28() const { return ___cameraOpaqueLastFrame_28; }
	inline bool* get_address_of_cameraOpaqueLastFrame_28() { return &___cameraOpaqueLastFrame_28; }
	inline void set_cameraOpaqueLastFrame_28(bool value)
	{
		___cameraOpaqueLastFrame_28 = value;
	}

	inline static int32_t get_offset_of_useFallbackBehavior_29() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tC0EAC5210C1662A605E03808DE42CBB873C5018D, ___useFallbackBehavior_29)); }
	inline bool get_useFallbackBehavior_29() const { return ___useFallbackBehavior_29; }
	inline bool* get_address_of_useFallbackBehavior_29() { return &___useFallbackBehavior_29; }
	inline void set_useFallbackBehavior_29(bool value)
	{
		___useFallbackBehavior_29 = value;
	}
};

struct MixedRealityCameraSystem_tC0EAC5210C1662A605E03808DE42CBB873C5018D_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaquePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplySettingsForOpaquePerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplySettingsForTransparentPerfMarker_32;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_30() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tC0EAC5210C1662A605E03808DE42CBB873C5018D_StaticFields, ___UpdatePerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_30() const { return ___UpdatePerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_30() { return &___UpdatePerfMarker_30; }
	inline void set_UpdatePerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForOpaquePerfMarker_31() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tC0EAC5210C1662A605E03808DE42CBB873C5018D_StaticFields, ___ApplySettingsForOpaquePerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplySettingsForOpaquePerfMarker_31() const { return ___ApplySettingsForOpaquePerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplySettingsForOpaquePerfMarker_31() { return &___ApplySettingsForOpaquePerfMarker_31; }
	inline void set_ApplySettingsForOpaquePerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplySettingsForOpaquePerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForTransparentPerfMarker_32() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tC0EAC5210C1662A605E03808DE42CBB873C5018D_StaticFields, ___ApplySettingsForTransparentPerfMarker_32)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplySettingsForTransparentPerfMarker_32() const { return ___ApplySettingsForTransparentPerfMarker_32; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplySettingsForTransparentPerfMarker_32() { return &___ApplySettingsForTransparentPerfMarker_32; }
	inline void set_ApplySettingsForTransparentPerfMarker_32(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplySettingsForTransparentPerfMarker_32 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem
struct MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C  : public BaseDataProviderAccessCoreSystem_t40920E2DAB85A413AF81F1B07C781C783C7FDE09
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_25;
	// System.Action Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::InputEnabled
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputEnabled_26;
	// System.Action Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::InputDisabled
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputDisabled_27;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<DetectedInputSources>k__BackingField
	HashSet_1_t677147EFE2818B54470A3C7DE5D2E76898909703 * ___U3CDetectedInputSourcesU3Ek__BackingField_28;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<DetectedControllers>k__BackingField
	HashSet_1_tAA924F987C20991EA4FADB4E5BE2512CAE7CF8B3 * ___U3CDetectedControllersU3Ek__BackingField_29;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputSystemProfile
	MixedRealityInputSystemProfile_t4CA250E3F600824482F2D57467018D19A35A3931 * ___inputSystemProfile_30;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::focusProvider
	RuntimeObject* ___focusProvider_31;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityRaycastProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::raycastProvider
	RuntimeObject* ___raycastProvider_32;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<GazeProvider>k__BackingField
	RuntimeObject* ___U3CGazeProviderU3Ek__BackingField_33;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<EyeGazeProvider>k__BackingField
	RuntimeObject* ___U3CEyeGazeProviderU3Ek__BackingField_34;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::modalInputStack
	Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * ___modalInputStack_35;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::fallbackInputStack
	Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * ___fallbackInputStack_36;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::disabledRefCount
	int32_t ___disabledRefCount_37;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::isInputModuleAdded
	bool ___isInputModuleAdded_38;
	// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceStateEventData
	SourceStateEventData_tFBAFD0D1BDD92019A946CF2C4D7D4076A1DB34E7 * ___sourceStateEventData_39;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceTrackingEventData
	SourcePoseEventData_1_t7BD4A4A45CD8964D8BE07F796E2BD6FA1BC10102 * ___sourceTrackingEventData_40;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceVector2EventData
	SourcePoseEventData_1_tD6A29A780D21CB1D5B978C7EE6047A91715E070F * ___sourceVector2EventData_41;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourcePositionEventData
	SourcePoseEventData_1_tA02B5679D1791EEE3396DA686E0EC604FB456816 * ___sourcePositionEventData_42;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceRotationEventData
	SourcePoseEventData_1_t4CF714FDA8D8A2F30154DEFCA5DDFD50BF73C90D * ___sourceRotationEventData_43;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourcePoseEventData
	SourcePoseEventData_1_tD2E360537D508E781E6A4CB5C07F117A75BFA5CE * ___sourcePoseEventData_44;
	// Microsoft.MixedReality.Toolkit.Input.FocusEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::focusEventData
	FocusEventData_tBF30F5EA28073CC7C0662FDCE74967BB9A7CEE34 * ___focusEventData_45;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputEventData
	InputEventData_tA259F0AF4AE4D857E78B38AF9A3F28F9D0101DE6 * ___inputEventData_46;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::pointerEventData
	MixedRealityPointerEventData_t14C28C7E9710B6738A269692FF4CE275CC5A2070 * ___pointerEventData_47;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::floatInputEventData
	InputEventData_1_t858FD731EF453876756A19D55413472BF17D4680 * ___floatInputEventData_48;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::vector2InputEventData
	InputEventData_1_t6000E168DC13F7700BE82C48089DCB73AE5E4177 * ___vector2InputEventData_49;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::positionInputEventData
	InputEventData_1_tE8B8C9732420F20D517F8474A142DA1F8A4B79C8 * ___positionInputEventData_50;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::rotationInputEventData
	InputEventData_1_tE16B20C8271985A178B5DB29E5A34DFE05836673 * ___rotationInputEventData_51;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::poseInputEventData
	InputEventData_1_t0559119B71F540C1135C757ADC84980A51945FF5 * ___poseInputEventData_52;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::jointPoseInputEventData
	InputEventData_1_t95DB5DCBD9E6D8500526D03385BA8980D237639D * ___jointPoseInputEventData_53;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::handMeshInputEventData
	InputEventData_1_t0B059AD10918AFB11B9DB4D96BBFB18DCD2564BF * ___handMeshInputEventData_54;
	// Microsoft.MixedReality.Toolkit.Input.SpeechEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::speechEventData
	SpeechEventData_t00E84586BA3E9F9A4A7EC82F3BE2EC23CF2AFFA9 * ___speechEventData_55;
	// Microsoft.MixedReality.Toolkit.Input.DictationEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::dictationEventData
	DictationEventData_tDCEC89FE1BD351FCEAA5D6E206AE336C9E55D7BA * ___dictationEventData_56;
	// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::handTrackingInputEventData
	HandTrackingInputEventData_t3D6DB0D87F242EC41B0CB156BCD95E0C643221E2 * ___handTrackingInputEventData_57;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<CurrentInputActionRulesProfile>k__BackingField
	MixedRealityInputActionRulesProfile_t735D9F437D72A41A976B094A8B795C79251F4268 * ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_58;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputModuleChecked
	bool ___inputModuleChecked_59;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputModule
	MixedRealityInputModule_tF5FCE2C4E2569CEA3657164B90D036ADCEDDAE73 * ___inputModule_60;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___U3CNameU3Ek__BackingField_25)); }
	inline String_t* get_U3CNameU3Ek__BackingField_25() const { return ___U3CNameU3Ek__BackingField_25; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_25() { return &___U3CNameU3Ek__BackingField_25; }
	inline void set_U3CNameU3Ek__BackingField_25(String_t* value)
	{
		___U3CNameU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_InputEnabled_26() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___InputEnabled_26)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputEnabled_26() const { return ___InputEnabled_26; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputEnabled_26() { return &___InputEnabled_26; }
	inline void set_InputEnabled_26(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputEnabled_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputEnabled_26), (void*)value);
	}

	inline static int32_t get_offset_of_InputDisabled_27() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___InputDisabled_27)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputDisabled_27() const { return ___InputDisabled_27; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputDisabled_27() { return &___InputDisabled_27; }
	inline void set_InputDisabled_27(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputDisabled_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputDisabled_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDetectedInputSourcesU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___U3CDetectedInputSourcesU3Ek__BackingField_28)); }
	inline HashSet_1_t677147EFE2818B54470A3C7DE5D2E76898909703 * get_U3CDetectedInputSourcesU3Ek__BackingField_28() const { return ___U3CDetectedInputSourcesU3Ek__BackingField_28; }
	inline HashSet_1_t677147EFE2818B54470A3C7DE5D2E76898909703 ** get_address_of_U3CDetectedInputSourcesU3Ek__BackingField_28() { return &___U3CDetectedInputSourcesU3Ek__BackingField_28; }
	inline void set_U3CDetectedInputSourcesU3Ek__BackingField_28(HashSet_1_t677147EFE2818B54470A3C7DE5D2E76898909703 * value)
	{
		___U3CDetectedInputSourcesU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDetectedInputSourcesU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDetectedControllersU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___U3CDetectedControllersU3Ek__BackingField_29)); }
	inline HashSet_1_tAA924F987C20991EA4FADB4E5BE2512CAE7CF8B3 * get_U3CDetectedControllersU3Ek__BackingField_29() const { return ___U3CDetectedControllersU3Ek__BackingField_29; }
	inline HashSet_1_tAA924F987C20991EA4FADB4E5BE2512CAE7CF8B3 ** get_address_of_U3CDetectedControllersU3Ek__BackingField_29() { return &___U3CDetectedControllersU3Ek__BackingField_29; }
	inline void set_U3CDetectedControllersU3Ek__BackingField_29(HashSet_1_tAA924F987C20991EA4FADB4E5BE2512CAE7CF8B3 * value)
	{
		___U3CDetectedControllersU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDetectedControllersU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_inputSystemProfile_30() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___inputSystemProfile_30)); }
	inline MixedRealityInputSystemProfile_t4CA250E3F600824482F2D57467018D19A35A3931 * get_inputSystemProfile_30() const { return ___inputSystemProfile_30; }
	inline MixedRealityInputSystemProfile_t4CA250E3F600824482F2D57467018D19A35A3931 ** get_address_of_inputSystemProfile_30() { return &___inputSystemProfile_30; }
	inline void set_inputSystemProfile_30(MixedRealityInputSystemProfile_t4CA250E3F600824482F2D57467018D19A35A3931 * value)
	{
		___inputSystemProfile_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSystemProfile_30), (void*)value);
	}

	inline static int32_t get_offset_of_focusProvider_31() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___focusProvider_31)); }
	inline RuntimeObject* get_focusProvider_31() const { return ___focusProvider_31; }
	inline RuntimeObject** get_address_of_focusProvider_31() { return &___focusProvider_31; }
	inline void set_focusProvider_31(RuntimeObject* value)
	{
		___focusProvider_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusProvider_31), (void*)value);
	}

	inline static int32_t get_offset_of_raycastProvider_32() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___raycastProvider_32)); }
	inline RuntimeObject* get_raycastProvider_32() const { return ___raycastProvider_32; }
	inline RuntimeObject** get_address_of_raycastProvider_32() { return &___raycastProvider_32; }
	inline void set_raycastProvider_32(RuntimeObject* value)
	{
		___raycastProvider_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastProvider_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGazeProviderU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___U3CGazeProviderU3Ek__BackingField_33)); }
	inline RuntimeObject* get_U3CGazeProviderU3Ek__BackingField_33() const { return ___U3CGazeProviderU3Ek__BackingField_33; }
	inline RuntimeObject** get_address_of_U3CGazeProviderU3Ek__BackingField_33() { return &___U3CGazeProviderU3Ek__BackingField_33; }
	inline void set_U3CGazeProviderU3Ek__BackingField_33(RuntimeObject* value)
	{
		___U3CGazeProviderU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGazeProviderU3Ek__BackingField_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEyeGazeProviderU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___U3CEyeGazeProviderU3Ek__BackingField_34)); }
	inline RuntimeObject* get_U3CEyeGazeProviderU3Ek__BackingField_34() const { return ___U3CEyeGazeProviderU3Ek__BackingField_34; }
	inline RuntimeObject** get_address_of_U3CEyeGazeProviderU3Ek__BackingField_34() { return &___U3CEyeGazeProviderU3Ek__BackingField_34; }
	inline void set_U3CEyeGazeProviderU3Ek__BackingField_34(RuntimeObject* value)
	{
		___U3CEyeGazeProviderU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEyeGazeProviderU3Ek__BackingField_34), (void*)value);
	}

	inline static int32_t get_offset_of_modalInputStack_35() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___modalInputStack_35)); }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * get_modalInputStack_35() const { return ___modalInputStack_35; }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE ** get_address_of_modalInputStack_35() { return &___modalInputStack_35; }
	inline void set_modalInputStack_35(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * value)
	{
		___modalInputStack_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modalInputStack_35), (void*)value);
	}

	inline static int32_t get_offset_of_fallbackInputStack_36() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___fallbackInputStack_36)); }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * get_fallbackInputStack_36() const { return ___fallbackInputStack_36; }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE ** get_address_of_fallbackInputStack_36() { return &___fallbackInputStack_36; }
	inline void set_fallbackInputStack_36(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * value)
	{
		___fallbackInputStack_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackInputStack_36), (void*)value);
	}

	inline static int32_t get_offset_of_disabledRefCount_37() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___disabledRefCount_37)); }
	inline int32_t get_disabledRefCount_37() const { return ___disabledRefCount_37; }
	inline int32_t* get_address_of_disabledRefCount_37() { return &___disabledRefCount_37; }
	inline void set_disabledRefCount_37(int32_t value)
	{
		___disabledRefCount_37 = value;
	}

	inline static int32_t get_offset_of_isInputModuleAdded_38() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___isInputModuleAdded_38)); }
	inline bool get_isInputModuleAdded_38() const { return ___isInputModuleAdded_38; }
	inline bool* get_address_of_isInputModuleAdded_38() { return &___isInputModuleAdded_38; }
	inline void set_isInputModuleAdded_38(bool value)
	{
		___isInputModuleAdded_38 = value;
	}

	inline static int32_t get_offset_of_sourceStateEventData_39() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___sourceStateEventData_39)); }
	inline SourceStateEventData_tFBAFD0D1BDD92019A946CF2C4D7D4076A1DB34E7 * get_sourceStateEventData_39() const { return ___sourceStateEventData_39; }
	inline SourceStateEventData_tFBAFD0D1BDD92019A946CF2C4D7D4076A1DB34E7 ** get_address_of_sourceStateEventData_39() { return &___sourceStateEventData_39; }
	inline void set_sourceStateEventData_39(SourceStateEventData_tFBAFD0D1BDD92019A946CF2C4D7D4076A1DB34E7 * value)
	{
		___sourceStateEventData_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceStateEventData_39), (void*)value);
	}

	inline static int32_t get_offset_of_sourceTrackingEventData_40() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___sourceTrackingEventData_40)); }
	inline SourcePoseEventData_1_t7BD4A4A45CD8964D8BE07F796E2BD6FA1BC10102 * get_sourceTrackingEventData_40() const { return ___sourceTrackingEventData_40; }
	inline SourcePoseEventData_1_t7BD4A4A45CD8964D8BE07F796E2BD6FA1BC10102 ** get_address_of_sourceTrackingEventData_40() { return &___sourceTrackingEventData_40; }
	inline void set_sourceTrackingEventData_40(SourcePoseEventData_1_t7BD4A4A45CD8964D8BE07F796E2BD6FA1BC10102 * value)
	{
		___sourceTrackingEventData_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceTrackingEventData_40), (void*)value);
	}

	inline static int32_t get_offset_of_sourceVector2EventData_41() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___sourceVector2EventData_41)); }
	inline SourcePoseEventData_1_tD6A29A780D21CB1D5B978C7EE6047A91715E070F * get_sourceVector2EventData_41() const { return ___sourceVector2EventData_41; }
	inline SourcePoseEventData_1_tD6A29A780D21CB1D5B978C7EE6047A91715E070F ** get_address_of_sourceVector2EventData_41() { return &___sourceVector2EventData_41; }
	inline void set_sourceVector2EventData_41(SourcePoseEventData_1_tD6A29A780D21CB1D5B978C7EE6047A91715E070F * value)
	{
		___sourceVector2EventData_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceVector2EventData_41), (void*)value);
	}

	inline static int32_t get_offset_of_sourcePositionEventData_42() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___sourcePositionEventData_42)); }
	inline SourcePoseEventData_1_tA02B5679D1791EEE3396DA686E0EC604FB456816 * get_sourcePositionEventData_42() const { return ___sourcePositionEventData_42; }
	inline SourcePoseEventData_1_tA02B5679D1791EEE3396DA686E0EC604FB456816 ** get_address_of_sourcePositionEventData_42() { return &___sourcePositionEventData_42; }
	inline void set_sourcePositionEventData_42(SourcePoseEventData_1_tA02B5679D1791EEE3396DA686E0EC604FB456816 * value)
	{
		___sourcePositionEventData_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourcePositionEventData_42), (void*)value);
	}

	inline static int32_t get_offset_of_sourceRotationEventData_43() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___sourceRotationEventData_43)); }
	inline SourcePoseEventData_1_t4CF714FDA8D8A2F30154DEFCA5DDFD50BF73C90D * get_sourceRotationEventData_43() const { return ___sourceRotationEventData_43; }
	inline SourcePoseEventData_1_t4CF714FDA8D8A2F30154DEFCA5DDFD50BF73C90D ** get_address_of_sourceRotationEventData_43() { return &___sourceRotationEventData_43; }
	inline void set_sourceRotationEventData_43(SourcePoseEventData_1_t4CF714FDA8D8A2F30154DEFCA5DDFD50BF73C90D * value)
	{
		___sourceRotationEventData_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceRotationEventData_43), (void*)value);
	}

	inline static int32_t get_offset_of_sourcePoseEventData_44() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___sourcePoseEventData_44)); }
	inline SourcePoseEventData_1_tD2E360537D508E781E6A4CB5C07F117A75BFA5CE * get_sourcePoseEventData_44() const { return ___sourcePoseEventData_44; }
	inline SourcePoseEventData_1_tD2E360537D508E781E6A4CB5C07F117A75BFA5CE ** get_address_of_sourcePoseEventData_44() { return &___sourcePoseEventData_44; }
	inline void set_sourcePoseEventData_44(SourcePoseEventData_1_tD2E360537D508E781E6A4CB5C07F117A75BFA5CE * value)
	{
		___sourcePoseEventData_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourcePoseEventData_44), (void*)value);
	}

	inline static int32_t get_offset_of_focusEventData_45() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___focusEventData_45)); }
	inline FocusEventData_tBF30F5EA28073CC7C0662FDCE74967BB9A7CEE34 * get_focusEventData_45() const { return ___focusEventData_45; }
	inline FocusEventData_tBF30F5EA28073CC7C0662FDCE74967BB9A7CEE34 ** get_address_of_focusEventData_45() { return &___focusEventData_45; }
	inline void set_focusEventData_45(FocusEventData_tBF30F5EA28073CC7C0662FDCE74967BB9A7CEE34 * value)
	{
		___focusEventData_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusEventData_45), (void*)value);
	}

	inline static int32_t get_offset_of_inputEventData_46() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___inputEventData_46)); }
	inline InputEventData_tA259F0AF4AE4D857E78B38AF9A3F28F9D0101DE6 * get_inputEventData_46() const { return ___inputEventData_46; }
	inline InputEventData_tA259F0AF4AE4D857E78B38AF9A3F28F9D0101DE6 ** get_address_of_inputEventData_46() { return &___inputEventData_46; }
	inline void set_inputEventData_46(InputEventData_tA259F0AF4AE4D857E78B38AF9A3F28F9D0101DE6 * value)
	{
		___inputEventData_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputEventData_46), (void*)value);
	}

	inline static int32_t get_offset_of_pointerEventData_47() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___pointerEventData_47)); }
	inline MixedRealityPointerEventData_t14C28C7E9710B6738A269692FF4CE275CC5A2070 * get_pointerEventData_47() const { return ___pointerEventData_47; }
	inline MixedRealityPointerEventData_t14C28C7E9710B6738A269692FF4CE275CC5A2070 ** get_address_of_pointerEventData_47() { return &___pointerEventData_47; }
	inline void set_pointerEventData_47(MixedRealityPointerEventData_t14C28C7E9710B6738A269692FF4CE275CC5A2070 * value)
	{
		___pointerEventData_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerEventData_47), (void*)value);
	}

	inline static int32_t get_offset_of_floatInputEventData_48() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___floatInputEventData_48)); }
	inline InputEventData_1_t858FD731EF453876756A19D55413472BF17D4680 * get_floatInputEventData_48() const { return ___floatInputEventData_48; }
	inline InputEventData_1_t858FD731EF453876756A19D55413472BF17D4680 ** get_address_of_floatInputEventData_48() { return &___floatInputEventData_48; }
	inline void set_floatInputEventData_48(InputEventData_1_t858FD731EF453876756A19D55413472BF17D4680 * value)
	{
		___floatInputEventData_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floatInputEventData_48), (void*)value);
	}

	inline static int32_t get_offset_of_vector2InputEventData_49() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___vector2InputEventData_49)); }
	inline InputEventData_1_t6000E168DC13F7700BE82C48089DCB73AE5E4177 * get_vector2InputEventData_49() const { return ___vector2InputEventData_49; }
	inline InputEventData_1_t6000E168DC13F7700BE82C48089DCB73AE5E4177 ** get_address_of_vector2InputEventData_49() { return &___vector2InputEventData_49; }
	inline void set_vector2InputEventData_49(InputEventData_1_t6000E168DC13F7700BE82C48089DCB73AE5E4177 * value)
	{
		___vector2InputEventData_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vector2InputEventData_49), (void*)value);
	}

	inline static int32_t get_offset_of_positionInputEventData_50() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___positionInputEventData_50)); }
	inline InputEventData_1_tE8B8C9732420F20D517F8474A142DA1F8A4B79C8 * get_positionInputEventData_50() const { return ___positionInputEventData_50; }
	inline InputEventData_1_tE8B8C9732420F20D517F8474A142DA1F8A4B79C8 ** get_address_of_positionInputEventData_50() { return &___positionInputEventData_50; }
	inline void set_positionInputEventData_50(InputEventData_1_tE8B8C9732420F20D517F8474A142DA1F8A4B79C8 * value)
	{
		___positionInputEventData_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positionInputEventData_50), (void*)value);
	}

	inline static int32_t get_offset_of_rotationInputEventData_51() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___rotationInputEventData_51)); }
	inline InputEventData_1_tE16B20C8271985A178B5DB29E5A34DFE05836673 * get_rotationInputEventData_51() const { return ___rotationInputEventData_51; }
	inline InputEventData_1_tE16B20C8271985A178B5DB29E5A34DFE05836673 ** get_address_of_rotationInputEventData_51() { return &___rotationInputEventData_51; }
	inline void set_rotationInputEventData_51(InputEventData_1_tE16B20C8271985A178B5DB29E5A34DFE05836673 * value)
	{
		___rotationInputEventData_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotationInputEventData_51), (void*)value);
	}

	inline static int32_t get_offset_of_poseInputEventData_52() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___poseInputEventData_52)); }
	inline InputEventData_1_t0559119B71F540C1135C757ADC84980A51945FF5 * get_poseInputEventData_52() const { return ___poseInputEventData_52; }
	inline InputEventData_1_t0559119B71F540C1135C757ADC84980A51945FF5 ** get_address_of_poseInputEventData_52() { return &___poseInputEventData_52; }
	inline void set_poseInputEventData_52(InputEventData_1_t0559119B71F540C1135C757ADC84980A51945FF5 * value)
	{
		___poseInputEventData_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___poseInputEventData_52), (void*)value);
	}

	inline static int32_t get_offset_of_jointPoseInputEventData_53() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___jointPoseInputEventData_53)); }
	inline InputEventData_1_t95DB5DCBD9E6D8500526D03385BA8980D237639D * get_jointPoseInputEventData_53() const { return ___jointPoseInputEventData_53; }
	inline InputEventData_1_t95DB5DCBD9E6D8500526D03385BA8980D237639D ** get_address_of_jointPoseInputEventData_53() { return &___jointPoseInputEventData_53; }
	inline void set_jointPoseInputEventData_53(InputEventData_1_t95DB5DCBD9E6D8500526D03385BA8980D237639D * value)
	{
		___jointPoseInputEventData_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointPoseInputEventData_53), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshInputEventData_54() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___handMeshInputEventData_54)); }
	inline InputEventData_1_t0B059AD10918AFB11B9DB4D96BBFB18DCD2564BF * get_handMeshInputEventData_54() const { return ___handMeshInputEventData_54; }
	inline InputEventData_1_t0B059AD10918AFB11B9DB4D96BBFB18DCD2564BF ** get_address_of_handMeshInputEventData_54() { return &___handMeshInputEventData_54; }
	inline void set_handMeshInputEventData_54(InputEventData_1_t0B059AD10918AFB11B9DB4D96BBFB18DCD2564BF * value)
	{
		___handMeshInputEventData_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshInputEventData_54), (void*)value);
	}

	inline static int32_t get_offset_of_speechEventData_55() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___speechEventData_55)); }
	inline SpeechEventData_t00E84586BA3E9F9A4A7EC82F3BE2EC23CF2AFFA9 * get_speechEventData_55() const { return ___speechEventData_55; }
	inline SpeechEventData_t00E84586BA3E9F9A4A7EC82F3BE2EC23CF2AFFA9 ** get_address_of_speechEventData_55() { return &___speechEventData_55; }
	inline void set_speechEventData_55(SpeechEventData_t00E84586BA3E9F9A4A7EC82F3BE2EC23CF2AFFA9 * value)
	{
		___speechEventData_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechEventData_55), (void*)value);
	}

	inline static int32_t get_offset_of_dictationEventData_56() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___dictationEventData_56)); }
	inline DictationEventData_tDCEC89FE1BD351FCEAA5D6E206AE336C9E55D7BA * get_dictationEventData_56() const { return ___dictationEventData_56; }
	inline DictationEventData_tDCEC89FE1BD351FCEAA5D6E206AE336C9E55D7BA ** get_address_of_dictationEventData_56() { return &___dictationEventData_56; }
	inline void set_dictationEventData_56(DictationEventData_tDCEC89FE1BD351FCEAA5D6E206AE336C9E55D7BA * value)
	{
		___dictationEventData_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationEventData_56), (void*)value);
	}

	inline static int32_t get_offset_of_handTrackingInputEventData_57() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___handTrackingInputEventData_57)); }
	inline HandTrackingInputEventData_t3D6DB0D87F242EC41B0CB156BCD95E0C643221E2 * get_handTrackingInputEventData_57() const { return ___handTrackingInputEventData_57; }
	inline HandTrackingInputEventData_t3D6DB0D87F242EC41B0CB156BCD95E0C643221E2 ** get_address_of_handTrackingInputEventData_57() { return &___handTrackingInputEventData_57; }
	inline void set_handTrackingInputEventData_57(HandTrackingInputEventData_t3D6DB0D87F242EC41B0CB156BCD95E0C643221E2 * value)
	{
		___handTrackingInputEventData_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackingInputEventData_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentInputActionRulesProfileU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_58)); }
	inline MixedRealityInputActionRulesProfile_t735D9F437D72A41A976B094A8B795C79251F4268 * get_U3CCurrentInputActionRulesProfileU3Ek__BackingField_58() const { return ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_58; }
	inline MixedRealityInputActionRulesProfile_t735D9F437D72A41A976B094A8B795C79251F4268 ** get_address_of_U3CCurrentInputActionRulesProfileU3Ek__BackingField_58() { return &___U3CCurrentInputActionRulesProfileU3Ek__BackingField_58; }
	inline void set_U3CCurrentInputActionRulesProfileU3Ek__BackingField_58(MixedRealityInputActionRulesProfile_t735D9F437D72A41A976B094A8B795C79251F4268 * value)
	{
		___U3CCurrentInputActionRulesProfileU3Ek__BackingField_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentInputActionRulesProfileU3Ek__BackingField_58), (void*)value);
	}

	inline static int32_t get_offset_of_inputModuleChecked_59() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___inputModuleChecked_59)); }
	inline bool get_inputModuleChecked_59() const { return ___inputModuleChecked_59; }
	inline bool* get_address_of_inputModuleChecked_59() { return &___inputModuleChecked_59; }
	inline void set_inputModuleChecked_59(bool value)
	{
		___inputModuleChecked_59 = value;
	}

	inline static int32_t get_offset_of_inputModule_60() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C, ___inputModule_60)); }
	inline MixedRealityInputModule_tF5FCE2C4E2569CEA3657164B90D036ADCEDDAE73 * get_inputModule_60() const { return ___inputModule_60; }
	inline MixedRealityInputModule_tF5FCE2C4E2569CEA3657164B90D036ADCEDDAE73 ** get_address_of_inputModule_60() { return &___inputModule_60; }
	inline void set_inputModule_60(MixedRealityInputModule_tF5FCE2C4E2569CEA3657164B90D036ADCEDDAE73 * value)
	{
		___inputModule_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputModule_60), (void*)value);
	}
};

struct MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::ExecuteHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ExecuteHierarchyPerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleEventPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleFocusChangedEventsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleFocusChangedEventsPerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleFocusEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleFocusEventPerfMarker_63;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandlePointerEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandlePointerEventPerfMarker_64;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToGlobalListenersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToGlobalListenersPerfMarker_65;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToFallbackHandlersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToFallbackHandlersPerfMarker_66;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToObjectFocusedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToObjectFocusedPerfMarker_67;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchModalEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchModalEventPerfMarker_68;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceDetectedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceDetectedPerfMarker_69;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceDetectedEventHandler
	EventFunction_1_tDCB4CACC0B3FF37C3E3D1D3B4B25C16B4D1C9D40 * ___OnSourceDetectedEventHandler_70;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceLostPerfMarker_71;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceLostEventHandler
	EventFunction_1_tDCB4CACC0B3FF37C3E3D1D3B4B25C16B4D1C9D40 * ___OnSourceLostEventHandler_72;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceTrackingStateChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceTrackingStateChangedPerfMarker_73;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceTrackingChangedEventHandler
	EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED * ___OnSourceTrackingChangedEventHandler_74;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourcePositionChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourcePositionChangedPerfMarker_75;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePoseVector2ChangedEventHandler
	EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED * ___OnSourcePoseVector2ChangedEventHandler_76;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePositionChangedEventHandler
	EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED * ___OnSourcePositionChangedEventHandler_77;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceRotationChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceRotationChangedPerfMarker_78;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceRotationChangedEventHandler
	EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED * ___OnSourceRotationChangedEventHandler_79;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourcePoseChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourcePoseChangedPerfMarker_80;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePoseChangedEventHandler
	EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED * ___OnSourcePoseChangedEventHandler_81;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePreFocusChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePreFocusChangedPerfMarker_82;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPreFocusChangedHandler
	EventFunction_1_tF6CD95F6E1166CD63C94ECCB675036979F487E95 * ___OnPreFocusChangedHandler_83;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusChangedPerfMarker_84;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusChangedHandler
	EventFunction_1_tF6CD95F6E1166CD63C94ECCB675036979F487E95 * ___OnFocusChangedHandler_85;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusEnterPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusEnterPerfMarker_86;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusEnterEventHandler
	EventFunction_1_t71FE931365C0EF215522681D3C8920315E889D4F * ___OnFocusEnterEventHandler_87;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusExitPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusExitPerfMarker_88;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusExitEventHandler
	EventFunction_1_t71FE931365C0EF215522681D3C8920315E889D4F * ___OnFocusExitEventHandler_89;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerDownEventHandler
	EventFunction_1_t9BC4DC831AD98A1ADB8C8650B8E376F95F4724FD * ___OnPointerDownEventHandler_90;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerDownPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerDownPerfMarker_91;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerDraggedEventHandler
	EventFunction_1_t9BC4DC831AD98A1ADB8C8650B8E376F95F4724FD * ___OnPointerDraggedEventHandler_92;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerDraggedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerDraggedPerfMarker_93;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputClickedEventHandler
	EventFunction_1_t9BC4DC831AD98A1ADB8C8650B8E376F95F4724FD * ___OnInputClickedEventHandler_94;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerClickedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerClickedPerfMarker_95;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerUpEventHandler
	EventFunction_1_t9BC4DC831AD98A1ADB8C8650B8E376F95F4724FD * ___OnPointerUpEventHandler_96;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerUpPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerUpPerfMarker_97;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputDownEventHandler
	EventFunction_1_tC57E1CD95652F75C7DF4A9377691010279215A3A * ___OnInputDownEventHandler_98;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputDownWithActionEventHandler
	EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C * ___OnInputDownWithActionEventHandler_99;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnInputDownPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnInputDownPerfMarker_100;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputUpEventHandler
	EventFunction_1_tC57E1CD95652F75C7DF4A9377691010279215A3A * ___OnInputUpEventHandler_101;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputUpWithActionEventHandler
	EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C * ___OnInputUpWithActionEventHandler_102;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnInputUpPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnInputUpPerfMarker_103;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFloatInputChanged
	EventFunction_1_tC719D520E8F678842B4340237D2294EFD0972F80 * ___OnFloatInputChanged_104;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFloatInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFloatInputChangedPerfMarker_105;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTwoDoFInputChanged
	EventFunction_1_tBF954CA12A41833F0D15B2E607ECF59F2C84E678 * ___OnTwoDoFInputChanged_106;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePositionInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePositionInputChangedPerfMarker_107;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPositionInputChanged
	EventFunction_1_tB508CFAA006FF3367945429E3C9F69EB7CDA5228 * ___OnPositionInputChanged_108;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnRotationInputChanged
	EventFunction_1_t3253ADDFEA7265300ADC8960950B81FA54DDCCC4 * ___OnRotationInputChanged_109;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseRotationInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseRotationInputChangedPerfMarker_110;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPoseInputChanged
	EventFunction_1_t9C9F1F66388EF01DF4F3AA47482084635F4EEE1E * ___OnPoseInputChanged_111;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePoseInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePoseInputChangedPerfMarker_112;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureStarted
	EventFunction_1_tC908899E305AEAC1A5D6BAB2CD937AB1A26FD493 * ___OnGestureStarted_113;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureStartedWithAction
	EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C * ___OnGestureStartedWithAction_114;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureStartedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureStartedPerfMarker_115;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureUpdated
	EventFunction_1_tC908899E305AEAC1A5D6BAB2CD937AB1A26FD493 * ___OnGestureUpdated_116;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureUpdatedPerfMarker_117;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureVector2PositionUpdated
	EventFunction_1_t6C4BDE466A5978FE0CEF13FD3DF90FC630973811 * ___OnGestureVector2PositionUpdated_118;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePositionUpdated
	EventFunction_1_t5465873904C474AC221DCF44F710FD54487A2F27 * ___OnGesturePositionUpdated_119;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureRotationUpdated
	EventFunction_1_t5AB8873D84772BCF077E9CA165D1081872A49688 * ___OnGestureRotationUpdated_120;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePoseUpdated
	EventFunction_1_t8D6E76DB3F4CEA6D77E4CDCF4CFCA1B1A33B35DA * ___OnGesturePoseUpdated_121;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCompleted
	EventFunction_1_tC908899E305AEAC1A5D6BAB2CD937AB1A26FD493 * ___OnGestureCompleted_122;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCompletedWithAction
	EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C * ___OnGestureCompletedWithAction_123;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureCompletedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureCompletedPerfMarker_124;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureVector2PositionCompleted
	EventFunction_1_t6C4BDE466A5978FE0CEF13FD3DF90FC630973811 * ___OnGestureVector2PositionCompleted_125;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePositionCompleted
	EventFunction_1_t5465873904C474AC221DCF44F710FD54487A2F27 * ___OnGesturePositionCompleted_126;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureRotationCompleted
	EventFunction_1_t5AB8873D84772BCF077E9CA165D1081872A49688 * ___OnGestureRotationCompleted_127;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePoseCompleted
	EventFunction_1_t8D6E76DB3F4CEA6D77E4CDCF4CFCA1B1A33B35DA * ___OnGesturePoseCompleted_128;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCanceled
	EventFunction_1_tC908899E305AEAC1A5D6BAB2CD937AB1A26FD493 * ___OnGestureCanceled_129;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureCanceledPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureCanceledPerfMarker_130;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSpeechKeywordRecognizedEventHandler
	EventFunction_1_tAFCD0133A02DD79257577FAE998A07C817B769A8 * ___OnSpeechKeywordRecognizedEventHandler_131;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSpeechKeywordRecognizedWithActionEventHandler
	EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C * ___OnSpeechKeywordRecognizedWithActionEventHandler_132;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSpeechCommandRecognizedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSpeechCommandRecognizedPerfMarker_133;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationHypothesisEventHandler
	EventFunction_1_tF81B5FDDB6666DB7C9E99521EA932CD1E044D3A1 * ___OnDictationHypothesisEventHandler_134;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationHypothesisPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationHypothesisPerfMarker_135;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationResultEventHandler
	EventFunction_1_tF81B5FDDB6666DB7C9E99521EA932CD1E044D3A1 * ___OnDictationResultEventHandler_136;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationResultPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationResultPerfMarker_137;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationCompleteEventHandler
	EventFunction_1_tF81B5FDDB6666DB7C9E99521EA932CD1E044D3A1 * ___OnDictationCompleteEventHandler_138;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationCompletePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationCompletePerfMarker_139;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationErrorEventHandler
	EventFunction_1_tF81B5FDDB6666DB7C9E99521EA932CD1E044D3A1 * ___OnDictationErrorEventHandler_140;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationErrorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationErrorPerfMarker_141;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnHandJointsUpdatedEventHandler
	EventFunction_1_t4B256856AEE0068FA253283964F6E7F860CFEA00 * ___OnHandJointsUpdatedEventHandler_142;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseHandJointsUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseHandJointsUpdatedPerfMarker_143;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnHandMeshUpdatedEventHandler
	EventFunction_1_t46B838A0C9EB5FF9ACF435959AC0B0A5A3CAA926 * ___OnHandMeshUpdatedEventHandler_144;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseHandMeshUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseHandMeshUpdatedPerfMarker_145;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchStartedEventHandler
	EventFunction_1_t367770E68B290A5DD54E069E04B83F2EE5A59872 * ___OnTouchStartedEventHandler_146;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchStartedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchStartedPerfMarker_147;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchCompletedEventHandler
	EventFunction_1_t367770E68B290A5DD54E069E04B83F2EE5A59872 * ___OnTouchCompletedEventHandler_148;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchCompletedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchCompletedPerfMarker_149;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchUpdatedEventHandler
	EventFunction_1_t367770E68B290A5DD54E069E04B83F2EE5A59872 * ___OnTouchUpdatedEventHandler_150;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchUpdatedPerfMarker_151;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::ProcessRulesInternalPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessRulesInternalPerfMarker_152;

public:
	inline static int32_t get_offset_of_ExecuteHierarchyPerfMarker_24() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___ExecuteHierarchyPerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ExecuteHierarchyPerfMarker_24() const { return ___ExecuteHierarchyPerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ExecuteHierarchyPerfMarker_24() { return &___ExecuteHierarchyPerfMarker_24; }
	inline void set_ExecuteHierarchyPerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ExecuteHierarchyPerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_HandleEventPerfMarker_61() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___HandleEventPerfMarker_61)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleEventPerfMarker_61() const { return ___HandleEventPerfMarker_61; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleEventPerfMarker_61() { return &___HandleEventPerfMarker_61; }
	inline void set_HandleEventPerfMarker_61(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleEventPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_HandleFocusChangedEventsPerfMarker_62() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___HandleFocusChangedEventsPerfMarker_62)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleFocusChangedEventsPerfMarker_62() const { return ___HandleFocusChangedEventsPerfMarker_62; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleFocusChangedEventsPerfMarker_62() { return &___HandleFocusChangedEventsPerfMarker_62; }
	inline void set_HandleFocusChangedEventsPerfMarker_62(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleFocusChangedEventsPerfMarker_62 = value;
	}

	inline static int32_t get_offset_of_HandleFocusEventPerfMarker_63() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___HandleFocusEventPerfMarker_63)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleFocusEventPerfMarker_63() const { return ___HandleFocusEventPerfMarker_63; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleFocusEventPerfMarker_63() { return &___HandleFocusEventPerfMarker_63; }
	inline void set_HandleFocusEventPerfMarker_63(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleFocusEventPerfMarker_63 = value;
	}

	inline static int32_t get_offset_of_HandlePointerEventPerfMarker_64() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___HandlePointerEventPerfMarker_64)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandlePointerEventPerfMarker_64() const { return ___HandlePointerEventPerfMarker_64; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandlePointerEventPerfMarker_64() { return &___HandlePointerEventPerfMarker_64; }
	inline void set_HandlePointerEventPerfMarker_64(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandlePointerEventPerfMarker_64 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToGlobalListenersPerfMarker_65() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___DispatchEventToGlobalListenersPerfMarker_65)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToGlobalListenersPerfMarker_65() const { return ___DispatchEventToGlobalListenersPerfMarker_65; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToGlobalListenersPerfMarker_65() { return &___DispatchEventToGlobalListenersPerfMarker_65; }
	inline void set_DispatchEventToGlobalListenersPerfMarker_65(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToGlobalListenersPerfMarker_65 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToFallbackHandlersPerfMarker_66() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___DispatchEventToFallbackHandlersPerfMarker_66)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToFallbackHandlersPerfMarker_66() const { return ___DispatchEventToFallbackHandlersPerfMarker_66; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToFallbackHandlersPerfMarker_66() { return &___DispatchEventToFallbackHandlersPerfMarker_66; }
	inline void set_DispatchEventToFallbackHandlersPerfMarker_66(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToFallbackHandlersPerfMarker_66 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToObjectFocusedPerfMarker_67() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___DispatchEventToObjectFocusedPerfMarker_67)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToObjectFocusedPerfMarker_67() const { return ___DispatchEventToObjectFocusedPerfMarker_67; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToObjectFocusedPerfMarker_67() { return &___DispatchEventToObjectFocusedPerfMarker_67; }
	inline void set_DispatchEventToObjectFocusedPerfMarker_67(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToObjectFocusedPerfMarker_67 = value;
	}

	inline static int32_t get_offset_of_DispatchModalEventPerfMarker_68() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___DispatchModalEventPerfMarker_68)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchModalEventPerfMarker_68() const { return ___DispatchModalEventPerfMarker_68; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchModalEventPerfMarker_68() { return &___DispatchModalEventPerfMarker_68; }
	inline void set_DispatchModalEventPerfMarker_68(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchModalEventPerfMarker_68 = value;
	}

	inline static int32_t get_offset_of_RaiseSourceDetectedPerfMarker_69() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseSourceDetectedPerfMarker_69)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceDetectedPerfMarker_69() const { return ___RaiseSourceDetectedPerfMarker_69; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceDetectedPerfMarker_69() { return &___RaiseSourceDetectedPerfMarker_69; }
	inline void set_RaiseSourceDetectedPerfMarker_69(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceDetectedPerfMarker_69 = value;
	}

	inline static int32_t get_offset_of_OnSourceDetectedEventHandler_70() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnSourceDetectedEventHandler_70)); }
	inline EventFunction_1_tDCB4CACC0B3FF37C3E3D1D3B4B25C16B4D1C9D40 * get_OnSourceDetectedEventHandler_70() const { return ___OnSourceDetectedEventHandler_70; }
	inline EventFunction_1_tDCB4CACC0B3FF37C3E3D1D3B4B25C16B4D1C9D40 ** get_address_of_OnSourceDetectedEventHandler_70() { return &___OnSourceDetectedEventHandler_70; }
	inline void set_OnSourceDetectedEventHandler_70(EventFunction_1_tDCB4CACC0B3FF37C3E3D1D3B4B25C16B4D1C9D40 * value)
	{
		___OnSourceDetectedEventHandler_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceDetectedEventHandler_70), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceLostPerfMarker_71() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseSourceLostPerfMarker_71)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceLostPerfMarker_71() const { return ___RaiseSourceLostPerfMarker_71; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceLostPerfMarker_71() { return &___RaiseSourceLostPerfMarker_71; }
	inline void set_RaiseSourceLostPerfMarker_71(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceLostPerfMarker_71 = value;
	}

	inline static int32_t get_offset_of_OnSourceLostEventHandler_72() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnSourceLostEventHandler_72)); }
	inline EventFunction_1_tDCB4CACC0B3FF37C3E3D1D3B4B25C16B4D1C9D40 * get_OnSourceLostEventHandler_72() const { return ___OnSourceLostEventHandler_72; }
	inline EventFunction_1_tDCB4CACC0B3FF37C3E3D1D3B4B25C16B4D1C9D40 ** get_address_of_OnSourceLostEventHandler_72() { return &___OnSourceLostEventHandler_72; }
	inline void set_OnSourceLostEventHandler_72(EventFunction_1_tDCB4CACC0B3FF37C3E3D1D3B4B25C16B4D1C9D40 * value)
	{
		___OnSourceLostEventHandler_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceLostEventHandler_72), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceTrackingStateChangedPerfMarker_73() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseSourceTrackingStateChangedPerfMarker_73)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceTrackingStateChangedPerfMarker_73() const { return ___RaiseSourceTrackingStateChangedPerfMarker_73; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceTrackingStateChangedPerfMarker_73() { return &___RaiseSourceTrackingStateChangedPerfMarker_73; }
	inline void set_RaiseSourceTrackingStateChangedPerfMarker_73(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceTrackingStateChangedPerfMarker_73 = value;
	}

	inline static int32_t get_offset_of_OnSourceTrackingChangedEventHandler_74() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnSourceTrackingChangedEventHandler_74)); }
	inline EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED * get_OnSourceTrackingChangedEventHandler_74() const { return ___OnSourceTrackingChangedEventHandler_74; }
	inline EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED ** get_address_of_OnSourceTrackingChangedEventHandler_74() { return &___OnSourceTrackingChangedEventHandler_74; }
	inline void set_OnSourceTrackingChangedEventHandler_74(EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED * value)
	{
		___OnSourceTrackingChangedEventHandler_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceTrackingChangedEventHandler_74), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourcePositionChangedPerfMarker_75() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseSourcePositionChangedPerfMarker_75)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourcePositionChangedPerfMarker_75() const { return ___RaiseSourcePositionChangedPerfMarker_75; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourcePositionChangedPerfMarker_75() { return &___RaiseSourcePositionChangedPerfMarker_75; }
	inline void set_RaiseSourcePositionChangedPerfMarker_75(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourcePositionChangedPerfMarker_75 = value;
	}

	inline static int32_t get_offset_of_OnSourcePoseVector2ChangedEventHandler_76() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnSourcePoseVector2ChangedEventHandler_76)); }
	inline EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED * get_OnSourcePoseVector2ChangedEventHandler_76() const { return ___OnSourcePoseVector2ChangedEventHandler_76; }
	inline EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED ** get_address_of_OnSourcePoseVector2ChangedEventHandler_76() { return &___OnSourcePoseVector2ChangedEventHandler_76; }
	inline void set_OnSourcePoseVector2ChangedEventHandler_76(EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED * value)
	{
		___OnSourcePoseVector2ChangedEventHandler_76 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePoseVector2ChangedEventHandler_76), (void*)value);
	}

	inline static int32_t get_offset_of_OnSourcePositionChangedEventHandler_77() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnSourcePositionChangedEventHandler_77)); }
	inline EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED * get_OnSourcePositionChangedEventHandler_77() const { return ___OnSourcePositionChangedEventHandler_77; }
	inline EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED ** get_address_of_OnSourcePositionChangedEventHandler_77() { return &___OnSourcePositionChangedEventHandler_77; }
	inline void set_OnSourcePositionChangedEventHandler_77(EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED * value)
	{
		___OnSourcePositionChangedEventHandler_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePositionChangedEventHandler_77), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceRotationChangedPerfMarker_78() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseSourceRotationChangedPerfMarker_78)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceRotationChangedPerfMarker_78() const { return ___RaiseSourceRotationChangedPerfMarker_78; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceRotationChangedPerfMarker_78() { return &___RaiseSourceRotationChangedPerfMarker_78; }
	inline void set_RaiseSourceRotationChangedPerfMarker_78(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceRotationChangedPerfMarker_78 = value;
	}

	inline static int32_t get_offset_of_OnSourceRotationChangedEventHandler_79() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnSourceRotationChangedEventHandler_79)); }
	inline EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED * get_OnSourceRotationChangedEventHandler_79() const { return ___OnSourceRotationChangedEventHandler_79; }
	inline EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED ** get_address_of_OnSourceRotationChangedEventHandler_79() { return &___OnSourceRotationChangedEventHandler_79; }
	inline void set_OnSourceRotationChangedEventHandler_79(EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED * value)
	{
		___OnSourceRotationChangedEventHandler_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceRotationChangedEventHandler_79), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourcePoseChangedPerfMarker_80() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseSourcePoseChangedPerfMarker_80)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourcePoseChangedPerfMarker_80() const { return ___RaiseSourcePoseChangedPerfMarker_80; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourcePoseChangedPerfMarker_80() { return &___RaiseSourcePoseChangedPerfMarker_80; }
	inline void set_RaiseSourcePoseChangedPerfMarker_80(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourcePoseChangedPerfMarker_80 = value;
	}

	inline static int32_t get_offset_of_OnSourcePoseChangedEventHandler_81() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnSourcePoseChangedEventHandler_81)); }
	inline EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED * get_OnSourcePoseChangedEventHandler_81() const { return ___OnSourcePoseChangedEventHandler_81; }
	inline EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED ** get_address_of_OnSourcePoseChangedEventHandler_81() { return &___OnSourcePoseChangedEventHandler_81; }
	inline void set_OnSourcePoseChangedEventHandler_81(EventFunction_1_t941E91E19BE620B65BE8F171B144026761F2A9ED * value)
	{
		___OnSourcePoseChangedEventHandler_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePoseChangedEventHandler_81), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePreFocusChangedPerfMarker_82() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaisePreFocusChangedPerfMarker_82)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePreFocusChangedPerfMarker_82() const { return ___RaisePreFocusChangedPerfMarker_82; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePreFocusChangedPerfMarker_82() { return &___RaisePreFocusChangedPerfMarker_82; }
	inline void set_RaisePreFocusChangedPerfMarker_82(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePreFocusChangedPerfMarker_82 = value;
	}

	inline static int32_t get_offset_of_OnPreFocusChangedHandler_83() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnPreFocusChangedHandler_83)); }
	inline EventFunction_1_tF6CD95F6E1166CD63C94ECCB675036979F487E95 * get_OnPreFocusChangedHandler_83() const { return ___OnPreFocusChangedHandler_83; }
	inline EventFunction_1_tF6CD95F6E1166CD63C94ECCB675036979F487E95 ** get_address_of_OnPreFocusChangedHandler_83() { return &___OnPreFocusChangedHandler_83; }
	inline void set_OnPreFocusChangedHandler_83(EventFunction_1_tF6CD95F6E1166CD63C94ECCB675036979F487E95 * value)
	{
		___OnPreFocusChangedHandler_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreFocusChangedHandler_83), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusChangedPerfMarker_84() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseFocusChangedPerfMarker_84)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusChangedPerfMarker_84() const { return ___RaiseFocusChangedPerfMarker_84; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusChangedPerfMarker_84() { return &___RaiseFocusChangedPerfMarker_84; }
	inline void set_RaiseFocusChangedPerfMarker_84(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusChangedPerfMarker_84 = value;
	}

	inline static int32_t get_offset_of_OnFocusChangedHandler_85() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnFocusChangedHandler_85)); }
	inline EventFunction_1_tF6CD95F6E1166CD63C94ECCB675036979F487E95 * get_OnFocusChangedHandler_85() const { return ___OnFocusChangedHandler_85; }
	inline EventFunction_1_tF6CD95F6E1166CD63C94ECCB675036979F487E95 ** get_address_of_OnFocusChangedHandler_85() { return &___OnFocusChangedHandler_85; }
	inline void set_OnFocusChangedHandler_85(EventFunction_1_tF6CD95F6E1166CD63C94ECCB675036979F487E95 * value)
	{
		___OnFocusChangedHandler_85 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusChangedHandler_85), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusEnterPerfMarker_86() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseFocusEnterPerfMarker_86)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusEnterPerfMarker_86() const { return ___RaiseFocusEnterPerfMarker_86; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusEnterPerfMarker_86() { return &___RaiseFocusEnterPerfMarker_86; }
	inline void set_RaiseFocusEnterPerfMarker_86(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusEnterPerfMarker_86 = value;
	}

	inline static int32_t get_offset_of_OnFocusEnterEventHandler_87() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnFocusEnterEventHandler_87)); }
	inline EventFunction_1_t71FE931365C0EF215522681D3C8920315E889D4F * get_OnFocusEnterEventHandler_87() const { return ___OnFocusEnterEventHandler_87; }
	inline EventFunction_1_t71FE931365C0EF215522681D3C8920315E889D4F ** get_address_of_OnFocusEnterEventHandler_87() { return &___OnFocusEnterEventHandler_87; }
	inline void set_OnFocusEnterEventHandler_87(EventFunction_1_t71FE931365C0EF215522681D3C8920315E889D4F * value)
	{
		___OnFocusEnterEventHandler_87 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusEnterEventHandler_87), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusExitPerfMarker_88() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseFocusExitPerfMarker_88)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusExitPerfMarker_88() const { return ___RaiseFocusExitPerfMarker_88; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusExitPerfMarker_88() { return &___RaiseFocusExitPerfMarker_88; }
	inline void set_RaiseFocusExitPerfMarker_88(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusExitPerfMarker_88 = value;
	}

	inline static int32_t get_offset_of_OnFocusExitEventHandler_89() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnFocusExitEventHandler_89)); }
	inline EventFunction_1_t71FE931365C0EF215522681D3C8920315E889D4F * get_OnFocusExitEventHandler_89() const { return ___OnFocusExitEventHandler_89; }
	inline EventFunction_1_t71FE931365C0EF215522681D3C8920315E889D4F ** get_address_of_OnFocusExitEventHandler_89() { return &___OnFocusExitEventHandler_89; }
	inline void set_OnFocusExitEventHandler_89(EventFunction_1_t71FE931365C0EF215522681D3C8920315E889D4F * value)
	{
		___OnFocusExitEventHandler_89 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusExitEventHandler_89), (void*)value);
	}

	inline static int32_t get_offset_of_OnPointerDownEventHandler_90() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnPointerDownEventHandler_90)); }
	inline EventFunction_1_t9BC4DC831AD98A1ADB8C8650B8E376F95F4724FD * get_OnPointerDownEventHandler_90() const { return ___OnPointerDownEventHandler_90; }
	inline EventFunction_1_t9BC4DC831AD98A1ADB8C8650B8E376F95F4724FD ** get_address_of_OnPointerDownEventHandler_90() { return &___OnPointerDownEventHandler_90; }
	inline void set_OnPointerDownEventHandler_90(EventFunction_1_t9BC4DC831AD98A1ADB8C8650B8E376F95F4724FD * value)
	{
		___OnPointerDownEventHandler_90 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerDownEventHandler_90), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerDownPerfMarker_91() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaisePointerDownPerfMarker_91)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerDownPerfMarker_91() const { return ___RaisePointerDownPerfMarker_91; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerDownPerfMarker_91() { return &___RaisePointerDownPerfMarker_91; }
	inline void set_RaisePointerDownPerfMarker_91(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerDownPerfMarker_91 = value;
	}

	inline static int32_t get_offset_of_OnPointerDraggedEventHandler_92() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnPointerDraggedEventHandler_92)); }
	inline EventFunction_1_t9BC4DC831AD98A1ADB8C8650B8E376F95F4724FD * get_OnPointerDraggedEventHandler_92() const { return ___OnPointerDraggedEventHandler_92; }
	inline EventFunction_1_t9BC4DC831AD98A1ADB8C8650B8E376F95F4724FD ** get_address_of_OnPointerDraggedEventHandler_92() { return &___OnPointerDraggedEventHandler_92; }
	inline void set_OnPointerDraggedEventHandler_92(EventFunction_1_t9BC4DC831AD98A1ADB8C8650B8E376F95F4724FD * value)
	{
		___OnPointerDraggedEventHandler_92 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerDraggedEventHandler_92), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerDraggedPerfMarker_93() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaisePointerDraggedPerfMarker_93)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerDraggedPerfMarker_93() const { return ___RaisePointerDraggedPerfMarker_93; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerDraggedPerfMarker_93() { return &___RaisePointerDraggedPerfMarker_93; }
	inline void set_RaisePointerDraggedPerfMarker_93(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerDraggedPerfMarker_93 = value;
	}

	inline static int32_t get_offset_of_OnInputClickedEventHandler_94() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnInputClickedEventHandler_94)); }
	inline EventFunction_1_t9BC4DC831AD98A1ADB8C8650B8E376F95F4724FD * get_OnInputClickedEventHandler_94() const { return ___OnInputClickedEventHandler_94; }
	inline EventFunction_1_t9BC4DC831AD98A1ADB8C8650B8E376F95F4724FD ** get_address_of_OnInputClickedEventHandler_94() { return &___OnInputClickedEventHandler_94; }
	inline void set_OnInputClickedEventHandler_94(EventFunction_1_t9BC4DC831AD98A1ADB8C8650B8E376F95F4724FD * value)
	{
		___OnInputClickedEventHandler_94 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputClickedEventHandler_94), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerClickedPerfMarker_95() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaisePointerClickedPerfMarker_95)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerClickedPerfMarker_95() const { return ___RaisePointerClickedPerfMarker_95; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerClickedPerfMarker_95() { return &___RaisePointerClickedPerfMarker_95; }
	inline void set_RaisePointerClickedPerfMarker_95(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerClickedPerfMarker_95 = value;
	}

	inline static int32_t get_offset_of_OnPointerUpEventHandler_96() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnPointerUpEventHandler_96)); }
	inline EventFunction_1_t9BC4DC831AD98A1ADB8C8650B8E376F95F4724FD * get_OnPointerUpEventHandler_96() const { return ___OnPointerUpEventHandler_96; }
	inline EventFunction_1_t9BC4DC831AD98A1ADB8C8650B8E376F95F4724FD ** get_address_of_OnPointerUpEventHandler_96() { return &___OnPointerUpEventHandler_96; }
	inline void set_OnPointerUpEventHandler_96(EventFunction_1_t9BC4DC831AD98A1ADB8C8650B8E376F95F4724FD * value)
	{
		___OnPointerUpEventHandler_96 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerUpEventHandler_96), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerUpPerfMarker_97() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaisePointerUpPerfMarker_97)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerUpPerfMarker_97() const { return ___RaisePointerUpPerfMarker_97; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerUpPerfMarker_97() { return &___RaisePointerUpPerfMarker_97; }
	inline void set_RaisePointerUpPerfMarker_97(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerUpPerfMarker_97 = value;
	}

	inline static int32_t get_offset_of_OnInputDownEventHandler_98() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnInputDownEventHandler_98)); }
	inline EventFunction_1_tC57E1CD95652F75C7DF4A9377691010279215A3A * get_OnInputDownEventHandler_98() const { return ___OnInputDownEventHandler_98; }
	inline EventFunction_1_tC57E1CD95652F75C7DF4A9377691010279215A3A ** get_address_of_OnInputDownEventHandler_98() { return &___OnInputDownEventHandler_98; }
	inline void set_OnInputDownEventHandler_98(EventFunction_1_tC57E1CD95652F75C7DF4A9377691010279215A3A * value)
	{
		___OnInputDownEventHandler_98 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputDownEventHandler_98), (void*)value);
	}

	inline static int32_t get_offset_of_OnInputDownWithActionEventHandler_99() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnInputDownWithActionEventHandler_99)); }
	inline EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C * get_OnInputDownWithActionEventHandler_99() const { return ___OnInputDownWithActionEventHandler_99; }
	inline EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C ** get_address_of_OnInputDownWithActionEventHandler_99() { return &___OnInputDownWithActionEventHandler_99; }
	inline void set_OnInputDownWithActionEventHandler_99(EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C * value)
	{
		___OnInputDownWithActionEventHandler_99 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputDownWithActionEventHandler_99), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnInputDownPerfMarker_100() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseOnInputDownPerfMarker_100)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnInputDownPerfMarker_100() const { return ___RaiseOnInputDownPerfMarker_100; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnInputDownPerfMarker_100() { return &___RaiseOnInputDownPerfMarker_100; }
	inline void set_RaiseOnInputDownPerfMarker_100(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnInputDownPerfMarker_100 = value;
	}

	inline static int32_t get_offset_of_OnInputUpEventHandler_101() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnInputUpEventHandler_101)); }
	inline EventFunction_1_tC57E1CD95652F75C7DF4A9377691010279215A3A * get_OnInputUpEventHandler_101() const { return ___OnInputUpEventHandler_101; }
	inline EventFunction_1_tC57E1CD95652F75C7DF4A9377691010279215A3A ** get_address_of_OnInputUpEventHandler_101() { return &___OnInputUpEventHandler_101; }
	inline void set_OnInputUpEventHandler_101(EventFunction_1_tC57E1CD95652F75C7DF4A9377691010279215A3A * value)
	{
		___OnInputUpEventHandler_101 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputUpEventHandler_101), (void*)value);
	}

	inline static int32_t get_offset_of_OnInputUpWithActionEventHandler_102() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnInputUpWithActionEventHandler_102)); }
	inline EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C * get_OnInputUpWithActionEventHandler_102() const { return ___OnInputUpWithActionEventHandler_102; }
	inline EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C ** get_address_of_OnInputUpWithActionEventHandler_102() { return &___OnInputUpWithActionEventHandler_102; }
	inline void set_OnInputUpWithActionEventHandler_102(EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C * value)
	{
		___OnInputUpWithActionEventHandler_102 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputUpWithActionEventHandler_102), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnInputUpPerfMarker_103() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseOnInputUpPerfMarker_103)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnInputUpPerfMarker_103() const { return ___RaiseOnInputUpPerfMarker_103; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnInputUpPerfMarker_103() { return &___RaiseOnInputUpPerfMarker_103; }
	inline void set_RaiseOnInputUpPerfMarker_103(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnInputUpPerfMarker_103 = value;
	}

	inline static int32_t get_offset_of_OnFloatInputChanged_104() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnFloatInputChanged_104)); }
	inline EventFunction_1_tC719D520E8F678842B4340237D2294EFD0972F80 * get_OnFloatInputChanged_104() const { return ___OnFloatInputChanged_104; }
	inline EventFunction_1_tC719D520E8F678842B4340237D2294EFD0972F80 ** get_address_of_OnFloatInputChanged_104() { return &___OnFloatInputChanged_104; }
	inline void set_OnFloatInputChanged_104(EventFunction_1_tC719D520E8F678842B4340237D2294EFD0972F80 * value)
	{
		___OnFloatInputChanged_104 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFloatInputChanged_104), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFloatInputChangedPerfMarker_105() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseFloatInputChangedPerfMarker_105)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFloatInputChangedPerfMarker_105() const { return ___RaiseFloatInputChangedPerfMarker_105; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFloatInputChangedPerfMarker_105() { return &___RaiseFloatInputChangedPerfMarker_105; }
	inline void set_RaiseFloatInputChangedPerfMarker_105(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFloatInputChangedPerfMarker_105 = value;
	}

	inline static int32_t get_offset_of_OnTwoDoFInputChanged_106() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnTwoDoFInputChanged_106)); }
	inline EventFunction_1_tBF954CA12A41833F0D15B2E607ECF59F2C84E678 * get_OnTwoDoFInputChanged_106() const { return ___OnTwoDoFInputChanged_106; }
	inline EventFunction_1_tBF954CA12A41833F0D15B2E607ECF59F2C84E678 ** get_address_of_OnTwoDoFInputChanged_106() { return &___OnTwoDoFInputChanged_106; }
	inline void set_OnTwoDoFInputChanged_106(EventFunction_1_tBF954CA12A41833F0D15B2E607ECF59F2C84E678 * value)
	{
		___OnTwoDoFInputChanged_106 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTwoDoFInputChanged_106), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePositionInputChangedPerfMarker_107() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaisePositionInputChangedPerfMarker_107)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePositionInputChangedPerfMarker_107() const { return ___RaisePositionInputChangedPerfMarker_107; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePositionInputChangedPerfMarker_107() { return &___RaisePositionInputChangedPerfMarker_107; }
	inline void set_RaisePositionInputChangedPerfMarker_107(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePositionInputChangedPerfMarker_107 = value;
	}

	inline static int32_t get_offset_of_OnPositionInputChanged_108() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnPositionInputChanged_108)); }
	inline EventFunction_1_tB508CFAA006FF3367945429E3C9F69EB7CDA5228 * get_OnPositionInputChanged_108() const { return ___OnPositionInputChanged_108; }
	inline EventFunction_1_tB508CFAA006FF3367945429E3C9F69EB7CDA5228 ** get_address_of_OnPositionInputChanged_108() { return &___OnPositionInputChanged_108; }
	inline void set_OnPositionInputChanged_108(EventFunction_1_tB508CFAA006FF3367945429E3C9F69EB7CDA5228 * value)
	{
		___OnPositionInputChanged_108 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPositionInputChanged_108), (void*)value);
	}

	inline static int32_t get_offset_of_OnRotationInputChanged_109() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnRotationInputChanged_109)); }
	inline EventFunction_1_t3253ADDFEA7265300ADC8960950B81FA54DDCCC4 * get_OnRotationInputChanged_109() const { return ___OnRotationInputChanged_109; }
	inline EventFunction_1_t3253ADDFEA7265300ADC8960950B81FA54DDCCC4 ** get_address_of_OnRotationInputChanged_109() { return &___OnRotationInputChanged_109; }
	inline void set_OnRotationInputChanged_109(EventFunction_1_t3253ADDFEA7265300ADC8960950B81FA54DDCCC4 * value)
	{
		___OnRotationInputChanged_109 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRotationInputChanged_109), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseRotationInputChangedPerfMarker_110() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseRotationInputChangedPerfMarker_110)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseRotationInputChangedPerfMarker_110() const { return ___RaiseRotationInputChangedPerfMarker_110; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseRotationInputChangedPerfMarker_110() { return &___RaiseRotationInputChangedPerfMarker_110; }
	inline void set_RaiseRotationInputChangedPerfMarker_110(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseRotationInputChangedPerfMarker_110 = value;
	}

	inline static int32_t get_offset_of_OnPoseInputChanged_111() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnPoseInputChanged_111)); }
	inline EventFunction_1_t9C9F1F66388EF01DF4F3AA47482084635F4EEE1E * get_OnPoseInputChanged_111() const { return ___OnPoseInputChanged_111; }
	inline EventFunction_1_t9C9F1F66388EF01DF4F3AA47482084635F4EEE1E ** get_address_of_OnPoseInputChanged_111() { return &___OnPoseInputChanged_111; }
	inline void set_OnPoseInputChanged_111(EventFunction_1_t9C9F1F66388EF01DF4F3AA47482084635F4EEE1E * value)
	{
		___OnPoseInputChanged_111 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPoseInputChanged_111), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePoseInputChangedPerfMarker_112() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaisePoseInputChangedPerfMarker_112)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePoseInputChangedPerfMarker_112() const { return ___RaisePoseInputChangedPerfMarker_112; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePoseInputChangedPerfMarker_112() { return &___RaisePoseInputChangedPerfMarker_112; }
	inline void set_RaisePoseInputChangedPerfMarker_112(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePoseInputChangedPerfMarker_112 = value;
	}

	inline static int32_t get_offset_of_OnGestureStarted_113() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnGestureStarted_113)); }
	inline EventFunction_1_tC908899E305AEAC1A5D6BAB2CD937AB1A26FD493 * get_OnGestureStarted_113() const { return ___OnGestureStarted_113; }
	inline EventFunction_1_tC908899E305AEAC1A5D6BAB2CD937AB1A26FD493 ** get_address_of_OnGestureStarted_113() { return &___OnGestureStarted_113; }
	inline void set_OnGestureStarted_113(EventFunction_1_tC908899E305AEAC1A5D6BAB2CD937AB1A26FD493 * value)
	{
		___OnGestureStarted_113 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureStarted_113), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureStartedWithAction_114() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnGestureStartedWithAction_114)); }
	inline EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C * get_OnGestureStartedWithAction_114() const { return ___OnGestureStartedWithAction_114; }
	inline EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C ** get_address_of_OnGestureStartedWithAction_114() { return &___OnGestureStartedWithAction_114; }
	inline void set_OnGestureStartedWithAction_114(EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C * value)
	{
		___OnGestureStartedWithAction_114 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureStartedWithAction_114), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureStartedPerfMarker_115() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseGestureStartedPerfMarker_115)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureStartedPerfMarker_115() const { return ___RaiseGestureStartedPerfMarker_115; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureStartedPerfMarker_115() { return &___RaiseGestureStartedPerfMarker_115; }
	inline void set_RaiseGestureStartedPerfMarker_115(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureStartedPerfMarker_115 = value;
	}

	inline static int32_t get_offset_of_OnGestureUpdated_116() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnGestureUpdated_116)); }
	inline EventFunction_1_tC908899E305AEAC1A5D6BAB2CD937AB1A26FD493 * get_OnGestureUpdated_116() const { return ___OnGestureUpdated_116; }
	inline EventFunction_1_tC908899E305AEAC1A5D6BAB2CD937AB1A26FD493 ** get_address_of_OnGestureUpdated_116() { return &___OnGestureUpdated_116; }
	inline void set_OnGestureUpdated_116(EventFunction_1_tC908899E305AEAC1A5D6BAB2CD937AB1A26FD493 * value)
	{
		___OnGestureUpdated_116 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureUpdated_116), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureUpdatedPerfMarker_117() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseGestureUpdatedPerfMarker_117)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureUpdatedPerfMarker_117() const { return ___RaiseGestureUpdatedPerfMarker_117; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureUpdatedPerfMarker_117() { return &___RaiseGestureUpdatedPerfMarker_117; }
	inline void set_RaiseGestureUpdatedPerfMarker_117(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureUpdatedPerfMarker_117 = value;
	}

	inline static int32_t get_offset_of_OnGestureVector2PositionUpdated_118() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnGestureVector2PositionUpdated_118)); }
	inline EventFunction_1_t6C4BDE466A5978FE0CEF13FD3DF90FC630973811 * get_OnGestureVector2PositionUpdated_118() const { return ___OnGestureVector2PositionUpdated_118; }
	inline EventFunction_1_t6C4BDE466A5978FE0CEF13FD3DF90FC630973811 ** get_address_of_OnGestureVector2PositionUpdated_118() { return &___OnGestureVector2PositionUpdated_118; }
	inline void set_OnGestureVector2PositionUpdated_118(EventFunction_1_t6C4BDE466A5978FE0CEF13FD3DF90FC630973811 * value)
	{
		___OnGestureVector2PositionUpdated_118 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureVector2PositionUpdated_118), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePositionUpdated_119() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnGesturePositionUpdated_119)); }
	inline EventFunction_1_t5465873904C474AC221DCF44F710FD54487A2F27 * get_OnGesturePositionUpdated_119() const { return ___OnGesturePositionUpdated_119; }
	inline EventFunction_1_t5465873904C474AC221DCF44F710FD54487A2F27 ** get_address_of_OnGesturePositionUpdated_119() { return &___OnGesturePositionUpdated_119; }
	inline void set_OnGesturePositionUpdated_119(EventFunction_1_t5465873904C474AC221DCF44F710FD54487A2F27 * value)
	{
		___OnGesturePositionUpdated_119 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePositionUpdated_119), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureRotationUpdated_120() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnGestureRotationUpdated_120)); }
	inline EventFunction_1_t5AB8873D84772BCF077E9CA165D1081872A49688 * get_OnGestureRotationUpdated_120() const { return ___OnGestureRotationUpdated_120; }
	inline EventFunction_1_t5AB8873D84772BCF077E9CA165D1081872A49688 ** get_address_of_OnGestureRotationUpdated_120() { return &___OnGestureRotationUpdated_120; }
	inline void set_OnGestureRotationUpdated_120(EventFunction_1_t5AB8873D84772BCF077E9CA165D1081872A49688 * value)
	{
		___OnGestureRotationUpdated_120 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureRotationUpdated_120), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePoseUpdated_121() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnGesturePoseUpdated_121)); }
	inline EventFunction_1_t8D6E76DB3F4CEA6D77E4CDCF4CFCA1B1A33B35DA * get_OnGesturePoseUpdated_121() const { return ___OnGesturePoseUpdated_121; }
	inline EventFunction_1_t8D6E76DB3F4CEA6D77E4CDCF4CFCA1B1A33B35DA ** get_address_of_OnGesturePoseUpdated_121() { return &___OnGesturePoseUpdated_121; }
	inline void set_OnGesturePoseUpdated_121(EventFunction_1_t8D6E76DB3F4CEA6D77E4CDCF4CFCA1B1A33B35DA * value)
	{
		___OnGesturePoseUpdated_121 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePoseUpdated_121), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCompleted_122() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnGestureCompleted_122)); }
	inline EventFunction_1_tC908899E305AEAC1A5D6BAB2CD937AB1A26FD493 * get_OnGestureCompleted_122() const { return ___OnGestureCompleted_122; }
	inline EventFunction_1_tC908899E305AEAC1A5D6BAB2CD937AB1A26FD493 ** get_address_of_OnGestureCompleted_122() { return &___OnGestureCompleted_122; }
	inline void set_OnGestureCompleted_122(EventFunction_1_tC908899E305AEAC1A5D6BAB2CD937AB1A26FD493 * value)
	{
		___OnGestureCompleted_122 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCompleted_122), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCompletedWithAction_123() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnGestureCompletedWithAction_123)); }
	inline EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C * get_OnGestureCompletedWithAction_123() const { return ___OnGestureCompletedWithAction_123; }
	inline EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C ** get_address_of_OnGestureCompletedWithAction_123() { return &___OnGestureCompletedWithAction_123; }
	inline void set_OnGestureCompletedWithAction_123(EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C * value)
	{
		___OnGestureCompletedWithAction_123 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCompletedWithAction_123), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureCompletedPerfMarker_124() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseGestureCompletedPerfMarker_124)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureCompletedPerfMarker_124() const { return ___RaiseGestureCompletedPerfMarker_124; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureCompletedPerfMarker_124() { return &___RaiseGestureCompletedPerfMarker_124; }
	inline void set_RaiseGestureCompletedPerfMarker_124(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureCompletedPerfMarker_124 = value;
	}

	inline static int32_t get_offset_of_OnGestureVector2PositionCompleted_125() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnGestureVector2PositionCompleted_125)); }
	inline EventFunction_1_t6C4BDE466A5978FE0CEF13FD3DF90FC630973811 * get_OnGestureVector2PositionCompleted_125() const { return ___OnGestureVector2PositionCompleted_125; }
	inline EventFunction_1_t6C4BDE466A5978FE0CEF13FD3DF90FC630973811 ** get_address_of_OnGestureVector2PositionCompleted_125() { return &___OnGestureVector2PositionCompleted_125; }
	inline void set_OnGestureVector2PositionCompleted_125(EventFunction_1_t6C4BDE466A5978FE0CEF13FD3DF90FC630973811 * value)
	{
		___OnGestureVector2PositionCompleted_125 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureVector2PositionCompleted_125), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePositionCompleted_126() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnGesturePositionCompleted_126)); }
	inline EventFunction_1_t5465873904C474AC221DCF44F710FD54487A2F27 * get_OnGesturePositionCompleted_126() const { return ___OnGesturePositionCompleted_126; }
	inline EventFunction_1_t5465873904C474AC221DCF44F710FD54487A2F27 ** get_address_of_OnGesturePositionCompleted_126() { return &___OnGesturePositionCompleted_126; }
	inline void set_OnGesturePositionCompleted_126(EventFunction_1_t5465873904C474AC221DCF44F710FD54487A2F27 * value)
	{
		___OnGesturePositionCompleted_126 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePositionCompleted_126), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureRotationCompleted_127() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnGestureRotationCompleted_127)); }
	inline EventFunction_1_t5AB8873D84772BCF077E9CA165D1081872A49688 * get_OnGestureRotationCompleted_127() const { return ___OnGestureRotationCompleted_127; }
	inline EventFunction_1_t5AB8873D84772BCF077E9CA165D1081872A49688 ** get_address_of_OnGestureRotationCompleted_127() { return &___OnGestureRotationCompleted_127; }
	inline void set_OnGestureRotationCompleted_127(EventFunction_1_t5AB8873D84772BCF077E9CA165D1081872A49688 * value)
	{
		___OnGestureRotationCompleted_127 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureRotationCompleted_127), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePoseCompleted_128() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnGesturePoseCompleted_128)); }
	inline EventFunction_1_t8D6E76DB3F4CEA6D77E4CDCF4CFCA1B1A33B35DA * get_OnGesturePoseCompleted_128() const { return ___OnGesturePoseCompleted_128; }
	inline EventFunction_1_t8D6E76DB3F4CEA6D77E4CDCF4CFCA1B1A33B35DA ** get_address_of_OnGesturePoseCompleted_128() { return &___OnGesturePoseCompleted_128; }
	inline void set_OnGesturePoseCompleted_128(EventFunction_1_t8D6E76DB3F4CEA6D77E4CDCF4CFCA1B1A33B35DA * value)
	{
		___OnGesturePoseCompleted_128 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePoseCompleted_128), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCanceled_129() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnGestureCanceled_129)); }
	inline EventFunction_1_tC908899E305AEAC1A5D6BAB2CD937AB1A26FD493 * get_OnGestureCanceled_129() const { return ___OnGestureCanceled_129; }
	inline EventFunction_1_tC908899E305AEAC1A5D6BAB2CD937AB1A26FD493 ** get_address_of_OnGestureCanceled_129() { return &___OnGestureCanceled_129; }
	inline void set_OnGestureCanceled_129(EventFunction_1_tC908899E305AEAC1A5D6BAB2CD937AB1A26FD493 * value)
	{
		___OnGestureCanceled_129 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCanceled_129), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureCanceledPerfMarker_130() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseGestureCanceledPerfMarker_130)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureCanceledPerfMarker_130() const { return ___RaiseGestureCanceledPerfMarker_130; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureCanceledPerfMarker_130() { return &___RaiseGestureCanceledPerfMarker_130; }
	inline void set_RaiseGestureCanceledPerfMarker_130(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureCanceledPerfMarker_130 = value;
	}

	inline static int32_t get_offset_of_OnSpeechKeywordRecognizedEventHandler_131() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnSpeechKeywordRecognizedEventHandler_131)); }
	inline EventFunction_1_tAFCD0133A02DD79257577FAE998A07C817B769A8 * get_OnSpeechKeywordRecognizedEventHandler_131() const { return ___OnSpeechKeywordRecognizedEventHandler_131; }
	inline EventFunction_1_tAFCD0133A02DD79257577FAE998A07C817B769A8 ** get_address_of_OnSpeechKeywordRecognizedEventHandler_131() { return &___OnSpeechKeywordRecognizedEventHandler_131; }
	inline void set_OnSpeechKeywordRecognizedEventHandler_131(EventFunction_1_tAFCD0133A02DD79257577FAE998A07C817B769A8 * value)
	{
		___OnSpeechKeywordRecognizedEventHandler_131 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpeechKeywordRecognizedEventHandler_131), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpeechKeywordRecognizedWithActionEventHandler_132() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnSpeechKeywordRecognizedWithActionEventHandler_132)); }
	inline EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C * get_OnSpeechKeywordRecognizedWithActionEventHandler_132() const { return ___OnSpeechKeywordRecognizedWithActionEventHandler_132; }
	inline EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C ** get_address_of_OnSpeechKeywordRecognizedWithActionEventHandler_132() { return &___OnSpeechKeywordRecognizedWithActionEventHandler_132; }
	inline void set_OnSpeechKeywordRecognizedWithActionEventHandler_132(EventFunction_1_tE503949E73C706BD089A98D7C29AD1DA2752F59C * value)
	{
		___OnSpeechKeywordRecognizedWithActionEventHandler_132 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpeechKeywordRecognizedWithActionEventHandler_132), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSpeechCommandRecognizedPerfMarker_133() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseSpeechCommandRecognizedPerfMarker_133)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSpeechCommandRecognizedPerfMarker_133() const { return ___RaiseSpeechCommandRecognizedPerfMarker_133; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSpeechCommandRecognizedPerfMarker_133() { return &___RaiseSpeechCommandRecognizedPerfMarker_133; }
	inline void set_RaiseSpeechCommandRecognizedPerfMarker_133(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSpeechCommandRecognizedPerfMarker_133 = value;
	}

	inline static int32_t get_offset_of_OnDictationHypothesisEventHandler_134() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnDictationHypothesisEventHandler_134)); }
	inline EventFunction_1_tF81B5FDDB6666DB7C9E99521EA932CD1E044D3A1 * get_OnDictationHypothesisEventHandler_134() const { return ___OnDictationHypothesisEventHandler_134; }
	inline EventFunction_1_tF81B5FDDB6666DB7C9E99521EA932CD1E044D3A1 ** get_address_of_OnDictationHypothesisEventHandler_134() { return &___OnDictationHypothesisEventHandler_134; }
	inline void set_OnDictationHypothesisEventHandler_134(EventFunction_1_tF81B5FDDB6666DB7C9E99521EA932CD1E044D3A1 * value)
	{
		___OnDictationHypothesisEventHandler_134 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationHypothesisEventHandler_134), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationHypothesisPerfMarker_135() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseDictationHypothesisPerfMarker_135)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationHypothesisPerfMarker_135() const { return ___RaiseDictationHypothesisPerfMarker_135; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationHypothesisPerfMarker_135() { return &___RaiseDictationHypothesisPerfMarker_135; }
	inline void set_RaiseDictationHypothesisPerfMarker_135(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationHypothesisPerfMarker_135 = value;
	}

	inline static int32_t get_offset_of_OnDictationResultEventHandler_136() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnDictationResultEventHandler_136)); }
	inline EventFunction_1_tF81B5FDDB6666DB7C9E99521EA932CD1E044D3A1 * get_OnDictationResultEventHandler_136() const { return ___OnDictationResultEventHandler_136; }
	inline EventFunction_1_tF81B5FDDB6666DB7C9E99521EA932CD1E044D3A1 ** get_address_of_OnDictationResultEventHandler_136() { return &___OnDictationResultEventHandler_136; }
	inline void set_OnDictationResultEventHandler_136(EventFunction_1_tF81B5FDDB6666DB7C9E99521EA932CD1E044D3A1 * value)
	{
		___OnDictationResultEventHandler_136 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationResultEventHandler_136), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationResultPerfMarker_137() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseDictationResultPerfMarker_137)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationResultPerfMarker_137() const { return ___RaiseDictationResultPerfMarker_137; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationResultPerfMarker_137() { return &___RaiseDictationResultPerfMarker_137; }
	inline void set_RaiseDictationResultPerfMarker_137(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationResultPerfMarker_137 = value;
	}

	inline static int32_t get_offset_of_OnDictationCompleteEventHandler_138() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnDictationCompleteEventHandler_138)); }
	inline EventFunction_1_tF81B5FDDB6666DB7C9E99521EA932CD1E044D3A1 * get_OnDictationCompleteEventHandler_138() const { return ___OnDictationCompleteEventHandler_138; }
	inline EventFunction_1_tF81B5FDDB6666DB7C9E99521EA932CD1E044D3A1 ** get_address_of_OnDictationCompleteEventHandler_138() { return &___OnDictationCompleteEventHandler_138; }
	inline void set_OnDictationCompleteEventHandler_138(EventFunction_1_tF81B5FDDB6666DB7C9E99521EA932CD1E044D3A1 * value)
	{
		___OnDictationCompleteEventHandler_138 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationCompleteEventHandler_138), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationCompletePerfMarker_139() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseDictationCompletePerfMarker_139)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationCompletePerfMarker_139() const { return ___RaiseDictationCompletePerfMarker_139; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationCompletePerfMarker_139() { return &___RaiseDictationCompletePerfMarker_139; }
	inline void set_RaiseDictationCompletePerfMarker_139(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationCompletePerfMarker_139 = value;
	}

	inline static int32_t get_offset_of_OnDictationErrorEventHandler_140() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnDictationErrorEventHandler_140)); }
	inline EventFunction_1_tF81B5FDDB6666DB7C9E99521EA932CD1E044D3A1 * get_OnDictationErrorEventHandler_140() const { return ___OnDictationErrorEventHandler_140; }
	inline EventFunction_1_tF81B5FDDB6666DB7C9E99521EA932CD1E044D3A1 ** get_address_of_OnDictationErrorEventHandler_140() { return &___OnDictationErrorEventHandler_140; }
	inline void set_OnDictationErrorEventHandler_140(EventFunction_1_tF81B5FDDB6666DB7C9E99521EA932CD1E044D3A1 * value)
	{
		___OnDictationErrorEventHandler_140 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationErrorEventHandler_140), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationErrorPerfMarker_141() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseDictationErrorPerfMarker_141)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationErrorPerfMarker_141() const { return ___RaiseDictationErrorPerfMarker_141; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationErrorPerfMarker_141() { return &___RaiseDictationErrorPerfMarker_141; }
	inline void set_RaiseDictationErrorPerfMarker_141(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationErrorPerfMarker_141 = value;
	}

	inline static int32_t get_offset_of_OnHandJointsUpdatedEventHandler_142() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnHandJointsUpdatedEventHandler_142)); }
	inline EventFunction_1_t4B256856AEE0068FA253283964F6E7F860CFEA00 * get_OnHandJointsUpdatedEventHandler_142() const { return ___OnHandJointsUpdatedEventHandler_142; }
	inline EventFunction_1_t4B256856AEE0068FA253283964F6E7F860CFEA00 ** get_address_of_OnHandJointsUpdatedEventHandler_142() { return &___OnHandJointsUpdatedEventHandler_142; }
	inline void set_OnHandJointsUpdatedEventHandler_142(EventFunction_1_t4B256856AEE0068FA253283964F6E7F860CFEA00 * value)
	{
		___OnHandJointsUpdatedEventHandler_142 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHandJointsUpdatedEventHandler_142), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseHandJointsUpdatedPerfMarker_143() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseHandJointsUpdatedPerfMarker_143)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseHandJointsUpdatedPerfMarker_143() const { return ___RaiseHandJointsUpdatedPerfMarker_143; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseHandJointsUpdatedPerfMarker_143() { return &___RaiseHandJointsUpdatedPerfMarker_143; }
	inline void set_RaiseHandJointsUpdatedPerfMarker_143(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseHandJointsUpdatedPerfMarker_143 = value;
	}

	inline static int32_t get_offset_of_OnHandMeshUpdatedEventHandler_144() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnHandMeshUpdatedEventHandler_144)); }
	inline EventFunction_1_t46B838A0C9EB5FF9ACF435959AC0B0A5A3CAA926 * get_OnHandMeshUpdatedEventHandler_144() const { return ___OnHandMeshUpdatedEventHandler_144; }
	inline EventFunction_1_t46B838A0C9EB5FF9ACF435959AC0B0A5A3CAA926 ** get_address_of_OnHandMeshUpdatedEventHandler_144() { return &___OnHandMeshUpdatedEventHandler_144; }
	inline void set_OnHandMeshUpdatedEventHandler_144(EventFunction_1_t46B838A0C9EB5FF9ACF435959AC0B0A5A3CAA926 * value)
	{
		___OnHandMeshUpdatedEventHandler_144 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHandMeshUpdatedEventHandler_144), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseHandMeshUpdatedPerfMarker_145() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseHandMeshUpdatedPerfMarker_145)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseHandMeshUpdatedPerfMarker_145() const { return ___RaiseHandMeshUpdatedPerfMarker_145; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseHandMeshUpdatedPerfMarker_145() { return &___RaiseHandMeshUpdatedPerfMarker_145; }
	inline void set_RaiseHandMeshUpdatedPerfMarker_145(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseHandMeshUpdatedPerfMarker_145 = value;
	}

	inline static int32_t get_offset_of_OnTouchStartedEventHandler_146() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnTouchStartedEventHandler_146)); }
	inline EventFunction_1_t367770E68B290A5DD54E069E04B83F2EE5A59872 * get_OnTouchStartedEventHandler_146() const { return ___OnTouchStartedEventHandler_146; }
	inline EventFunction_1_t367770E68B290A5DD54E069E04B83F2EE5A59872 ** get_address_of_OnTouchStartedEventHandler_146() { return &___OnTouchStartedEventHandler_146; }
	inline void set_OnTouchStartedEventHandler_146(EventFunction_1_t367770E68B290A5DD54E069E04B83F2EE5A59872 * value)
	{
		___OnTouchStartedEventHandler_146 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchStartedEventHandler_146), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchStartedPerfMarker_147() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseOnTouchStartedPerfMarker_147)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchStartedPerfMarker_147() const { return ___RaiseOnTouchStartedPerfMarker_147; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchStartedPerfMarker_147() { return &___RaiseOnTouchStartedPerfMarker_147; }
	inline void set_RaiseOnTouchStartedPerfMarker_147(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchStartedPerfMarker_147 = value;
	}

	inline static int32_t get_offset_of_OnTouchCompletedEventHandler_148() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnTouchCompletedEventHandler_148)); }
	inline EventFunction_1_t367770E68B290A5DD54E069E04B83F2EE5A59872 * get_OnTouchCompletedEventHandler_148() const { return ___OnTouchCompletedEventHandler_148; }
	inline EventFunction_1_t367770E68B290A5DD54E069E04B83F2EE5A59872 ** get_address_of_OnTouchCompletedEventHandler_148() { return &___OnTouchCompletedEventHandler_148; }
	inline void set_OnTouchCompletedEventHandler_148(EventFunction_1_t367770E68B290A5DD54E069E04B83F2EE5A59872 * value)
	{
		___OnTouchCompletedEventHandler_148 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchCompletedEventHandler_148), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchCompletedPerfMarker_149() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseOnTouchCompletedPerfMarker_149)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchCompletedPerfMarker_149() const { return ___RaiseOnTouchCompletedPerfMarker_149; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchCompletedPerfMarker_149() { return &___RaiseOnTouchCompletedPerfMarker_149; }
	inline void set_RaiseOnTouchCompletedPerfMarker_149(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchCompletedPerfMarker_149 = value;
	}

	inline static int32_t get_offset_of_OnTouchUpdatedEventHandler_150() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___OnTouchUpdatedEventHandler_150)); }
	inline EventFunction_1_t367770E68B290A5DD54E069E04B83F2EE5A59872 * get_OnTouchUpdatedEventHandler_150() const { return ___OnTouchUpdatedEventHandler_150; }
	inline EventFunction_1_t367770E68B290A5DD54E069E04B83F2EE5A59872 ** get_address_of_OnTouchUpdatedEventHandler_150() { return &___OnTouchUpdatedEventHandler_150; }
	inline void set_OnTouchUpdatedEventHandler_150(EventFunction_1_t367770E68B290A5DD54E069E04B83F2EE5A59872 * value)
	{
		___OnTouchUpdatedEventHandler_150 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchUpdatedEventHandler_150), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchUpdatedPerfMarker_151() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___RaiseOnTouchUpdatedPerfMarker_151)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchUpdatedPerfMarker_151() const { return ___RaiseOnTouchUpdatedPerfMarker_151; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchUpdatedPerfMarker_151() { return &___RaiseOnTouchUpdatedPerfMarker_151; }
	inline void set_RaiseOnTouchUpdatedPerfMarker_151(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchUpdatedPerfMarker_151 = value;
	}

	inline static int32_t get_offset_of_ProcessRulesInternalPerfMarker_152() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_StaticFields, ___ProcessRulesInternalPerfMarker_152)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessRulesInternalPerfMarker_152() const { return ___ProcessRulesInternalPerfMarker_152; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessRulesInternalPerfMarker_152() { return &___ProcessRulesInternalPerfMarker_152; }
	inline void set_ProcessRulesInternalPerfMarker_152(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessRulesInternalPerfMarker_152 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);


// System.Void Windows.Media.Capture.MediaCaptureFailedEventHandler::Invoke(Windows.Media.Capture.MediaCapture,Windows.Media.Capture.MediaCaptureFailedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCaptureFailedEventHandler_Invoke_mA0E20C949076278BA71927BFC8496A5C1A2F118A (MediaCaptureFailedEventHandler_t67F2EC5DBFC6ECD77A4883D5E7993B66179078BF * __this, MediaCapture_tAE6EEA0560A75B38B07232CB39FDEEFCF7834521 * ___sender0, MediaCaptureFailedEventArgs_t367A678799346B060B956D7A09266A9E4D198A21 * ___errorEventArgs1, const RuntimeMethod* method);
// System.Byte System.Int32::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Int32::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Int32::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Int32::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Int32::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Int32::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Int32::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Int32::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);

// COM Callable Wrapper for Windows.Foundation.Numerics.Matrix4x4
struct Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper>, IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB1385E16B3DF2EBB57B6A2953C5ACFFB0F57E766(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82  returnValue;
		try
		{
			returnValue = *static_cast<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 *>(UnBox(GetManagedObjectInline(), Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Media.Capture.MediaCaptureFailedEventHandler
struct MediaCaptureFailedEventHandler_t67F2EC5DBFC6ECD77A4883D5E7993B66179078BF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MediaCaptureFailedEventHandler_t67F2EC5DBFC6ECD77A4883D5E7993B66179078BF_ComCallableWrapper>, IMediaCaptureFailedEventHandler_t67F2EC5DBFC6ECD77A4883D5E7993B66179078BF_ComCallableWrapper
{
	inline MediaCaptureFailedEventHandler_t67F2EC5DBFC6ECD77A4883D5E7993B66179078BF_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<MediaCaptureFailedEventHandler_t67F2EC5DBFC6ECD77A4883D5E7993B66179078BF_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMediaCaptureFailedEventHandler_t67F2EC5DBFC6ECD77A4883D5E7993B66179078BF_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMediaCaptureFailedEventHandler_t67F2EC5DBFC6ECD77A4883D5E7993B66179078BF_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Media.Capture.MediaCaptureFailedEventHandler
	virtual il2cpp_hresult_t STDCALL Invoke(IMediaCapture_tFE423BDE30996E472973B721D6F12E0BC872B959* ___sender0, IMediaCaptureFailedEventArgs_t7DF1155C49DD8AEA9E834484125B15B6EC716286* ___errorEventArgs1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaCaptureFailedEventArgs_t367A678799346B060B956D7A09266A9E4D198A21_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaCapture_tAE6EEA0560A75B38B07232CB39FDEEFCF7834521_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___sender0' to managed representation
		MediaCapture_tAE6EEA0560A75B38B07232CB39FDEEFCF7834521 * ____sender0_unmarshaled = NULL;
		if (___sender0 != NULL)
		{
			____sender0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<MediaCapture_tAE6EEA0560A75B38B07232CB39FDEEFCF7834521>(___sender0, MediaCapture_tAE6EEA0560A75B38B07232CB39FDEEFCF7834521_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____sender0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____sender0_unmarshaled), IMediaCapture_tFE423BDE30996E472973B721D6F12E0BC872B959::IID, ___sender0);
			}
		}
		else
		{
			____sender0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___errorEventArgs1' to managed representation
		MediaCaptureFailedEventArgs_t367A678799346B060B956D7A09266A9E4D198A21 * ____errorEventArgs1_unmarshaled = NULL;
		if (___errorEventArgs1 != NULL)
		{
			____errorEventArgs1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<MediaCaptureFailedEventArgs_t367A678799346B060B956D7A09266A9E4D198A21>(___errorEventArgs1, MediaCaptureFailedEventArgs_t367A678799346B060B956D7A09266A9E4D198A21_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____errorEventArgs1_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____errorEventArgs1_unmarshaled), IMediaCaptureFailedEventArgs_t7DF1155C49DD8AEA9E834484125B15B6EC716286::IID, ___errorEventArgs1);
			}
		}
		else
		{
			____errorEventArgs1_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			MediaCaptureFailedEventHandler_t67F2EC5DBFC6ECD77A4883D5E7993B66179078BF * __thisValue = (MediaCaptureFailedEventHandler_t67F2EC5DBFC6ECD77A4883D5E7993B66179078BF *)GetManagedObjectInline();
			MediaCaptureFailedEventHandler_Invoke_mA0E20C949076278BA71927BFC8496A5C1A2F118A(__thisValue, ____sender0_unmarshaled, ____errorEventArgs1_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MediaCaptureFailedEventHandler_t67F2EC5DBFC6ECD77A4883D5E7993B66179078BF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MediaCaptureFailedEventHandler_t67F2EC5DBFC6ECD77A4883D5E7993B66179078BF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MediaCaptureFailedEventHandler_t67F2EC5DBFC6ECD77A4883D5E7993B66179078BF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Media.Capture.MediaStreamType
struct MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_ComCallableWrapper>, IReference_1_t104643937D38C88C645B55BFDFD57B66426E93F1, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t104643937D38C88C645B55BFDFD57B66426E93F1::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t104643937D38C88C645B55BFDFD57B66426E93F1*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t104643937D38C88C645B55BFDFD57B66426E93F1::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1252900F9D67B67AD1C5F10EBE51EA2FEF474F5D(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = true;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint8_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}

			try
			{
				uint8_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var));
			try
			{
				int16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}

			try
			{
				uint16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}

			try
			{
				uint32_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var));
			try
			{
				int64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}

			try
			{
				uint64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		float returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var));
			try
			{
				float il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Single");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		double returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_il2cpp_TypeInfo_var));
			try
			{
				double il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Double");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MediaStreamType_t3B940DCF78A85B81C981C6CFD8CB6942216F8184_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Voice.Unity.UtilityScripts.MicAmplifierFloat
struct MicAmplifierFloat_t991E0AF1091944A20CCAF02068812176F37F9906_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MicAmplifierFloat_t991E0AF1091944A20CCAF02068812176F37F9906_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MicAmplifierFloat_t991E0AF1091944A20CCAF02068812176F37F9906_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MicAmplifierFloat_t991E0AF1091944A20CCAF02068812176F37F9906_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MicAmplifierFloat_t991E0AF1091944A20CCAF02068812176F37F9906(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MicAmplifierFloat_t991E0AF1091944A20CCAF02068812176F37F9906_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MicAmplifierFloat_t991E0AF1091944A20CCAF02068812176F37F9906_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Voice.Unity.UtilityScripts.MicAmplifierShort
struct MicAmplifierShort_tD227CCB351537BAD41446C52140D182C83E6138C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MicAmplifierShort_tD227CCB351537BAD41446C52140D182C83E6138C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MicAmplifierShort_tD227CCB351537BAD41446C52140D182C83E6138C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MicAmplifierShort_tD227CCB351537BAD41446C52140D182C83E6138C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MicAmplifierShort_tD227CCB351537BAD41446C52140D182C83E6138C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MicAmplifierShort_tD227CCB351537BAD41446C52140D182C83E6138C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MicAmplifierShort_tD227CCB351537BAD41446C52140D182C83E6138C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Voice.Unity.MicWrapper
struct MicWrapper_tA6159AB7D765EEC4AA2ED65783AAB96D2DDDF192_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MicWrapper_tA6159AB7D765EEC4AA2ED65783AAB96D2DDDF192_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MicWrapper_tA6159AB7D765EEC4AA2ED65783AAB96D2DDDF192_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MicWrapper_tA6159AB7D765EEC4AA2ED65783AAB96D2DDDF192_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MicWrapper_tA6159AB7D765EEC4AA2ED65783AAB96D2DDDF192(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MicWrapper_tA6159AB7D765EEC4AA2ED65783AAB96D2DDDF192_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MicWrapper_tA6159AB7D765EEC4AA2ED65783AAB96D2DDDF192_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Voice.Unity.MicWrapperPusher
struct MicWrapperPusher_t324867E2CECA78ED13D8858D42FB7BC9AC69CE79_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MicWrapperPusher_t324867E2CECA78ED13D8858D42FB7BC9AC69CE79_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MicWrapperPusher_t324867E2CECA78ED13D8858D42FB7BC9AC69CE79_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MicWrapperPusher_t324867E2CECA78ED13D8858D42FB7BC9AC69CE79_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MicWrapperPusher_t324867E2CECA78ED13D8858D42FB7BC9AC69CE79(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MicWrapperPusher_t324867E2CECA78ED13D8858D42FB7BC9AC69CE79_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MicWrapperPusher_t324867E2CECA78ED13D8858D42FB7BC9AC69CE79_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_tC0EAC5210C1662A605E03808DE42CBB873C5018D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityCameraSystem_tC0EAC5210C1662A605E03808DE42CBB873C5018D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityCameraSystem_tC0EAC5210C1662A605E03808DE42CBB873C5018D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityCameraSystem_tC0EAC5210C1662A605E03808DE42CBB873C5018D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityCameraSystem_tC0EAC5210C1662A605E03808DE42CBB873C5018D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityCameraSystem_tC0EAC5210C1662A605E03808DE42CBB873C5018D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityCameraSystem_tC0EAC5210C1662A605E03808DE42CBB873C5018D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityDiagnosticsSystem_t202DC023A72F5965E5D0DEF3F7B7A2DA10BC5910_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem
struct MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityInputSystem_tD73DD1D5F46C0013633582889171941CBF3D562C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem
struct MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealitySceneSystem_t965AFFFA32EF032218CFAD5B12070E47A8A1A958_ComCallableWrapper(obj));
}
