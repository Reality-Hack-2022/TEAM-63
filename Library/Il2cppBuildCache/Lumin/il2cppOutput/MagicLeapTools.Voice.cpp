#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<UnityEngine.XR.MagicLeap.MLResult>
struct Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLResult/Code,UnityEngine.XR.MagicLeap.MLResult>
struct Dictionary_2_tD6F5BABC8E0815B66CB3FCE70A8A0FCF9837CBF1;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// MagicLeapTools.Voice.SpeechContext[]
struct SpeechContextU5BU5D_tD2805A4D8AD00BAB8C8EE7322CA43877E700AA07;
// MagicLeapTools.Voice.SpeechRecognitionAlternative[]
struct SpeechRecognitionAlternativeU5BU5D_t684D82A5F2431F89EB15F27BA4F1E87C990F01C5;
// MagicLeapTools.Voice.SpeechRecognitionResult[]
struct SpeechRecognitionResultU5BU5D_tE66E11BBEEC6DC6E9422B124CC8A97BD2D98BB00;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.XR.MagicLeap.MLPrivileges/Id[]
struct IdU5BU5D_t0B440052AA3AC3DFF832C1D1A50DD51C4A41578E;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// MagicLeapTools.Voice.GoogleRequestData
struct GoogleRequestData_tC1DFDCCDC6A73F155AA1BA410340FF9C5F283513;
// MagicLeapTools.Voice.GoogleSpeechToText
struct GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MagicLeapTools.MicPrivilegeHandler
struct MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// MagicLeapTools.Voice.RecognitionAudio
struct RecognitionAudio_t83AC76B77D060BB6FECAB42E357073F4FE00A439;
// MagicLeapTools.Voice.RecognitionConfig
struct RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// MagicLeapTools.Voice.SpeechContext
struct SpeechContext_tAAF8FEA439340BCFDD3F6BDC3B72A7F3A7DB05A3;
// MagicLeapTools.Voice.SpeechProcessed
struct SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A;
// MagicLeapTools.Voice.SpeechRecognitionAlternative
struct SpeechRecognitionAlternative_t554258DCE2502836D1447AD3DE65BB5E7D08A0BE;
// MagicLeapTools.Voice.SpeechRecognitionResult
struct SpeechRecognitionResult_t92F1E65BF6CA359B429837A17EC8EDB269D3CBE3;
// MagicLeapTools.Voice.SpeechRecognitionResultObj
struct SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0;
// MagicLeapTools.Voice.SpeechToText
struct SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E;
// MagicLeapTools.Voice.StateUpdated
struct StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D;
// System.String
struct String_t;
// MagicLeapTools.Voice.TrackedPhraseFound
struct TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// MagicLeapTools.Voice.UntrackedPhraseFound
struct UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// MagicLeapTools.Voice.GoogleSpeechToText/<PostGoogleRequest>d__20
struct U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3;
// UnityEngine.XR.MagicLeap.MLPrivileges/CallbackDelegate
struct CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783;
// MagicLeapTools.MicPrivilegeHandler/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7;
// MagicLeapTools.MicPrivilegeHandler/HandleMicPrivilegeResult
struct HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleRequestData_tC1DFDCCDC6A73F155AA1BA410340FF9C5F283513_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IdU5BU5D_t0B440052AA3AC3DFF832C1D1A50DD51C4A41578E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Id_t37BF3211DEB98C61C6547A940D23B015089A01A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MLResult_t16167FAD492D3A6F53116897898D23453C72B635_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionAudio_t83AC76B77D060BB6FECAB42E357073F4FE00A439_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechContextU5BU5D_tD2805A4D8AD00BAB8C8EE7322CA43877E700AA07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionAlternativeU5BU5D_t684D82A5F2431F89EB15F27BA4F1E87C990F01C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionResultU5BU5D_tE66E11BBEEC6DC6E9422B124CC8A97BD2D98BB00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechToTextStates_tBD972955780B95B8831E1C5FEDFB65654A5ADBAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral1ADDA9210693AFD36869AC62ACC5F5D2293F0B0B;
IL2CPP_EXTERN_C String_t* _stringLiteral2F8DB3F6C43AA381D675F48187C31A4A77B41C6A;
IL2CPP_EXTERN_C String_t* _stringLiteral300FC3231BA4F5CF33D2327F9AABCEA0C7EBE319;
IL2CPP_EXTERN_C String_t* _stringLiteral33AC2E661539B219923CAD378571D4B0F2E14FBA;
IL2CPP_EXTERN_C String_t* _stringLiteral3A971881AF6B7B211E34707E857DEC5F36487877;
IL2CPP_EXTERN_C String_t* _stringLiteral3CAA36A8EFE8532C2E814DC7DF04D74806AB8E5B;
IL2CPP_EXTERN_C String_t* _stringLiteral40735F9363DD17CDBD77AEB074E110B942E0A4A9;
IL2CPP_EXTERN_C String_t* _stringLiteral50C1748082D879E0DC7AE31B46109981BB9AFC0A;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral7411BB52A7D8C5DCEF9C418D6800018D7332EC63;
IL2CPP_EXTERN_C String_t* _stringLiteral79CEB5181088B0DF5FB4D76925F75E147EFEBBD4;
IL2CPP_EXTERN_C String_t* _stringLiteral838FE9164E7AEF1F8109DBFA98C79FB7F99C8522;
IL2CPP_EXTERN_C String_t* _stringLiteral86CA2392D0BB11214E0F43EE3F9EEAFFAB1F97D9;
IL2CPP_EXTERN_C String_t* _stringLiteral8AE348DAF6D0B1E933233EA311FF3D8776A446A3;
IL2CPP_EXTERN_C String_t* _stringLiteralCB8078CC04C9FB86F02DC8CA2FD97B5D44C4EAC7;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF688BD2B757B309262986F46A2E5261C777D819C;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mE477DD51DDD869219EB8AEA14D222D65530D3367_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mE1B3632E895E5E93F9D6D2357A4F1811736AB00B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03_m48CF4A2B1CA32687761103A3A618055D1FF0A34F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleRequestData__ctor_mBAFECAE8251FA13B9E29E0C57ED66FC3FF06B382_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSpeechToText_Awake_m4DDFC70B03F568EFBC0FEC9921EE4184B87D879E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSpeechToText_CheckForTrackedWords_mE1CAAD186263543DB6CEAC3735C4620164737D68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSpeechToText_ClearSamples_m049EC3441B80A342401855CE61B0CAD591226CA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSpeechToText_DetectAudio_m594CDD5EEEFE90F67F64295570A06A2A682B002F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSpeechToText_FillSamples_m8C63684BFFB21C5DECB8DC63A29C8FCA529B8F5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSpeechToText_OnApplicationPause_mF805C2AE99AF64A4B24D2C545C7EB14076E39CF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSpeechToText_PostGoogleRequest_mCA6B5AF139EEF0107552DB466542596BBBFC926F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSpeechToText_SendRequestToGoogle_m3D894AA60EAAB407F85A4E0CFF5BAB81608BB8D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSpeechToText_SendToService_m253D21B7E6FFC38918C184A52A7A2BC129B56CA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSpeechToText_SetupService_mB5C3C9098598BF06424E50129C2F853E2E56B698_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSpeechToText_StartMicrophoneCapture_mBA7188B454487B826757D2733AF1247F1660FA1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSpeechToText_Start_mB55F403EDABECB5C0297D9D98A2EDB4F9E3EC6E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSpeechToText_StopMicrophoneCapture_m0FBFEB59EBAE929A8BE86378FA068158D30A1D0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSpeechToText_ToggleActivelyRecording_mA80A26FD94FD9D80E2FCE938A34E5770BD8D44C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSpeechToText_Update_m0650922925BD969B5CB9DBE05E691ABEC72261C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSpeechToText__ctor_mC2795F192D53637D95E546F2F4F12A622BBC3712_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSpeechToText_set_NewResult_m585AF4EBB996B3954BD0227E7FB03AB58B8CF37C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandleMicPrivilegeResult_BeginInvoke_m9062FD796F9E22192DD320001A6398BF7F27292D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandleMicPrivilegeResult_EndInvoke_m5259FFFB999948BBE584379ED9D7AD808C474385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandleMicPrivilegeResult_Invoke_mC4005C1D52FB1AC8F5BB201323E78D106DA80729_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandleMicPrivilegeResult__ctor_mFFCA38EBD4B953E1BAA87065CC7469441C8D56FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisSpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0_m5DDD0964D4298BCA0C1E815A27C9331B6BB2315B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MicPrivilegeHandler_CheckPrivilege_m592398F8F259C0A4549D33EAF70FC7C5DCAB0505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MicPrivilegeHandler_HandlePrivilegesDone_m056D34A38832DEA69F831152D4E1150D8BA83FCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MicPrivilegeHandler_OnDestroy_m4DFA64B451A5B2F8A4ABA2AFF8A84558E5F2BB06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MicPrivilegeHandler_RequestPrivilegesAsync_mCACA235F410BB3BE175ECF6FAB84D1C532157E80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MicPrivilegeHandler_Start_mBC8A3A35C8B474DFB1DC6501C53495219EFAC687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MicPrivilegeHandler__ctor_m5413DF5FFC589A84DED1A51E56A1FE33A9F91DFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionAudio__ctor_mE65FA9331C34C6EA8042FB7A785DB45D0CD7E073_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionConfig__ctor_m6D2A442A926DC8C1ED08DE4EEBA8B541023B0611_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechContext__ctor_m3CE578BA25E5234EB3DFFEC77C82E8747B352D4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechProcessed_BeginInvoke_m3146BE50821D5A66259BE2FB7A050BAE63A15ECB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechProcessed_EndInvoke_mB94652B690932AA03773C16E1A31BD84F738F035_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechProcessed_Invoke_mDE3D8A5CDF7073E89386218E684EF0687564D422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechProcessed__ctor_mEB963BD6586D3BF1FA08C6B86AE2DAF3AD380352_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognitionAlternative__ctor_m7250BC84E6210EC8CA9F1AC00AA984FEDDE4FF11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognitionResultObj__ctor_m120346B4419ED4AA48ECDBFD15E65A9607796F86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognitionResult__ctor_mF4AF6F56953F7C87944AD00557BA1C1F5E670F98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToText_Awake_mB39B022F2D29256632E181CA38C8CA5BD7D59729_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToText_FireOnSpeechProcessed_mD612326742F233713DDEC8A205550C3228D26747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToText_FireOnSpeechStateUpdated_m90004E01A33E0673D1789B8D198A0DED6CBA5EF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToText_FireOnTrackedPhraseFound_m261AA987F136FAEA98ED3533BBC74D13A7459AE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToText_FireOnUntrackedPhraseFound_m5984736CC4DF76EE7DFE9028A5A43BDE137D235E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToText_HandleMicPrivilegeResult_m8DCD5C40F980BEE377D3707A7473B84F793A907C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToText_SendToService_m2F7E214F3F1B66ADBAC0B337312630FE906011B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToText_SetupService_mF91FFB444094DFA1CD35B889CAC84C5AC92C8629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToText_SetupSingleton_m52E3057BCD9A4165CB162119B3065FFEFFCDFAE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToText_ToggleActivelyRecording_m3201AA98ACA024B66664558A2FB967598D41BD1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToText__ctor_mB10C368875790DC34D345E624AD237BF9488F3E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToText_add_OnSpeechProcessed_mD61A0298D6CF1AA01701AF7A3414D87BA0DB5A97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToText_add_OnSpeechStateUpdated_mA0F988A175C017CCB77A074EBDC8C067D7572BF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToText_add_OnTrackedPhraseFound_mB2E9D0701E5CAD27FB825219A31BD14B93C6D647_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToText_add_OnUntrackedPhraseFound_m6906479DAF33EA39649ACFB70A52034557FD2D31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToText_remove_OnSpeechProcessed_mD72C0462CB0252AA03A35FC4F930D3A3C1E7FF7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToText_remove_OnSpeechStateUpdated_mD95D9260F2752DF7C5CE0317FC7E949DC627CD6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToText_remove_OnTrackedPhraseFound_m9DC9D972623CE3DEEE4874B21016BFB5357CA815_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechToText_remove_OnUntrackedPhraseFound_m96DCD56997D29ABB249C7F69BB973E070B4CF05F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateUpdated_BeginInvoke_mCD9CA01AB09A880945F9793089F5F81352FCD3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateUpdated_EndInvoke_m830D8D1020A93122F04E0CD72E141C2C512051E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateUpdated_Invoke_m962E842F5F5EEE17B2E90AE6887F435E2CD39DEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateUpdated__ctor_m217369E8DD37CAF71028726C685E1A0519DA6517_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPhraseFound_BeginInvoke_m3ACE37784C6BC6FAB87D59C4C5AE40D57460A701_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPhraseFound_EndInvoke_mC18CFAD4F13244D025C61CCCD744C9B93EB4C52C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPhraseFound_Invoke_mFB975E273E08977D5977A652C38C61358C2694CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedPhraseFound__ctor_mFB86F6902B632F970E7722D26FCF2C3DE3AFB610_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPostGoogleRequestU3Ed__20_MoveNext_mAA6F10D3728E6A44386ABBA14360C3035D770AB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPostGoogleRequestU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m37E7E8F53FC29022B697AC9BA9C89C8D43C87B1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPostGoogleRequestU3Ed__20_System_Collections_IEnumerator_Reset_mC2C8F2886E9071BD1C477DEAFF1869CBDD13C742_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPostGoogleRequestU3Ed__20_System_Collections_IEnumerator_get_Current_m0FEC89C6924B530F4CA9CF9F6CE0EF03D1A70301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPostGoogleRequestU3Ed__20_System_IDisposable_Dispose_m4AA7CE6A7A83401D6CF3D3EB88644378D746F19D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPostGoogleRequestU3Ed__20__ctor_mD3A8949354583F298709D310417D4CCC1CC6EFD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CRequestPrivilegesAsyncU3Eb__0_m9F4C6376FCABFBA19926946D457801061B6AA623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0__ctor_m769B5B0F0E038E3ED5AE6EB858A78A0E82AFDFF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UntrackedPhraseFound_BeginInvoke_m13D35DFABC3D64C05B6096561F8552175CA63E30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UntrackedPhraseFound_EndInvoke_m208730AFB690B30B7A2AD88DCD70098EE52F5DA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UntrackedPhraseFound_Invoke_mBBC9718DC8A6AE7A2BC46F9D2B6D629BD8D2E65D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UntrackedPhraseFound__ctor_m343C791A5C453179FDD72D697DB97B2D85880DAC_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct SpeechContextU5BU5D_tD2805A4D8AD00BAB8C8EE7322CA43877E700AA07;
struct SpeechRecognitionAlternativeU5BU5D_t684D82A5F2431F89EB15F27BA4F1E87C990F01C5;
struct SpeechRecognitionResultU5BU5D_tE66E11BBEEC6DC6E9422B124CC8A97BD2D98BB00;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct IdU5BU5D_t0B440052AA3AC3DFF832C1D1A50DD51C4A41578E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tDEDD3420D64F5AACA435F477CF6C2CCC7A6F1842 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// MagicLeapTools.Voice.GoogleRequestData
struct GoogleRequestData_tC1DFDCCDC6A73F155AA1BA410340FF9C5F283513  : public RuntimeObject
{
public:
	// MagicLeapTools.Voice.RecognitionConfig MagicLeapTools.Voice.GoogleRequestData::config
	RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E * ___config_0;
	// MagicLeapTools.Voice.RecognitionAudio MagicLeapTools.Voice.GoogleRequestData::audio
	RecognitionAudio_t83AC76B77D060BB6FECAB42E357073F4FE00A439 * ___audio_1;

public:
	inline static int32_t get_offset_of_config_0() { return static_cast<int32_t>(offsetof(GoogleRequestData_tC1DFDCCDC6A73F155AA1BA410340FF9C5F283513, ___config_0)); }
	inline RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E * get_config_0() const { return ___config_0; }
	inline RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E ** get_address_of_config_0() { return &___config_0; }
	inline void set_config_0(RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E * value)
	{
		___config_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___config_0), (void*)value);
	}

	inline static int32_t get_offset_of_audio_1() { return static_cast<int32_t>(offsetof(GoogleRequestData_tC1DFDCCDC6A73F155AA1BA410340FF9C5F283513, ___audio_1)); }
	inline RecognitionAudio_t83AC76B77D060BB6FECAB42E357073F4FE00A439 * get_audio_1() const { return ___audio_1; }
	inline RecognitionAudio_t83AC76B77D060BB6FECAB42E357073F4FE00A439 ** get_address_of_audio_1() { return &___audio_1; }
	inline void set_audio_1(RecognitionAudio_t83AC76B77D060BB6FECAB42E357073F4FE00A439 * value)
	{
		___audio_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audio_1), (void*)value);
	}
};


// MagicLeapTools.Voice.RecognitionAudio
struct RecognitionAudio_t83AC76B77D060BB6FECAB42E357073F4FE00A439  : public RuntimeObject
{
public:
	// System.String MagicLeapTools.Voice.RecognitionAudio::content
	String_t* ___content_0;

public:
	inline static int32_t get_offset_of_content_0() { return static_cast<int32_t>(offsetof(RecognitionAudio_t83AC76B77D060BB6FECAB42E357073F4FE00A439, ___content_0)); }
	inline String_t* get_content_0() const { return ___content_0; }
	inline String_t** get_address_of_content_0() { return &___content_0; }
	inline void set_content_0(String_t* value)
	{
		___content_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_0), (void*)value);
	}
};


// MagicLeapTools.Voice.RecognitionConfig
struct RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E  : public RuntimeObject
{
public:
	// System.String MagicLeapTools.Voice.RecognitionConfig::encoding
	String_t* ___encoding_0;
	// System.Int32 MagicLeapTools.Voice.RecognitionConfig::sampleRateHertz
	int32_t ___sampleRateHertz_1;
	// System.Int32 MagicLeapTools.Voice.RecognitionConfig::audioChannelCount
	int32_t ___audioChannelCount_2;
	// System.Boolean MagicLeapTools.Voice.RecognitionConfig::enableSeparateRecognitionPerChannel
	bool ___enableSeparateRecognitionPerChannel_3;
	// System.String MagicLeapTools.Voice.RecognitionConfig::languageCode
	String_t* ___languageCode_4;
	// System.Int32 MagicLeapTools.Voice.RecognitionConfig::maxAlternatives
	int32_t ___maxAlternatives_5;
	// System.Boolean MagicLeapTools.Voice.RecognitionConfig::profanityFilter
	bool ___profanityFilter_6;
	// MagicLeapTools.Voice.SpeechContext[] MagicLeapTools.Voice.RecognitionConfig::speechContexts
	SpeechContextU5BU5D_tD2805A4D8AD00BAB8C8EE7322CA43877E700AA07* ___speechContexts_7;
	// System.Boolean MagicLeapTools.Voice.RecognitionConfig::enableWordTimeOffsets
	bool ___enableWordTimeOffsets_8;

public:
	inline static int32_t get_offset_of_encoding_0() { return static_cast<int32_t>(offsetof(RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E, ___encoding_0)); }
	inline String_t* get_encoding_0() const { return ___encoding_0; }
	inline String_t** get_address_of_encoding_0() { return &___encoding_0; }
	inline void set_encoding_0(String_t* value)
	{
		___encoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_sampleRateHertz_1() { return static_cast<int32_t>(offsetof(RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E, ___sampleRateHertz_1)); }
	inline int32_t get_sampleRateHertz_1() const { return ___sampleRateHertz_1; }
	inline int32_t* get_address_of_sampleRateHertz_1() { return &___sampleRateHertz_1; }
	inline void set_sampleRateHertz_1(int32_t value)
	{
		___sampleRateHertz_1 = value;
	}

	inline static int32_t get_offset_of_audioChannelCount_2() { return static_cast<int32_t>(offsetof(RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E, ___audioChannelCount_2)); }
	inline int32_t get_audioChannelCount_2() const { return ___audioChannelCount_2; }
	inline int32_t* get_address_of_audioChannelCount_2() { return &___audioChannelCount_2; }
	inline void set_audioChannelCount_2(int32_t value)
	{
		___audioChannelCount_2 = value;
	}

	inline static int32_t get_offset_of_enableSeparateRecognitionPerChannel_3() { return static_cast<int32_t>(offsetof(RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E, ___enableSeparateRecognitionPerChannel_3)); }
	inline bool get_enableSeparateRecognitionPerChannel_3() const { return ___enableSeparateRecognitionPerChannel_3; }
	inline bool* get_address_of_enableSeparateRecognitionPerChannel_3() { return &___enableSeparateRecognitionPerChannel_3; }
	inline void set_enableSeparateRecognitionPerChannel_3(bool value)
	{
		___enableSeparateRecognitionPerChannel_3 = value;
	}

	inline static int32_t get_offset_of_languageCode_4() { return static_cast<int32_t>(offsetof(RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E, ___languageCode_4)); }
	inline String_t* get_languageCode_4() const { return ___languageCode_4; }
	inline String_t** get_address_of_languageCode_4() { return &___languageCode_4; }
	inline void set_languageCode_4(String_t* value)
	{
		___languageCode_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___languageCode_4), (void*)value);
	}

	inline static int32_t get_offset_of_maxAlternatives_5() { return static_cast<int32_t>(offsetof(RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E, ___maxAlternatives_5)); }
	inline int32_t get_maxAlternatives_5() const { return ___maxAlternatives_5; }
	inline int32_t* get_address_of_maxAlternatives_5() { return &___maxAlternatives_5; }
	inline void set_maxAlternatives_5(int32_t value)
	{
		___maxAlternatives_5 = value;
	}

	inline static int32_t get_offset_of_profanityFilter_6() { return static_cast<int32_t>(offsetof(RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E, ___profanityFilter_6)); }
	inline bool get_profanityFilter_6() const { return ___profanityFilter_6; }
	inline bool* get_address_of_profanityFilter_6() { return &___profanityFilter_6; }
	inline void set_profanityFilter_6(bool value)
	{
		___profanityFilter_6 = value;
	}

	inline static int32_t get_offset_of_speechContexts_7() { return static_cast<int32_t>(offsetof(RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E, ___speechContexts_7)); }
	inline SpeechContextU5BU5D_tD2805A4D8AD00BAB8C8EE7322CA43877E700AA07* get_speechContexts_7() const { return ___speechContexts_7; }
	inline SpeechContextU5BU5D_tD2805A4D8AD00BAB8C8EE7322CA43877E700AA07** get_address_of_speechContexts_7() { return &___speechContexts_7; }
	inline void set_speechContexts_7(SpeechContextU5BU5D_tD2805A4D8AD00BAB8C8EE7322CA43877E700AA07* value)
	{
		___speechContexts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechContexts_7), (void*)value);
	}

	inline static int32_t get_offset_of_enableWordTimeOffsets_8() { return static_cast<int32_t>(offsetof(RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E, ___enableWordTimeOffsets_8)); }
	inline bool get_enableWordTimeOffsets_8() const { return ___enableWordTimeOffsets_8; }
	inline bool* get_address_of_enableWordTimeOffsets_8() { return &___enableWordTimeOffsets_8; }
	inline void set_enableWordTimeOffsets_8(bool value)
	{
		___enableWordTimeOffsets_8 = value;
	}
};


// MagicLeapTools.Voice.SpeechContext
struct SpeechContext_tAAF8FEA439340BCFDD3F6BDC3B72A7F3A7DB05A3  : public RuntimeObject
{
public:
	// System.String[] MagicLeapTools.Voice.SpeechContext::phrases
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___phrases_0;

public:
	inline static int32_t get_offset_of_phrases_0() { return static_cast<int32_t>(offsetof(SpeechContext_tAAF8FEA439340BCFDD3F6BDC3B72A7F3A7DB05A3, ___phrases_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_phrases_0() const { return ___phrases_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_phrases_0() { return &___phrases_0; }
	inline void set_phrases_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___phrases_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___phrases_0), (void*)value);
	}
};


// MagicLeapTools.Voice.SpeechRecognitionAlternative
struct SpeechRecognitionAlternative_t554258DCE2502836D1447AD3DE65BB5E7D08A0BE  : public RuntimeObject
{
public:
	// System.String MagicLeapTools.Voice.SpeechRecognitionAlternative::transcript
	String_t* ___transcript_0;
	// System.Single MagicLeapTools.Voice.SpeechRecognitionAlternative::confidence
	float ___confidence_1;

public:
	inline static int32_t get_offset_of_transcript_0() { return static_cast<int32_t>(offsetof(SpeechRecognitionAlternative_t554258DCE2502836D1447AD3DE65BB5E7D08A0BE, ___transcript_0)); }
	inline String_t* get_transcript_0() const { return ___transcript_0; }
	inline String_t** get_address_of_transcript_0() { return &___transcript_0; }
	inline void set_transcript_0(String_t* value)
	{
		___transcript_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transcript_0), (void*)value);
	}

	inline static int32_t get_offset_of_confidence_1() { return static_cast<int32_t>(offsetof(SpeechRecognitionAlternative_t554258DCE2502836D1447AD3DE65BB5E7D08A0BE, ___confidence_1)); }
	inline float get_confidence_1() const { return ___confidence_1; }
	inline float* get_address_of_confidence_1() { return &___confidence_1; }
	inline void set_confidence_1(float value)
	{
		___confidence_1 = value;
	}
};


// MagicLeapTools.Voice.SpeechRecognitionResult
struct SpeechRecognitionResult_t92F1E65BF6CA359B429837A17EC8EDB269D3CBE3  : public RuntimeObject
{
public:
	// MagicLeapTools.Voice.SpeechRecognitionAlternative[] MagicLeapTools.Voice.SpeechRecognitionResult::alternatives
	SpeechRecognitionAlternativeU5BU5D_t684D82A5F2431F89EB15F27BA4F1E87C990F01C5* ___alternatives_0;

public:
	inline static int32_t get_offset_of_alternatives_0() { return static_cast<int32_t>(offsetof(SpeechRecognitionResult_t92F1E65BF6CA359B429837A17EC8EDB269D3CBE3, ___alternatives_0)); }
	inline SpeechRecognitionAlternativeU5BU5D_t684D82A5F2431F89EB15F27BA4F1E87C990F01C5* get_alternatives_0() const { return ___alternatives_0; }
	inline SpeechRecognitionAlternativeU5BU5D_t684D82A5F2431F89EB15F27BA4F1E87C990F01C5** get_address_of_alternatives_0() { return &___alternatives_0; }
	inline void set_alternatives_0(SpeechRecognitionAlternativeU5BU5D_t684D82A5F2431F89EB15F27BA4F1E87C990F01C5* value)
	{
		___alternatives_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___alternatives_0), (void*)value);
	}
};


// MagicLeapTools.Voice.SpeechRecognitionResultObj
struct SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0  : public RuntimeObject
{
public:
	// MagicLeapTools.Voice.SpeechRecognitionResult[] MagicLeapTools.Voice.SpeechRecognitionResultObj::results
	SpeechRecognitionResultU5BU5D_tE66E11BBEEC6DC6E9422B124CC8A97BD2D98BB00* ___results_0;

public:
	inline static int32_t get_offset_of_results_0() { return static_cast<int32_t>(offsetof(SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0, ___results_0)); }
	inline SpeechRecognitionResultU5BU5D_tE66E11BBEEC6DC6E9422B124CC8A97BD2D98BB00* get_results_0() const { return ___results_0; }
	inline SpeechRecognitionResultU5BU5D_tE66E11BBEEC6DC6E9422B124CC8A97BD2D98BB00** get_address_of_results_0() { return &___results_0; }
	inline void set_results_0(SpeechRecognitionResultU5BU5D_tE66E11BBEEC6DC6E9422B124CC8A97BD2D98BB00* value)
	{
		___results_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___results_0), (void*)value);
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// MagicLeapTools.Voice.GoogleSpeechToText/<PostGoogleRequest>d__20
struct U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3  : public RuntimeObject
{
public:
	// System.Int32 MagicLeapTools.Voice.GoogleSpeechToText/<PostGoogleRequest>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MagicLeapTools.Voice.GoogleSpeechToText/<PostGoogleRequest>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MagicLeapTools.Voice.GoogleSpeechToText MagicLeapTools.Voice.GoogleSpeechToText/<PostGoogleRequest>d__20::<>4__this
	GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * ___U3CU3E4__this_2;
	// System.String MagicLeapTools.Voice.GoogleSpeechToText/<PostGoogleRequest>d__20::uri
	String_t* ___uri_3;
	// UnityEngine.Networking.UnityWebRequest MagicLeapTools.Voice.GoogleSpeechToText/<PostGoogleRequest>d__20::<uwr>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CuwrU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3, ___U3CU3E4__this_2)); }
	inline GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_uri_3() { return static_cast<int32_t>(offsetof(U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3, ___uri_3)); }
	inline String_t* get_uri_3() const { return ___uri_3; }
	inline String_t** get_address_of_uri_3() { return &___uri_3; }
	inline void set_uri_3(String_t* value)
	{
		___uri_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uri_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuwrU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3, ___U3CuwrU3E5__2_4)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CuwrU3E5__2_4() const { return ___U3CuwrU3E5__2_4; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CuwrU3E5__2_4() { return &___U3CuwrU3E5__2_4; }
	inline void set_U3CuwrU3E5__2_4(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CuwrU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CuwrU3E5__2_4), (void*)value);
	}
};


// MagicLeapTools.MicPrivilegeHandler/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7  : public RuntimeObject
{
public:
	// System.Int32 MagicLeapTools.MicPrivilegeHandler/<>c__DisplayClass4_0::numPrivilegesToRequest
	int32_t ___numPrivilegesToRequest_0;
	// System.Action`1<UnityEngine.XR.MagicLeap.MLResult> MagicLeapTools.MicPrivilegeHandler/<>c__DisplayClass4_0::callback
	Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * ___callback_1;
	// UnityEngine.XR.MagicLeap.MLPrivileges/CallbackDelegate MagicLeapTools.MicPrivilegeHandler/<>c__DisplayClass4_0::<>9__0
	CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783 * ___U3CU3E9__0_2;

public:
	inline static int32_t get_offset_of_numPrivilegesToRequest_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7, ___numPrivilegesToRequest_0)); }
	inline int32_t get_numPrivilegesToRequest_0() const { return ___numPrivilegesToRequest_0; }
	inline int32_t* get_address_of_numPrivilegesToRequest_0() { return &___numPrivilegesToRequest_0; }
	inline void set_numPrivilegesToRequest_0(int32_t value)
	{
		___numPrivilegesToRequest_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7, ___callback_1)); }
	inline Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * get_callback_1() const { return ___callback_1; }
	inline Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7, ___U3CU3E9__0_2)); }
	inline CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783 * get_U3CU3E9__0_2() const { return ___U3CU3E9__0_2; }
	inline CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783 ** get_address_of_U3CU3E9__0_2() { return &___U3CU3E9__0_2; }
	inline void set_U3CU3E9__0_2(CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783 * value)
	{
		___U3CU3E9__0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_2), (void*)value);
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
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


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_16;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_17;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_16() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___emitUTF8Identifier_16)); }
	inline bool get_emitUTF8Identifier_16() const { return ___emitUTF8Identifier_16; }
	inline bool* get_address_of_emitUTF8Identifier_16() { return &___emitUTF8Identifier_16; }
	inline void set_emitUTF8Identifier_16(bool value)
	{
		___emitUTF8Identifier_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
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


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Base64FormattingOptions
struct Base64FormattingOptions_t0AE17E3053C9D48FA35CA36C58CCFEE99CC6A3FA 
{
public:
	// System.Int32 System.Base64FormattingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Base64FormattingOptions_t0AE17E3053C9D48FA35CA36C58CCFEE99CC6A3FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// MagicLeapTools.Voice.SpeechToTextStates
struct SpeechToTextStates_tBD972955780B95B8831E1C5FEDFB65654A5ADBAB 
{
public:
	// System.Int32 MagicLeapTools.Voice.SpeechToTextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpeechToTextStates_tBD972955780B95B8831E1C5FEDFB65654A5ADBAB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.XR.MagicLeap.MLPrivileges/Id
struct Id_t37BF3211DEB98C61C6547A940D23B015089A01A7 
{
public:
	// System.UInt32 UnityEngine.XR.MagicLeap.MLPrivileges/Id::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Id_t37BF3211DEB98C61C6547A940D23B015089A01A7, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MagicLeap.MLResult/Code
struct Code_t188333EEE5268C7988596D9ED31D430EF7C049D8 
{
public:
	// System.Int32 UnityEngine.XR.MagicLeap.MLResult/Code::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Code_t188333EEE5268C7988596D9ED31D430EF7C049D8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MagicLeapTools.MicPrivilegeHandler/MicCaptureStateType
struct MicCaptureStateType_t0631FCC34B3E6DDD1C0BBF10A3BD1D770316B93B 
{
public:
	// System.Int32 MagicLeapTools.MicPrivilegeHandler/MicCaptureStateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MicCaptureStateType_t0631FCC34B3E6DDD1C0BBF10A3BD1D770316B93B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest/Result
struct Result_t3233C0F690EC3844C8E0C4649568659679AFBE75 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t3233C0F690EC3844C8E0C4649568659679AFBE75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D  : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
};

// UnityEngine.XR.MagicLeap.MLResult
struct MLResult_t16167FAD492D3A6F53116897898D23453C72B635 
{
public:
	// UnityEngine.XR.MagicLeap.MLResult/Code UnityEngine.XR.MagicLeap.MLResult::Result
	int32_t ___Result_0;
	// System.String UnityEngine.XR.MagicLeap.MLResult::message
	String_t* ___message_2;

public:
	inline static int32_t get_offset_of_Result_0() { return static_cast<int32_t>(offsetof(MLResult_t16167FAD492D3A6F53116897898D23453C72B635, ___Result_0)); }
	inline int32_t get_Result_0() const { return ___Result_0; }
	inline int32_t* get_address_of_Result_0() { return &___Result_0; }
	inline void set_Result_0(int32_t value)
	{
		___Result_0 = value;
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(MLResult_t16167FAD492D3A6F53116897898D23453C72B635, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_2), (void*)value);
	}
};

struct MLResult_t16167FAD492D3A6F53116897898D23453C72B635_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLResult/Code,UnityEngine.XR.MagicLeap.MLResult> UnityEngine.XR.MagicLeap.MLResult::existingResults
	Dictionary_2_tD6F5BABC8E0815B66CB3FCE70A8A0FCF9837CBF1 * ___existingResults_1;

public:
	inline static int32_t get_offset_of_existingResults_1() { return static_cast<int32_t>(offsetof(MLResult_t16167FAD492D3A6F53116897898D23453C72B635_StaticFields, ___existingResults_1)); }
	inline Dictionary_2_tD6F5BABC8E0815B66CB3FCE70A8A0FCF9837CBF1 * get_existingResults_1() const { return ___existingResults_1; }
	inline Dictionary_2_tD6F5BABC8E0815B66CB3FCE70A8A0FCF9837CBF1 ** get_address_of_existingResults_1() { return &___existingResults_1; }
	inline void set_existingResults_1(Dictionary_2_tD6F5BABC8E0815B66CB3FCE70A8A0FCF9837CBF1 * value)
	{
		___existingResults_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___existingResults_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.MagicLeap.MLResult
struct MLResult_t16167FAD492D3A6F53116897898D23453C72B635_marshaled_pinvoke
{
	int32_t ___Result_0;
	char* ___message_2;
};
// Native definition for COM marshalling of UnityEngine.XR.MagicLeap.MLResult
struct MLResult_t16167FAD492D3A6F53116897898D23453C72B635_marshaled_com
{
	int32_t ___Result_0;
	Il2CppChar* ___message_2;
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669  : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
};

// System.Action`1<UnityEngine.XR.MagicLeap.MLResult>
struct Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// MagicLeapTools.Voice.SpeechProcessed
struct SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A  : public MulticastDelegate_t
{
public:

public:
};


// MagicLeapTools.Voice.StateUpdated
struct StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D  : public MulticastDelegate_t
{
public:

public:
};


// MagicLeapTools.Voice.TrackedPhraseFound
struct TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96  : public MulticastDelegate_t
{
public:

public:
};


// MagicLeapTools.Voice.UntrackedPhraseFound
struct UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.MagicLeap.MLPrivileges/CallbackDelegate
struct CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783  : public MulticastDelegate_t
{
public:

public:
};


// MagicLeapTools.MicPrivilegeHandler/HandleMicPrivilegeResult
struct HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// MagicLeapTools.MicPrivilegeHandler
struct MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MagicLeapTools.MicPrivilegeHandler/MicCaptureStateType MagicLeapTools.MicPrivilegeHandler::MicCaptureState
	int32_t ___MicCaptureState_4;
	// MagicLeapTools.MicPrivilegeHandler/HandleMicPrivilegeResult MagicLeapTools.MicPrivilegeHandler::OnMicPrivilegeResult
	HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * ___OnMicPrivilegeResult_5;

public:
	inline static int32_t get_offset_of_MicCaptureState_4() { return static_cast<int32_t>(offsetof(MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03, ___MicCaptureState_4)); }
	inline int32_t get_MicCaptureState_4() const { return ___MicCaptureState_4; }
	inline int32_t* get_address_of_MicCaptureState_4() { return &___MicCaptureState_4; }
	inline void set_MicCaptureState_4(int32_t value)
	{
		___MicCaptureState_4 = value;
	}

	inline static int32_t get_offset_of_OnMicPrivilegeResult_5() { return static_cast<int32_t>(offsetof(MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03, ___OnMicPrivilegeResult_5)); }
	inline HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * get_OnMicPrivilegeResult_5() const { return ___OnMicPrivilegeResult_5; }
	inline HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A ** get_address_of_OnMicPrivilegeResult_5() { return &___OnMicPrivilegeResult_5; }
	inline void set_OnMicPrivilegeResult_5(HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * value)
	{
		___OnMicPrivilegeResult_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMicPrivilegeResult_5), (void*)value);
	}
};


// MagicLeapTools.Voice.SpeechToText
struct SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MagicLeapTools.Voice.TrackedPhraseFound MagicLeapTools.Voice.SpeechToText::OnTrackedPhraseFound
	TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * ___OnTrackedPhraseFound_4;
	// MagicLeapTools.Voice.UntrackedPhraseFound MagicLeapTools.Voice.SpeechToText::OnUntrackedPhraseFound
	UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * ___OnUntrackedPhraseFound_5;
	// MagicLeapTools.Voice.StateUpdated MagicLeapTools.Voice.SpeechToText::OnSpeechStateUpdated
	StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * ___OnSpeechStateUpdated_6;
	// MagicLeapTools.Voice.SpeechProcessed MagicLeapTools.Voice.SpeechToText::OnSpeechProcessed
	SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * ___OnSpeechProcessed_7;
	// System.Boolean MagicLeapTools.Voice.SpeechToText::_autoDetectVoice
	bool ____autoDetectVoice_8;
	// System.Int32 MagicLeapTools.Voice.SpeechToText::_maxRecordingLength
	int32_t ____maxRecordingLength_9;
	// System.Single MagicLeapTools.Voice.SpeechToText::_silenceTimer
	float ____silenceTimer_10;
	// System.Single MagicLeapTools.Voice.SpeechToText::_minimumSpeakingSampleValue
	float ____minimumSpeakingSampleValue_11;
	// System.String[] MagicLeapTools.Voice.SpeechToText::TrackedPhrases
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___TrackedPhrases_13;
	// System.Boolean MagicLeapTools.Voice.SpeechToText::_detectPhrases
	bool ____detectPhrases_14;
	// System.Boolean MagicLeapTools.Voice.SpeechToText::_microphoneActive
	bool ____microphoneActive_15;
	// System.Boolean MagicLeapTools.Voice.SpeechToText::_canRecord
	bool ____canRecord_16;
	// System.Boolean MagicLeapTools.Voice.SpeechToText::_isSetup
	bool ____isSetup_17;
	// MagicLeapTools.MicPrivilegeHandler MagicLeapTools.Voice.SpeechToText::_micPrivilegeHandler
	MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03 * ____micPrivilegeHandler_18;

public:
	inline static int32_t get_offset_of_OnTrackedPhraseFound_4() { return static_cast<int32_t>(offsetof(SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E, ___OnTrackedPhraseFound_4)); }
	inline TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * get_OnTrackedPhraseFound_4() const { return ___OnTrackedPhraseFound_4; }
	inline TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 ** get_address_of_OnTrackedPhraseFound_4() { return &___OnTrackedPhraseFound_4; }
	inline void set_OnTrackedPhraseFound_4(TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * value)
	{
		___OnTrackedPhraseFound_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackedPhraseFound_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnUntrackedPhraseFound_5() { return static_cast<int32_t>(offsetof(SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E, ___OnUntrackedPhraseFound_5)); }
	inline UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * get_OnUntrackedPhraseFound_5() const { return ___OnUntrackedPhraseFound_5; }
	inline UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 ** get_address_of_OnUntrackedPhraseFound_5() { return &___OnUntrackedPhraseFound_5; }
	inline void set_OnUntrackedPhraseFound_5(UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * value)
	{
		___OnUntrackedPhraseFound_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUntrackedPhraseFound_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpeechStateUpdated_6() { return static_cast<int32_t>(offsetof(SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E, ___OnSpeechStateUpdated_6)); }
	inline StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * get_OnSpeechStateUpdated_6() const { return ___OnSpeechStateUpdated_6; }
	inline StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D ** get_address_of_OnSpeechStateUpdated_6() { return &___OnSpeechStateUpdated_6; }
	inline void set_OnSpeechStateUpdated_6(StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * value)
	{
		___OnSpeechStateUpdated_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpeechStateUpdated_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpeechProcessed_7() { return static_cast<int32_t>(offsetof(SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E, ___OnSpeechProcessed_7)); }
	inline SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * get_OnSpeechProcessed_7() const { return ___OnSpeechProcessed_7; }
	inline SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A ** get_address_of_OnSpeechProcessed_7() { return &___OnSpeechProcessed_7; }
	inline void set_OnSpeechProcessed_7(SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * value)
	{
		___OnSpeechProcessed_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpeechProcessed_7), (void*)value);
	}

	inline static int32_t get_offset_of__autoDetectVoice_8() { return static_cast<int32_t>(offsetof(SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E, ____autoDetectVoice_8)); }
	inline bool get__autoDetectVoice_8() const { return ____autoDetectVoice_8; }
	inline bool* get_address_of__autoDetectVoice_8() { return &____autoDetectVoice_8; }
	inline void set__autoDetectVoice_8(bool value)
	{
		____autoDetectVoice_8 = value;
	}

	inline static int32_t get_offset_of__maxRecordingLength_9() { return static_cast<int32_t>(offsetof(SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E, ____maxRecordingLength_9)); }
	inline int32_t get__maxRecordingLength_9() const { return ____maxRecordingLength_9; }
	inline int32_t* get_address_of__maxRecordingLength_9() { return &____maxRecordingLength_9; }
	inline void set__maxRecordingLength_9(int32_t value)
	{
		____maxRecordingLength_9 = value;
	}

	inline static int32_t get_offset_of__silenceTimer_10() { return static_cast<int32_t>(offsetof(SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E, ____silenceTimer_10)); }
	inline float get__silenceTimer_10() const { return ____silenceTimer_10; }
	inline float* get_address_of__silenceTimer_10() { return &____silenceTimer_10; }
	inline void set__silenceTimer_10(float value)
	{
		____silenceTimer_10 = value;
	}

	inline static int32_t get_offset_of__minimumSpeakingSampleValue_11() { return static_cast<int32_t>(offsetof(SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E, ____minimumSpeakingSampleValue_11)); }
	inline float get__minimumSpeakingSampleValue_11() const { return ____minimumSpeakingSampleValue_11; }
	inline float* get_address_of__minimumSpeakingSampleValue_11() { return &____minimumSpeakingSampleValue_11; }
	inline void set__minimumSpeakingSampleValue_11(float value)
	{
		____minimumSpeakingSampleValue_11 = value;
	}

	inline static int32_t get_offset_of_TrackedPhrases_13() { return static_cast<int32_t>(offsetof(SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E, ___TrackedPhrases_13)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_TrackedPhrases_13() const { return ___TrackedPhrases_13; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_TrackedPhrases_13() { return &___TrackedPhrases_13; }
	inline void set_TrackedPhrases_13(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___TrackedPhrases_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackedPhrases_13), (void*)value);
	}

	inline static int32_t get_offset_of__detectPhrases_14() { return static_cast<int32_t>(offsetof(SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E, ____detectPhrases_14)); }
	inline bool get__detectPhrases_14() const { return ____detectPhrases_14; }
	inline bool* get_address_of__detectPhrases_14() { return &____detectPhrases_14; }
	inline void set__detectPhrases_14(bool value)
	{
		____detectPhrases_14 = value;
	}

	inline static int32_t get_offset_of__microphoneActive_15() { return static_cast<int32_t>(offsetof(SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E, ____microphoneActive_15)); }
	inline bool get__microphoneActive_15() const { return ____microphoneActive_15; }
	inline bool* get_address_of__microphoneActive_15() { return &____microphoneActive_15; }
	inline void set__microphoneActive_15(bool value)
	{
		____microphoneActive_15 = value;
	}

	inline static int32_t get_offset_of__canRecord_16() { return static_cast<int32_t>(offsetof(SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E, ____canRecord_16)); }
	inline bool get__canRecord_16() const { return ____canRecord_16; }
	inline bool* get_address_of__canRecord_16() { return &____canRecord_16; }
	inline void set__canRecord_16(bool value)
	{
		____canRecord_16 = value;
	}

	inline static int32_t get_offset_of__isSetup_17() { return static_cast<int32_t>(offsetof(SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E, ____isSetup_17)); }
	inline bool get__isSetup_17() const { return ____isSetup_17; }
	inline bool* get_address_of__isSetup_17() { return &____isSetup_17; }
	inline void set__isSetup_17(bool value)
	{
		____isSetup_17 = value;
	}

	inline static int32_t get_offset_of__micPrivilegeHandler_18() { return static_cast<int32_t>(offsetof(SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E, ____micPrivilegeHandler_18)); }
	inline MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03 * get__micPrivilegeHandler_18() const { return ____micPrivilegeHandler_18; }
	inline MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03 ** get_address_of__micPrivilegeHandler_18() { return &____micPrivilegeHandler_18; }
	inline void set__micPrivilegeHandler_18(MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03 * value)
	{
		____micPrivilegeHandler_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____micPrivilegeHandler_18), (void*)value);
	}
};

struct SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E_StaticFields
{
public:
	// MagicLeapTools.Voice.SpeechToText MagicLeapTools.Voice.SpeechToText::Instance
	SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E_StaticFields, ___Instance_12)); }
	inline SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * get_Instance_12() const { return ___Instance_12; }
	inline SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_12), (void*)value);
	}
};


// MagicLeapTools.Voice.GoogleSpeechToText
struct GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089  : public SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E
{
public:
	// System.String MagicLeapTools.Voice.GoogleSpeechToText::_uri
	String_t* ____uri_19;
	// System.String MagicLeapTools.Voice.GoogleSpeechToText::_APIKey
	String_t* ____APIKey_20;
	// System.Int32 MagicLeapTools.Voice.GoogleSpeechToText::_micPrevPos
	int32_t ____micPrevPos_21;
	// System.Single MagicLeapTools.Voice.GoogleSpeechToText::_timeAtSilenceBegan
	float ____timeAtSilenceBegan_22;
	// System.Single[] MagicLeapTools.Voice.GoogleSpeechToText::_samples
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____samples_23;
	// System.Boolean MagicLeapTools.Voice.GoogleSpeechToText::_audioDetected
	bool ____audioDetected_24;
	// System.Boolean MagicLeapTools.Voice.GoogleSpeechToText::_requestNeedsSending
	bool ____requestNeedsSending_25;
	// System.Boolean MagicLeapTools.Voice.GoogleSpeechToText::_currentlyRecording
	bool ____currentlyRecording_26;
	// MagicLeapTools.Voice.GoogleRequestData MagicLeapTools.Voice.GoogleSpeechToText::_googleRequestData
	GoogleRequestData_tC1DFDCCDC6A73F155AA1BA410340FF9C5F283513 * ____googleRequestData_27;
	// MagicLeapTools.Voice.SpeechRecognitionResultObj MagicLeapTools.Voice.GoogleSpeechToText::_newResult
	SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0 * ____newResult_28;
	// UnityEngine.AudioClip MagicLeapTools.Voice.GoogleSpeechToText::_audioRecording
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ____audioRecording_29;

public:
	inline static int32_t get_offset_of__uri_19() { return static_cast<int32_t>(offsetof(GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089, ____uri_19)); }
	inline String_t* get__uri_19() const { return ____uri_19; }
	inline String_t** get_address_of__uri_19() { return &____uri_19; }
	inline void set__uri_19(String_t* value)
	{
		____uri_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uri_19), (void*)value);
	}

	inline static int32_t get_offset_of__APIKey_20() { return static_cast<int32_t>(offsetof(GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089, ____APIKey_20)); }
	inline String_t* get__APIKey_20() const { return ____APIKey_20; }
	inline String_t** get_address_of__APIKey_20() { return &____APIKey_20; }
	inline void set__APIKey_20(String_t* value)
	{
		____APIKey_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____APIKey_20), (void*)value);
	}

	inline static int32_t get_offset_of__micPrevPos_21() { return static_cast<int32_t>(offsetof(GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089, ____micPrevPos_21)); }
	inline int32_t get__micPrevPos_21() const { return ____micPrevPos_21; }
	inline int32_t* get_address_of__micPrevPos_21() { return &____micPrevPos_21; }
	inline void set__micPrevPos_21(int32_t value)
	{
		____micPrevPos_21 = value;
	}

	inline static int32_t get_offset_of__timeAtSilenceBegan_22() { return static_cast<int32_t>(offsetof(GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089, ____timeAtSilenceBegan_22)); }
	inline float get__timeAtSilenceBegan_22() const { return ____timeAtSilenceBegan_22; }
	inline float* get_address_of__timeAtSilenceBegan_22() { return &____timeAtSilenceBegan_22; }
	inline void set__timeAtSilenceBegan_22(float value)
	{
		____timeAtSilenceBegan_22 = value;
	}

	inline static int32_t get_offset_of__samples_23() { return static_cast<int32_t>(offsetof(GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089, ____samples_23)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__samples_23() const { return ____samples_23; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__samples_23() { return &____samples_23; }
	inline void set__samples_23(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____samples_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____samples_23), (void*)value);
	}

	inline static int32_t get_offset_of__audioDetected_24() { return static_cast<int32_t>(offsetof(GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089, ____audioDetected_24)); }
	inline bool get__audioDetected_24() const { return ____audioDetected_24; }
	inline bool* get_address_of__audioDetected_24() { return &____audioDetected_24; }
	inline void set__audioDetected_24(bool value)
	{
		____audioDetected_24 = value;
	}

	inline static int32_t get_offset_of__requestNeedsSending_25() { return static_cast<int32_t>(offsetof(GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089, ____requestNeedsSending_25)); }
	inline bool get__requestNeedsSending_25() const { return ____requestNeedsSending_25; }
	inline bool* get_address_of__requestNeedsSending_25() { return &____requestNeedsSending_25; }
	inline void set__requestNeedsSending_25(bool value)
	{
		____requestNeedsSending_25 = value;
	}

	inline static int32_t get_offset_of__currentlyRecording_26() { return static_cast<int32_t>(offsetof(GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089, ____currentlyRecording_26)); }
	inline bool get__currentlyRecording_26() const { return ____currentlyRecording_26; }
	inline bool* get_address_of__currentlyRecording_26() { return &____currentlyRecording_26; }
	inline void set__currentlyRecording_26(bool value)
	{
		____currentlyRecording_26 = value;
	}

	inline static int32_t get_offset_of__googleRequestData_27() { return static_cast<int32_t>(offsetof(GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089, ____googleRequestData_27)); }
	inline GoogleRequestData_tC1DFDCCDC6A73F155AA1BA410340FF9C5F283513 * get__googleRequestData_27() const { return ____googleRequestData_27; }
	inline GoogleRequestData_tC1DFDCCDC6A73F155AA1BA410340FF9C5F283513 ** get_address_of__googleRequestData_27() { return &____googleRequestData_27; }
	inline void set__googleRequestData_27(GoogleRequestData_tC1DFDCCDC6A73F155AA1BA410340FF9C5F283513 * value)
	{
		____googleRequestData_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____googleRequestData_27), (void*)value);
	}

	inline static int32_t get_offset_of__newResult_28() { return static_cast<int32_t>(offsetof(GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089, ____newResult_28)); }
	inline SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0 * get__newResult_28() const { return ____newResult_28; }
	inline SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0 ** get_address_of__newResult_28() { return &____newResult_28; }
	inline void set__newResult_28(SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0 * value)
	{
		____newResult_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____newResult_28), (void*)value);
	}

	inline static int32_t get_offset_of__audioRecording_29() { return static_cast<int32_t>(offsetof(GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089, ____audioRecording_29)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get__audioRecording_29() const { return ____audioRecording_29; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of__audioRecording_29() { return &____audioRecording_29; }
	inline void set__audioRecording_29(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		____audioRecording_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____audioRecording_29), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// MagicLeapTools.Voice.SpeechRecognitionResult[]
struct SpeechRecognitionResultU5BU5D_tE66E11BBEEC6DC6E9422B124CC8A97BD2D98BB00  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpeechRecognitionResult_t92F1E65BF6CA359B429837A17EC8EDB269D3CBE3 * m_Items[1];

public:
	inline SpeechRecognitionResult_t92F1E65BF6CA359B429837A17EC8EDB269D3CBE3 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpeechRecognitionResult_t92F1E65BF6CA359B429837A17EC8EDB269D3CBE3 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpeechRecognitionResult_t92F1E65BF6CA359B429837A17EC8EDB269D3CBE3 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpeechRecognitionResult_t92F1E65BF6CA359B429837A17EC8EDB269D3CBE3 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpeechRecognitionResult_t92F1E65BF6CA359B429837A17EC8EDB269D3CBE3 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpeechRecognitionResult_t92F1E65BF6CA359B429837A17EC8EDB269D3CBE3 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// MagicLeapTools.Voice.SpeechRecognitionAlternative[]
struct SpeechRecognitionAlternativeU5BU5D_t684D82A5F2431F89EB15F27BA4F1E87C990F01C5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpeechRecognitionAlternative_t554258DCE2502836D1447AD3DE65BB5E7D08A0BE * m_Items[1];

public:
	inline SpeechRecognitionAlternative_t554258DCE2502836D1447AD3DE65BB5E7D08A0BE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpeechRecognitionAlternative_t554258DCE2502836D1447AD3DE65BB5E7D08A0BE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpeechRecognitionAlternative_t554258DCE2502836D1447AD3DE65BB5E7D08A0BE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpeechRecognitionAlternative_t554258DCE2502836D1447AD3DE65BB5E7D08A0BE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpeechRecognitionAlternative_t554258DCE2502836D1447AD3DE65BB5E7D08A0BE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpeechRecognitionAlternative_t554258DCE2502836D1447AD3DE65BB5E7D08A0BE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.MagicLeap.MLPrivileges/Id[]
struct IdU5BU5D_t0B440052AA3AC3DFF832C1D1A50DD51C4A41578E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// MagicLeapTools.Voice.SpeechContext[]
struct SpeechContextU5BU5D_tD2805A4D8AD00BAB8C8EE7322CA43877E700AA07  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpeechContext_tAAF8FEA439340BCFDD3F6BDC3B72A7F3A7DB05A3 * m_Items[1];

public:
	inline SpeechContext_tAAF8FEA439340BCFDD3F6BDC3B72A7F3A7DB05A3 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpeechContext_tAAF8FEA439340BCFDD3F6BDC3B72A7F3A7DB05A3 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpeechContext_tAAF8FEA439340BCFDD3F6BDC3B72A7F3A7DB05A3 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpeechContext_tAAF8FEA439340BCFDD3F6BDC3B72A7F3A7DB05A3 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpeechContext_tAAF8FEA439340BCFDD3F6BDC3B72A7F3A7DB05A3 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpeechContext_tAAF8FEA439340BCFDD3F6BDC3B72A7F3A7DB05A3 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.MagicLeap.MLResult>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mE477DD51DDD869219EB8AEA14D222D65530D3367_gshared (Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * __this, MLResult_t16167FAD492D3A6F53116897898D23453C72B635  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.MagicLeap.MLResult>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mE1B3632E895E5E93F9D6D2357A4F1811736AB00B_gshared (Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);

// System.Void MagicLeapTools.Voice.RecognitionConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionConfig__ctor_m6D2A442A926DC8C1ED08DE4EEBA8B541023B0611 (RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E * __this, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.RecognitionAudio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionAudio__ctor_mE65FA9331C34C6EA8042FB7A785DB45D0CD7E073 (RecognitionAudio_t83AC76B77D060BB6FECAB42E357073F4FE00A439 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Boolean MagicLeapTools.Voice.GoogleSpeechToText::CheckForTrackedWords(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSpeechToText_CheckForTrackedWords_mE1CAAD186263543DB6CEAC3735C4620164737D68 (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, String_t* ___newPhrase0, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.SpeechToText::FireOnSpeechProcessed(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_FireOnSpeechProcessed_mD612326742F233713DDEC8A205550C3228D26747 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, String_t* ___phrase0, float ___confidence1, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.SpeechToText::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_Awake_mB39B022F2D29256632E181CA38C8CA5BD7D59729 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::DetectAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_DetectAudio_m594CDD5EEEFE90F67F64295570A06A2A682B002F (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::StopMicrophoneCapture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_StopMicrophoneCapture_m0FBFEB59EBAE929A8BE86378FA068158D30A1D0A (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, bool ___sendLastRequest0, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::StartMicrophoneCapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_StartMicrophoneCapture_mBA7188B454487B826757D2733AF1247F1660FA1D (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.SpeechToText::SetupService(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_SetupService_mF91FFB444094DFA1CD35B889CAC84C5AC92C8629 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, bool ___detectPhrases0, bool ___autoDetectVoice1, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.SpeechToText::SendToService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_SendToService_m2F7E214F3F1B66ADBAC0B337312630FE906011B6 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::SendRequestToGoogle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_SendRequestToGoogle_m3D894AA60EAAB407F85A4E0CFF5BAB81608BB8D0 (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::FillSamples(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_FillSamples_m8C63684BFFB21C5DECB8DC63A29C8FCA529B8F5D (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, int32_t ___micPosition0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m4178DFE7B47F12FAF452AA4742B16FC3BA9618A8 (int16_t ___value0, const RuntimeMethod* method);
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_m6AF950973942E09BAB1F21B055BBD2CD58C980B2 (RuntimeArray * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.String System.Convert::ToBase64String(System.Byte[],System.Base64FormattingOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_m673467ECFC342632477CB96DDF6C064DA193A4A9 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inArray0, int32_t ___options1, const RuntimeMethod* method);
// System.Collections.IEnumerator MagicLeapTools.Voice.GoogleSpeechToText::PostGoogleRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GoogleSpeechToText_PostGoogleRequest_mCA6B5AF139EEF0107552DB466542596BBBFC926F (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.GoogleSpeechToText/<PostGoogleRequest>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostGoogleRequestU3Ed__20__ctor_mD3A8949354583F298709D310417D4CCC1CC6EFD6 (U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.SpeechToText::FireOnSpeechStateUpdated(MagicLeapTools.Voice.SpeechToTextStates)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_FireOnSpeechStateUpdated_m90004E01A33E0673D1789B8D198A0DED6CBA5EF1 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, int32_t ___state0, const RuntimeMethod* method);
// System.String[] UnityEngine.Microphone::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Microphone_get_devices_m550C09D23C4FF50A6F3E1A2198D741436CCB584A (const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * Microphone_Start_m7F08B42DC2B97BE649F7329C0FAC54125FE0AC5D (String_t* ___deviceName0, bool ___loop1, int32_t ___lengthSec2, int32_t ___frequency3, const RuntimeMethod* method);
// System.Void UnityEngine.Microphone::End(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_mF41BC1D2BA47C6FC2C25BA106F99A5704ACE518F (String_t* ___deviceName0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Int32 UnityEngine.Microphone::GetPosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetPosition_m7D0A6CF146C1F716F0DF886223B119279DE1E587 (String_t* ___deviceName0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::ClearSamples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_ClearSamples_m049EC3441B80A342401855CE61B0CAD591226CA9 (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.SpeechToText::FireOnTrackedPhraseFound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_FireOnTrackedPhraseFound_m261AA987F136FAEA98ED3533BBC74D13A7459AE9 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, int32_t ___phraseIndex0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184 (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// System.Void MagicLeapTools.Voice.SpeechToText::FireOnUntrackedPhraseFound(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_FireOnUntrackedPhraseFound_m5984736CC4DF76EE7DFE9028A5A43BDE137D235E (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, String_t* ___phrase0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m2D7410645789EBED93CAA8146D271C79156E2CB0 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioClip::SetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m3424F9C6C5B7A15491B79F961C30D8F0051E34F7 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.GoogleRequestData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleRequestData__ctor_mBAFECAE8251FA13B9E29E0C57ED66FC3FF06B382 (GoogleRequestData_tC1DFDCCDC6A73F155AA1BA410340FF9C5F283513 * __this, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.SpeechToText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText__ctor_mB10C368875790DC34D345E624AD237BF9488F3E2 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, const RuntimeMethod* method);
// System.Void MagicLeapTools.MicPrivilegeHandler/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m769B5B0F0E038E3ED5AE6EB858A78A0E82AFDFF1 (U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7 * __this, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLResult::Create(UnityEngine.XR.MagicLeap.MLResult/Code,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MLResult_t16167FAD492D3A6F53116897898D23453C72B635  MLResult_Create_m7E4E59D7D261B1D397AB89E66E05EADEB0835F52 (int32_t ___result0, String_t* ___msg1, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResult MagicLeapTools.MicPrivilegeHandler::CheckPrivilege(UnityEngine.XR.MagicLeap.MLPrivileges/Id)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MLResult_t16167FAD492D3A6F53116897898D23453C72B635  MicPrivilegeHandler_CheckPrivilege_m592398F8F259C0A4549D33EAF70FC7C5DCAB0505 (uint32_t ___privilege0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.MagicLeap.MLResult>::Invoke(!0)
inline void Action_1_Invoke_mE477DD51DDD869219EB8AEA14D222D65530D3367 (Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * __this, MLResult_t16167FAD492D3A6F53116897898D23453C72B635  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 *, MLResult_t16167FAD492D3A6F53116897898D23453C72B635 , const RuntimeMethod*))Action_1_Invoke_mE477DD51DDD869219EB8AEA14D222D65530D3367_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.MagicLeap.MLPrivileges/CallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackDelegate__ctor_m7076AF6A922D49D3FF7B7026B674D961286BFF9E (CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLPrivileges::RequestPrivilegeAsync(UnityEngine.XR.MagicLeap.MLPrivileges/Id,UnityEngine.XR.MagicLeap.MLPrivileges/CallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MLResult_t16167FAD492D3A6F53116897898D23453C72B635  MLPrivileges_RequestPrivilegeAsync_m31EA49A0CBD9E8E539B76E6A27172C7CA852F437 (uint32_t ___privilegeId0, CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783 * ___callback1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MagicLeap.MLResult::get_IsOk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MLResult_get_IsOk_m36FFD3C2CCE4D6131ACB42254AAF6F93A8895001 (MLResult_t16167FAD492D3A6F53116897898D23453C72B635 * __this, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLPrivileges::CheckPrivilege(UnityEngine.XR.MagicLeap.MLPrivileges/Id)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MLResult_t16167FAD492D3A6F53116897898D23453C72B635  MLPrivileges_CheckPrivilege_mCC7CA1A59EF73D4C6543862A8F11EF669AE91E81 (uint32_t ___privilegeId0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.MagicLeap.MLResult>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE1B3632E895E5E93F9D6D2357A4F1811736AB00B (Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mE1B3632E895E5E93F9D6D2357A4F1811736AB00B_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.XR.MagicLeap.MLResult MagicLeapTools.MicPrivilegeHandler::RequestPrivilegesAsync(System.Action`1<UnityEngine.XR.MagicLeap.MLResult>,UnityEngine.XR.MagicLeap.MLPrivileges/Id[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MLResult_t16167FAD492D3A6F53116897898D23453C72B635  MicPrivilegeHandler_RequestPrivilegesAsync_mCACA235F410BB3BE175ECF6FAB84D1C532157E80 (MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03 * __this, Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * ___callback0, IdU5BU5D_t0B440052AA3AC3DFF832C1D1A50DD51C4A41578E* ___privileges1, const RuntimeMethod* method);
// System.String UnityEngine.XR.MagicLeap.MLResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MLResult_ToString_m3E04BC84A8EB7C550F22026A790E476190F20B48 (MLResult_t16167FAD492D3A6F53116897898D23453C72B635 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120 (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___original0, const RuntimeMethod* method);
// System.Void MagicLeapTools.MicPrivilegeHandler/HandleMicPrivilegeResult::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleMicPrivilegeResult_Invoke_mC4005C1D52FB1AC8F5BB201323E78D106DA80729 (HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * __this, bool ___canRecord0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.SpeechProcessed::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechProcessed_Invoke_mDE3D8A5CDF7073E89386218E684EF0687564D422 (SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * __this, String_t* ___phrase0, float ___confidence1, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.StateUpdated::Invoke(MagicLeapTools.Voice.SpeechToTextStates)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateUpdated_Invoke_m962E842F5F5EEE17B2E90AE6887F435E2CD39DEE (StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.UntrackedPhraseFound::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UntrackedPhraseFound_Invoke_mBBC9718DC8A6AE7A2BC46F9D2B6D629BD8D2E65D (UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * __this, String_t* ___phrase0, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.TrackedPhraseFound::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPhraseFound_Invoke_mFB975E273E08977D5977A652C38C61358C2694CB (TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * __this, int32_t ___phraseIndex0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void MagicLeapTools.Voice.SpeechToText::SetupSingleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_SetupSingleton_m52E3057BCD9A4165CB162119B3065FFEFFCDFAE5 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<MagicLeapTools.MicPrivilegeHandler>()
inline MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03 * Component_GetComponent_TisMicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03_m48CF4A2B1CA32687761103A3A618055D1FF0A34F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void MagicLeapTools.MicPrivilegeHandler/HandleMicPrivilegeResult::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleMicPrivilegeResult__ctor_mFFCA38EBD4B953E1BAA87065CC7469441C8D56FE (HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method);
// System.Void System.Text.UTF8Encoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888 (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * __this, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m624247F6B1FDBD1B02C133B4878E4F3C8CEA30DA (RuntimeObject * ___obj0, bool ___prettyPrint1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<MagicLeapTools.Voice.SpeechRecognitionResultObj>(System.String)
inline SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0 * JsonUtility_FromJson_TisSpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0_m5DDD0964D4298BCA0C1E815A27C9331B6BB2315B (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::set_NewResult(MagicLeapTools.Voice.SpeechRecognitionResultObj)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_set_NewResult_m585AF4EBB996B3954BD0227E7FB03AB58B8CF37C (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0 * ___value0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicLeapTools.Voice.GoogleRequestData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleRequestData__ctor_mBAFECAE8251FA13B9E29E0C57ED66FC3FF06B382 (GoogleRequestData_tC1DFDCCDC6A73F155AA1BA410340FF9C5F283513 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleRequestData__ctor_mBAFECAE8251FA13B9E29E0C57ED66FC3FF06B382_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionAudio_t83AC76B77D060BB6FECAB42E357073F4FE00A439_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GoogleRequestData__ctor_mBAFECAE8251FA13B9E29E0C57ED66FC3FF06B382_RuntimeMethod_var);
	{
		// public RecognitionConfig config = new RecognitionConfig();
		RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E * L_0 = (RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E *)il2cpp_codegen_object_new(RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E_il2cpp_TypeInfo_var);
		RecognitionConfig__ctor_m6D2A442A926DC8C1ED08DE4EEBA8B541023B0611(L_0, /*hidden argument*/NULL);
		__this->set_config_0(L_0);
		// public RecognitionAudio  audio  = new RecognitionAudio();
		RecognitionAudio_t83AC76B77D060BB6FECAB42E357073F4FE00A439 * L_1 = (RecognitionAudio_t83AC76B77D060BB6FECAB42E357073F4FE00A439 *)il2cpp_codegen_object_new(RecognitionAudio_t83AC76B77D060BB6FECAB42E357073F4FE00A439_il2cpp_TypeInfo_var);
		RecognitionAudio__ctor_mE65FA9331C34C6EA8042FB7A785DB45D0CD7E073(L_1, /*hidden argument*/NULL);
		__this->set_audio_1(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::set_NewResult(MagicLeapTools.Voice.SpeechRecognitionResultObj)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_set_NewResult_m585AF4EBB996B3954BD0227E7FB03AB58B8CF37C (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSpeechToText_set_NewResult_m585AF4EBB996B3954BD0227E7FB03AB58B8CF37C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AE348DAF6D0B1E933233EA311FF3D8776A446A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF688BD2B757B309262986F46A2E5261C777D819C);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GoogleSpeechToText_set_NewResult_m585AF4EBB996B3954BD0227E7FB03AB58B8CF37C_RuntimeMethod_var);
	{
		// if (value == null ||
		//     value.results[0] == null ||
		//     value.results[0].alternatives == null)
		SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0 * L_0 = ___value0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0 * L_1 = ___value0;
		NullCheck(L_1);
		SpeechRecognitionResultU5BU5D_tE66E11BBEEC6DC6E9422B124CC8A97BD2D98BB00* L_2 = L_1->get_results_0();
		NullCheck(L_2);
		int32_t L_3 = 0;
		SpeechRecognitionResult_t92F1E65BF6CA359B429837A17EC8EDB269D3CBE3 * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0 * L_5 = ___value0;
		NullCheck(L_5);
		SpeechRecognitionResultU5BU5D_tE66E11BBEEC6DC6E9422B124CC8A97BD2D98BB00* L_6 = L_5->get_results_0();
		NullCheck(L_6);
		int32_t L_7 = 0;
		SpeechRecognitionResult_t92F1E65BF6CA359B429837A17EC8EDB269D3CBE3 * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		SpeechRecognitionAlternativeU5BU5D_t684D82A5F2431F89EB15F27BA4F1E87C990F01C5* L_9 = L_8->get_alternatives_0();
		if (L_9)
		{
			goto IL_002e;
		}
	}

IL_001c:
	{
		// _newResult = null;
		__this->set__newResult_28((SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0 *)NULL);
		// Debug.Log("No words detected");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF688BD2B757B309262986F46A2E5261C777D819C, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_002e:
	{
		// _newResult = value;
		SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0 * L_10 = ___value0;
		__this->set__newResult_28(L_10);
		// Debug.Log("Invoke speech processed with " + _newResult.results[0].alternatives[0].transcript);
		SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0 * L_11 = __this->get__newResult_28();
		NullCheck(L_11);
		SpeechRecognitionResultU5BU5D_tE66E11BBEEC6DC6E9422B124CC8A97BD2D98BB00* L_12 = L_11->get_results_0();
		NullCheck(L_12);
		int32_t L_13 = 0;
		SpeechRecognitionResult_t92F1E65BF6CA359B429837A17EC8EDB269D3CBE3 * L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		SpeechRecognitionAlternativeU5BU5D_t684D82A5F2431F89EB15F27BA4F1E87C990F01C5* L_15 = L_14->get_alternatives_0();
		NullCheck(L_15);
		int32_t L_16 = 0;
		SpeechRecognitionAlternative_t554258DCE2502836D1447AD3DE65BB5E7D08A0BE * L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		String_t* L_18 = L_17->get_transcript_0();
		String_t* L_19;
		L_19 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8AE348DAF6D0B1E933233EA311FF3D8776A446A3, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_19, /*hidden argument*/NULL);
		// if (_detectPhrases)
		bool L_20 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get__detectPhrases_14();
		if (!L_20)
		{
			goto IL_0086;
		}
	}
	{
		// CheckForTrackedWords(_newResult.results[0].alternatives[0].transcript);
		SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0 * L_21 = __this->get__newResult_28();
		NullCheck(L_21);
		SpeechRecognitionResultU5BU5D_tE66E11BBEEC6DC6E9422B124CC8A97BD2D98BB00* L_22 = L_21->get_results_0();
		NullCheck(L_22);
		int32_t L_23 = 0;
		SpeechRecognitionResult_t92F1E65BF6CA359B429837A17EC8EDB269D3CBE3 * L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		SpeechRecognitionAlternativeU5BU5D_t684D82A5F2431F89EB15F27BA4F1E87C990F01C5* L_25 = L_24->get_alternatives_0();
		NullCheck(L_25);
		int32_t L_26 = 0;
		SpeechRecognitionAlternative_t554258DCE2502836D1447AD3DE65BB5E7D08A0BE * L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		String_t* L_28 = L_27->get_transcript_0();
		bool L_29;
		L_29 = GoogleSpeechToText_CheckForTrackedWords_mE1CAAD186263543DB6CEAC3735C4620164737D68(__this, L_28, /*hidden argument*/NULL);
		return;
	}

IL_0086:
	{
		// base.FireOnSpeechProcessed(_newResult.results[0].alternatives[0].transcript,
		//                           _newResult.results[0].alternatives[0].confidence);
		SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0 * L_30 = __this->get__newResult_28();
		NullCheck(L_30);
		SpeechRecognitionResultU5BU5D_tE66E11BBEEC6DC6E9422B124CC8A97BD2D98BB00* L_31 = L_30->get_results_0();
		NullCheck(L_31);
		int32_t L_32 = 0;
		SpeechRecognitionResult_t92F1E65BF6CA359B429837A17EC8EDB269D3CBE3 * L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		SpeechRecognitionAlternativeU5BU5D_t684D82A5F2431F89EB15F27BA4F1E87C990F01C5* L_34 = L_33->get_alternatives_0();
		NullCheck(L_34);
		int32_t L_35 = 0;
		SpeechRecognitionAlternative_t554258DCE2502836D1447AD3DE65BB5E7D08A0BE * L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		String_t* L_37 = L_36->get_transcript_0();
		SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0 * L_38 = __this->get__newResult_28();
		NullCheck(L_38);
		SpeechRecognitionResultU5BU5D_tE66E11BBEEC6DC6E9422B124CC8A97BD2D98BB00* L_39 = L_38->get_results_0();
		NullCheck(L_39);
		int32_t L_40 = 0;
		SpeechRecognitionResult_t92F1E65BF6CA359B429837A17EC8EDB269D3CBE3 * L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		SpeechRecognitionAlternativeU5BU5D_t684D82A5F2431F89EB15F27BA4F1E87C990F01C5* L_42 = L_41->get_alternatives_0();
		NullCheck(L_42);
		int32_t L_43 = 0;
		SpeechRecognitionAlternative_t554258DCE2502836D1447AD3DE65BB5E7D08A0BE * L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		float L_45 = L_44->get_confidence_1();
		SpeechToText_FireOnSpeechProcessed_mD612326742F233713DDEC8A205550C3228D26747(__this, L_37, L_45, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_Awake_m4DDFC70B03F568EFBC0FEC9921EE4184B87D879E (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSpeechToText_Awake_m4DDFC70B03F568EFBC0FEC9921EE4184B87D879E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GoogleSpeechToText_Awake_m4DDFC70B03F568EFBC0FEC9921EE4184B87D879E_RuntimeMethod_var);
	{
		// base.Awake();
		SpeechToText_Awake_mB39B022F2D29256632E181CA38C8CA5BD7D59729(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_Start_mB55F403EDABECB5C0297D9D98A2EDB4F9E3EC6E7 (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSpeechToText_Start_mB55F403EDABECB5C0297D9D98A2EDB4F9E3EC6E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33AC2E661539B219923CAD378571D4B0F2E14FBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GoogleSpeechToText_Start_mB55F403EDABECB5C0297D9D98A2EDB4F9E3EC6E7_RuntimeMethod_var);
	{
		// if(_canRecord)
		bool L_0 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get__canRecord_16();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// SetupService(_detectPhrases,_autoDetectVoice);
		bool L_1 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get__detectPhrases_14();
		bool L_2 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get__autoDetectVoice_8();
		VirtActionInvoker2< bool, bool >::Invoke(5 /* System.Void MagicLeapTools.Voice.SpeechToText::SetupService(System.Boolean,System.Boolean) */, __this, L_1, L_2);
	}

IL_001a:
	{
		// if (_APIKey == "")
		String_t* L_3 = __this->get__APIKey_20();
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// Debug.LogError("No APIKey set, voice to text will not be possible");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral33AC2E661539B219923CAD378571D4B0F2E14FBA, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_Update_m0650922925BD969B5CB9DBE05E691ABEC72261C6 (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSpeechToText_Update_m0650922925BD969B5CB9DBE05E691ABEC72261C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GoogleSpeechToText_Update_m0650922925BD969B5CB9DBE05E691ABEC72261C6_RuntimeMethod_var);
	{
		// if (_canRecord && _isSetup == false)
		bool L_0 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get__canRecord_16();
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get__isSetup_17();
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		// SetupService(_detectPhrases,_autoDetectVoice);
		bool L_2 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get__detectPhrases_14();
		bool L_3 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get__autoDetectVoice_8();
		VirtActionInvoker2< bool, bool >::Invoke(5 /* System.Void MagicLeapTools.Voice.SpeechToText::SetupService(System.Boolean,System.Boolean) */, __this, L_2, L_3);
	}

IL_0022:
	{
		// if (_autoDetectVoice == true && _microphoneActive == true)
		bool L_4 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get__autoDetectVoice_8();
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		bool L_5 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get__microphoneActive_15();
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// DetectAudio();
		GoogleSpeechToText_DetectAudio_m594CDD5EEEFE90F67F64295570A06A2A682B002F(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_OnApplicationPause_mF805C2AE99AF64A4B24D2C545C7EB14076E39CF8 (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, bool ___pause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSpeechToText_OnApplicationPause_mF805C2AE99AF64A4B24D2C545C7EB14076E39CF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GoogleSpeechToText_OnApplicationPause_mF805C2AE99AF64A4B24D2C545C7EB14076E39CF8_RuntimeMethod_var);
	{
		// if (pause == true)
		bool L_0 = ___pause0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		// StopMicrophoneCapture(false);
		GoogleSpeechToText_StopMicrophoneCapture_m0FBFEB59EBAE929A8BE86378FA068158D30A1D0A(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_000b:
	{
		// else if (_autoDetectVoice == true) // Returning from pause and auto detect is on
		bool L_1 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get__autoDetectVoice_8();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// StartMicrophoneCapture();
		GoogleSpeechToText_StartMicrophoneCapture_mBA7188B454487B826757D2733AF1247F1660FA1D(__this, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::SetupService(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_SetupService_mB5C3C9098598BF06424E50129C2F853E2E56B698 (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, bool ___detectPhrases0, bool ___autoDetectVoice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSpeechToText_SetupService_mB5C3C9098598BF06424E50129C2F853E2E56B698_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GoogleSpeechToText_SetupService_mB5C3C9098598BF06424E50129C2F853E2E56B698_RuntimeMethod_var);
	{
		// base.SetupService(detectPhrases, autoDetectVoice);
		bool L_0 = ___detectPhrases0;
		bool L_1 = ___autoDetectVoice1;
		SpeechToText_SetupService_mF91FFB444094DFA1CD35B889CAC84C5AC92C8629(__this, L_0, L_1, /*hidden argument*/NULL);
		// if(_canRecord && autoDetectVoice)
		bool L_2 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get__canRecord_16();
		bool L_3 = ___autoDetectVoice1;
		if (!((int32_t)((int32_t)L_2&(int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		// _isSetup = true;
		((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->set__isSetup_17((bool)1);
		// ToggleActivelyRecording(true);
		VirtActionInvoker1< bool >::Invoke(4 /* System.Void MagicLeapTools.Voice.SpeechToText::ToggleActivelyRecording(System.Boolean) */, __this, (bool)1);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::SendToService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_SendToService_m253D21B7E6FFC38918C184A52A7A2BC129B56CA7 (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSpeechToText_SendToService_m253D21B7E6FFC38918C184A52A7A2BC129B56CA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GoogleSpeechToText_SendToService_m253D21B7E6FFC38918C184A52A7A2BC129B56CA7_RuntimeMethod_var);
	{
		// base.SendToService();
		SpeechToText_SendToService_m2F7E214F3F1B66ADBAC0B337312630FE906011B6(__this, /*hidden argument*/NULL);
		// SendRequestToGoogle();
		GoogleSpeechToText_SendRequestToGoogle_m3D894AA60EAAB407F85A4E0CFF5BAB81608BB8D0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::SendRequestToGoogle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_SendRequestToGoogle_m3D894AA60EAAB407F85A4E0CFF5BAB81608BB8D0 (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSpeechToText_SendRequestToGoogle_m3D894AA60EAAB407F85A4E0CFF5BAB81608BB8D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GoogleSpeechToText_SendRequestToGoogle_m3D894AA60EAAB407F85A4E0CFF5BAB81608BB8D0_RuntimeMethod_var);
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// if (_autoDetectVoice == false) // _samples has already been populated in DetectAudio if auto detection is used
		bool L_0 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get__autoDetectVoice_8();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// FillSamples(0);
		GoogleSpeechToText_FillSamples_m8C63684BFFB21C5DECB8DC63A29C8FCA529B8F5D(__this, 0, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// Byte[] bytesData = new Byte[_samples.Length * 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = __this->get__samples_23();
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)2)));
		V_0 = L_2;
		// float rescaleFactor = 32767; // to put float values in range of [-32767, 32767] for correct conversion
		V_1 = (32767.0f);
		// Byte[] shortBytes = new Byte[2];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)2);
		// for (int i = 0; i < _samples.Length; i++)
		V_2 = 0;
		goto IL_004d;
	}

IL_0030:
	{
		// shortSample = (short)(_samples[i] * rescaleFactor); // convert to short
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = __this->get__samples_23();
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		float L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		float L_8 = V_1;
		// shortBytes = BitConverter.GetBytes(shortSample);    // Get bytes from short
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = BitConverter_GetBytes_m4178DFE7B47F12FAF452AA4742B16FC3BA9618A8(il2cpp_codegen_cast_double_to_int<int16_t>(((float)il2cpp_codegen_multiply((float)L_7, (float)L_8))), /*hidden argument*/NULL);
		// shortBytes.CopyTo(bytesData, i * 2);                // Copy bytes to full array
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_9);
		Array_CopyTo_m6AF950973942E09BAB1F21B055BBD2CD58C980B2((RuntimeArray *)(RuntimeArray *)L_9, (RuntimeArray *)(RuntimeArray *)L_10, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)2)), /*hidden argument*/NULL);
		// for (int i = 0; i < _samples.Length; i++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_004d:
	{
		// for (int i = 0; i < _samples.Length; i++)
		int32_t L_13 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = __this->get__samples_23();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		// _googleRequestData.audio.content = Convert.ToBase64String(bytesData, Base64FormattingOptions.None);
		GoogleRequestData_tC1DFDCCDC6A73F155AA1BA410340FF9C5F283513 * L_15 = __this->get__googleRequestData_27();
		NullCheck(L_15);
		RecognitionAudio_t83AC76B77D060BB6FECAB42E357073F4FE00A439 * L_16 = L_15->get_audio_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = Convert_ToBase64String_m673467ECFC342632477CB96DDF6C064DA193A4A9(L_17, 0, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set_content_0(L_18);
		// StartCoroutine(PostGoogleRequest(_uri + _APIKey));
		String_t* L_19 = __this->get__uri_19();
		String_t* L_20 = __this->get__APIKey_20();
		String_t* L_21;
		L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_19, L_20, /*hidden argument*/NULL);
		RuntimeObject* L_22;
		L_22 = GoogleSpeechToText_PostGoogleRequest_mCA6B5AF139EEF0107552DB466542596BBBFC926F(__this, L_21, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_23;
		L_23 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MagicLeapTools.Voice.GoogleSpeechToText::PostGoogleRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GoogleSpeechToText_PostGoogleRequest_mCA6B5AF139EEF0107552DB466542596BBBFC926F (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, String_t* ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSpeechToText_PostGoogleRequest_mCA6B5AF139EEF0107552DB466542596BBBFC926F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GoogleSpeechToText_PostGoogleRequest_mCA6B5AF139EEF0107552DB466542596BBBFC926F_RuntimeMethod_var);
	{
		U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3 * L_0 = (U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3 *)il2cpp_codegen_object_new(U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3_il2cpp_TypeInfo_var);
		U3CPostGoogleRequestU3Ed__20__ctor_mD3A8949354583F298709D310417D4CCC1CC6EFD6(L_0, 0, /*hidden argument*/NULL);
		U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3 * L_2 = L_1;
		String_t* L_3 = ___uri0;
		NullCheck(L_2);
		L_2->set_uri_3(L_3);
		return L_2;
	}
}
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::ToggleActivelyRecording(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_ToggleActivelyRecording_mA80A26FD94FD9D80E2FCE938A34E5770BD8D44C2 (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, bool ___enable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSpeechToText_ToggleActivelyRecording_mA80A26FD94FD9D80E2FCE938A34E5770BD8D44C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GoogleSpeechToText_ToggleActivelyRecording_mA80A26FD94FD9D80E2FCE938A34E5770BD8D44C2_RuntimeMethod_var);
	{
		// if (_canRecord == false)
		bool L_0 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get__canRecord_16();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (enable)
		bool L_1 = ___enable0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// StartMicrophoneCapture();
		GoogleSpeechToText_StartMicrophoneCapture_mBA7188B454487B826757D2733AF1247F1660FA1D(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0013:
	{
		// StopMicrophoneCapture();
		GoogleSpeechToText_StopMicrophoneCapture_m0FBFEB59EBAE929A8BE86378FA068158D30A1D0A(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::StartMicrophoneCapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_StartMicrophoneCapture_mBA7188B454487B826757D2733AF1247F1660FA1D (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSpeechToText_StartMicrophoneCapture_mBA7188B454487B826757D2733AF1247F1660FA1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GoogleSpeechToText_StartMicrophoneCapture_mBA7188B454487B826757D2733AF1247F1660FA1D_RuntimeMethod_var);
	{
		// if (_canRecord && _currentlyRecording == false)
		bool L_0 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get__canRecord_16();
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		bool L_1 = __this->get__currentlyRecording_26();
		if (L_1)
		{
			goto IL_004e;
		}
	}
	{
		// FireOnSpeechStateUpdated(SpeechToTextStates.RecordingSpeech);
		SpeechToText_FireOnSpeechStateUpdated_m90004E01A33E0673D1789B8D198A0DED6CBA5EF1(__this, 3, /*hidden argument*/NULL);
		// _microphoneActive = true;
		((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->set__microphoneActive_15((bool)1);
		// _audioRecording = Microphone.Start(Microphone.devices[0], true, _maxRecordingLength, _googleRequestData.config.sampleRateHertz);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2;
		L_2 = Microphone_get_devices_m550C09D23C4FF50A6F3E1A2198D741436CCB584A(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = 0;
		String_t* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get__maxRecordingLength_9();
		GoogleRequestData_tC1DFDCCDC6A73F155AA1BA410340FF9C5F283513 * L_6 = __this->get__googleRequestData_27();
		NullCheck(L_6);
		RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E * L_7 = L_6->get_config_0();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_sampleRateHertz_1();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_9;
		L_9 = Microphone_Start_m7F08B42DC2B97BE649F7329C0FAC54125FE0AC5D(L_4, (bool)1, L_5, L_8, /*hidden argument*/NULL);
		__this->set__audioRecording_29(L_9);
		// _currentlyRecording = true;
		__this->set__currentlyRecording_26((bool)1);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::StopMicrophoneCapture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_StopMicrophoneCapture_m0FBFEB59EBAE929A8BE86378FA068158D30A1D0A (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, bool ___sendLastRequest0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSpeechToText_StopMicrophoneCapture_m0FBFEB59EBAE929A8BE86378FA068158D30A1D0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GoogleSpeechToText_StopMicrophoneCapture_m0FBFEB59EBAE929A8BE86378FA068158D30A1D0A_RuntimeMethod_var);
	{
		// Microphone.End(Microphone.devices[0]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0;
		L_0 = Microphone_get_devices_m550C09D23C4FF50A6F3E1A2198D741436CCB584A(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		Microphone_End_mF41BC1D2BA47C6FC2C25BA106F99A5704ACE518F(L_2, /*hidden argument*/NULL);
		// FireOnSpeechStateUpdated(SpeechToTextStates.MicrophoneStopped);
		SpeechToText_FireOnSpeechStateUpdated_m90004E01A33E0673D1789B8D198A0DED6CBA5EF1(__this, 1, /*hidden argument*/NULL);
		// _currentlyRecording = false;
		__this->set__currentlyRecording_26((bool)0);
		// if (sendLastRequest == true)
		bool L_3 = ___sendLastRequest0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// SendRequestToGoogle();
		GoogleSpeechToText_SendRequestToGoogle_m3D894AA60EAAB407F85A4E0CFF5BAB81608BB8D0(__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::DetectAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_DetectAudio_m594CDD5EEEFE90F67F64295570A06A2A682B002F (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSpeechToText_DetectAudio_m594CDD5EEEFE90F67F64295570A06A2A682B002F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral838FE9164E7AEF1F8109DBFA98C79FB7F99C8522);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB8078CC04C9FB86F02DC8CA2FD97B5D44C4EAC7);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GoogleSpeechToText_DetectAudio_m594CDD5EEEFE90F67F64295570A06A2A682B002F_RuntimeMethod_var);
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// FillSamples(_micPrevPos);
		int32_t L_0 = __this->get__micPrevPos_21();
		GoogleSpeechToText_FillSamples_m8C63684BFFB21C5DECB8DC63A29C8FCA529B8F5D(__this, L_0, /*hidden argument*/NULL);
		// float maxVolume = 0.0f;
		V_0 = (0.0f);
		// for (int i = _micPrevPos + 1; i < Microphone.GetPosition(null); ++i)
		int32_t L_1 = __this->get__micPrevPos_21();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		goto IL_006b;
	}

IL_001d:
	{
		// if (i >= _samples.Length)
		int32_t L_2 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = __this->get__samples_23();
		NullCheck(L_3);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0053;
		}
	}
	{
		// Debug.LogError("WAS " + i + "in lenght: " + _samples.Length);
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = __this->get__samples_23();
		NullCheck(L_5);
		V_2 = ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralCB8078CC04C9FB86F02DC8CA2FD97B5D44C4EAC7, L_4, _stringLiteral838FE9164E7AEF1F8109DBFA98C79FB7F99C8522, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_7, /*hidden argument*/NULL);
	}

IL_0053:
	{
		// if (_samples[i] > maxVolume)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = __this->get__samples_23();
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		float L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		float L_12 = V_0;
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_0067;
		}
	}
	{
		// maxVolume = _samples[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = __this->get__samples_23();
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		float L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = L_16;
	}

IL_0067:
	{
		// for (int i = _micPrevPos + 1; i < Microphone.GetPosition(null); ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_006b:
	{
		// for (int i = _micPrevPos + 1; i < Microphone.GetPosition(null); ++i)
		int32_t L_18 = V_1;
		int32_t L_19;
		L_19 = Microphone_GetPosition_m7D0A6CF146C1F716F0DF886223B119279DE1E587((String_t*)NULL, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_001d;
		}
	}
	{
		// if (maxVolume > _minimumSpeakingSampleValue)
		float L_20 = V_0;
		float L_21 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get__minimumSpeakingSampleValue_11();
		if ((!(((float)L_20) > ((float)L_21))))
		{
			goto IL_0095;
		}
	}
	{
		// if (_audioDetected == false) // User first starts talking after a gap
		bool L_22 = __this->get__audioDetected_24();
		if (L_22)
		{
			goto IL_00e7;
		}
	}
	{
		// _audioDetected = true;
		__this->set__audioDetected_24((bool)1);
		// _requestNeedsSending = true;
		__this->set__requestNeedsSending_25((bool)1);
		// }
		goto IL_00e7;
	}

IL_0095:
	{
		// if (_audioDetected == true) // User first stopped talking after talking
		bool L_23 = __this->get__audioDetected_24();
		if (!L_23)
		{
			goto IL_00b1;
		}
	}
	{
		// _timeAtSilenceBegan = Time.time;
		float L_24;
		L_24 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set__timeAtSilenceBegan_22(L_24);
		// _audioDetected = false;
		__this->set__audioDetected_24((bool)0);
		// }
		goto IL_00e7;
	}

IL_00b1:
	{
		// else if (_requestNeedsSending == true) // while no new voice input is detected
		bool L_25 = __this->get__requestNeedsSending_25();
		if (!L_25)
		{
			goto IL_00e7;
		}
	}
	{
		// if (Time.time - _timeAtSilenceBegan > _silenceTimer)
		float L_26;
		L_26 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_27 = __this->get__timeAtSilenceBegan_22();
		float L_28 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get__silenceTimer_10();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_26, (float)L_27))) > ((float)L_28))))
		{
			goto IL_00e7;
		}
	}
	{
		// _audioDetected = false;
		__this->set__audioDetected_24((bool)0);
		// _requestNeedsSending = false;
		__this->set__requestNeedsSending_25((bool)0);
		// SendRequestToGoogle();
		GoogleSpeechToText_SendRequestToGoogle_m3D894AA60EAAB407F85A4E0CFF5BAB81608BB8D0(__this, /*hidden argument*/NULL);
		// ClearSamples();
		GoogleSpeechToText_ClearSamples_m049EC3441B80A342401855CE61B0CAD591226CA9(__this, /*hidden argument*/NULL);
	}

IL_00e7:
	{
		// _micPrevPos = Microphone.GetPosition(null);
		int32_t L_29;
		L_29 = Microphone_GetPosition_m7D0A6CF146C1F716F0DF886223B119279DE1E587((String_t*)NULL, /*hidden argument*/NULL);
		__this->set__micPrevPos_21(L_29);
		// }
		return;
	}
}
// System.Boolean MagicLeapTools.Voice.GoogleSpeechToText::CheckForTrackedWords(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSpeechToText_CheckForTrackedWords_mE1CAAD186263543DB6CEAC3735C4620164737D68 (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, String_t* ___newPhrase0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSpeechToText_CheckForTrackedWords_mE1CAAD186263543DB6CEAC3735C4620164737D68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GoogleSpeechToText_CheckForTrackedWords_mE1CAAD186263543DB6CEAC3735C4620164737D68_RuntimeMethod_var);
	int32_t V_0 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_2;
	memset((&V_2), 0, sizeof(V_2));
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	int32_t G_B7_1 = 0;
	{
		// for (int i = 0; i < TrackedPhrases?.Length; ++i)
		V_0 = 0;
		goto IL_0021;
	}

IL_0004:
	{
		// if (newPhrase == TrackedPhrases[i])
		String_t* L_0 = ___newPhrase0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get_TrackedPhrases_13();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		// FireOnTrackedPhraseFound(i);
		int32_t L_6 = V_0;
		SpeechToText_FireOnTrackedPhraseFound_m261AA987F136FAEA98ED3533BBC74D13A7459AE9(__this, L_6, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_001d:
	{
		// for (int i = 0; i < TrackedPhrases?.Length; ++i)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0021:
	{
		// for (int i = 0; i < TrackedPhrases?.Length; ++i)
		int32_t L_8 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E *)__this)->get_TrackedPhrases_13();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		G_B5_0 = L_10;
		G_B5_1 = L_8;
		if (L_10)
		{
			G_B6_0 = L_10;
			G_B6_1 = L_8;
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_11 = V_2;
		G_B7_0 = L_11;
		G_B7_1 = G_B5_1;
		goto IL_003e;
	}

IL_0037:
	{
		NullCheck(G_B6_0);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_12), ((int32_t)((int32_t)(((RuntimeArray*)G_B6_0)->max_length))), /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		G_B7_0 = L_12;
		G_B7_1 = G_B6_1;
	}

IL_003e:
	{
		V_1 = G_B7_0;
		int32_t L_13;
		L_13 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_1), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		bool L_14;
		L_14 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)G_B7_1) < ((int32_t)L_13))? 1 : 0)&(int32_t)L_14)))
		{
			goto IL_0004;
		}
	}
	{
		// FireOnUntrackedPhraseFound(newPhrase);
		String_t* L_15 = ___newPhrase0;
		SpeechToText_FireOnUntrackedPhraseFound_m5984736CC4DF76EE7DFE9028A5A43BDE137D235E(__this, L_15, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::FillSamples(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_FillSamples_m8C63684BFFB21C5DECB8DC63A29C8FCA529B8F5D (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, int32_t ___micPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSpeechToText_FillSamples_m8C63684BFFB21C5DECB8DC63A29C8FCA529B8F5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GoogleSpeechToText_FillSamples_m8C63684BFFB21C5DECB8DC63A29C8FCA529B8F5D_RuntimeMethod_var);
	{
		// _samples = new float[_audioRecording.samples]; // make a float array to hold the samples
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_0 = __this->get__audioRecording_29();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->set__samples_23(L_2);
		// _audioRecording.GetData(_samples, micPosition); // Fill that array (values [-1.0f -> 1.0]
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3 = __this->get__audioRecording_29();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = __this->get__samples_23();
		int32_t L_5 = ___micPosition0;
		NullCheck(L_3);
		bool L_6;
		L_6 = AudioClip_GetData_m2D7410645789EBED93CAA8146D271C79156E2CB0(L_3, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::ClearSamples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText_ClearSamples_m049EC3441B80A342401855CE61B0CAD591226CA9 (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSpeechToText_ClearSamples_m049EC3441B80A342401855CE61B0CAD591226CA9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GoogleSpeechToText_ClearSamples_m049EC3441B80A342401855CE61B0CAD591226CA9_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < _samples.Length; ++i)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// _samples[i] = 0.0f;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = __this->get__samples_23();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (float)(0.0f));
		// for (int i = 0; i < _samples.Length; ++i)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0015:
	{
		// for (int i = 0; i < _samples.Length; ++i)
		int32_t L_3 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = __this->get__samples_23();
		NullCheck(L_4);
		if ((((int32_t)L_3) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// _audioRecording.SetData(_samples, 0);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5 = __this->get__audioRecording_29();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = __this->get__samples_23();
		NullCheck(L_5);
		bool L_7;
		L_7 = AudioClip_SetData_m3424F9C6C5B7A15491B79F961C30D8F0051E34F7(L_5, L_6, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.GoogleSpeechToText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSpeechToText__ctor_mC2795F192D53637D95E546F2F4F12A622BBC3712 (GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleRequestData_tC1DFDCCDC6A73F155AA1BA410340FF9C5F283513_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSpeechToText__ctor_mC2795F192D53637D95E546F2F4F12A622BBC3712_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40735F9363DD17CDBD77AEB074E110B942E0A4A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GoogleSpeechToText__ctor_mC2795F192D53637D95E546F2F4F12A622BBC3712_RuntimeMethod_var);
	{
		// private string _uri = "https://speech.googleapis.com/v1/speech:recognize?&key="; // receive results after all audio has been sent and processed.
		__this->set__uri_19(_stringLiteral40735F9363DD17CDBD77AEB074E110B942E0A4A9);
		// private string _APIKey = "";
		__this->set__APIKey_20(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private GoogleRequestData _googleRequestData = new GoogleRequestData(); // What is sent to Google
		GoogleRequestData_tC1DFDCCDC6A73F155AA1BA410340FF9C5F283513 * L_0 = (GoogleRequestData_tC1DFDCCDC6A73F155AA1BA410340FF9C5F283513 *)il2cpp_codegen_object_new(GoogleRequestData_tC1DFDCCDC6A73F155AA1BA410340FF9C5F283513_il2cpp_TypeInfo_var);
		GoogleRequestData__ctor_mBAFECAE8251FA13B9E29E0C57ED66FC3FF06B382(L_0, /*hidden argument*/NULL);
		__this->set__googleRequestData_27(L_0);
		SpeechToText__ctor_mB10C368875790DC34D345E624AD237BF9488F3E2(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.MagicLeap.MLResult MagicLeapTools.MicPrivilegeHandler::RequestPrivilegesAsync(System.Action`1<UnityEngine.XR.MagicLeap.MLResult>,UnityEngine.XR.MagicLeap.MLPrivileges/Id[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MLResult_t16167FAD492D3A6F53116897898D23453C72B635  MicPrivilegeHandler_RequestPrivilegesAsync_mCACA235F410BB3BE175ECF6FAB84D1C532157E80 (MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03 * __this, Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * ___callback0, IdU5BU5D_t0B440052AA3AC3DFF832C1D1A50DD51C4A41578E* ___privileges1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mE477DD51DDD869219EB8AEA14D222D65530D3367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicPrivilegeHandler_RequestPrivilegesAsync_mCACA235F410BB3BE175ECF6FAB84D1C532157E80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CRequestPrivilegesAsyncU3Eb__0_m9F4C6376FCABFBA19926946D457801061B6AA623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MicPrivilegeHandler_RequestPrivilegesAsync_mCACA235F410BB3BE175ECF6FAB84D1C532157E80_RuntimeMethod_var);
	U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7 * V_0 = NULL;
	MLResult_t16167FAD492D3A6F53116897898D23453C72B635  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783 * V_5 = NULL;
	Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * G_B5_0 = NULL;
	Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * G_B4_0 = NULL;
	CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783 * G_B8_0 = NULL;
	uint32_t G_B8_1 = 0;
	CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783 * G_B7_0 = NULL;
	uint32_t G_B7_1 = 0;
	{
		U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7 * L_0 = (U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m769B5B0F0E038E3ED5AE6EB858A78A0E82AFDFF1(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7 * L_1 = V_0;
		Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * L_2 = ___callback0;
		NullCheck(L_1);
		L_1->set_callback_1(L_2);
		// int numPrivilegesToRequest = privileges.Length;
		U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7 * L_3 = V_0;
		IdU5BU5D_t0B440052AA3AC3DFF832C1D1A50DD51C4A41578E* L_4 = ___privileges1;
		NullCheck(L_4);
		NullCheck(L_3);
		L_3->set_numPrivilegesToRequest_0(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))));
		// MLResult _result = MLResult.Create(MLResult.Code.Pending);
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_5;
		L_5 = MLResult_Create_m7E4E59D7D261B1D397AB89E66E05EADEB0835F52(1, (String_t*)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		// for(int i = 0; i < privileges.Length; i++)
		V_2 = 0;
		goto IL_009f;
	}

IL_0022:
	{
		// MLPrivileges.Id privilege = privileges[i];
		IdU5BU5D_t0B440052AA3AC3DFF832C1D1A50DD51C4A41578E* L_6 = ___privileges1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (uint32_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// _result = CheckPrivilege(privilege);
		uint32_t L_10 = V_3;
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_11;
		L_11 = MicPrivilegeHandler_CheckPrivilege_m592398F8F259C0A4549D33EAF70FC7C5DCAB0505(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// if (_result.Result == MLResult.Code.PrivilegeGranted)
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_12 = V_1;
		int32_t L_13 = L_12.get_Result_0();
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-875757568)))))
		{
			goto IL_0068;
		}
	}
	{
		// numPrivilegesToRequest--;
		U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7 * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_numPrivilegesToRequest_0();
		V_4 = L_15;
		U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7 * L_16 = V_0;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		L_16->set_numPrivilegesToRequest_0(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)));
		// if(numPrivilegesToRequest == 0)
		U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7 * L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_numPrivilegesToRequest_0();
		if (L_19)
		{
			goto IL_009b;
		}
	}
	{
		// callback?.Invoke(_result);
		U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7 * L_20 = V_0;
		NullCheck(L_20);
		Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * L_21 = L_20->get_callback_1();
		Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * L_22 = L_21;
		G_B4_0 = L_22;
		if (L_22)
		{
			G_B5_0 = L_22;
			goto IL_0060;
		}
	}
	{
		goto IL_009b;
	}

IL_0060:
	{
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_23 = V_1;
		NullCheck(G_B5_0);
		Action_1_Invoke_mE477DD51DDD869219EB8AEA14D222D65530D3367(G_B5_0, L_23, /*hidden argument*/Action_1_Invoke_mE477DD51DDD869219EB8AEA14D222D65530D3367_RuntimeMethod_var);
		// continue;
		goto IL_009b;
	}

IL_0068:
	{
		// _result = MLPrivileges.RequestPrivilegeAsync(privilege, (MLResult result, MLPrivileges.Id priv) =>
		// {
		//     numPrivilegesToRequest--;
		// 
		//     if (result.Result == MLResult.Code.PrivilegeGranted)
		//     {
		//         if (numPrivilegesToRequest == 0)
		//         {
		//             callback?.Invoke(result);
		//         }
		//     }
		// 
		//     // Privilege was not granted
		//     else
		//     {
		//         numPrivilegesToRequest = 0;
		//         if (numPrivilegesToRequest == 0)
		//         {
		//             callback?.Invoke(result);
		//         }
		//     }
		// });
		uint32_t L_24 = V_3;
		U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7 * L_25 = V_0;
		NullCheck(L_25);
		CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783 * L_26 = L_25->get_U3CU3E9__0_2();
		CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783 * L_27 = L_26;
		G_B7_0 = L_27;
		G_B7_1 = L_24;
		if (L_27)
		{
			G_B8_0 = L_27;
			G_B8_1 = L_24;
			goto IL_008a;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7 * L_28 = V_0;
		U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7 * L_29 = V_0;
		CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783 * L_30 = (CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783 *)il2cpp_codegen_object_new(CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783_il2cpp_TypeInfo_var);
		CallbackDelegate__ctor_m7076AF6A922D49D3FF7B7026B674D961286BFF9E(L_30, L_29, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3CRequestPrivilegesAsyncU3Eb__0_m9F4C6376FCABFBA19926946D457801061B6AA623_RuntimeMethod_var), /*hidden argument*/NULL);
		CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783 * L_31 = L_30;
		V_5 = L_31;
		NullCheck(L_28);
		L_28->set_U3CU3E9__0_2(L_31);
		CallbackDelegate_t0191880A21DDF021BB6E686FA9EEBE8B06660783 * L_32 = V_5;
		G_B8_0 = L_32;
		G_B8_1 = G_B7_1;
	}

IL_008a:
	{
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_33;
		L_33 = MLPrivileges_RequestPrivilegeAsync_m31EA49A0CBD9E8E539B76E6A27172C7CA852F437(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		V_1 = L_33;
		// if (!_result.IsOk)
		bool L_34;
		L_34 = MLResult_get_IsOk_m36FFD3C2CCE4D6131ACB42254AAF6F93A8895001((MLResult_t16167FAD492D3A6F53116897898D23453C72B635 *)(&V_1), /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_009b;
		}
	}
	{
		// return _result;
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_35 = V_1;
		return L_35;
	}

IL_009b:
	{
		// for(int i = 0; i < privileges.Length; i++)
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_009f:
	{
		// for(int i = 0; i < privileges.Length; i++)
		int32_t L_37 = V_2;
		IdU5BU5D_t0B440052AA3AC3DFF832C1D1A50DD51C4A41578E* L_38 = ___privileges1;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		// if(_result.Result == MLResult.Code.PrivilegeGranted)
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_39 = V_1;
		int32_t L_40 = L_39.get_Result_0();
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)-875757568)))))
		{
			goto IL_00bd;
		}
	}
	{
		// _result = MLResult.Create(MLResult.Code.Ok);
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_41;
		L_41 = MLResult_Create_m7E4E59D7D261B1D397AB89E66E05EADEB0835F52(0, (String_t*)NULL, /*hidden argument*/NULL);
		V_1 = L_41;
	}

IL_00bd:
	{
		// return _result;
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_42 = V_1;
		return L_42;
	}
}
// UnityEngine.XR.MagicLeap.MLResult MagicLeapTools.MicPrivilegeHandler::CheckPrivilege(UnityEngine.XR.MagicLeap.MLPrivileges/Id)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MLResult_t16167FAD492D3A6F53116897898D23453C72B635  MicPrivilegeHandler_CheckPrivilege_m592398F8F259C0A4549D33EAF70FC7C5DCAB0505 (uint32_t ___privilege0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Id_t37BF3211DEB98C61C6547A940D23B015089A01A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MLResult_t16167FAD492D3A6F53116897898D23453C72B635_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicPrivilegeHandler_CheckPrivilege_m592398F8F259C0A4549D33EAF70FC7C5DCAB0505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral300FC3231BA4F5CF33D2327F9AABCEA0C7EBE319);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MicPrivilegeHandler_CheckPrivilege_m592398F8F259C0A4549D33EAF70FC7C5DCAB0505_RuntimeMethod_var);
	MLResult_t16167FAD492D3A6F53116897898D23453C72B635  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var _result = MLPrivileges.CheckPrivilege(privilege);
		uint32_t L_0 = ___privilege0;
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_1;
		L_1 = MLPrivileges_CheckPrivilege_mCC7CA1A59EF73D4C6543862A8F11EF669AE91E81(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (_result.Result != MLResult.Code.PrivilegeGranted && _result.Result != MLResult.Code.PrivilegeNotGranted)
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_2 = V_0;
		int32_t L_3 = L_2.get_Result_0();
		if ((((int32_t)L_3) == ((int32_t)((int32_t)-875757568))))
		{
			goto IL_0043;
		}
	}
	{
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_4 = V_0;
		int32_t L_5 = L_4.get_Result_0();
		if ((((int32_t)L_5) == ((int32_t)((int32_t)-875757567))))
		{
			goto IL_0043;
		}
	}
	{
		// Debug.LogErrorFormat("Error: MLPrivilegesStarterKit.CheckPrivilege failed for the privilege {0}. Reason: {1}", privilege, _result);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		uint32_t L_8 = ___privilege0;
		uint32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Id_t37BF3211DEB98C61C6547A940D23B015089A01A7_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_12 = V_0;
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_13 = L_12;
		RuntimeObject * L_14 = Box(MLResult_t16167FAD492D3A6F53116897898D23453C72B635_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteral300FC3231BA4F5CF33D2327F9AABCEA0C7EBE319, L_11, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// return _result;
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_15 = V_0;
		return L_15;
	}
}
// System.Void MagicLeapTools.MicPrivilegeHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicPrivilegeHandler_Start_mBC8A3A35C8B474DFB1DC6501C53495219EFAC687 (MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mE1B3632E895E5E93F9D6D2357A4F1811736AB00B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdU5BU5D_t0B440052AA3AC3DFF832C1D1A50DD51C4A41578E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicPrivilegeHandler_HandlePrivilegesDone_m056D34A38832DEA69F831152D4E1150D8BA83FCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicPrivilegeHandler_Start_mBC8A3A35C8B474DFB1DC6501C53495219EFAC687_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MicPrivilegeHandler_Start_mBC8A3A35C8B474DFB1DC6501C53495219EFAC687_RuntimeMethod_var);
	{
		// RequestPrivilegesAsync(HandlePrivilegesDone, new MLPrivileges.Id[]
		// {
		//     MLPrivileges.Id.AudioCaptureMic
		// });
		Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * L_0 = (Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 *)il2cpp_codegen_object_new(Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57_il2cpp_TypeInfo_var);
		Action_1__ctor_mE1B3632E895E5E93F9D6D2357A4F1811736AB00B(L_0, __this, (intptr_t)((intptr_t)MicPrivilegeHandler_HandlePrivilegesDone_m056D34A38832DEA69F831152D4E1150D8BA83FCB_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mE1B3632E895E5E93F9D6D2357A4F1811736AB00B_RuntimeMethod_var);
		IdU5BU5D_t0B440052AA3AC3DFF832C1D1A50DD51C4A41578E* L_1 = (IdU5BU5D_t0B440052AA3AC3DFF832C1D1A50DD51C4A41578E*)(IdU5BU5D_t0B440052AA3AC3DFF832C1D1A50DD51C4A41578E*)SZArrayNew(IdU5BU5D_t0B440052AA3AC3DFF832C1D1A50DD51C4A41578E_il2cpp_TypeInfo_var, (uint32_t)1);
		IdU5BU5D_t0B440052AA3AC3DFF832C1D1A50DD51C4A41578E* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)49));
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_3;
		L_3 = MicPrivilegeHandler_RequestPrivilegesAsync_mCACA235F410BB3BE175ECF6FAB84D1C532157E80(__this, L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicLeapTools.MicPrivilegeHandler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicPrivilegeHandler_OnDestroy_m4DFA64B451A5B2F8A4ABA2AFF8A84558E5F2BB06 (MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicPrivilegeHandler_OnDestroy_m4DFA64B451A5B2F8A4ABA2AFF8A84558E5F2BB06_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MicPrivilegeHandler_OnDestroy_m4DFA64B451A5B2F8A4ABA2AFF8A84558E5F2BB06_RuntimeMethod_var);
	{
		// }
		return;
	}
}
// System.Void MagicLeapTools.MicPrivilegeHandler::HandlePrivilegesDone(UnityEngine.XR.MagicLeap.MLResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicPrivilegeHandler_HandlePrivilegesDone_m056D34A38832DEA69F831152D4E1150D8BA83FCB (MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03 * __this, MLResult_t16167FAD492D3A6F53116897898D23453C72B635  ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicPrivilegeHandler_HandlePrivilegesDone_m056D34A38832DEA69F831152D4E1150D8BA83FCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CAA36A8EFE8532C2E814DC7DF04D74806AB8E5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79CEB5181088B0DF5FB4D76925F75E147EFEBBD4);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MicPrivilegeHandler_HandlePrivilegesDone_m056D34A38832DEA69F831152D4E1150D8BA83FCB_RuntimeMethod_var);
	MLResult_t16167FAD492D3A6F53116897898D23453C72B635  V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * G_B5_0 = NULL;
	HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * G_B4_0 = NULL;
	HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * G_B8_0 = NULL;
	HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * G_B7_0 = NULL;
	{
		// if (!result.IsOk)
		bool L_0;
		L_0 = MLResult_get_IsOk_m36FFD3C2CCE4D6131ACB42254AAF6F93A8895001((MLResult_t16167FAD492D3A6F53116897898D23453C72B635 *)(&___result0), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0060;
		}
	}
	{
		// Debug.LogError("Failed to get all requested privileges. MLResult: " + result);
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_1 = ___result0;
		V_0 = L_1;
		String_t* L_2;
		L_2 = MLResult_ToString_m3E04BC84A8EB7C550F22026A790E476190F20B48((MLResult_t16167FAD492D3A6F53116897898D23453C72B635 *)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3CAA36A8EFE8532C2E814DC7DF04D74806AB8E5B, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_3, /*hidden argument*/NULL);
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// if (result.Result == MLResult.Code.PrivilegeDenied)
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_4 = ___result0;
		int32_t L_5 = L_4.get_Result_0();
		if ((!(((uint32_t)L_5) == ((uint32_t)7))))
		{
			goto IL_0047;
		}
	}
	{
		// Instantiate(Resources.Load("PrivilegeDeniedError"));
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_6;
		L_6 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral79CEB5181088B0DF5FB4D76925F75E147EFEBBD4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_7;
		L_7 = Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A(L_6, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// MicCaptureState = MicCaptureStateType.PrivilegeDeclined;
		__this->set_MicCaptureState_4(1);
		// OnMicPrivilegeResult?.Invoke(false);
		HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * L_8 = __this->get_OnMicPrivilegeResult_5();
		HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * L_9 = L_8;
		G_B4_0 = L_9;
		if (L_9)
		{
			G_B5_0 = L_9;
			goto IL_0059;
		}
	}
	{
		return;
	}

IL_0059:
	{
		NullCheck(G_B5_0);
		HandleMicPrivilegeResult_Invoke_mC4005C1D52FB1AC8F5BB201323E78D106DA80729(G_B5_0, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0060:
	{
		// MicCaptureState = MicCaptureStateType.PrivilegeActive;
		__this->set_MicCaptureState_4(2);
		// OnMicPrivilegeResult?.Invoke(true);
		HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * L_10 = __this->get_OnMicPrivilegeResult_5();
		HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * L_11 = L_10;
		G_B7_0 = L_11;
		if (L_11)
		{
			G_B8_0 = L_11;
			goto IL_0072;
		}
	}
	{
		return;
	}

IL_0072:
	{
		NullCheck(G_B8_0);
		HandleMicPrivilegeResult_Invoke_mC4005C1D52FB1AC8F5BB201323E78D106DA80729(G_B8_0, (bool)1, /*hidden argument*/NULL);
		// return;
		return;
	}
}
// System.Void MagicLeapTools.MicPrivilegeHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicPrivilegeHandler__ctor_m5413DF5FFC589A84DED1A51E56A1FE33A9F91DFE (MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicPrivilegeHandler__ctor_m5413DF5FFC589A84DED1A51E56A1FE33A9F91DFE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MicPrivilegeHandler__ctor_m5413DF5FFC589A84DED1A51E56A1FE33A9F91DFE_RuntimeMethod_var);
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicLeapTools.Voice.RecognitionAudio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionAudio__ctor_mE65FA9331C34C6EA8042FB7A785DB45D0CD7E073 (RecognitionAudio_t83AC76B77D060BB6FECAB42E357073F4FE00A439 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionAudio__ctor_mE65FA9331C34C6EA8042FB7A785DB45D0CD7E073_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(RecognitionAudio__ctor_mE65FA9331C34C6EA8042FB7A785DB45D0CD7E073_RuntimeMethod_var);
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicLeapTools.Voice.RecognitionConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionConfig__ctor_m6D2A442A926DC8C1ED08DE4EEBA8B541023B0611 (RecognitionConfig_tDFE9EEE9DADE354170248326AB5275AAA02A307E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionConfig__ctor_m6D2A442A926DC8C1ED08DE4EEBA8B541023B0611_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechContextU5BU5D_tD2805A4D8AD00BAB8C8EE7322CA43877E700AA07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A971881AF6B7B211E34707E857DEC5F36487877);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7411BB52A7D8C5DCEF9C418D6800018D7332EC63);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(RecognitionConfig__ctor_m6D2A442A926DC8C1ED08DE4EEBA8B541023B0611_RuntimeMethod_var);
	{
		// public string encoding = "LINEAR16"; // Required
		__this->set_encoding_0(_stringLiteral7411BB52A7D8C5DCEF9C418D6800018D7332EC63);
		// public int sampleRateHertz = 16000; // Required
		__this->set_sampleRateHertz_1(((int32_t)16000));
		// public string languageCode = "en-US"; // Required
		__this->set_languageCode_4(_stringLiteral3A971881AF6B7B211E34707E857DEC5F36487877);
		// public int maxAlternatives = 1; //Optional [0-30]
		__this->set_maxAlternatives_5(1);
		// public SpeechContext[] speechContexts = new SpeechContext[1];
		SpeechContextU5BU5D_tD2805A4D8AD00BAB8C8EE7322CA43877E700AA07* L_0 = (SpeechContextU5BU5D_tD2805A4D8AD00BAB8C8EE7322CA43877E700AA07*)(SpeechContextU5BU5D_tD2805A4D8AD00BAB8C8EE7322CA43877E700AA07*)SZArrayNew(SpeechContextU5BU5D_tD2805A4D8AD00BAB8C8EE7322CA43877E700AA07_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_speechContexts_7(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicLeapTools.Voice.SpeechContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechContext__ctor_m3CE578BA25E5234EB3DFFEC77C82E8747B352D4D (SpeechContext_tAAF8FEA439340BCFDD3F6BDC3B72A7F3A7DB05A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechContext__ctor_m3CE578BA25E5234EB3DFFEC77C82E8747B352D4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50C1748082D879E0DC7AE31B46109981BB9AFC0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86CA2392D0BB11214E0F43EE3F9EEAFFAB1F97D9);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechContext__ctor_m3CE578BA25E5234EB3DFFEC77C82E8747B352D4D_RuntimeMethod_var);
	{
		// public string[] phrases = { "Enable Map", "Disable Map" }; // This makes it so it will be able to better pick up on these
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral50C1748082D879E0DC7AE31B46109981BB9AFC0A);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral50C1748082D879E0DC7AE31B46109981BB9AFC0A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral86CA2392D0BB11214E0F43EE3F9EEAFFAB1F97D9);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral86CA2392D0BB11214E0F43EE3F9EEAFFAB1F97D9);
		__this->set_phrases_0(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A (SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * __this, String_t* ___phrase0, float ___confidence1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___phrase0' to native representation
	char* ____phrase0_marshaled = NULL;
	____phrase0_marshaled = il2cpp_codegen_marshal_string(___phrase0);

	// Native function invocation
	il2cppPInvokeFunc(____phrase0_marshaled, ___confidence1);

	// Marshaling cleanup of parameter '___phrase0' native representation
	il2cpp_codegen_marshal_free(____phrase0_marshaled);
	____phrase0_marshaled = NULL;

}
// System.Void MagicLeapTools.Voice.SpeechProcessed::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechProcessed__ctor_mEB963BD6586D3BF1FA08C6B86AE2DAF3AD380352 (SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechProcessed__ctor_mEB963BD6586D3BF1FA08C6B86AE2DAF3AD380352_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechProcessed__ctor_mEB963BD6586D3BF1FA08C6B86AE2DAF3AD380352_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MagicLeapTools.Voice.SpeechProcessed::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechProcessed_Invoke_mDE3D8A5CDF7073E89386218E684EF0687564D422 (SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * __this, String_t* ___phrase0, float ___confidence1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechProcessed_Invoke_mDE3D8A5CDF7073E89386218E684EF0687564D422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechProcessed_Invoke_mDE3D8A5CDF7073E89386218E684EF0687564D422_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___phrase0, ___confidence1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___phrase0, ___confidence1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, ___phrase0, ___confidence1);
					else
						GenericVirtActionInvoker1< float >::Invoke(targetMethod, ___phrase0, ___confidence1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___phrase0, ___confidence1);
					else
						VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___phrase0, ___confidence1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___phrase0, ___confidence1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, float >::Invoke(targetMethod, targetThis, ___phrase0, ___confidence1);
					else
						GenericVirtActionInvoker2< String_t*, float >::Invoke(targetMethod, targetThis, ___phrase0, ___confidence1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___phrase0, ___confidence1);
					else
						VirtActionInvoker2< String_t*, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___phrase0, ___confidence1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___phrase0, ___confidence1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___phrase0, ___confidence1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult MagicLeapTools.Voice.SpeechProcessed::BeginInvoke(System.String,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpeechProcessed_BeginInvoke_m3146BE50821D5A66259BE2FB7A050BAE63A15ECB (SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * __this, String_t* ___phrase0, float ___confidence1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechProcessed_BeginInvoke_m3146BE50821D5A66259BE2FB7A050BAE63A15ECB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechProcessed_BeginInvoke_m3146BE50821D5A66259BE2FB7A050BAE63A15ECB_RuntimeMethod_var);
	void *__d_args[3] = {0};
	__d_args[0] = ___phrase0;
	__d_args[1] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___confidence1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void MagicLeapTools.Voice.SpeechProcessed::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechProcessed_EndInvoke_mB94652B690932AA03773C16E1A31BD84F738F035 (SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechProcessed_EndInvoke_mB94652B690932AA03773C16E1A31BD84F738F035_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechProcessed_EndInvoke_mB94652B690932AA03773C16E1A31BD84F738F035_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicLeapTools.Voice.SpeechRecognitionAlternative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionAlternative__ctor_m7250BC84E6210EC8CA9F1AC00AA984FEDDE4FF11 (SpeechRecognitionAlternative_t554258DCE2502836D1447AD3DE65BB5E7D08A0BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionAlternative__ctor_m7250BC84E6210EC8CA9F1AC00AA984FEDDE4FF11_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechRecognitionAlternative__ctor_m7250BC84E6210EC8CA9F1AC00AA984FEDDE4FF11_RuntimeMethod_var);
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicLeapTools.Voice.SpeechRecognitionResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionResult__ctor_mF4AF6F56953F7C87944AD00557BA1C1F5E670F98 (SpeechRecognitionResult_t92F1E65BF6CA359B429837A17EC8EDB269D3CBE3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionAlternativeU5BU5D_t684D82A5F2431F89EB15F27BA4F1E87C990F01C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionResult__ctor_mF4AF6F56953F7C87944AD00557BA1C1F5E670F98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechRecognitionResult__ctor_mF4AF6F56953F7C87944AD00557BA1C1F5E670F98_RuntimeMethod_var);
	{
		// public SpeechRecognitionAlternative[] alternatives = new SpeechRecognitionAlternative[1]; // same as maxAlternatives
		SpeechRecognitionAlternativeU5BU5D_t684D82A5F2431F89EB15F27BA4F1E87C990F01C5* L_0 = (SpeechRecognitionAlternativeU5BU5D_t684D82A5F2431F89EB15F27BA4F1E87C990F01C5*)(SpeechRecognitionAlternativeU5BU5D_t684D82A5F2431F89EB15F27BA4F1E87C990F01C5*)SZArrayNew(SpeechRecognitionAlternativeU5BU5D_t684D82A5F2431F89EB15F27BA4F1E87C990F01C5_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_alternatives_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicLeapTools.Voice.SpeechRecognitionResultObj::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionResultObj__ctor_m120346B4419ED4AA48ECDBFD15E65A9607796F86 (SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionResultObj__ctor_m120346B4419ED4AA48ECDBFD15E65A9607796F86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionResultU5BU5D_tE66E11BBEEC6DC6E9422B124CC8A97BD2D98BB00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechRecognitionResultObj__ctor_m120346B4419ED4AA48ECDBFD15E65A9607796F86_RuntimeMethod_var);
	{
		// public SpeechRecognitionResult[] results = new SpeechRecognitionResult[1]; // same as maxAlternatives
		SpeechRecognitionResultU5BU5D_tE66E11BBEEC6DC6E9422B124CC8A97BD2D98BB00* L_0 = (SpeechRecognitionResultU5BU5D_tE66E11BBEEC6DC6E9422B124CC8A97BD2D98BB00*)(SpeechRecognitionResultU5BU5D_tE66E11BBEEC6DC6E9422B124CC8A97BD2D98BB00*)SZArrayNew(SpeechRecognitionResultU5BU5D_tE66E11BBEEC6DC6E9422B124CC8A97BD2D98BB00_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_results_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicLeapTools.Voice.SpeechToText::add_OnTrackedPhraseFound(MagicLeapTools.Voice.TrackedPhraseFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_add_OnTrackedPhraseFound_mB2E9D0701E5CAD27FB825219A31BD14B93C6D647 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_add_OnTrackedPhraseFound_mB2E9D0701E5CAD27FB825219A31BD14B93C6D647_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechToText_add_OnTrackedPhraseFound_mB2E9D0701E5CAD27FB825219A31BD14B93C6D647_RuntimeMethod_var);
	TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * V_0 = NULL;
	TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * V_1 = NULL;
	TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * V_2 = NULL;
	{
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_0 = __this->get_OnTrackedPhraseFound_4();
		V_0 = L_0;
	}

IL_0007:
	{
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_1 = V_0;
		V_1 = L_1;
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_2 = V_1;
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 *)CastclassSealed((RuntimeObject*)L_4, TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96_il2cpp_TypeInfo_var));
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 ** L_5 = __this->get_address_of_OnTrackedPhraseFound_4();
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_6 = V_2;
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_7 = V_1;
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_8;
		L_8 = InterlockedCompareExchangeImpl<TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 *>((TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 **)L_5, L_6, L_7);
		V_0 = L_8;
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_9 = V_0;
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_10 = V_1;
		if ((!(((RuntimeObject*)(TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 *)L_9) == ((RuntimeObject*)(TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MagicLeapTools.Voice.SpeechToText::remove_OnTrackedPhraseFound(MagicLeapTools.Voice.TrackedPhraseFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_remove_OnTrackedPhraseFound_m9DC9D972623CE3DEEE4874B21016BFB5357CA815 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_remove_OnTrackedPhraseFound_m9DC9D972623CE3DEEE4874B21016BFB5357CA815_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechToText_remove_OnTrackedPhraseFound_m9DC9D972623CE3DEEE4874B21016BFB5357CA815_RuntimeMethod_var);
	TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * V_0 = NULL;
	TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * V_1 = NULL;
	TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * V_2 = NULL;
	{
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_0 = __this->get_OnTrackedPhraseFound_4();
		V_0 = L_0;
	}

IL_0007:
	{
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_1 = V_0;
		V_1 = L_1;
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_2 = V_1;
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 *)CastclassSealed((RuntimeObject*)L_4, TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96_il2cpp_TypeInfo_var));
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 ** L_5 = __this->get_address_of_OnTrackedPhraseFound_4();
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_6 = V_2;
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_7 = V_1;
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_8;
		L_8 = InterlockedCompareExchangeImpl<TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 *>((TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 **)L_5, L_6, L_7);
		V_0 = L_8;
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_9 = V_0;
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_10 = V_1;
		if ((!(((RuntimeObject*)(TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 *)L_9) == ((RuntimeObject*)(TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MagicLeapTools.Voice.SpeechToText::add_OnUntrackedPhraseFound(MagicLeapTools.Voice.UntrackedPhraseFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_add_OnUntrackedPhraseFound_m6906479DAF33EA39649ACFB70A52034557FD2D31 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_add_OnUntrackedPhraseFound_m6906479DAF33EA39649ACFB70A52034557FD2D31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechToText_add_OnUntrackedPhraseFound_m6906479DAF33EA39649ACFB70A52034557FD2D31_RuntimeMethod_var);
	UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * V_0 = NULL;
	UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * V_1 = NULL;
	UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * V_2 = NULL;
	{
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_0 = __this->get_OnUntrackedPhraseFound_5();
		V_0 = L_0;
	}

IL_0007:
	{
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_1 = V_0;
		V_1 = L_1;
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_2 = V_1;
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 *)CastclassSealed((RuntimeObject*)L_4, UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48_il2cpp_TypeInfo_var));
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 ** L_5 = __this->get_address_of_OnUntrackedPhraseFound_5();
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_6 = V_2;
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_7 = V_1;
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_8;
		L_8 = InterlockedCompareExchangeImpl<UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 *>((UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 **)L_5, L_6, L_7);
		V_0 = L_8;
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_9 = V_0;
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 *)L_9) == ((RuntimeObject*)(UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MagicLeapTools.Voice.SpeechToText::remove_OnUntrackedPhraseFound(MagicLeapTools.Voice.UntrackedPhraseFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_remove_OnUntrackedPhraseFound_m96DCD56997D29ABB249C7F69BB973E070B4CF05F (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_remove_OnUntrackedPhraseFound_m96DCD56997D29ABB249C7F69BB973E070B4CF05F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechToText_remove_OnUntrackedPhraseFound_m96DCD56997D29ABB249C7F69BB973E070B4CF05F_RuntimeMethod_var);
	UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * V_0 = NULL;
	UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * V_1 = NULL;
	UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * V_2 = NULL;
	{
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_0 = __this->get_OnUntrackedPhraseFound_5();
		V_0 = L_0;
	}

IL_0007:
	{
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_1 = V_0;
		V_1 = L_1;
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_2 = V_1;
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 *)CastclassSealed((RuntimeObject*)L_4, UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48_il2cpp_TypeInfo_var));
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 ** L_5 = __this->get_address_of_OnUntrackedPhraseFound_5();
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_6 = V_2;
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_7 = V_1;
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_8;
		L_8 = InterlockedCompareExchangeImpl<UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 *>((UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 **)L_5, L_6, L_7);
		V_0 = L_8;
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_9 = V_0;
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 *)L_9) == ((RuntimeObject*)(UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MagicLeapTools.Voice.SpeechToText::add_OnSpeechStateUpdated(MagicLeapTools.Voice.StateUpdated)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_add_OnSpeechStateUpdated_mA0F988A175C017CCB77A074EBDC8C067D7572BF3 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_add_OnSpeechStateUpdated_mA0F988A175C017CCB77A074EBDC8C067D7572BF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechToText_add_OnSpeechStateUpdated_mA0F988A175C017CCB77A074EBDC8C067D7572BF3_RuntimeMethod_var);
	StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * V_0 = NULL;
	StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * V_1 = NULL;
	StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * V_2 = NULL;
	{
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_0 = __this->get_OnSpeechStateUpdated_6();
		V_0 = L_0;
	}

IL_0007:
	{
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_1 = V_0;
		V_1 = L_1;
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_2 = V_1;
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D *)CastclassSealed((RuntimeObject*)L_4, StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D_il2cpp_TypeInfo_var));
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D ** L_5 = __this->get_address_of_OnSpeechStateUpdated_6();
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_6 = V_2;
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_7 = V_1;
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_8;
		L_8 = InterlockedCompareExchangeImpl<StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D *>((StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D **)L_5, L_6, L_7);
		V_0 = L_8;
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_9 = V_0;
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_10 = V_1;
		if ((!(((RuntimeObject*)(StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D *)L_9) == ((RuntimeObject*)(StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MagicLeapTools.Voice.SpeechToText::remove_OnSpeechStateUpdated(MagicLeapTools.Voice.StateUpdated)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_remove_OnSpeechStateUpdated_mD95D9260F2752DF7C5CE0317FC7E949DC627CD6F (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_remove_OnSpeechStateUpdated_mD95D9260F2752DF7C5CE0317FC7E949DC627CD6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechToText_remove_OnSpeechStateUpdated_mD95D9260F2752DF7C5CE0317FC7E949DC627CD6F_RuntimeMethod_var);
	StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * V_0 = NULL;
	StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * V_1 = NULL;
	StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * V_2 = NULL;
	{
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_0 = __this->get_OnSpeechStateUpdated_6();
		V_0 = L_0;
	}

IL_0007:
	{
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_1 = V_0;
		V_1 = L_1;
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_2 = V_1;
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D *)CastclassSealed((RuntimeObject*)L_4, StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D_il2cpp_TypeInfo_var));
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D ** L_5 = __this->get_address_of_OnSpeechStateUpdated_6();
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_6 = V_2;
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_7 = V_1;
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_8;
		L_8 = InterlockedCompareExchangeImpl<StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D *>((StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D **)L_5, L_6, L_7);
		V_0 = L_8;
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_9 = V_0;
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_10 = V_1;
		if ((!(((RuntimeObject*)(StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D *)L_9) == ((RuntimeObject*)(StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MagicLeapTools.Voice.SpeechToText::add_OnSpeechProcessed(MagicLeapTools.Voice.SpeechProcessed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_add_OnSpeechProcessed_mD61A0298D6CF1AA01701AF7A3414D87BA0DB5A97 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_add_OnSpeechProcessed_mD61A0298D6CF1AA01701AF7A3414D87BA0DB5A97_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechToText_add_OnSpeechProcessed_mD61A0298D6CF1AA01701AF7A3414D87BA0DB5A97_RuntimeMethod_var);
	SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * V_0 = NULL;
	SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * V_1 = NULL;
	SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * V_2 = NULL;
	{
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_0 = __this->get_OnSpeechProcessed_7();
		V_0 = L_0;
	}

IL_0007:
	{
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_1 = V_0;
		V_1 = L_1;
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_2 = V_1;
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A *)CastclassSealed((RuntimeObject*)L_4, SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A_il2cpp_TypeInfo_var));
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A ** L_5 = __this->get_address_of_OnSpeechProcessed_7();
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_6 = V_2;
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_7 = V_1;
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_8;
		L_8 = InterlockedCompareExchangeImpl<SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A *>((SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A **)L_5, L_6, L_7);
		V_0 = L_8;
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_9 = V_0;
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_10 = V_1;
		if ((!(((RuntimeObject*)(SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A *)L_9) == ((RuntimeObject*)(SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MagicLeapTools.Voice.SpeechToText::remove_OnSpeechProcessed(MagicLeapTools.Voice.SpeechProcessed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_remove_OnSpeechProcessed_mD72C0462CB0252AA03A35FC4F930D3A3C1E7FF7B (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_remove_OnSpeechProcessed_mD72C0462CB0252AA03A35FC4F930D3A3C1E7FF7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechToText_remove_OnSpeechProcessed_mD72C0462CB0252AA03A35FC4F930D3A3C1E7FF7B_RuntimeMethod_var);
	SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * V_0 = NULL;
	SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * V_1 = NULL;
	SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * V_2 = NULL;
	{
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_0 = __this->get_OnSpeechProcessed_7();
		V_0 = L_0;
	}

IL_0007:
	{
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_1 = V_0;
		V_1 = L_1;
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_2 = V_1;
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A *)CastclassSealed((RuntimeObject*)L_4, SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A_il2cpp_TypeInfo_var));
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A ** L_5 = __this->get_address_of_OnSpeechProcessed_7();
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_6 = V_2;
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_7 = V_1;
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_8;
		L_8 = InterlockedCompareExchangeImpl<SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A *>((SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A **)L_5, L_6, L_7);
		V_0 = L_8;
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_9 = V_0;
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_10 = V_1;
		if ((!(((RuntimeObject*)(SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A *)L_9) == ((RuntimeObject*)(SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MagicLeapTools.Voice.SpeechToText::FireOnSpeechProcessed(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_FireOnSpeechProcessed_mD612326742F233713DDEC8A205550C3228D26747 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, String_t* ___phrase0, float ___confidence1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_FireOnSpeechProcessed_mD612326742F233713DDEC8A205550C3228D26747_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechToText_FireOnSpeechProcessed_mD612326742F233713DDEC8A205550C3228D26747_RuntimeMethod_var);
	SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * G_B2_0 = NULL;
	SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * G_B1_0 = NULL;
	{
		// OnSpeechProcessed?.Invoke(phrase, confidence);
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_0 = __this->get_OnSpeechProcessed_7();
		SpeechProcessed_t7AC61654F62F999FDF21608AEF71AD3B0BA94B0A * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = ___phrase0;
		float L_3 = ___confidence1;
		NullCheck(G_B2_0);
		SpeechProcessed_Invoke_mDE3D8A5CDF7073E89386218E684EF0687564D422(G_B2_0, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.SpeechToText::FireOnSpeechStateUpdated(MagicLeapTools.Voice.SpeechToTextStates)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_FireOnSpeechStateUpdated_m90004E01A33E0673D1789B8D198A0DED6CBA5EF1 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, int32_t ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_FireOnSpeechStateUpdated_m90004E01A33E0673D1789B8D198A0DED6CBA5EF1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechToText_FireOnSpeechStateUpdated_m90004E01A33E0673D1789B8D198A0DED6CBA5EF1_RuntimeMethod_var);
	StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * G_B2_0 = NULL;
	StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * G_B1_0 = NULL;
	{
		// OnSpeechStateUpdated?.Invoke(state);
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_0 = __this->get_OnSpeechStateUpdated_6();
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___state0;
		NullCheck(G_B2_0);
		StateUpdated_Invoke_m962E842F5F5EEE17B2E90AE6887F435E2CD39DEE(G_B2_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.SpeechToText::FireOnUntrackedPhraseFound(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_FireOnUntrackedPhraseFound_m5984736CC4DF76EE7DFE9028A5A43BDE137D235E (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, String_t* ___phrase0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_FireOnUntrackedPhraseFound_m5984736CC4DF76EE7DFE9028A5A43BDE137D235E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechToText_FireOnUntrackedPhraseFound_m5984736CC4DF76EE7DFE9028A5A43BDE137D235E_RuntimeMethod_var);
	UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * G_B2_0 = NULL;
	UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * G_B1_0 = NULL;
	{
		// OnUntrackedPhraseFound?.Invoke(phrase);
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_0 = __this->get_OnUntrackedPhraseFound_5();
		UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = ___phrase0;
		NullCheck(G_B2_0);
		UntrackedPhraseFound_Invoke_mBBC9718DC8A6AE7A2BC46F9D2B6D629BD8D2E65D(G_B2_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.SpeechToText::FireOnTrackedPhraseFound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_FireOnTrackedPhraseFound_m261AA987F136FAEA98ED3533BBC74D13A7459AE9 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, int32_t ___phraseIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_FireOnTrackedPhraseFound_m261AA987F136FAEA98ED3533BBC74D13A7459AE9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechToText_FireOnTrackedPhraseFound_m261AA987F136FAEA98ED3533BBC74D13A7459AE9_RuntimeMethod_var);
	TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * G_B2_0 = NULL;
	TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * G_B1_0 = NULL;
	{
		// OnTrackedPhraseFound?.Invoke(phraseIndex);
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_0 = __this->get_OnTrackedPhraseFound_4();
		TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___phraseIndex0;
		NullCheck(G_B2_0);
		TrackedPhraseFound_Invoke_mFB975E273E08977D5977A652C38C61358C2694CB(G_B2_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.SpeechToText::ToggleActivelyRecording(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_ToggleActivelyRecording_m3201AA98ACA024B66664558A2FB967598D41BD1A (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, bool ___enable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_ToggleActivelyRecording_m3201AA98ACA024B66664558A2FB967598D41BD1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechToText_ToggleActivelyRecording_m3201AA98ACA024B66664558A2FB967598D41BD1A_RuntimeMethod_var);
	{
		// public virtual void ToggleActivelyRecording(bool enable) { }
		return;
	}
}
// System.Void MagicLeapTools.Voice.SpeechToText::SetupService(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_SetupService_mF91FFB444094DFA1CD35B889CAC84C5AC92C8629 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, bool ___detectPhrases0, bool ___autoDetectVoice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_SetupService_mF91FFB444094DFA1CD35B889CAC84C5AC92C8629_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechToText_SetupService_mF91FFB444094DFA1CD35B889CAC84C5AC92C8629_RuntimeMethod_var);
	{
		// _detectPhrases = detectPhrases;
		bool L_0 = ___detectPhrases0;
		__this->set__detectPhrases_14(L_0);
		// _autoDetectVoice = autoDetectVoice;
		bool L_1 = ___autoDetectVoice1;
		__this->set__autoDetectVoice_8(L_1);
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.SpeechToText::SetupSingleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_SetupSingleton_m52E3057BCD9A4165CB162119B3065FFEFFCDFAE5 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_SetupSingleton_m52E3057BCD9A4165CB162119B3065FFEFFCDFAE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechToText_SetupSingleton_m52E3057BCD9A4165CB162119B3065FFEFFCDFAE5_RuntimeMethod_var);
	{
		// if (Instance == null)
		SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * L_0 = ((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E_StaticFields*)il2cpp_codegen_static_fields_for(SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E_il2cpp_TypeInfo_var))->get_Instance_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Instance = this;
		((SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E_StaticFields*)il2cpp_codegen_static_fields_for(SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E_il2cpp_TypeInfo_var))->set_Instance_12(__this);
		// }
		return;
	}

IL_0014:
	{
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.SpeechToText::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_Awake_mB39B022F2D29256632E181CA38C8CA5BD7D59729 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03_m48CF4A2B1CA32687761103A3A618055D1FF0A34F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_Awake_mB39B022F2D29256632E181CA38C8CA5BD7D59729_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_HandleMicPrivilegeResult_m8DCD5C40F980BEE377D3707A7473B84F793A907C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ADDA9210693AFD36869AC62ACC5F5D2293F0B0B);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechToText_Awake_mB39B022F2D29256632E181CA38C8CA5BD7D59729_RuntimeMethod_var);
	{
		// SetupSingleton();
		SpeechToText_SetupSingleton_m52E3057BCD9A4165CB162119B3065FFEFFCDFAE5(__this, /*hidden argument*/NULL);
		// if (_micPrivilegeHandler == null)
		MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03 * L_0 = __this->get__micPrivilegeHandler_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// _micPrivilegeHandler = GetComponent<MicPrivilegeHandler>();
		MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03 * L_2;
		L_2 = Component_GetComponent_TisMicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03_m48CF4A2B1CA32687761103A3A618055D1FF0A34F(__this, /*hidden argument*/Component_GetComponent_TisMicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03_m48CF4A2B1CA32687761103A3A618055D1FF0A34F_RuntimeMethod_var);
		__this->set__micPrivilegeHandler_18(L_2);
	}

IL_0020:
	{
		// if (_micPrivilegeHandler == null)
		MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03 * L_3 = __this->get__micPrivilegeHandler_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		// Debug.LogError("Missing required component");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral1ADDA9210693AFD36869AC62ACC5F5D2293F0B0B, /*hidden argument*/NULL);
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0040:
	{
		// _micPrivilegeHandler.OnMicPrivilegeResult += HandleMicPrivilegeResult;
		MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03 * L_5 = __this->get__micPrivilegeHandler_18();
		MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03 * L_6 = L_5;
		NullCheck(L_6);
		HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * L_7 = L_6->get_OnMicPrivilegeResult_5();
		HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * L_8 = (HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A *)il2cpp_codegen_object_new(HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A_il2cpp_TypeInfo_var);
		HandleMicPrivilegeResult__ctor_mFFCA38EBD4B953E1BAA87065CC7469441C8D56FE(L_8, __this, (intptr_t)((intptr_t)SpeechToText_HandleMicPrivilegeResult_m8DCD5C40F980BEE377D3707A7473B84F793A907C_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_9;
		L_9 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_OnMicPrivilegeResult_5(((HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A *)CastclassSealed((RuntimeObject*)L_9, HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.SpeechToText::HandleMicPrivilegeResult(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_HandleMicPrivilegeResult_m8DCD5C40F980BEE377D3707A7473B84F793A907C (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, bool ___canRecord0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_HandleMicPrivilegeResult_m8DCD5C40F980BEE377D3707A7473B84F793A907C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechToText_HandleMicPrivilegeResult_m8DCD5C40F980BEE377D3707A7473B84F793A907C_RuntimeMethod_var);
	StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * G_B3_0 = NULL;
	StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * G_B2_0 = NULL;
	{
		// _micPrivilegeHandler.OnMicPrivilegeResult -= HandleMicPrivilegeResult;
		MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03 * L_0 = __this->get__micPrivilegeHandler_18();
		MicPrivilegeHandler_tCC4915ADF2A1A567DEF060FBA6CC63B43AF21A03 * L_1 = L_0;
		NullCheck(L_1);
		HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * L_2 = L_1->get_OnMicPrivilegeResult_5();
		HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * L_3 = (HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A *)il2cpp_codegen_object_new(HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A_il2cpp_TypeInfo_var);
		HandleMicPrivilegeResult__ctor_mFFCA38EBD4B953E1BAA87065CC7469441C8D56FE(L_3, __this, (intptr_t)((intptr_t)SpeechToText_HandleMicPrivilegeResult_m8DCD5C40F980BEE377D3707A7473B84F793A907C_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_OnMicPrivilegeResult_5(((HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A *)CastclassSealed((RuntimeObject*)L_4, HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A_il2cpp_TypeInfo_var)));
		// _canRecord = canRecord;
		bool L_5 = ___canRecord0;
		__this->set__canRecord_16(L_5);
		// if (!canRecord)
		bool L_6 = ___canRecord0;
		if (L_6)
		{
			goto IL_0049;
		}
	}
	{
		// _canRecord = false;
		__this->set__canRecord_16((bool)0);
		// OnSpeechStateUpdated?.Invoke(SpeechToTextStates.MicrophoneUnavailable);
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_7 = __this->get_OnSpeechStateUpdated_6();
		StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * L_8 = L_7;
		G_B2_0 = L_8;
		if (L_8)
		{
			G_B3_0 = L_8;
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		NullCheck(G_B3_0);
		StateUpdated_Invoke_m962E842F5F5EEE17B2E90AE6887F435E2CD39DEE(G_B3_0, 0, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void MagicLeapTools.Voice.SpeechToText::SendToService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_SendToService_m2F7E214F3F1B66ADBAC0B337312630FE906011B6 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_SendToService_m2F7E214F3F1B66ADBAC0B337312630FE906011B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechToText_SendToService_m2F7E214F3F1B66ADBAC0B337312630FE906011B6_RuntimeMethod_var);
	{
		// protected virtual void SendToService() { }
		return;
	}
}
// System.Void MagicLeapTools.Voice.SpeechToText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText__ctor_mB10C368875790DC34D345E624AD237BF9488F3E2 (SpeechToText_t2433993672F92D99F4B23147CB549048E80DC92E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText__ctor_mB10C368875790DC34D345E624AD237BF9488F3E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SpeechToText__ctor_mB10C368875790DC34D345E624AD237BF9488F3E2_RuntimeMethod_var);
	{
		// protected bool _autoDetectVoice = true;
		__this->set__autoDetectVoice_8((bool)1);
		// protected int _maxRecordingLength = 5;
		__this->set__maxRecordingLength_9(5);
		// protected float _silenceTimer = 1.0f;
		__this->set__silenceTimer_10((1.0f));
		// protected float _minimumSpeakingSampleValue = 0.05f;
		__this->set__minimumSpeakingSampleValue_11((0.0500000007f));
		// protected bool _microphoneActive = true;
		__this->set__microphoneActive_15((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D (StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * __this, int32_t ___state0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___state0);

}
// System.Void MagicLeapTools.Voice.StateUpdated::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateUpdated__ctor_m217369E8DD37CAF71028726C685E1A0519DA6517 (StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateUpdated__ctor_m217369E8DD37CAF71028726C685E1A0519DA6517_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(StateUpdated__ctor_m217369E8DD37CAF71028726C685E1A0519DA6517_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MagicLeapTools.Voice.StateUpdated::Invoke(MagicLeapTools.Voice.SpeechToTextStates)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateUpdated_Invoke_m962E842F5F5EEE17B2E90AE6887F435E2CD39DEE (StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * __this, int32_t ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateUpdated_Invoke_m962E842F5F5EEE17B2E90AE6887F435E2CD39DEE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(StateUpdated_Invoke_m962E842F5F5EEE17B2E90AE6887F435E2CD39DEE_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___state0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___state0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult MagicLeapTools.Voice.StateUpdated::BeginInvoke(MagicLeapTools.Voice.SpeechToTextStates,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateUpdated_BeginInvoke_mCD9CA01AB09A880945F9793089F5F81352FCD3D0 (StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * __this, int32_t ___state0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToTextStates_tBD972955780B95B8831E1C5FEDFB65654A5ADBAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateUpdated_BeginInvoke_mCD9CA01AB09A880945F9793089F5F81352FCD3D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(StateUpdated_BeginInvoke_mCD9CA01AB09A880945F9793089F5F81352FCD3D0_RuntimeMethod_var);
	void *__d_args[2] = {0};
	__d_args[0] = Box(SpeechToTextStates_tBD972955780B95B8831E1C5FEDFB65654A5ADBAB_il2cpp_TypeInfo_var, &___state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void MagicLeapTools.Voice.StateUpdated::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateUpdated_EndInvoke_m830D8D1020A93122F04E0CD72E141C2C512051E0 (StateUpdated_t99F64F598C6BAEE6AADAD3B00F05D8F6D8A2BE8D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateUpdated_EndInvoke_m830D8D1020A93122F04E0CD72E141C2C512051E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(StateUpdated_EndInvoke_m830D8D1020A93122F04E0CD72E141C2C512051E0_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 (TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * __this, int32_t ___phraseIndex0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___phraseIndex0);

}
// System.Void MagicLeapTools.Voice.TrackedPhraseFound::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPhraseFound__ctor_mFB86F6902B632F970E7722D26FCF2C3DE3AFB610 (TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPhraseFound__ctor_mFB86F6902B632F970E7722D26FCF2C3DE3AFB610_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPhraseFound__ctor_mFB86F6902B632F970E7722D26FCF2C3DE3AFB610_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MagicLeapTools.Voice.TrackedPhraseFound::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPhraseFound_Invoke_mFB975E273E08977D5977A652C38C61358C2694CB (TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * __this, int32_t ___phraseIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPhraseFound_Invoke_mFB975E273E08977D5977A652C38C61358C2694CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPhraseFound_Invoke_mFB975E273E08977D5977A652C38C61358C2694CB_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___phraseIndex0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___phraseIndex0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___phraseIndex0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___phraseIndex0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___phraseIndex0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___phraseIndex0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___phraseIndex0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MagicLeapTools.Voice.TrackedPhraseFound::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackedPhraseFound_BeginInvoke_m3ACE37784C6BC6FAB87D59C4C5AE40D57460A701 (TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * __this, int32_t ___phraseIndex0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPhraseFound_BeginInvoke_m3ACE37784C6BC6FAB87D59C4C5AE40D57460A701_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPhraseFound_BeginInvoke_m3ACE37784C6BC6FAB87D59C4C5AE40D57460A701_RuntimeMethod_var);
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___phraseIndex0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void MagicLeapTools.Voice.TrackedPhraseFound::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPhraseFound_EndInvoke_mC18CFAD4F13244D025C61CCCD744C9B93EB4C52C (TrackedPhraseFound_t4B5E74983C7F0DB30CCE1F08E5D29A46B442AA96 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedPhraseFound_EndInvoke_mC18CFAD4F13244D025C61CCCD744C9B93EB4C52C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TrackedPhraseFound_EndInvoke_mC18CFAD4F13244D025C61CCCD744C9B93EB4C52C_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 (UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * __this, String_t* ___phrase0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___phrase0' to native representation
	char* ____phrase0_marshaled = NULL;
	____phrase0_marshaled = il2cpp_codegen_marshal_string(___phrase0);

	// Native function invocation
	il2cppPInvokeFunc(____phrase0_marshaled);

	// Marshaling cleanup of parameter '___phrase0' native representation
	il2cpp_codegen_marshal_free(____phrase0_marshaled);
	____phrase0_marshaled = NULL;

}
// System.Void MagicLeapTools.Voice.UntrackedPhraseFound::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UntrackedPhraseFound__ctor_m343C791A5C453179FDD72D697DB97B2D85880DAC (UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UntrackedPhraseFound__ctor_m343C791A5C453179FDD72D697DB97B2D85880DAC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(UntrackedPhraseFound__ctor_m343C791A5C453179FDD72D697DB97B2D85880DAC_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MagicLeapTools.Voice.UntrackedPhraseFound::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UntrackedPhraseFound_Invoke_mBBC9718DC8A6AE7A2BC46F9D2B6D629BD8D2E65D (UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * __this, String_t* ___phrase0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UntrackedPhraseFound_Invoke_mBBC9718DC8A6AE7A2BC46F9D2B6D629BD8D2E65D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(UntrackedPhraseFound_Invoke_mBBC9718DC8A6AE7A2BC46F9D2B6D629BD8D2E65D_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___phrase0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___phrase0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___phrase0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___phrase0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___phrase0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___phrase0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___phrase0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___phrase0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___phrase0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___phrase0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___phrase0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___phrase0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___phrase0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult MagicLeapTools.Voice.UntrackedPhraseFound::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UntrackedPhraseFound_BeginInvoke_m13D35DFABC3D64C05B6096561F8552175CA63E30 (UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * __this, String_t* ___phrase0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UntrackedPhraseFound_BeginInvoke_m13D35DFABC3D64C05B6096561F8552175CA63E30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(UntrackedPhraseFound_BeginInvoke_m13D35DFABC3D64C05B6096561F8552175CA63E30_RuntimeMethod_var);
	void *__d_args[2] = {0};
	__d_args[0] = ___phrase0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void MagicLeapTools.Voice.UntrackedPhraseFound::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UntrackedPhraseFound_EndInvoke_m208730AFB690B30B7A2AD88DCD70098EE52F5DA0 (UntrackedPhraseFound_tFC86234B309871C49EBCF077CEBAD7939DF15E48 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UntrackedPhraseFound_EndInvoke_m208730AFB690B30B7A2AD88DCD70098EE52F5DA0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(UntrackedPhraseFound_EndInvoke_m208730AFB690B30B7A2AD88DCD70098EE52F5DA0_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicLeapTools.Voice.GoogleSpeechToText/<PostGoogleRequest>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostGoogleRequestU3Ed__20__ctor_mD3A8949354583F298709D310417D4CCC1CC6EFD6 (U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPostGoogleRequestU3Ed__20__ctor_mD3A8949354583F298709D310417D4CCC1CC6EFD6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CPostGoogleRequestU3Ed__20__ctor_mD3A8949354583F298709D310417D4CCC1CC6EFD6_RuntimeMethod_var);
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MagicLeapTools.Voice.GoogleSpeechToText/<PostGoogleRequest>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostGoogleRequestU3Ed__20_System_IDisposable_Dispose_m4AA7CE6A7A83401D6CF3D3EB88644378D746F19D (U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPostGoogleRequestU3Ed__20_System_IDisposable_Dispose_m4AA7CE6A7A83401D6CF3D3EB88644378D746F19D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CPostGoogleRequestU3Ed__20_System_IDisposable_Dispose_m4AA7CE6A7A83401D6CF3D3EB88644378D746F19D_RuntimeMethod_var);
	{
		return;
	}
}
// System.Boolean MagicLeapTools.Voice.GoogleSpeechToText/<PostGoogleRequest>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPostGoogleRequestU3Ed__20_MoveNext_mAA6F10D3728E6A44386ABBA14360C3035D770AB5 (U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisSpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0_m5DDD0964D4298BCA0C1E815A27C9331B6BB2315B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPostGoogleRequestU3Ed__20_MoveNext_mAA6F10D3728E6A44386ABBA14360C3035D770AB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8DB3F6C43AA381D675F48187C31A4A77B41C6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CPostGoogleRequestU3Ed__20_MoveNext_mAA6F10D3728E6A44386ABBA14360C3035D770AB5_RuntimeMethod_var);
	int32_t V_0 = 0;
	GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a5;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// FireOnSpeechStateUpdated(SpeechToTextStates.ProcessingSpeech);
		GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * L_4 = V_1;
		NullCheck(L_4);
		SpeechToText_FireOnSpeechStateUpdated_m90004E01A33E0673D1789B8D198A0DED6CBA5EF1(L_4, 4, /*hidden argument*/NULL);
		// UnityWebRequest uwr = new UnityWebRequest(uri, "POST");
		String_t* L_5 = __this->get_uri_3();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975(L_6, L_5, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, /*hidden argument*/NULL);
		__this->set_U3CuwrU3E5__2_4(L_6);
		// byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(JsonUtility.ToJson(_googleRequestData, false));
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_7 = (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 *)il2cpp_codegen_object_new(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888(L_7, /*hidden argument*/NULL);
		GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * L_8 = V_1;
		NullCheck(L_8);
		GoogleRequestData_tC1DFDCCDC6A73F155AA1BA410340FF9C5F283513 * L_9 = L_8->get__googleRequestData_27();
		String_t* L_10;
		L_10 = JsonUtility_ToJson_m624247F6B1FDBD1B02C133B4878E4F3C8CEA30DA(L_9, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_7, L_10);
		V_2 = L_11;
		// uwr.uploadHandler = new UploadHandlerRaw(jsonToSend);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12 = __this->get_U3CuwrU3E5__2_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_2;
		UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_14 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_14, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(L_12, L_14, /*hidden argument*/NULL);
		// uwr.downloadHandler = new DownloadHandlerBuffer();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_15 = __this->get_U3CuwrU3E5__2_4();
		DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_16 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(L_15, L_16, /*hidden argument*/NULL);
		// uwr.SetRequestHeader("Content-Type", "application/json");
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_17 = __this->get_U3CuwrU3E5__2_4();
		NullCheck(L_17);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_17, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, /*hidden argument*/NULL);
		// yield return uwr.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_18 = __this->get_U3CuwrU3E5__2_4();
		NullCheck(L_18);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_19;
		L_19 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_18, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_19);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a5:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (uwr.result != UnityWebRequest.Result.Success)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_20 = __this->get_U3CuwrU3E5__2_4();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_21) == ((int32_t)1)))
		{
			goto IL_00d6;
		}
	}
	{
		// Debug.Log("Error While Sending: " + uwr.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_22 = __this->get_U3CuwrU3E5__2_4();
		NullCheck(L_22);
		String_t* L_23;
		L_23 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_22, /*hidden argument*/NULL);
		String_t* L_24;
		L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral2F8DB3F6C43AA381D675F48187C31A4A77B41C6A, L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_24, /*hidden argument*/NULL);
		// }
		goto IL_00f8;
	}

IL_00d6:
	{
		// FireOnSpeechStateUpdated(SpeechToTextStates.ProcessedSpeech);
		GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * L_25 = V_1;
		NullCheck(L_25);
		SpeechToText_FireOnSpeechStateUpdated_m90004E01A33E0673D1789B8D198A0DED6CBA5EF1(L_25, 5, /*hidden argument*/NULL);
		// NewResult = JsonUtility.FromJson<SpeechRecognitionResultObj>(uwr.downloadHandler.text);
		GoogleSpeechToText_t542C46061DCC01743F0737EDF03E0D8A7E428089 * L_26 = V_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_27 = __this->get_U3CuwrU3E5__2_4();
		NullCheck(L_27);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_28;
		L_28 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_28, /*hidden argument*/NULL);
		SpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0 * L_30;
		L_30 = JsonUtility_FromJson_TisSpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0_m5DDD0964D4298BCA0C1E815A27C9331B6BB2315B(L_29, /*hidden argument*/JsonUtility_FromJson_TisSpeechRecognitionResultObj_t1E28DD41EF132ED4F7B7355AAE342F217D01FFE0_m5DDD0964D4298BCA0C1E815A27C9331B6BB2315B_RuntimeMethod_var);
		NullCheck(L_26);
		GoogleSpeechToText_set_NewResult_m585AF4EBB996B3954BD0227E7FB03AB58B8CF37C(L_26, L_30, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		// yield break;
		return (bool)0;
	}
}
// System.Object MagicLeapTools.Voice.GoogleSpeechToText/<PostGoogleRequest>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPostGoogleRequestU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m37E7E8F53FC29022B697AC9BA9C89C8D43C87B1D (U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPostGoogleRequestU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m37E7E8F53FC29022B697AC9BA9C89C8D43C87B1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CPostGoogleRequestU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m37E7E8F53FC29022B697AC9BA9C89C8D43C87B1D_RuntimeMethod_var);
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MagicLeapTools.Voice.GoogleSpeechToText/<PostGoogleRequest>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostGoogleRequestU3Ed__20_System_Collections_IEnumerator_Reset_mC2C8F2886E9071BD1C477DEAFF1869CBDD13C742 (U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPostGoogleRequestU3Ed__20_System_Collections_IEnumerator_Reset_mC2C8F2886E9071BD1C477DEAFF1869CBDD13C742_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CPostGoogleRequestU3Ed__20_System_Collections_IEnumerator_Reset_mC2C8F2886E9071BD1C477DEAFF1869CBDD13C742_RuntimeMethod_var);
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPostGoogleRequestU3Ed__20_System_Collections_IEnumerator_Reset_mC2C8F2886E9071BD1C477DEAFF1869CBDD13C742_RuntimeMethod_var)));
	}
}
// System.Object MagicLeapTools.Voice.GoogleSpeechToText/<PostGoogleRequest>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPostGoogleRequestU3Ed__20_System_Collections_IEnumerator_get_Current_m0FEC89C6924B530F4CA9CF9F6CE0EF03D1A70301 (U3CPostGoogleRequestU3Ed__20_tDEB35EC58A39F21FB45B1E2EC22454654423CBC3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPostGoogleRequestU3Ed__20_System_Collections_IEnumerator_get_Current_m0FEC89C6924B530F4CA9CF9F6CE0EF03D1A70301_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CPostGoogleRequestU3Ed__20_System_Collections_IEnumerator_get_Current_m0FEC89C6924B530F4CA9CF9F6CE0EF03D1A70301_RuntimeMethod_var);
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicLeapTools.MicPrivilegeHandler/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m769B5B0F0E038E3ED5AE6EB858A78A0E82AFDFF1 (U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0__ctor_m769B5B0F0E038E3ED5AE6EB858A78A0E82AFDFF1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CU3Ec__DisplayClass4_0__ctor_m769B5B0F0E038E3ED5AE6EB858A78A0E82AFDFF1_RuntimeMethod_var);
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MagicLeapTools.MicPrivilegeHandler/<>c__DisplayClass4_0::<RequestPrivilegesAsync>b__0(UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLPrivileges/Id)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CRequestPrivilegesAsyncU3Eb__0_m9F4C6376FCABFBA19926946D457801061B6AA623 (U3CU3Ec__DisplayClass4_0_tFC0BE6DDA9E6FAB5DBDFAB503F6B52690D6CFCB7 * __this, MLResult_t16167FAD492D3A6F53116897898D23453C72B635  ___result0, uint32_t ___priv1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mE477DD51DDD869219EB8AEA14D222D65530D3367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CRequestPrivilegesAsyncU3Eb__0_m9F4C6376FCABFBA19926946D457801061B6AA623_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CU3Ec__DisplayClass4_0_U3CRequestPrivilegesAsyncU3Eb__0_m9F4C6376FCABFBA19926946D457801061B6AA623_RuntimeMethod_var);
	int32_t V_0 = 0;
	Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * G_B4_0 = NULL;
	Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * G_B3_0 = NULL;
	Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * G_B8_0 = NULL;
	Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * G_B7_0 = NULL;
	{
		// numPrivilegesToRequest--;
		int32_t L_0 = __this->get_numPrivilegesToRequest_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->set_numPrivilegesToRequest_0(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		// if (result.Result == MLResult.Code.PrivilegeGranted)
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_2 = ___result0;
		int32_t L_3 = L_2.get_Result_0();
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)-875757568)))))
		{
			goto IL_0037;
		}
	}
	{
		// if (numPrivilegesToRequest == 0)
		int32_t L_4 = __this->get_numPrivilegesToRequest_0();
		if (L_4)
		{
			goto IL_0057;
		}
	}
	{
		// callback?.Invoke(result);
		Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * L_5 = __this->get_callback_1();
		Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_0030;
		}
	}
	{
		return;
	}

IL_0030:
	{
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_7 = ___result0;
		NullCheck(G_B4_0);
		Action_1_Invoke_mE477DD51DDD869219EB8AEA14D222D65530D3367(G_B4_0, L_7, /*hidden argument*/Action_1_Invoke_mE477DD51DDD869219EB8AEA14D222D65530D3367_RuntimeMethod_var);
		// }
		return;
	}

IL_0037:
	{
		// numPrivilegesToRequest = 0;
		__this->set_numPrivilegesToRequest_0(0);
		// if (numPrivilegesToRequest == 0)
		int32_t L_8 = __this->get_numPrivilegesToRequest_0();
		if (L_8)
		{
			goto IL_0057;
		}
	}
	{
		// callback?.Invoke(result);
		Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * L_9 = __this->get_callback_1();
		Action_1_t970577D5C3A97A7C4B571E10058B1B23855D3C57 * L_10 = L_9;
		G_B7_0 = L_10;
		if (L_10)
		{
			G_B8_0 = L_10;
			goto IL_0051;
		}
	}
	{
		return;
	}

IL_0051:
	{
		MLResult_t16167FAD492D3A6F53116897898D23453C72B635  L_11 = ___result0;
		NullCheck(G_B8_0);
		Action_1_Invoke_mE477DD51DDD869219EB8AEA14D222D65530D3367(G_B8_0, L_11, /*hidden argument*/Action_1_Invoke_mE477DD51DDD869219EB8AEA14D222D65530D3367_RuntimeMethod_var);
	}

IL_0057:
	{
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A (HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * __this, bool ___canRecord0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___canRecord0));

}
// System.Void MagicLeapTools.MicPrivilegeHandler/HandleMicPrivilegeResult::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleMicPrivilegeResult__ctor_mFFCA38EBD4B953E1BAA87065CC7469441C8D56FE (HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleMicPrivilegeResult__ctor_mFFCA38EBD4B953E1BAA87065CC7469441C8D56FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(HandleMicPrivilegeResult__ctor_mFFCA38EBD4B953E1BAA87065CC7469441C8D56FE_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MagicLeapTools.MicPrivilegeHandler/HandleMicPrivilegeResult::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleMicPrivilegeResult_Invoke_mC4005C1D52FB1AC8F5BB201323E78D106DA80729 (HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * __this, bool ___canRecord0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleMicPrivilegeResult_Invoke_mC4005C1D52FB1AC8F5BB201323E78D106DA80729_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(HandleMicPrivilegeResult_Invoke_mC4005C1D52FB1AC8F5BB201323E78D106DA80729_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___canRecord0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___canRecord0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___canRecord0);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___canRecord0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___canRecord0);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___canRecord0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___canRecord0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MagicLeapTools.MicPrivilegeHandler/HandleMicPrivilegeResult::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandleMicPrivilegeResult_BeginInvoke_m9062FD796F9E22192DD320001A6398BF7F27292D (HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * __this, bool ___canRecord0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleMicPrivilegeResult_BeginInvoke_m9062FD796F9E22192DD320001A6398BF7F27292D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(HandleMicPrivilegeResult_BeginInvoke_m9062FD796F9E22192DD320001A6398BF7F27292D_RuntimeMethod_var);
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___canRecord0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void MagicLeapTools.MicPrivilegeHandler/HandleMicPrivilegeResult::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleMicPrivilegeResult_EndInvoke_m5259FFFB999948BBE584379ED9D7AD808C474385 (HandleMicPrivilegeResult_t9FC5CF131FF5CE1FCD35C588DB6283C60597786A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleMicPrivilegeResult_EndInvoke_m5259FFFB999948BBE584379ED9D7AD808C474385_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(HandleMicPrivilegeResult_EndInvoke_m5259FFFB999948BBE584379ED9D7AD808C474385_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
