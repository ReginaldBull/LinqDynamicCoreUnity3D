#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t6BF8D9007A2A7F49C909CE38D7F7A51FA6CD6496;
struct Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F;
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B;
struct Action_1_t138B53097F6755F546931F0B87469E19A8F66439;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Action_1_t43B3A21E3139B3E2E49698F940F979F37AD1E63E;
struct Action_1_t4501483487EE874F237B6B25ACC1026A64FBF612;
struct Action_1_t056FB23C2911679EFD99E438847C226611A2247F;
struct Action_1_t49F19F6D8F6FE90ECA808F2608FB278D414DD05A;
struct Comparison_1_t024445BA87DEB4824C10D2A0367B5684E4901629;
struct Comparison_1_tD2BC24ACADC7AE1FDC0BDF807145456FDE58C734;
struct Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89;
struct Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1;
struct Comparison_1_t09ED0BE2699D1546D891A69C97AFC4FE705CBB3B;
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
struct Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49;
struct Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3;
struct Comparison_1_tA6E38F9B8A5E125EC6515F9679C2079C747A0149;
struct Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87;
struct Comparison_1_t0D538E030DA616BAE9EC08BBAF8EAB30350CCADC;
struct ICollection_1_t47318FB29E6AEE9EBE979A124805264F8DAA9CFF;
struct ICollection_1_tC9B15468F509008C580ED71459A502B60CE0346B;
struct ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0;
struct ICollection_1_tD56FFE4395E7AAA9BC6513B7180B31801ABF0135;
struct ICollection_1_t6E8BCF757C836061E17A54B43F9E506FAC2FBB59;
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct ICollection_1_t17FF839BF7E6E58666DFD1EF4BA5F4D216E5C16E;
struct ICollection_1_t423E33F1AAD9A8A6F88E4F39157863A3CDD81A96;
struct ICollection_1_tDCCA1C657F483D38FD3ECB4FD52E40AF85BF217E;
struct ICollection_1_t1A3EBEE6267E8AED6A703B394CEF260FCC1C09B1;
struct IComparer_1_t120622F843495B209012D2448981DA6EE4E61FC0;
struct IComparer_1_t9506E9EC4E1E43EFBFBB23D314D9EE798E7CD251;
struct IComparer_1_t4483F9B9F43C7B0F8D4FEEAE12FAFDD3F9CF81FD;
struct IComparer_1_t51428AB1FFAFB02ED44A5754BAB3C1B933B8949B;
struct IComparer_1_t946EFFBF34634B220EFDD755DD998567374FBEFC;
struct IComparer_1_tC0A12A847AF97F369A5CE9A0CCE71CE18EE1440E;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IComparer_1_t5C8ADB6DF803417A1731826FA07541C9E165AB71;
struct IComparer_1_t159FEB1B1070E2EE853CD70A3DAF125998EE03D3;
struct IComparer_1_t59BC948C5D5D8AD2B6FED65728E9132C6841C837;
struct IComparer_1_tF1C87693869645828E16E962060B1FA0A15D5D0F;
struct IEnumerable_1_t76AB0BC9B3C9C1EAE8CA0B959CFF2D5BF2B7BB5A;
struct IEnumerable_1_t9CC3C47C67E4184F7F1B8B0AFAEF692B9EDDDF05;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_t71A46277DBD73BD4009B2B20885D2B7057593A1A;
struct IEnumerable_1_t3C45EB5D2AD950CB9E071028EF3FBAD8B9A21534;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerable_1_t616D8494D191E02CD416B710E4C06389401F060C;
struct IEnumerable_1_t2D229B7B352B16330C5D8E4DAF312BE0526EBE44;
struct IEnumerable_1_tBA9822E764C7F9AD80E155F6777048133C78505B;
struct IEnumerable_1_t1E38DF003A18D4CC894A29FB08D243F01E97A927;
struct IEnumerator_1_t819E733E3DA1171A575B03B1B06FD64D9406E196;
struct IEnumerator_1_t067D943FA808557FBA1FBED8EA4E9A1BFCB791B8;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t239F6ACD0FC026E7FA70965FDE161517CD367AED;
struct IEnumerator_1_tA1C54505BB5939007AB78B6BCD412C70DD49CE70;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_tFA909B65895E40AAB1C8DD427FCA2D3EE869603F;
struct IEnumerator_1_t9C4BEE74A726ABB541B6A2B81ABEBF11CEA37C93;
struct IEnumerator_1_t79B912CBA712D5F76599837CD1604BEED0829411;
struct IEnumerator_1_tA50BA3A8477F7D3879301E45E86A18629E2CBF24;
struct IList_1_t15F81569DE900113EF21922BED33825BAC3DC6DE;
struct IList_1_tF23041AC58956CDAA98A1DA3D23002DBE4EBE278;
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
struct IList_1_t9BEAF4979F9BA946A9250304CDEAA89F03D43240;
struct IList_1_t3BF6FF056D0B35ABB2EAF116ADA52F322F5473B6;
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct IList_1_t7B3BE05FF22559A6D63B8878D1E20E1F73864551;
struct IList_1_tD27D8B7ADCEC5D64ADFBFA86505E4FE8D79AE399;
struct IList_1_t311EFF3B321589A14DAE708AD51B9BF47F025EB8;
struct IList_1_tFE2112C69F0B9C04D713EA1C40EFA14A01A0F401;
struct List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B;
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576;
struct List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A;
struct List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF;
struct List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4;
struct List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D;
struct Predicate_1_t2ABDDC79221089ACAA67305D172D6E9ABDE6FB6D;
struct Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E;
struct Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3;
struct Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A;
struct Predicate_1_t5805DB64113904AB19024DCCBF911D02BFAF1A18;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0;
struct Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C;
struct Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD;
struct Predicate_1_t2E5711CB35BA617C8E9CB94509B236A2133DC6BD;
struct ReadOnlyCollection_1_t30B6EAA2E0CFDAB1ED506ACDAB0AA9A61502FF05;
struct ReadOnlyCollection_1_t18E2D7D4BDE7755E43AFF1F6BF82718917B70648;
struct ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952;
struct ReadOnlyCollection_1_t147FA1FCB6E2EB047E003D795B981985F4219E5F;
struct ReadOnlyCollection_1_tF6537A9DB6A2D45E0376852BAB829185E7F25FD1;
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8;
struct ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E;
struct ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF;
struct ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07;
struct ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466;
struct KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88;
struct SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6;
struct WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577;
struct InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998;
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct String_t;
struct Type_t;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88;
struct SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6;
struct WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577;
struct InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B  : public RuntimeObject
{
	KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576  : public RuntimeObject
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01  : public RuntimeObject
{
	InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A  : public RuntimeObject
{
	OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF  : public RuntimeObject
{
	SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4  : public RuntimeObject
{
	WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D  : public RuntimeObject
{
	InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t30B6EAA2E0CFDAB1ED506ACDAB0AA9A61502FF05  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t18E2D7D4BDE7755E43AFF1F6BF82718917B70648  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t147FA1FCB6E2EB047E003D795B981985F4219E5F  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tF6537A9DB6A2D45E0376852BAB829185E7F25FD1  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D 
{
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ____list;
	int32_t ____index;
	int32_t ____version;
	Il2CppChar ____current;
};
struct Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC 
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 
{
	RuntimeObject* ___key;
	int32_t ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 
{
	String_t* ____methodName;
	DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167* ____debugInfo;
};
struct InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshaled_pinvoke
{
	char* ____methodName;
	DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167* ____debugInfo;
};
struct InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshaled_com
{
	Il2CppChar* ____methodName;
	DebugInfo_t03C716886CE7E99C1662D1C236CCC2CC6F18A167* ____debugInfo;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 
{
	int32_t ___order;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_pinvoke
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_com
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC 
{
	Il2CppChar ___First;
	Il2CppChar ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_pinvoke
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_com
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 
{
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_DelagateCallback;
	RuntimeObject* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D 
{
	int32_t ____index;
	int32_t ____stackDepth;
	int32_t ____continuationsDepth;
	String_t* ____name;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction;
};
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshaled_pinvoke
{
	int32_t ____index;
	int32_t ____stackDepth;
	int32_t ____continuationsDepth;
	char* ____name;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction;
};
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshaled_com
{
	int32_t ____index;
	int32_t ____stackDepth;
	int32_t ____continuationsDepth;
	Il2CppChar* ____name;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction;
};
struct Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39 
{
	List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* ____list;
	int32_t ____index;
	int32_t ____version;
	KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ____current;
};
struct Enumerator_tDC50C3EEFE54EBE6DF94FA28C6AC2434C3B3B7FD 
{
	List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* ____list;
	int32_t ____index;
	int32_t ____version;
	InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ____current;
};
struct Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 
{
	List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* ____list;
	int32_t ____index;
	int32_t ____version;
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ____current;
};
struct Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9 
{
	List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* ____list;
	int32_t ____index;
	int32_t ____version;
	SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ____current;
};
struct Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C 
{
	List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* ____list;
	int32_t ____index;
	int32_t ____version;
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ____current;
};
struct Enumerator_tE8C173434DE13194E4C9E6856B75BFF0CAEC951F 
{
	List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* ____list;
	int32_t ____index;
	int32_t ____version;
	InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ____current;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B 
{
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ____list;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Action_1_t6BF8D9007A2A7F49C909CE38D7F7A51FA6CD6496  : public MulticastDelegate_t
{
};
struct Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F  : public MulticastDelegate_t
{
};
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B  : public MulticastDelegate_t
{
};
struct Action_1_t138B53097F6755F546931F0B87469E19A8F66439  : public MulticastDelegate_t
{
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};
struct Action_1_t43B3A21E3139B3E2E49698F940F979F37AD1E63E  : public MulticastDelegate_t
{
};
struct Action_1_t4501483487EE874F237B6B25ACC1026A64FBF612  : public MulticastDelegate_t
{
};
struct Action_1_t056FB23C2911679EFD99E438847C226611A2247F  : public MulticastDelegate_t
{
};
struct Action_1_t49F19F6D8F6FE90ECA808F2608FB278D414DD05A  : public MulticastDelegate_t
{
};
struct Comparison_1_t024445BA87DEB4824C10D2A0367B5684E4901629  : public MulticastDelegate_t
{
};
struct Comparison_1_tD2BC24ACADC7AE1FDC0BDF807145456FDE58C734  : public MulticastDelegate_t
{
};
struct Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89  : public MulticastDelegate_t
{
};
struct Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1  : public MulticastDelegate_t
{
};
struct Comparison_1_t09ED0BE2699D1546D891A69C97AFC4FE705CBB3B  : public MulticastDelegate_t
{
};
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645  : public MulticastDelegate_t
{
};
struct Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49  : public MulticastDelegate_t
{
};
struct Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3  : public MulticastDelegate_t
{
};
struct Comparison_1_tA6E38F9B8A5E125EC6515F9679C2079C747A0149  : public MulticastDelegate_t
{
};
struct Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87  : public MulticastDelegate_t
{
};
struct Comparison_1_t0D538E030DA616BAE9EC08BBAF8EAB30350CCADC  : public MulticastDelegate_t
{
};
struct Predicate_1_t2ABDDC79221089ACAA67305D172D6E9ABDE6FB6D  : public MulticastDelegate_t
{
};
struct Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E  : public MulticastDelegate_t
{
};
struct Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3  : public MulticastDelegate_t
{
};
struct Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A  : public MulticastDelegate_t
{
};
struct Predicate_1_t5805DB64113904AB19024DCCBF911D02BFAF1A18  : public MulticastDelegate_t
{
};
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12  : public MulticastDelegate_t
{
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0  : public MulticastDelegate_t
{
};
struct Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C  : public MulticastDelegate_t
{
};
struct Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD  : public MulticastDelegate_t
{
};
struct Predicate_1_t2E5711CB35BA617C8E9CB94509B236A2133DC6BD  : public MulticastDelegate_t
{
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B_StaticFields
{
	KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___s_emptyArray;
};
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_emptyArray;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___s_emptyArray;
};
struct List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01_StaticFields
{
	InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields
{
	OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___s_emptyArray;
};
struct List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF_StaticFields
{
	SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___s_emptyArray;
};
struct List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields
{
	WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___s_emptyArray;
};
struct List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D_StaticFields
{
	InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* ___s_emptyArray;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 m_Items[1];

	inline KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB  : public RuntimeArray
{
	ALIGN_FIELD (8) InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 m_Items[1];

	inline InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____methodName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____debugInfo), (void*)NULL);
		#endif
	}
	inline InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____methodName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____debugInfo), (void*)NULL);
		#endif
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88  : public RuntimeArray
{
	ALIGN_FIELD (8) OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 m_Items[1];

	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback), (void*)NULL);
	}
	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback), (void*)NULL);
	}
};
struct SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6  : public RuntimeArray
{
	ALIGN_FIELD (8) SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC m_Items[1];

	inline SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC value)
	{
		m_Items[index] = value;
	}
};
struct WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577  : public RuntimeArray
{
	ALIGN_FIELD (8) WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 m_Items[1];

	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle), (void*)NULL);
		#endif
	}
	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle), (void*)NULL);
		#endif
	}
};
struct InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3  : public RuntimeArray
{
	ALIGN_FIELD (8) InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D m_Items[1];

	inline InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____instruction), (void*)NULL);
		#endif
	}
	inline InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____instruction), (void*)NULL);
		#endif
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m504973187D416497E96E94051DB6B989BD021CEC_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 List_1_get_Item_m29D6F6A0530995F915F1DE62526DF9304DFC8E29_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_m07DDDDDDE9CBF912134A0EF13EC268033EA42BBC_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mFEF76C4766A3D42A22131A736BE640DF6C542E3D_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m280DB6514ABCB446654DDAD55DA87D6D939D6574_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mFE4D53F7B6B104A2F3512FB535C2A2E6CD21CBD4_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m9BAF9FC9B01B86AB9E16C2A54BAB69042D04B974_gshared_inline (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m8AD37AF1186CEAD50E0C80CBCFBCF5F104D77023_gshared_inline (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mB3D050E84CCEF14FB7AF90A4058B002427B192A5_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mE4DBD225ED92E3043EE280DC62822A941C97E8EF_gshared (ReadOnlyCollection_1_t30B6EAA2E0CFDAB1ED506ACDAB0AA9A61502FF05* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mEAD1A664915C007D07778E2EA862532462769CE8_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m81CEE24BED461D23E45DDCE07F5727D29B3004D0_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA9F010BCF7276306DA83CBC8BE346C7900B0B74C_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m7B63DB1BBB48A3381F1FD6C48EAB1F8B41C970A3_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m762327921F64C98D32E79C932090676BAF04A452_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mFADFA3B447682798B8D67B977A30F6BA4BB1EACB_gshared_inline (Action_1_t6BF8D9007A2A7F49C909CE38D7F7A51FA6CD6496* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE48951BEE7D63E6C44A4624706580E619A0E3068_gshared (Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39* __this, List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_m792D51A9E152BDFFFD75286BEF47629F75BB7846_gshared (KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_array, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m678A0DACDDD2DB97848D77DABD47B58716F483BB_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mC0F4EA1196D73037B64B3DD0EF0405BF1495B1AD_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m74B3AFCA1E4E428BD00D4FC573B95EFAEA4DD512_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m9FD574A8B117EBFEE39DBD83FC67702DA3A35A0A_gshared_inline (Predicate_1_t2ABDDC79221089ACAA67305D172D6E9ABDE6FB6D* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mEF107C9CA095BF316ED6D27FB06CFCEF6C7E890F_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_m63A40EB32B3C405A970BC5BAC09BE2815B33BD26_gshared (KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m0CBCC715224894BBDB7EF35EA5DC6337CDE3BD01_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_m342D5FBBF45981561D44E2E846BD654801628BA3_gshared (KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m3D6E600FAC91CC2A8F19C9924C21113BB2137F32_gshared (KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t024445BA87DEB4824C10D2A0367B5684E4901629* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m4C6705B4E5970531347EB22B494526D1166F1160_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m152A3A4010AA9B103898F608CEB394ED3FDAA101_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, Il2CppChar ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m11185A14288763FB9A0FF8111453AC739E76CF35_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mA1A224D6DC21C2A7B5A728192ADB43A9ECC82064_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mF1D09129B2DDA7248BCD15C07166154DA6EB57E2_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mD8A5ED70E892EE6E32ACA0854C065B31DBD9417F_gshared (ReadOnlyCollection_1_t18E2D7D4BDE7755E43AFF1F6BF82718917B70648* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mF2509E11A7B54B54C011049AB62AF21A826EBCFE_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m7A2A17403F61C98861524C74822FAE6BBA4E0988_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m01575B7D6D0C9A5608A0496D0C7836AB159D5F92_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m66386CFE5F99A7A429344E8902FE421835DD80B1_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m80805224A0926C2561F849752A37A2569134A03D_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m2D463A02A40BD8F16A42B9EA5771DCE3DD6D321D_gshared_inline (Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F* __this, Il2CppChar ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m24165C174A346386819FF0C8B06C5299C5D8C596_gshared (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* __this, List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m018F59BB01FA2473C4F75B463F7630F8EFB53F34_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, Il2CppChar ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m93EFDEE741FB849BD50E39217E7005B609E29403_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, Il2CppChar ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m4088E696F2E983A168CFD204B228E773695E5C26_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m02E1DF27506A00E153037AD60BCF6966B8407CC8_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8243A1B2012C89E94D47EF84A7D2AA8D5F440AA5_gshared_inline (Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* __this, Il2CppChar ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB9ED94F34C25EEA03B4335A2077E1CADCB9A3A71_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9B8A5AAC3295C28E6DD6C5E9C61D8B6BEF506AF2_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m94B6D109F51B9AC3485C8D1DFFF516A23294B554_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE0333A739303139C223C5EE631115880C5160F21_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mEB144F35631CDE3C91A0F1549342F937C6F71995_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tD2BC24ACADC7AE1FDC0BDF807145456FDE58C734* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mD41819F73F264B50313DE018DC19E0428FC120E5_gshared (ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m030AAF730ACCF739D45671086EBF4786FED908D5_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_gshared_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57764BD8E3718881AE35094284EFDECEE528991D_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E0CF4C26182BB9D788C90ABE423C2F4CD145E41_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m7FA55FB83B1A81CF769D2928FCE3E06425DAC06B_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m888E7562D4D5756B46E7DE52614832960DA81A0D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mDE2F02C693FD9EAA8F93873E407BC46C47ACFC7A_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mB4FCD891721B07472641D7000AAE93A9CABBAE5A_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mAD159B09F28BD7914562E219CA52E2D4BDCF5530_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m97B7B4D0EFFBE810751F8A48DA53CFB8B91B4A3B_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m5E55BDC1020352A441CBC58EDD29F36D0399FC43_gshared (ReadOnlyCollection_1_t147FA1FCB6E2EB047E003D795B981985F4219E5F* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m839F5ADDC59B70CAC1B14D9841A524465A3BC9E5_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m7ED78746E0AFEF2F59490B581943C977BE1A5479_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC6E6B2337772FC83C59264783DAFF1D4CF9F023E_gshared (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA27917199B3C9E1A60C5791FB1B2AC5EB4C2103A_gshared (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m1E433D24E9C67F0BA5D1ACF7708F97EF1DC4AE3D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mA0D34DB4A9D4C8FECCD3278530CEEB3147A19D54_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4238AF38CE7EEE7C4C5C568B53D88116FB692B53_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_gshared_inline (Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m7DE6AE4FAB338990D0A930D6CD525BA07B7E3CB4_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF0352521EE3186887C68DFC25905E29D1393515_gshared (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3EC8C34030BE04C522C1CBDB2E96DFAEDB2F011D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m632FD913827035A385A987CEA4B0D30A6C1BB317_gshared (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m3FCF73F735AAA03BF7352EF6635F318F66177EB9_gshared (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m5BC63B920994BE878D143B6B599CF0BBA31856EC_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 List_1_get_Item_m3F7E7702879C444EC4474C557ED539C680117E9D_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_m893F6F54ECFCBFEFD521CDF0F9C2518C1E93BE1D_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mE8E4F86EEE546D1E79D488A28B191590EBE28952_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m8DA2AB2970B4FD43A6642148294235B4096D59B3_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m25098ED9FE97AD909A91D26E0ABFC9FE1242905F_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mE231002F031F4776008D0907C601BECDE4B3384E_gshared_inline (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE780D5A4373D244D420DBB851419C525F52259C4_gshared_inline (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m0FD09735612A341F64184DD2E6E7FAAD50D027CF_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m864EE170DDFFF7DBFA9CD267BED29B9344DB124D_gshared (ReadOnlyCollection_1_tF6537A9DB6A2D45E0376852BAB829185E7F25FD1* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mF785B6AFB037D8D8636258A081A99969297CF011_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m1F0A55DB8ACE0BBE2ECFBF37D87179FFDC9CA81A_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mF2080F931E8FB5D5B0B64A4927FB22F419BF0360_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mEFB3B11ACFCADAD629C459AD094B71E1E8B980AA_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m976652335EA1B49CF3FB1B389C76BBAD1C69E0A9_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m2733607C3DD21A44FD183357EEF8D8DEA6CF64E5_gshared_inline (Action_1_t138B53097F6755F546931F0B87469E19A8F66439* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE9E2FC72C71CC523E659FB47E020BF265D11A90F_gshared (Enumerator_tDC50C3EEFE54EBE6DF94FA28C6AC2434C3B3B7FD* __this, List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_m46BAF30F5A18DECEC4C3F6ECEFD0F4F726B02705_gshared (InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* ___0_array, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m6F0E9F11DBD3185465DAF020F2B7815318E16E45_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF8223D425371B1091C253BD3F7403D175C1090B7_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mF868741ABA260F08A384BA582821EEDD7EE03E10_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m7ABF70CC6F474DFA1A056B41C752C21D2905F570_gshared_inline (Predicate_1_t5805DB64113904AB19024DCCBF911D02BFAF1A18* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m9587C71D93C86C2E6B04C8348FBAC08180E3BED9_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_mC514C31DCD2061240515329117869F96D5D48E95_gshared (InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m819BF97DE6F72084C2CCC7F28106F0726550A1A0_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_mB7E7B569A34A9B2C99E08CED896D698F7C6B325D_gshared (InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m6440CA605E806B3B7F838164133F2AE8F57A88AE_gshared (InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t09ED0BE2699D1546D891A69C97AFC4FE705CBB3B* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m76C85811BC9C905E7224C054AD480C3062FA7700_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m386ABA9B2C4950D31E787C87CDEF3D3E103F1B1A_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m540236388ED02DCFB606983FBE3A7C536408505E_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mA271B5B013C60CD038FA95C13BB2B5F09168D920_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisRuntimeObject_m06FF2E5011A594BEE1AF5EC3AEA51997A9812FE1_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mC96F92ACF35F9B37F0A5E3338FF61E5229554338_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRuntimeObject_mF8C07FB088390BE91CF3D4F9C8C4AC052B3FBCBA_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m1D1E1B0D0C13AF3B0C1B76665039738BFFE3125A_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mA6E73354873BEAC5429A80AE43CB210589A7EC7E_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 List_1_get_Item_mB65D799560ADD289EA08E717412A24EFADA7FB57_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m7533012D6C4CE083D5CAF670259B97F6D5D506F4_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m8B3D79788ADC2B54C9B12CC9EC1158E6A04CDEBC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB308EE5BFFD89A7B8C251644D76CA547456F3012_gshared_inline (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_gshared_inline (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m9AA9E2C5627FB6CD9F3493CA8A99588EDA08125D_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m5D03D2E5CE6AAFA9914B3F1E1707393948DA34CB_gshared (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m590D7926DA2B45C95850710F87644BCD235F1A70_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m96F4BF1E6FF691338A44AAB62506964ACAD70715_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mC49015D45A78A39909C4541BDB84DAA369E6A4C1_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m1D3248EEA732AE8F2AA160F73A481C0102193D15_gshared_inline (Action_1_t43B3A21E3139B3E2E49698F940F979F37AD1E63E* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mCAD56839187542C3B25E2C1493BBD62861333E4E_gshared (Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251* __this, List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m972A3CE5298A6193E512B34C64201444B051D8E9_gshared (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mF138D66498A5DE06E21A7149C35FA14729F4F5E1_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m30CC1D4CA1984DCAEDBCD2228B538A0503AF854A_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m02DCEAFFE826B31F80767A9D191CB4587D82F7BC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m182E0ACAA85455151F5750CE87F942DA6E3DD3D6_gshared_inline (Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m5903E8D5CE5B92A29530763E182314BDFA781664_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mDCB49D07F30FD9D952124968159FDF346234BD04_gshared (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEBED487B845A66E3298CA30654B7EC17F7481995_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m438D9EDDBF93A09C81E89458C2362F85487923EC_gshared (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m4A8362BBA870329F45001F17310B50E583BFF19F_gshared (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mDF2147E522AD80A7B6A79CF8E7F00EC7DBF8A032_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC List_1_get_Item_mAAE7FBDBD94CC48BA01C01ACFC3C66EE219110D0_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m85CB6FEF509A4859399929F09F545FA1133C3051_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m58893707EC3B663186D1550A23DE96C818416CBD_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m594A4155F206677F45ECD9AAE7E9EFD0AE6137ED_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m1A140613D2D236E9CF413F81D549E39415DF0058_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m624C469B79ADC28E429B7A3CA96DA72345621643_gshared_inline (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF3540C84790DAB9D381F00753BA20A85694C3446_gshared_inline (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m8C743BAB2CDB84037FE830DF12A8B561EFEEEA60_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m236FFEDF5196507C82BBA262351A75F0337621F3_gshared (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mF5A7DA78EA07100BDE8044CA37C505F36AD7ACB1_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mC9CB5EB21839923C050E6922FE7050867F374865_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA5832B215E464CAC8345E7ECC45562E884AE146D_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m15B9FC56E0418F730FC3A37C8E482F7108D73B62_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m40FE27C2AB4F6F5F863957210FA90C1BF581D293_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m6A44347B678A89104F91C3A85581DCC41A21AD5B_gshared_inline (Action_1_t4501483487EE874F237B6B25ACC1026A64FBF612* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m159144864209387AA18DEABE7B7985388F8F3452_gshared (Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9* __this, List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m5A2EB67A073F2BFF5B3DCDDBD15D75BC3CFB909C_gshared (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC8E7189F3D9D95975CFE821AC3B560B2EA7AB7A8_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m911F1AFFA59FD181BA9363E0B6C8B5B95067EC3B_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mA8E72E7CFB72101AA88E01A84F746ECBD8E91B3F_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mADD6CFDE192E3E822D5296926054ED8A41DB09C4_gshared_inline (Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m6558ECB96638BF339DAB6BDB70413BA7570A84F9_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mD8F006C0A007C05BB69E417FA65A5A66965F997C_gshared (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m4F48B52D720DB8E76904DB4647F7BDA63FDEC552_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mE6A4B57DE0CB3DEC8371BDC3DAAAD29D6C9E3B2B_gshared (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m3182DABDA1EFACFF8268887837CA976A3577C3E6_gshared (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tA6E38F9B8A5E125EC6515F9679C2079C747A0149* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m0C19209F7F2E7D8F63F4AEDAB78FF7F76347ECFB_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 List_1_get_Item_mE33CCA6A6D338BD1F44C8E35CE75806952CBF0CC_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m47EF2DD78187A4AFDDBA8AFE5C2D83DE376C0A0A_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m45EC1E38A4A473EA779C21FBFEB2C0E39E4C7846_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m4AF1A89B7FCCDFD5755D0C21A65347642A37B152_gshared_inline (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2F90A932E325FFA55047769F5E45E453D80C27D1_gshared_inline (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m13CC4FA54580EFF2DDFDDB9E830D9A383A0E4DCC_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mEA8F62A9DC91A24300FEFCF8A40F606FECC6289D_gshared (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m041D9A4962B238EF7BC9922EAF0F5FC8E6267EF6_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m1303A79CAE668AD1204F2D7DF8D2DFCF9DDC6D0D_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m0E03ED6DB864BF551838BF1B49786675D995A7E7_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m060BDC309579AD262C87F876AC2A1E81D316472A_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m0C6E5F5797F0292E98084D59E0ABAFFF268286FA_gshared_inline (Action_1_t056FB23C2911679EFD99E438847C226611A2247F* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m67AC7635AF0AF22787100E7C16277521B24BF922_gshared (Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C* __this, List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mD7FA52403DD62EA78B636E1A4E8119ABED32F37E_gshared (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m3AA6C81C13315A0F1CD886CA63438F3FC55EFD70_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m7476D799F5CC07697D447853DA4DAEB4D3741B84_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mC74ED88927A060D6631231DB26A042412C32D85B_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_gshared_inline (Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mA82B743941194D34E26FD74ABCA431B3E5B9C2FF_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m88E01FB6C608D58721AAECE3C58B2107CB926E3B_gshared (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m740F84AD8B0226D65AE841BEA5DA739C69A29FAE_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m4974E84199207C342ABD5C3DDB83FB22A7831AF8_gshared (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mF8B226978F672DF67F415832E3FCC44027498627_gshared (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m3A3C1CDA39FA5508C45CCB0F24AC6DF44419C17C_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D List_1_get_Item_m5726E3006845A58F320312B88B8BB76FC4AB16CA_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_m2ECC87E2F5AA78302D3456A1A0563708395F722B_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mDAB769772A9FB34AD61FB07A4C188CD97E7A1A15_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m47222083904E5992F1343D4C4CE32F5282C06809_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mC227D0851E18347BAD40BAB0934AD5A1001031B8_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m95328F0F59DDEB1A8A7D044DAF427CC7DEB1EB93_gshared_inline (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m6DD52194437C4A4E33590FE40BD0EB3FDD85D373_gshared_inline (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m4F4A827D176514113FAA544F9B887A319DE2917F_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mDC6B15D558789C0310CE2ADF74A7A2398F5DA556_gshared (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m944CCB5C81536FEC4E38E8CC5785698FEBBE33C6_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mD07951F7A529B12EFB0066C5118F1D6434E85070_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mBDF07664E1A538F04E3FB7FBF52C88ECACC4F168_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m1AE7A24E5B2B6BBBD272D9C4189AAD9791842898_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m537C9FB08AEE7BA69FFBC9E11542DDC3FA75A6AA_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m6BADC1E75837D17C7C206C74AB63B78F8BFCD450_gshared_inline (Action_1_t49F19F6D8F6FE90ECA808F2608FB278D414DD05A* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5B02D3C70DFCA7B55F85F9766F6D2495501C30F6_gshared (Enumerator_tE8C173434DE13194E4C9E6856B75BFF0CAEC951F* __this, List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_mE582C4BE8F0A7ADE1DBBC8942F7E41FD96C92347_gshared (InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* ___0_array, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m5706D9DCD4E44962FAC65B7F57DD98D6755A5A14_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m85C9935C7C89AAD3EAFFEB95F2258C0375C2E9C1_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mE669E18E1E3B8BD9A783EA97EEBF156DEE2CEA22_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m7CECE6D4B69BA1AB9C0C5C5AD16F7FB9246B57B8_gshared_inline (Predicate_1_t2E5711CB35BA617C8E9CB94509B236A2133DC6BD* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m0D7C274B99A4B52392CBEDD5F117535434682799_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_m7C8B5BC262FBE7FEE47F8D767CFF499ACDE79E24_gshared (InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mA45766AD040502AA974D5AB0F201B1C1F2F38124_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_m2E8C24B4F6C629DB8AE3ABC183CD1689D8B6EA18_gshared (InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mF516B23537CB3D62862D63EE2336653FBC74BD3A_gshared (InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t0D538E030DA616BAE9EC08BBAF8EAB30350CCADC* ___3_comparer, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F (int32_t ___0_argument, int32_t ___1_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
inline void List_1_AddEnumerable_m504973187D416497E96E94051DB6B989BD021CEC (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m504973187D416497E96E94051DB6B989BD021CEC_gshared)(__this, ___0_enumerable, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D (const RuntimeMethod* method) ;
inline KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 List_1_get_Item_m29D6F6A0530995F915F1DE62526DF9304DFC8E29 (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 (*) (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, int32_t, const RuntimeMethod*))List_1_get_Item_m29D6F6A0530995F915F1DE62526DF9304DFC8E29_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_m07DDDDDDE9CBF912134A0EF13EC268033EA42BBC (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_m07DDDDDDE9CBF912134A0EF13EC268033EA42BBC_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_mFEF76C4766A3D42A22131A736BE640DF6C542E3D (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, int32_t, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8, const RuntimeMethod*))List_1_set_Item_mFEF76C4766A3D42A22131A736BE640DF6C542E3D_gshared)(__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m280DB6514ABCB446654DDAD55DA87D6D939D6574 (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8, const RuntimeMethod*))List_1_AddWithResize_m280DB6514ABCB446654DDAD55DA87D6D939D6574_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mFE4D53F7B6B104A2F3512FB535C2A2E6CD21CBD4 (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mFE4D53F7B6B104A2F3512FB535C2A2E6CD21CBD4_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m9BAF9FC9B01B86AB9E16C2A54BAB69042D04B974_inline (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8, const RuntimeMethod*))List_1_Add_m9BAF9FC9B01B86AB9E16C2A54BAB69042D04B974_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m8AD37AF1186CEAD50E0C80CBCFBCF5F104D77023_inline (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, const RuntimeMethod*))List_1_get_Count_m8AD37AF1186CEAD50E0C80CBCFBCF5F104D77023_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_mB3D050E84CCEF14FB7AF90A4058B002427B192A5 (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_mB3D050E84CCEF14FB7AF90A4058B002427B192A5_gshared)(__this, ___0_index, ___1_collection, method);
}
inline void ReadOnlyCollection_1__ctor_mE4DBD225ED92E3043EE280DC62822A941C97E8EF (ReadOnlyCollection_1_t30B6EAA2E0CFDAB1ED506ACDAB0AA9A61502FF05* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t30B6EAA2E0CFDAB1ED506ACDAB0AA9A61502FF05*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_mE4DBD225ED92E3043EE280DC62822A941C97E8EF_gshared)(__this, ___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t List_1_IndexOf_mEAD1A664915C007D07778E2EA862532462769CE8 (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8, const RuntimeMethod*))List_1_IndexOf_mEAD1A664915C007D07778E2EA862532462769CE8_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m81CEE24BED461D23E45DDCE07F5727D29B3004D0 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m81CEE24BED461D23E45DDCE07F5727D29B3004D0_gshared)(___0_value, method);
}
inline bool List_1_Contains_mA9F010BCF7276306DA83CBC8BE346C7900B0B74C (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8, const RuntimeMethod*))List_1_Contains_mA9F010BCF7276306DA83CBC8BE346C7900B0B74C_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m7B63DB1BBB48A3381F1FD6C48EAB1F8B41C970A3 (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*, int32_t, const RuntimeMethod*))List_1_CopyTo_m7B63DB1BBB48A3381F1FD6C48EAB1F8B41C970A3_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline void List_1_set_Capacity_m762327921F64C98D32E79C932090676BAF04A452 (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m762327921F64C98D32E79C932090676BAF04A452_gshared)(__this, ___0_value, method);
}
inline void Action_1_Invoke_mFADFA3B447682798B8D67B977A30F6BA4BB1EACB_inline (Action_1_t6BF8D9007A2A7F49C909CE38D7F7A51FA6CD6496* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6BF8D9007A2A7F49C909CE38D7F7A51FA6CD6496*, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8, const RuntimeMethod*))Action_1_Invoke_mFADFA3B447682798B8D67B977A30F6BA4BB1EACB_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F (const RuntimeMethod* method) ;
inline void Enumerator__ctor_mE48951BEE7D63E6C44A4624706580E619A0E3068 (Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39* __this, List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39*, List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, const RuntimeMethod*))Enumerator__ctor_mE48951BEE7D63E6C44A4624706580E619A0E3068_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_m792D51A9E152BDFFFD75286BEF47629F75BB7846 (KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_array, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_m792D51A9E152BDFFFD75286BEF47629F75BB7846_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m678A0DACDDD2DB97848D77DABD47B58716F483BB (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, int32_t, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8, const RuntimeMethod*))List_1_Insert_m678A0DACDDD2DB97848D77DABD47B58716F483BB_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_mC0F4EA1196D73037B64B3DD0EF0405BF1495B1AD (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mC0F4EA1196D73037B64B3DD0EF0405BF1495B1AD_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m74B3AFCA1E4E428BD00D4FC573B95EFAEA4DD512 (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8, const RuntimeMethod*))List_1_Remove_m74B3AFCA1E4E428BD00D4FC573B95EFAEA4DD512_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m9FD574A8B117EBFEE39DBD83FC67702DA3A35A0A_inline (Predicate_1_t2ABDDC79221089ACAA67305D172D6E9ABDE6FB6D* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t2ABDDC79221089ACAA67305D172D6E9ABDE6FB6D*, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8, const RuntimeMethod*))Predicate_1_Invoke_m9FD574A8B117EBFEE39DBD83FC67702DA3A35A0A_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline void List_1_Reverse_mEF107C9CA095BF316ED6D27FB06CFCEF6C7E890F (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mEF107C9CA095BF316ED6D27FB06CFCEF6C7E890F_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_m63A40EB32B3C405A970BC5BAC09BE2815B33BD26 (KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_m63A40EB32B3C405A970BC5BAC09BE2815B33BD26_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m0CBCC715224894BBDB7EF35EA5DC6337CDE3BD01 (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m0CBCC715224894BBDB7EF35EA5DC6337CDE3BD01_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_m342D5FBBF45981561D44E2E846BD654801628BA3 (KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_m342D5FBBF45981561D44E2E846BD654801628BA3_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m3D6E600FAC91CC2A8F19C9924C21113BB2137F32 (KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t024445BA87DEB4824C10D2A0367B5684E4901629* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*, int32_t, int32_t, Comparison_1_t024445BA87DEB4824C10D2A0367B5684E4901629*, const RuntimeMethod*))ArraySortHelper_1_Sort_m3D6E600FAC91CC2A8F19C9924C21113BB2137F32_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m4C6705B4E5970531347EB22B494526D1166F1160 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m4C6705B4E5970531347EB22B494526D1166F1160_gshared)(__this, ___0_enumerable, method);
}
inline Il2CppChar List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, int32_t, const RuntimeMethod*))List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m152A3A4010AA9B103898F608CEB394ED3FDAA101 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, Il2CppChar ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, int32_t, Il2CppChar, const RuntimeMethod*))List_1_set_Item_m152A3A4010AA9B103898F608CEB394ED3FDAA101_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m11185A14288763FB9A0FF8111453AC739E76CF35 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, Il2CppChar, const RuntimeMethod*))List_1_AddWithResize_m11185A14288763FB9A0FF8111453AC739E76CF35_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mA1A224D6DC21C2A7B5A728192ADB43A9ECC82064 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mA1A224D6DC21C2A7B5A728192ADB43A9ECC82064_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, Il2CppChar, const RuntimeMethod*))List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_mF1D09129B2DDA7248BCD15C07166154DA6EB57E2 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_mF1D09129B2DDA7248BCD15C07166154DA6EB57E2_gshared)(__this, ___0_index, ___1_collection, method);
}
inline void ReadOnlyCollection_1__ctor_mD8A5ED70E892EE6E32ACA0854C065B31DBD9417F (ReadOnlyCollection_1_t18E2D7D4BDE7755E43AFF1F6BF82718917B70648* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t18E2D7D4BDE7755E43AFF1F6BF82718917B70648*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_mD8A5ED70E892EE6E32ACA0854C065B31DBD9417F_gshared)(__this, ___0_list, method);
}
inline int32_t List_1_IndexOf_mF2509E11A7B54B54C011049AB62AF21A826EBCFE (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, Il2CppChar, const RuntimeMethod*))List_1_IndexOf_mF2509E11A7B54B54C011049AB62AF21A826EBCFE_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m7A2A17403F61C98861524C74822FAE6BBA4E0988 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m7A2A17403F61C98861524C74822FAE6BBA4E0988_gshared)(___0_value, method);
}
inline bool List_1_Contains_m01575B7D6D0C9A5608A0496D0C7836AB159D5F92 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, Il2CppChar, const RuntimeMethod*))List_1_Contains_m01575B7D6D0C9A5608A0496D0C7836AB159D5F92_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m66386CFE5F99A7A429344E8902FE421835DD80B1 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t, const RuntimeMethod*))List_1_CopyTo_m66386CFE5F99A7A429344E8902FE421835DD80B1_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m80805224A0926C2561F849752A37A2569134A03D (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m80805224A0926C2561F849752A37A2569134A03D_gshared)(__this, ___0_value, method);
}
inline void Action_1_Invoke_m2D463A02A40BD8F16A42B9EA5771DCE3DD6D321D_inline (Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F* __this, Il2CppChar ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F*, Il2CppChar, const RuntimeMethod*))Action_1_Invoke_m2D463A02A40BD8F16A42B9EA5771DCE3DD6D321D_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_m24165C174A346386819FF0C8B06C5299C5D8C596 (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* __this, List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D*, List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))Enumerator__ctor_m24165C174A346386819FF0C8B06C5299C5D8C596_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m018F59BB01FA2473C4F75B463F7630F8EFB53F34 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, Il2CppChar ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, Il2CppChar, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m018F59BB01FA2473C4F75B463F7630F8EFB53F34_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m93EFDEE741FB849BD50E39217E7005B609E29403 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, Il2CppChar ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, int32_t, Il2CppChar, const RuntimeMethod*))List_1_Insert_m93EFDEE741FB849BD50E39217E7005B609E29403_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m4088E696F2E983A168CFD204B228E773695E5C26 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m4088E696F2E983A168CFD204B228E773695E5C26_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m02E1DF27506A00E153037AD60BCF6966B8407CC8 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, Il2CppChar, const RuntimeMethod*))List_1_Remove_m02E1DF27506A00E153037AD60BCF6966B8407CC8_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m8243A1B2012C89E94D47EF84A7D2AA8D5F440AA5_inline (Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* __this, Il2CppChar ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E*, Il2CppChar, const RuntimeMethod*))Predicate_1_Invoke_m8243A1B2012C89E94D47EF84A7D2AA8D5F440AA5_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1_Reverse_mB9ED94F34C25EEA03B4335A2077E1CADCB9A3A71 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mB9ED94F34C25EEA03B4335A2077E1CADCB9A3A71_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9B8A5AAC3295C28E6DD6C5E9C61D8B6BEF506AF2 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9B8A5AAC3295C28E6DD6C5E9C61D8B6BEF506AF2_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m94B6D109F51B9AC3485C8D1DFFF516A23294B554 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m94B6D109F51B9AC3485C8D1DFFF516A23294B554_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE0333A739303139C223C5EE631115880C5160F21 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE0333A739303139C223C5EE631115880C5160F21_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_mEB144F35631CDE3C91A0F1549342F937C6F71995 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tD2BC24ACADC7AE1FDC0BDF807145456FDE58C734* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t, int32_t, Comparison_1_tD2BC24ACADC7AE1FDC0BDF807145456FDE58C734*, const RuntimeMethod*))ArraySortHelper_1_Sort_mEB144F35631CDE3C91A0F1549342F937C6F71995_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F_gshared)(__this, ___0_enumerable, method);
}
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, const RuntimeMethod*))List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8_gshared)(__this, ___0_index, ___1_collection, method);
}
inline void ReadOnlyCollection_1__ctor_mD41819F73F264B50313DE018DC19E0428FC120E5 (ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_mD41819F73F264B50313DE018DC19E0428FC120E5_gshared)(__this, ___0_list, method);
}
inline int32_t List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C_gshared)(___0_value, method);
}
inline bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m030AAF730ACCF739D45671086EBF4786FED908D5 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))List_1_CopyTo_m030AAF730ACCF739D45671086EBF4786FED908D5_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC_gshared)(__this, ___0_value, method);
}
inline void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, int32_t, const RuntimeMethod*))Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, const RuntimeMethod*))List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3*, int32_t, const RuntimeMethod*))Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57764BD8E3718881AE35094284EFDECEE528991D (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57764BD8E3718881AE35094284EFDECEE528991D_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E0CF4C26182BB9D788C90ABE423C2F4CD145E41 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E0CF4C26182BB9D788C90ABE423C2F4CD145E41_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m7FA55FB83B1A81CF769D2928FCE3E06425DAC06B (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89*, const RuntimeMethod*))ArraySortHelper_1_Sort_m7FA55FB83B1A81CF769D2928FCE3E06425DAC06B_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m888E7562D4D5756B46E7DE52614832960DA81A0D (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m888E7562D4D5756B46E7DE52614832960DA81A0D_gshared)(__this, ___0_enumerable, method);
}
inline int32_t List_1_get_Item_mDE2F02C693FD9EAA8F93873E407BC46C47ACFC7A (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_get_Item_mDE2F02C693FD9EAA8F93873E407BC46C47ACFC7A_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_mB4FCD891721B07472641D7000AAE93A9CABBAE5A (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, int32_t, const RuntimeMethod*))List_1_set_Item_mB4FCD891721B07472641D7000AAE93A9CABBAE5A_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_mAD159B09F28BD7914562E219CA52E2D4BDCF5530 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_AddWithResize_mAD159B09F28BD7914562E219CA52E2D4BDCF5530_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, const RuntimeMethod*))List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m97B7B4D0EFFBE810751F8A48DA53CFB8B91B4A3B (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m97B7B4D0EFFBE810751F8A48DA53CFB8B91B4A3B_gshared)(__this, ___0_index, ___1_collection, method);
}
inline void ReadOnlyCollection_1__ctor_m5E55BDC1020352A441CBC58EDD29F36D0399FC43 (ReadOnlyCollection_1_t147FA1FCB6E2EB047E003D795B981985F4219E5F* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t147FA1FCB6E2EB047E003D795B981985F4219E5F*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m5E55BDC1020352A441CBC58EDD29F36D0399FC43_gshared)(__this, ___0_list, method);
}
inline int32_t List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39_gshared)(___0_value, method);
}
inline bool List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m839F5ADDC59B70CAC1B14D9841A524465A3BC9E5 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t, const RuntimeMethod*))List_1_CopyTo_m839F5ADDC59B70CAC1B14D9841A524465A3BC9E5_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m7ED78746E0AFEF2F59490B581943C977BE1A5479 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m7ED78746E0AFEF2F59490B581943C977BE1A5479_gshared)(__this, ___0_value, method);
}
inline void Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_inline (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B*, int32_t, const RuntimeMethod*))Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_mC6E6B2337772FC83C59264783DAFF1D4CF9F023E (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, const RuntimeMethod*))Enumerator__ctor_mC6E6B2337772FC83C59264783DAFF1D4CF9F023E_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA27917199B3C9E1A60C5791FB1B2AC5EB4C2103A (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA27917199B3C9E1A60C5791FB1B2AC5EB4C2103A_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m1E433D24E9C67F0BA5D1ACF7708F97EF1DC4AE3D (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, int32_t, const RuntimeMethod*))List_1_Insert_m1E433D24E9C67F0BA5D1ACF7708F97EF1DC4AE3D_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_mA0D34DB4A9D4C8FECCD3278530CEEB3147A19D54 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mA0D34DB4A9D4C8FECCD3278530CEEB3147A19D54_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m4238AF38CE7EEE7C4C5C568B53D88116FB692B53 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_Remove_m4238AF38CE7EEE7C4C5C568B53D88116FB692B53_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_inline (Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A*, int32_t, const RuntimeMethod*))Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1_Reverse_m7DE6AE4FAB338990D0A930D6CD525BA07B7E3CB4 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m7DE6AE4FAB338990D0A930D6CD525BA07B7E3CB4_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF0352521EE3186887C68DFC25905E29D1393515 (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF0352521EE3186887C68DFC25905E29D1393515_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m3EC8C34030BE04C522C1CBDB2E96DFAEDB2F011D (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m3EC8C34030BE04C522C1CBDB2E96DFAEDB2F011D_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m632FD913827035A385A987CEA4B0D30A6C1BB317 (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m632FD913827035A385A987CEA4B0D30A6C1BB317_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m3FCF73F735AAA03BF7352EF6635F318F66177EB9 (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t, int32_t, Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1*, const RuntimeMethod*))ArraySortHelper_1_Sort_m3FCF73F735AAA03BF7352EF6635F318F66177EB9_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m5BC63B920994BE878D143B6B599CF0BBA31856EC (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m5BC63B920994BE878D143B6B599CF0BBA31856EC_gshared)(__this, ___0_enumerable, method);
}
inline InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 List_1_get_Item_m3F7E7702879C444EC4474C557ED539C680117E9D (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 (*) (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01*, int32_t, const RuntimeMethod*))List_1_get_Item_m3F7E7702879C444EC4474C557ED539C680117E9D_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_m893F6F54ECFCBFEFD521CDF0F9C2518C1E93BE1D (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_m893F6F54ECFCBFEFD521CDF0F9C2518C1E93BE1D_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_mE8E4F86EEE546D1E79D488A28B191590EBE28952 (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01*, int32_t, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321, const RuntimeMethod*))List_1_set_Item_mE8E4F86EEE546D1E79D488A28B191590EBE28952_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m8DA2AB2970B4FD43A6642148294235B4096D59B3 (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01*, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321, const RuntimeMethod*))List_1_AddWithResize_m8DA2AB2970B4FD43A6642148294235B4096D59B3_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m25098ED9FE97AD909A91D26E0ABFC9FE1242905F (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m25098ED9FE97AD909A91D26E0ABFC9FE1242905F_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_mE231002F031F4776008D0907C601BECDE4B3384E_inline (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01*, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321, const RuntimeMethod*))List_1_Add_mE231002F031F4776008D0907C601BECDE4B3384E_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_mE780D5A4373D244D420DBB851419C525F52259C4_inline (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01*, const RuntimeMethod*))List_1_get_Count_mE780D5A4373D244D420DBB851419C525F52259C4_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m0FD09735612A341F64184DD2E6E7FAAD50D027CF (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m0FD09735612A341F64184DD2E6E7FAAD50D027CF_gshared)(__this, ___0_index, ___1_collection, method);
}
inline void ReadOnlyCollection_1__ctor_m864EE170DDFFF7DBFA9CD267BED29B9344DB124D (ReadOnlyCollection_1_tF6537A9DB6A2D45E0376852BAB829185E7F25FD1* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_tF6537A9DB6A2D45E0376852BAB829185E7F25FD1*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m864EE170DDFFF7DBFA9CD267BED29B9344DB124D_gshared)(__this, ___0_list, method);
}
inline int32_t List_1_IndexOf_mF785B6AFB037D8D8636258A081A99969297CF011 (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01*, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321, const RuntimeMethod*))List_1_IndexOf_mF785B6AFB037D8D8636258A081A99969297CF011_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m1F0A55DB8ACE0BBE2ECFBF37D87179FFDC9CA81A (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m1F0A55DB8ACE0BBE2ECFBF37D87179FFDC9CA81A_gshared)(___0_value, method);
}
inline bool List_1_Contains_mF2080F931E8FB5D5B0B64A4927FB22F419BF0360 (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01*, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321, const RuntimeMethod*))List_1_Contains_mF2080F931E8FB5D5B0B64A4927FB22F419BF0360_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_mEFB3B11ACFCADAD629C459AD094B71E1E8B980AA (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01*, InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB*, int32_t, const RuntimeMethod*))List_1_CopyTo_mEFB3B11ACFCADAD629C459AD094B71E1E8B980AA_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m976652335EA1B49CF3FB1B389C76BBAD1C69E0A9 (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m976652335EA1B49CF3FB1B389C76BBAD1C69E0A9_gshared)(__this, ___0_value, method);
}
inline void Action_1_Invoke_m2733607C3DD21A44FD183357EEF8D8DEA6CF64E5_inline (Action_1_t138B53097F6755F546931F0B87469E19A8F66439* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t138B53097F6755F546931F0B87469E19A8F66439*, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321, const RuntimeMethod*))Action_1_Invoke_m2733607C3DD21A44FD183357EEF8D8DEA6CF64E5_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_mE9E2FC72C71CC523E659FB47E020BF265D11A90F (Enumerator_tDC50C3EEFE54EBE6DF94FA28C6AC2434C3B3B7FD* __this, List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDC50C3EEFE54EBE6DF94FA28C6AC2434C3B3B7FD*, List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01*, const RuntimeMethod*))Enumerator__ctor_mE9E2FC72C71CC523E659FB47E020BF265D11A90F_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_m46BAF30F5A18DECEC4C3F6ECEFD0F4F726B02705 (InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* ___0_array, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB*, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_m46BAF30F5A18DECEC4C3F6ECEFD0F4F726B02705_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m6F0E9F11DBD3185465DAF020F2B7815318E16E45 (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01*, int32_t, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321, const RuntimeMethod*))List_1_Insert_m6F0E9F11DBD3185465DAF020F2B7815318E16E45_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_mF8223D425371B1091C253BD3F7403D175C1090B7 (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF8223D425371B1091C253BD3F7403D175C1090B7_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_mF868741ABA260F08A384BA582821EEDD7EE03E10 (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01*, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321, const RuntimeMethod*))List_1_Remove_mF868741ABA260F08A384BA582821EEDD7EE03E10_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m7ABF70CC6F474DFA1A056B41C752C21D2905F570_inline (Predicate_1_t5805DB64113904AB19024DCCBF911D02BFAF1A18* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t5805DB64113904AB19024DCCBF911D02BFAF1A18*, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321, const RuntimeMethod*))Predicate_1_Invoke_m7ABF70CC6F474DFA1A056B41C752C21D2905F570_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1_Reverse_m9587C71D93C86C2E6B04C8348FBAC08180E3BED9 (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m9587C71D93C86C2E6B04C8348FBAC08180E3BED9_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_mC514C31DCD2061240515329117869F96D5D48E95 (InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_mC514C31DCD2061240515329117869F96D5D48E95_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m819BF97DE6F72084C2CCC7F28106F0726550A1A0 (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m819BF97DE6F72084C2CCC7F28106F0726550A1A0_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_mB7E7B569A34A9B2C99E08CED896D698F7C6B325D (InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_mB7E7B569A34A9B2C99E08CED896D698F7C6B325D_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m6440CA605E806B3B7F838164133F2AE8F57A88AE (InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t09ED0BE2699D1546D891A69C97AFC4FE705CBB3B* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB*, int32_t, int32_t, Comparison_1_t09ED0BE2699D1546D891A69C97AFC4FE705CBB3B*, const RuntimeMethod*))ArraySortHelper_1_Sort_m6440CA605E806B3B7F838164133F2AE8F57A88AE_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m76C85811BC9C905E7224C054AD480C3062FA7700 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m76C85811BC9C905E7224C054AD480C3062FA7700_gshared)(__this, ___0_enumerable, method);
}
inline RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m386ABA9B2C4950D31E787C87CDEF3D3E103F1B1A (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m386ABA9B2C4950D31E787C87CDEF3D3E103F1B1A_gshared)(__this, ___0_index, ___1_collection, method);
}
inline void ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65 (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65_gshared)(__this, ___0_list, method);
}
inline int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37_gshared)(___0_value, method);
}
inline bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, const RuntimeMethod*))List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared)(__this, ___0_value, method);
}
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_m540236388ED02DCFB606983FBE3A7C536408505E (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))Enumerator__ctor_m540236388ED02DCFB606983FBE3A7C536408505E_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12*, RuntimeObject*, const RuntimeMethod*))Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1_Reverse_mA271B5B013C60CD038FA95C13BB2B5F09168D920 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mA271B5B013C60CD038FA95C13BB2B5F09168D920_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisRuntimeObject_m06FF2E5011A594BEE1AF5EC3AEA51997A9812FE1 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisRuntimeObject_m06FF2E5011A594BEE1AF5EC3AEA51997A9812FE1_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_mC96F92ACF35F9B37F0A5E3338FF61E5229554338 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mC96F92ACF35F9B37F0A5E3338FF61E5229554338_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisRuntimeObject_mF8C07FB088390BE91CF3D4F9C8C4AC052B3FBCBA (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisRuntimeObject_mF8C07FB088390BE91CF3D4F9C8C4AC052B3FBCBA_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m1D1E1B0D0C13AF3B0C1B76665039738BFFE3125A (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645*, const RuntimeMethod*))ArraySortHelper_1_Sort_m1D1E1B0D0C13AF3B0C1B76665039738BFFE3125A_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50 (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50_gshared)(__this, ___0_list, method);
}
inline void List_1_AddEnumerable_mA6E73354873BEAC5429A80AE43CB210589A7EC7E (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_mA6E73354873BEAC5429A80AE43CB210589A7EC7E_gshared)(__this, ___0_enumerable, method);
}
inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 List_1_get_Item_mB65D799560ADD289EA08E717412A24EFADA7FB57 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, const RuntimeMethod*))List_1_get_Item_mB65D799560ADD289EA08E717412A24EFADA7FB57_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m7533012D6C4CE083D5CAF670259B97F6D5D506F4 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_set_Item_m7533012D6C4CE083D5CAF670259B97F6D5D506F4_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m8B3D79788ADC2B54C9B12CC9EC1158E6A04CDEBC (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_AddWithResize_m8B3D79788ADC2B54C9B12CC9EC1158E6A04CDEBC_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_mB308EE5BFFD89A7B8C251644D76CA547456F3012_inline (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_Add_mB308EE5BFFD89A7B8C251644D76CA547456F3012_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_inline (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, const RuntimeMethod*))List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m9AA9E2C5627FB6CD9F3493CA8A99588EDA08125D (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m9AA9E2C5627FB6CD9F3493CA8A99588EDA08125D_gshared)(__this, ___0_index, ___1_collection, method);
}
inline void ReadOnlyCollection_1__ctor_m5D03D2E5CE6AAFA9914B3F1E1707393948DA34CB (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m5D03D2E5CE6AAFA9914B3F1E1707393948DA34CB_gshared)(__this, ___0_list, method);
}
inline int32_t List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB_gshared)(___0_value, method);
}
inline bool List_1_Contains_m590D7926DA2B45C95850710F87644BCD235F1A70 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_Contains_m590D7926DA2B45C95850710F87644BCD235F1A70_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m96F4BF1E6FF691338A44AAB62506964ACAD70715 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t, const RuntimeMethod*))List_1_CopyTo_m96F4BF1E6FF691338A44AAB62506964ACAD70715_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_mC49015D45A78A39909C4541BDB84DAA369E6A4C1 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mC49015D45A78A39909C4541BDB84DAA369E6A4C1_gshared)(__this, ___0_value, method);
}
inline void Action_1_Invoke_m1D3248EEA732AE8F2AA160F73A481C0102193D15_inline (Action_1_t43B3A21E3139B3E2E49698F940F979F37AD1E63E* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t43B3A21E3139B3E2E49698F940F979F37AD1E63E*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))Action_1_Invoke_m1D3248EEA732AE8F2AA160F73A481C0102193D15_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_mCAD56839187542C3B25E2C1493BBD62861333E4E (Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251* __this, List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251*, List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, const RuntimeMethod*))Enumerator__ctor_mCAD56839187542C3B25E2C1493BBD62861333E4E_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m972A3CE5298A6193E512B34C64201444B051D8E9 (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m972A3CE5298A6193E512B34C64201444B051D8E9_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_mF138D66498A5DE06E21A7149C35FA14729F4F5E1 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_Insert_mF138D66498A5DE06E21A7149C35FA14729F4F5E1_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m30CC1D4CA1984DCAEDBCD2228B538A0503AF854A (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m30CC1D4CA1984DCAEDBCD2228B538A0503AF854A_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m02DCEAFFE826B31F80767A9D191CB4587D82F7BC (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_Remove_m02DCEAFFE826B31F80767A9D191CB4587D82F7BC_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m182E0ACAA85455151F5750CE87F942DA6E3DD3D6_inline (Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))Predicate_1_Invoke_m182E0ACAA85455151F5750CE87F942DA6E3DD3D6_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1_Reverse_m5903E8D5CE5B92A29530763E182314BDFA781664 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m5903E8D5CE5B92A29530763E182314BDFA781664_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mDCB49D07F30FD9D952124968159FDF346234BD04 (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mDCB49D07F30FD9D952124968159FDF346234BD04_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_mEBED487B845A66E3298CA30654B7EC17F7481995 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mEBED487B845A66E3298CA30654B7EC17F7481995_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m438D9EDDBF93A09C81E89458C2362F85487923EC (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m438D9EDDBF93A09C81E89458C2362F85487923EC_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m4A8362BBA870329F45001F17310B50E583BFF19F (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t, int32_t, Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3*, const RuntimeMethod*))ArraySortHelper_1_Sort_m4A8362BBA870329F45001F17310B50E583BFF19F_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_mDF2147E522AD80A7B6A79CF8E7F00EC7DBF8A032 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_mDF2147E522AD80A7B6A79CF8E7F00EC7DBF8A032_gshared)(__this, ___0_enumerable, method);
}
inline SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC List_1_get_Item_mAAE7FBDBD94CC48BA01C01ACFC3C66EE219110D0 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, int32_t, const RuntimeMethod*))List_1_get_Item_mAAE7FBDBD94CC48BA01C01ACFC3C66EE219110D0_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m85CB6FEF509A4859399929F09F545FA1133C3051 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m85CB6FEF509A4859399929F09F545FA1133C3051_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m58893707EC3B663186D1550A23DE96C818416CBD (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, int32_t, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*))List_1_set_Item_m58893707EC3B663186D1550A23DE96C818416CBD_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m594A4155F206677F45ECD9AAE7E9EFD0AE6137ED (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*))List_1_AddWithResize_m594A4155F206677F45ECD9AAE7E9EFD0AE6137ED_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m1A140613D2D236E9CF413F81D549E39415DF0058 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m1A140613D2D236E9CF413F81D549E39415DF0058_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m624C469B79ADC28E429B7A3CA96DA72345621643_inline (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*))List_1_Add_m624C469B79ADC28E429B7A3CA96DA72345621643_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_mF3540C84790DAB9D381F00753BA20A85694C3446_inline (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, const RuntimeMethod*))List_1_get_Count_mF3540C84790DAB9D381F00753BA20A85694C3446_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m8C743BAB2CDB84037FE830DF12A8B561EFEEEA60 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m8C743BAB2CDB84037FE830DF12A8B561EFEEEA60_gshared)(__this, ___0_index, ___1_collection, method);
}
inline void ReadOnlyCollection_1__ctor_m236FFEDF5196507C82BBA262351A75F0337621F3 (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m236FFEDF5196507C82BBA262351A75F0337621F3_gshared)(__this, ___0_list, method);
}
inline int32_t List_1_IndexOf_mF5A7DA78EA07100BDE8044CA37C505F36AD7ACB1 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*))List_1_IndexOf_mF5A7DA78EA07100BDE8044CA37C505F36AD7ACB1_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_mC9CB5EB21839923C050E6922FE7050867F374865 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_mC9CB5EB21839923C050E6922FE7050867F374865_gshared)(___0_value, method);
}
inline bool List_1_Contains_mA5832B215E464CAC8345E7ECC45562E884AE146D (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*))List_1_Contains_mA5832B215E464CAC8345E7ECC45562E884AE146D_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m15B9FC56E0418F730FC3A37C8E482F7108D73B62 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*, int32_t, const RuntimeMethod*))List_1_CopyTo_m15B9FC56E0418F730FC3A37C8E482F7108D73B62_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m40FE27C2AB4F6F5F863957210FA90C1BF581D293 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m40FE27C2AB4F6F5F863957210FA90C1BF581D293_gshared)(__this, ___0_value, method);
}
inline void Action_1_Invoke_m6A44347B678A89104F91C3A85581DCC41A21AD5B_inline (Action_1_t4501483487EE874F237B6B25ACC1026A64FBF612* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4501483487EE874F237B6B25ACC1026A64FBF612*, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*))Action_1_Invoke_m6A44347B678A89104F91C3A85581DCC41A21AD5B_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_m159144864209387AA18DEABE7B7985388F8F3452 (Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9* __this, List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9*, List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, const RuntimeMethod*))Enumerator__ctor_m159144864209387AA18DEABE7B7985388F8F3452_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m5A2EB67A073F2BFF5B3DCDDBD15D75BC3CFB909C (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m5A2EB67A073F2BFF5B3DCDDBD15D75BC3CFB909C_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_mC8E7189F3D9D95975CFE821AC3B560B2EA7AB7A8 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, int32_t, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*))List_1_Insert_mC8E7189F3D9D95975CFE821AC3B560B2EA7AB7A8_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m911F1AFFA59FD181BA9363E0B6C8B5B95067EC3B (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m911F1AFFA59FD181BA9363E0B6C8B5B95067EC3B_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_mA8E72E7CFB72101AA88E01A84F746ECBD8E91B3F (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*))List_1_Remove_mA8E72E7CFB72101AA88E01A84F746ECBD8E91B3F_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_mADD6CFDE192E3E822D5296926054ED8A41DB09C4_inline (Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C*, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*))Predicate_1_Invoke_mADD6CFDE192E3E822D5296926054ED8A41DB09C4_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1_Reverse_m6558ECB96638BF339DAB6BDB70413BA7570A84F9 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m6558ECB96638BF339DAB6BDB70413BA7570A84F9_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mD8F006C0A007C05BB69E417FA65A5A66965F997C (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mD8F006C0A007C05BB69E417FA65A5A66965F997C_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m4F48B52D720DB8E76904DB4647F7BDA63FDEC552 (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m4F48B52D720DB8E76904DB4647F7BDA63FDEC552_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mE6A4B57DE0CB3DEC8371BDC3DAAAD29D6C9E3B2B (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mE6A4B57DE0CB3DEC8371BDC3DAAAD29D6C9E3B2B_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m3182DABDA1EFACFF8268887837CA976A3577C3E6 (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tA6E38F9B8A5E125EC6515F9679C2079C747A0149* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*, int32_t, int32_t, Comparison_1_tA6E38F9B8A5E125EC6515F9679C2079C747A0149*, const RuntimeMethod*))ArraySortHelper_1_Sort_m3182DABDA1EFACFF8268887837CA976A3577C3E6_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m0C19209F7F2E7D8F63F4AEDAB78FF7F76347ECFB (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m0C19209F7F2E7D8F63F4AEDAB78FF7F76347ECFB_gshared)(__this, ___0_enumerable, method);
}
inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 List_1_get_Item_mE33CCA6A6D338BD1F44C8E35CE75806952CBF0CC (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, const RuntimeMethod*))List_1_get_Item_mE33CCA6A6D338BD1F44C8E35CE75806952CBF0CC_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m47EF2DD78187A4AFDDBA8AFE5C2D83DE376C0A0A (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))List_1_set_Item_m47EF2DD78187A4AFDDBA8AFE5C2D83DE376C0A0A_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m45EC1E38A4A473EA779C21FBFEB2C0E39E4C7846 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))List_1_AddWithResize_m45EC1E38A4A473EA779C21FBFEB2C0E39E4C7846_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m4AF1A89B7FCCDFD5755D0C21A65347642A37B152_inline (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))List_1_Add_m4AF1A89B7FCCDFD5755D0C21A65347642A37B152_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m2F90A932E325FFA55047769F5E45E453D80C27D1_inline (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, const RuntimeMethod*))List_1_get_Count_m2F90A932E325FFA55047769F5E45E453D80C27D1_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m13CC4FA54580EFF2DDFDDB9E830D9A383A0E4DCC (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m13CC4FA54580EFF2DDFDDB9E830D9A383A0E4DCC_gshared)(__this, ___0_index, ___1_collection, method);
}
inline void ReadOnlyCollection_1__ctor_mEA8F62A9DC91A24300FEFCF8A40F606FECC6289D (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_mEA8F62A9DC91A24300FEFCF8A40F606FECC6289D_gshared)(__this, ___0_list, method);
}
inline int32_t List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m041D9A4962B238EF7BC9922EAF0F5FC8E6267EF6 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m041D9A4962B238EF7BC9922EAF0F5FC8E6267EF6_gshared)(___0_value, method);
}
inline bool List_1_Contains_m1303A79CAE668AD1204F2D7DF8D2DFCF9DDC6D0D (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))List_1_Contains_m1303A79CAE668AD1204F2D7DF8D2DFCF9DDC6D0D_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m0E03ED6DB864BF551838BF1B49786675D995A7E7 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t, const RuntimeMethod*))List_1_CopyTo_m0E03ED6DB864BF551838BF1B49786675D995A7E7_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m060BDC309579AD262C87F876AC2A1E81D316472A (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m060BDC309579AD262C87F876AC2A1E81D316472A_gshared)(__this, ___0_value, method);
}
inline void Action_1_Invoke_m0C6E5F5797F0292E98084D59E0ABAFFF268286FA_inline (Action_1_t056FB23C2911679EFD99E438847C226611A2247F* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t056FB23C2911679EFD99E438847C226611A2247F*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))Action_1_Invoke_m0C6E5F5797F0292E98084D59E0ABAFFF268286FA_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_m67AC7635AF0AF22787100E7C16277521B24BF922 (Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C* __this, List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C*, List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, const RuntimeMethod*))Enumerator__ctor_m67AC7635AF0AF22787100E7C16277521B24BF922_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mD7FA52403DD62EA78B636E1A4E8119ABED32F37E (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mD7FA52403DD62EA78B636E1A4E8119ABED32F37E_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m3AA6C81C13315A0F1CD886CA63438F3FC55EFD70 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))List_1_Insert_m3AA6C81C13315A0F1CD886CA63438F3FC55EFD70_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m7476D799F5CC07697D447853DA4DAEB4D3741B84 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m7476D799F5CC07697D447853DA4DAEB4D3741B84_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_mC74ED88927A060D6631231DB26A042412C32D85B (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))List_1_Remove_mC74ED88927A060D6631231DB26A042412C32D85B_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_inline (Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1_Reverse_mA82B743941194D34E26FD74ABCA431B3E5B9C2FF (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mA82B743941194D34E26FD74ABCA431B3E5B9C2FF_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m88E01FB6C608D58721AAECE3C58B2107CB926E3B (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m88E01FB6C608D58721AAECE3C58B2107CB926E3B_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m740F84AD8B0226D65AE841BEA5DA739C69A29FAE (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m740F84AD8B0226D65AE841BEA5DA739C69A29FAE_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m4974E84199207C342ABD5C3DDB83FB22A7831AF8 (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m4974E84199207C342ABD5C3DDB83FB22A7831AF8_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_mF8B226978F672DF67F415832E3FCC44027498627 (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t, int32_t, Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87*, const RuntimeMethod*))ArraySortHelper_1_Sort_mF8B226978F672DF67F415832E3FCC44027498627_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m3A3C1CDA39FA5508C45CCB0F24AC6DF44419C17C (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m3A3C1CDA39FA5508C45CCB0F24AC6DF44419C17C_gshared)(__this, ___0_enumerable, method);
}
inline InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D List_1_get_Item_m5726E3006845A58F320312B88B8BB76FC4AB16CA (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D (*) (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D*, int32_t, const RuntimeMethod*))List_1_get_Item_m5726E3006845A58F320312B88B8BB76FC4AB16CA_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_m2ECC87E2F5AA78302D3456A1A0563708395F722B (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_m2ECC87E2F5AA78302D3456A1A0563708395F722B_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_mDAB769772A9FB34AD61FB07A4C188CD97E7A1A15 (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D*, int32_t, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D, const RuntimeMethod*))List_1_set_Item_mDAB769772A9FB34AD61FB07A4C188CD97E7A1A15_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m47222083904E5992F1343D4C4CE32F5282C06809 (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D*, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D, const RuntimeMethod*))List_1_AddWithResize_m47222083904E5992F1343D4C4CE32F5282C06809_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mC227D0851E18347BAD40BAB0934AD5A1001031B8 (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mC227D0851E18347BAD40BAB0934AD5A1001031B8_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m95328F0F59DDEB1A8A7D044DAF427CC7DEB1EB93_inline (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D*, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D, const RuntimeMethod*))List_1_Add_m95328F0F59DDEB1A8A7D044DAF427CC7DEB1EB93_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m6DD52194437C4A4E33590FE40BD0EB3FDD85D373_inline (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D*, const RuntimeMethod*))List_1_get_Count_m6DD52194437C4A4E33590FE40BD0EB3FDD85D373_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m4F4A827D176514113FAA544F9B887A319DE2917F (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m4F4A827D176514113FAA544F9B887A319DE2917F_gshared)(__this, ___0_index, ___1_collection, method);
}
inline void ReadOnlyCollection_1__ctor_mDC6B15D558789C0310CE2ADF74A7A2398F5DA556 (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_mDC6B15D558789C0310CE2ADF74A7A2398F5DA556_gshared)(__this, ___0_list, method);
}
inline int32_t List_1_IndexOf_m944CCB5C81536FEC4E38E8CC5785698FEBBE33C6 (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D*, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D, const RuntimeMethod*))List_1_IndexOf_m944CCB5C81536FEC4E38E8CC5785698FEBBE33C6_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_mD07951F7A529B12EFB0066C5118F1D6434E85070 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_mD07951F7A529B12EFB0066C5118F1D6434E85070_gshared)(___0_value, method);
}
inline bool List_1_Contains_mBDF07664E1A538F04E3FB7FBF52C88ECACC4F168 (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D*, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D, const RuntimeMethod*))List_1_Contains_mBDF07664E1A538F04E3FB7FBF52C88ECACC4F168_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m1AE7A24E5B2B6BBBD272D9C4189AAD9791842898 (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D*, InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*, int32_t, const RuntimeMethod*))List_1_CopyTo_m1AE7A24E5B2B6BBBD272D9C4189AAD9791842898_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m537C9FB08AEE7BA69FFBC9E11542DDC3FA75A6AA (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m537C9FB08AEE7BA69FFBC9E11542DDC3FA75A6AA_gshared)(__this, ___0_value, method);
}
inline void Action_1_Invoke_m6BADC1E75837D17C7C206C74AB63B78F8BFCD450_inline (Action_1_t49F19F6D8F6FE90ECA808F2608FB278D414DD05A* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t49F19F6D8F6FE90ECA808F2608FB278D414DD05A*, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D, const RuntimeMethod*))Action_1_Invoke_m6BADC1E75837D17C7C206C74AB63B78F8BFCD450_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_m5B02D3C70DFCA7B55F85F9766F6D2495501C30F6 (Enumerator_tE8C173434DE13194E4C9E6856B75BFF0CAEC951F* __this, List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE8C173434DE13194E4C9E6856B75BFF0CAEC951F*, List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D*, const RuntimeMethod*))Enumerator__ctor_m5B02D3C70DFCA7B55F85F9766F6D2495501C30F6_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_mE582C4BE8F0A7ADE1DBBC8942F7E41FD96C92347 (InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* ___0_array, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_mE582C4BE8F0A7ADE1DBBC8942F7E41FD96C92347_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m5706D9DCD4E44962FAC65B7F57DD98D6755A5A14 (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D*, int32_t, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D, const RuntimeMethod*))List_1_Insert_m5706D9DCD4E44962FAC65B7F57DD98D6755A5A14_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m85C9935C7C89AAD3EAFFEB95F2258C0375C2E9C1 (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m85C9935C7C89AAD3EAFFEB95F2258C0375C2E9C1_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_mE669E18E1E3B8BD9A783EA97EEBF156DEE2CEA22 (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D*, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D, const RuntimeMethod*))List_1_Remove_mE669E18E1E3B8BD9A783EA97EEBF156DEE2CEA22_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m7CECE6D4B69BA1AB9C0C5C5AD16F7FB9246B57B8_inline (Predicate_1_t2E5711CB35BA617C8E9CB94509B236A2133DC6BD* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t2E5711CB35BA617C8E9CB94509B236A2133DC6BD*, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D, const RuntimeMethod*))Predicate_1_Invoke_m7CECE6D4B69BA1AB9C0C5C5AD16F7FB9246B57B8_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1_Reverse_m0D7C274B99A4B52392CBEDD5F117535434682799 (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m0D7C274B99A4B52392CBEDD5F117535434682799_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_m7C8B5BC262FBE7FEE47F8D767CFF499ACDE79E24 (InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_m7C8B5BC262FBE7FEE47F8D767CFF499ACDE79E24_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_mA45766AD040502AA974D5AB0F201B1C1F2F38124 (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mA45766AD040502AA974D5AB0F201B1C1F2F38124_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_m2E8C24B4F6C629DB8AE3ABC183CD1689D8B6EA18 (InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_m2E8C24B4F6C629DB8AE3ABC183CD1689D8B6EA18_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_mF516B23537CB3D62862D63EE2336653FBC74BD3A (InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t0D538E030DA616BAE9EC08BBAF8EAB30350CCADC* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*, int32_t, int32_t, Comparison_1_t0D538E030DA616BAE9EC08BBAF8EAB30350CCADC*, const RuntimeMethod*))ArraySortHelper_1_Sort_mF516B23537CB3D62862D63EE2336653FBC74BD3A_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m28EFF96ED442DBB1D7387E7591CC371F0087B937_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_0 = ((List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8CDB73DDE358874C2AEC880619E1063C7F6D91E5_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_2 = ((List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_4 = (KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*)(KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m32EF3949FEE699DF56985B2474F77B05C9CAF056_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_6 = ((List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_8 = (KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*)(KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_10 = __this->____items;
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_12 = ((List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m504973187D416497E96E94051DB6B989BD021CEC(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m762327921F64C98D32E79C932090676BAF04A452_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_3 = __this->____items;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_6 = (KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*)(KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_8 = __this->____items;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_12 = ((List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m8AD37AF1186CEAD50E0C80CBCFBCF5F104D77023_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_m26340CC1E109B4DA69D6DC6051D8D8ADD9CC491B_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m690C1089BC7965294E057EADF22D0562FD8C6B0A_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_mC4A2E0B8F0074755FC245FDA1F574C999507A4B0_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_mB5FC34BF31B744404CEF18A59FCE0B67F550B864_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 List_1_get_Item_m29D6F6A0530995F915F1DE62526DF9304DFC8E29_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mFEF76C4766A3D42A22131A736BE640DF6C542E3D_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m81CEE24BED461D23E45DDCE07F5727D29B3004D0_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8));
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m4B06378D76E5E70F2E4E3B3B08A14ACD4BEE5358_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_1;
		L_1 = List_1_get_Item_m29D6F6A0530995F915F1DE62526DF9304DFC8E29(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mFCC169795F070306FF958744B19D2C26BE2854CB_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_m07DDDDDDE9CBF912134A0EF13EC268033EA42BBC(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_mFEF76C4766A3D42A22131A736BE640DF6C542E3D(__this, L_1, ((*(KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*)((KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*)(KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m9BAF9FC9B01B86AB9E16C2A54BAB69042D04B974_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_item, const RuntimeMethod* method) 
{
	KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_6 = V_0;
		int32_t L_7 = V_1;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8)L_8);
		return;
	}

IL_0034:
	{
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_9 = ___0_item;
		List_1_AddWithResize_m280DB6514ABCB446654DDAD55DA87D6D939D6574(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m280DB6514ABCB446654DDAD55DA87D6D939D6574_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mFE4D53F7B6B104A2F3512FB535C2A2E6CD21CBD4(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_3 = __this->____items;
		int32_t L_4 = V_0;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m0B27A39ABD445940D4EFC540C104766A94E37648_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_m07DDDDDDE9CBF912134A0EF13EC268033EA42BBC(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m9BAF9FC9B01B86AB9E16C2A54BAB69042D04B974_inline(__this, ((*(KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*)((KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*)(KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m8AD37AF1186CEAD50E0C80CBCFBCF5F104D77023_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1305DAAE4CDD966CAA2B474572CE6C847C576C17_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_mB3D050E84CCEF14FB7AF90A4058B002427B192A5(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t30B6EAA2E0CFDAB1ED506ACDAB0AA9A61502FF05* List_1_AsReadOnly_mA3BC7E74418502E5C85F552FEC7DC33C93A21502_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_t30B6EAA2E0CFDAB1ED506ACDAB0AA9A61502FF05* L_0 = (ReadOnlyCollection_1_t30B6EAA2E0CFDAB1ED506ACDAB0AA9A61502FF05*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		ReadOnlyCollection_1__ctor_mE4DBD225ED92E3043EE280DC62822A941C97E8EF(L_0, (RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mB511E4F0FAD5BBBFD635CE5E636119104E14A316_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA9F010BCF7276306DA83CBC8BE346C7900B0B74C_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mEAD1A664915C007D07778E2EA862532462769CE8(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mD1ECE1374BD1015A173260141C6EBBF85CAACB5F_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m81CEE24BED461D23E45DDCE07F5727D29B3004D0(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_mA9F010BCF7276306DA83CBC8BE346C7900B0B74C(__this, ((*(KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*)((KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*)(KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mBD60F2712FF180034BF613775C6AE4D7998B9A0F_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_array, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_0 = ___0_array;
		List_1_CopyTo_m7B63DB1BBB48A3381F1FD6C48EAB1F8B41C970A3(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_m259E78E8A34AC674C5CE9133B692A7BDA5227F81_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m7B63DB1BBB48A3381F1FD6C48EAB1F8B41C970A3_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_0 = __this->____items;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mFE4D53F7B6B104A2F3512FB535C2A2E6CD21CBD4_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m762327921F64C98D32E79C932090676BAF04A452(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_mDCC574EAE0F19FE77DD2AC54EC65720FB091CE87_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, Action_1_t6BF8D9007A2A7F49C909CE38D7F7A51FA6CD6496* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t6BF8D9007A2A7F49C909CE38D7F7A51FA6CD6496* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t6BF8D9007A2A7F49C909CE38D7F7A51FA6CD6496* L_4 = ___0_action;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_mFADFA3B447682798B8D67B977A30F6BA4BB1EACB_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39 List_1_GetEnumerator_mA470FE029F16C9C2CF4CF4B94F44C54DE0EDE84A_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE48951BEE7D63E6C44A4624706580E619A0E3068((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2C706AC48AF1EA17620F832484C49BA8977E79FF_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE48951BEE7D63E6C44A4624706580E619A0E3068((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mF811089A593721340447FDAD4BED1B642545BC0A_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE48951BEE7D63E6C44A4624706580E619A0E3068((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mEAD1A664915C007D07778E2EA862532462769CE8_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_item, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_0 = __this->____items;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_m792D51A9E152BDFFFD75286BEF47629F75BB7846(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mFD9740455C1562B0FB723E3295519575B72CDF83_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m81CEE24BED461D23E45DDCE07F5727D29B3004D0(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mEAD1A664915C007D07778E2EA862532462769CE8(__this, ((*(KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*)((KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*)(KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m678A0DACDDD2DB97848D77DABD47B58716F483BB_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_3 = __this->____items;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mFE4D53F7B6B104A2F3512FB535C2A2E6CD21CBD4(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_15 = ___1_item;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m0B1DA02E185E30DDC84E64FA9EC52C2B9C8ACA4C_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_m07DDDDDDE9CBF912134A0EF13EC268033EA42BBC(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m678A0DACDDD2DB97848D77DABD47B58716F483BB(__this, L_1, ((*(KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*)((KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*)(KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mB3D050E84CCEF14FB7AF90A4058B002427B192A5_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mFE4D53F7B6B104A2F3512FB535C2A2E6CD21CBD4(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_20 = __this->____items;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_45;
				L_45 = InterfaceFuncInvoker0< KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_44);
				List_1_Insert_m678A0DACDDD2DB97848D77DABD47B58716F483BB(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m504973187D416497E96E94051DB6B989BD021CEC(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m74B3AFCA1E4E428BD00D4FC573B95EFAEA4DD512_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mEAD1A664915C007D07778E2EA862532462769CE8(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_mC0F4EA1196D73037B64B3DD0EF0405BF1495B1AD(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m31296249948194446BDB903FF31DE6478430A185_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m81CEE24BED461D23E45DDCE07F5727D29B3004D0(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m74B3AFCA1E4E428BD00D4FC573B95EFAEA4DD512(__this, ((*(KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*)((KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*)(KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m674C72605EAD721E31D6A1E1809191D032EB392C_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, Predicate_1_t2ABDDC79221089ACAA67305D172D6E9ABDE6FB6D* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t2ABDDC79221089ACAA67305D172D6E9ABDE6FB6D* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t2ABDDC79221089ACAA67305D172D6E9ABDE6FB6D* L_4 = ___0_match;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m9FD574A8B117EBFEE39DBD83FC67702DA3A35A0A_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t2ABDDC79221089ACAA67305D172D6E9ABDE6FB6D* L_16 = ___0_match;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m9FD574A8B117EBFEE39DBD83FC67702DA3A35A0A_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mC0F4EA1196D73037B64B3DD0EF0405BF1495B1AD_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8));
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m910594F77EBDAC9AE5637B6543EE1B1EBFE6B34E_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m22A29E942B234BD8475E513523AE037D87B563FA_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m8AD37AF1186CEAD50E0C80CBCFBCF5F104D77023_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_mEF107C9CA095BF316ED6D27FB06CFCEF6C7E890F(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mEF107C9CA095BF316ED6D27FB06CFCEF6C7E890F_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_m63A40EB32B3C405A970BC5BAC09BE2815B33BD26(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mB5D9DC5CD970D4D3D80FB1634072F08A0EA9F854_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m8AD37AF1186CEAD50E0C80CBCFBCF5F104D77023_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m0CBCC715224894BBDB7EF35EA5DC6337CDE3BD01(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m0CBCC715224894BBDB7EF35EA5DC6337CDE3BD01_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisKeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8_m342D5FBBF45981561D44E2E846BD654801628BA3(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m192102AE0F6DCEAD5635069BFB6AE51B75243849_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, Comparison_1_t024445BA87DEB4824C10D2A0367B5684E4901629* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t024445BA87DEB4824C10D2A0367B5684E4901629* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t024445BA87DEB4824C10D2A0367B5684E4901629* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 48));
		ArraySortHelper_1_Sort_m3D6E600FAC91CC2A8F19C9924C21113BB2137F32(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* List_1_ToArray_mC8E16BF74B53A4C6B19E62C72986B0AAED52E378_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_1 = ((List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_3 = (KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*)(KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_4 = __this->____items;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_TrimExcess_m121D88EAAA50362377EB3DFCBA132FCE1A6E82A9_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_0 = __this->____items;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		List_1_set_Capacity_m762327921F64C98D32E79C932090676BAF04A452(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m504973187D416497E96E94051DB6B989BD021CEC_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_6;
				L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_8 = __this->____items;
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mFE4D53F7B6B104A2F3512FB535C2A2E6CD21CBD4(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_14 = V_1;
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mC2CFB53E6F008FEA4F27E2A9A48A18583C0D3241_gshared (const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_0 = (KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*)(KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ((List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6379987CB76F278D565037B93C54CC50B8E8092F_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ((List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF7B8D24C7D34D7A575A8E6E9EE9D3FB4DABB91AE_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ((List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = __this->____items;
		InterfaceActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = ((List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m4C6705B4E5970531347EB22B494526D1166F1160(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m80805224A0926C2561F849752A37A2569134A03D_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->____items;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = __this->____items;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = ((List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_m5C36702E9AA9C8C0EFF4D621A5DAB47861F7A6BB_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mD84D5092BA4B1658E1565A6A12768E88A7611E83_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m7625CC3DB669F7E90E244EE9CCDC0C9C7B763692_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m28379A83F63042062CA5215579721343A689465A_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		Il2CppChar L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m152A3A4010AA9B103898F608CEB394ED3FDAA101_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, Il2CppChar ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		Il2CppChar L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (Il2CppChar)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m7A2A17403F61C98861524C74822FAE6BBA4E0988_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		Il2CppChar L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m45797C43957559DCA062047EBC03EF762239F99B_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		Il2CppChar L_1;
		L_1 = List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		Il2CppChar L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mCD8A0BAD90D6D41599EC0F347DEC251044AA9A98_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m152A3A4010AA9B103898F608CEB394ED3FDAA101(__this, L_1, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = V_0;
		int32_t L_7 = V_1;
		Il2CppChar L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (Il2CppChar)L_8);
		return;
	}

IL_0034:
	{
		Il2CppChar L_9 = ___0_item;
		List_1_AddWithResize_m11185A14288763FB9A0FF8111453AC739E76CF35(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m11185A14288763FB9A0FF8111453AC739E76CF35_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mA1A224D6DC21C2A7B5A728192ADB43A9ECC82064(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Il2CppChar L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (Il2CppChar)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mA6D68A58B421E3F0FE2AF9A8119F42340F72FC1A_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(__this, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m763E16C40A2E70DCE3408F570975152E3260C398_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_mF1D09129B2DDA7248BCD15C07166154DA6EB57E2(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t18E2D7D4BDE7755E43AFF1F6BF82718917B70648* List_1_AsReadOnly_m36E66D3E2DBD06CE4EDD4E688901B1F8486C5935_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_t18E2D7D4BDE7755E43AFF1F6BF82718917B70648* L_0 = (ReadOnlyCollection_1_t18E2D7D4BDE7755E43AFF1F6BF82718917B70648*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		ReadOnlyCollection_1__ctor_mD8A5ED70E892EE6E32ACA0854C065B31DBD9417F(L_0, (RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m01575B7D6D0C9A5608A0496D0C7836AB159D5F92_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Il2CppChar L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mF2509E11A7B54B54C011049AB62AF21A826EBCFE(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mF74AEA77C6A25271E7AF1754DCB6401D2FF6C6C2_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m7A2A17403F61C98861524C74822FAE6BBA4E0988(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m01575B7D6D0C9A5608A0496D0C7836AB159D5F92(__this, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m18A412B180CEC8C3351E412DCE140FC1E31039F9_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		List_1_CopyTo_m66386CFE5F99A7A429344E8902FE421835DD80B1(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mB36CE3B4E8FD3B13B398AB115DFAF3687040775A_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m66386CFE5F99A7A429344E8902FE421835DD80B1_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____items;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mA1A224D6DC21C2A7B5A728192ADB43A9ECC82064_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m80805224A0926C2561F849752A37A2569134A03D(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m60593A8FB7CE8CB55A26AA4F6AF607DBBCA203E6_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F* L_4 = ___0_action;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		Il2CppChar L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m2D463A02A40BD8F16A42B9EA5771DCE3DD6D321D_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D List_1_GetEnumerator_m4FD62856A4FB2E97031D88470D704316F1DCD928_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m24165C174A346386819FF0C8B06C5299C5D8C596((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m831A4C0D4FF560CF7D7D53820B6FC18FB083AF45_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m24165C174A346386819FF0C8B06C5299C5D8C596((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mFE941435676B71AE61D210D9007A8E1298959351_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m24165C174A346386819FF0C8B06C5299C5D8C596((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mF2509E11A7B54B54C011049AB62AF21A826EBCFE_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____items;
		Il2CppChar L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m018F59BB01FA2473C4F75B463F7630F8EFB53F34(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m47D462D1C76F4DAA4CB181DB5E466286D0D97296_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m7A2A17403F61C98861524C74822FAE6BBA4E0988(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mF2509E11A7B54B54C011049AB62AF21A826EBCFE(__this, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m93EFDEE741FB849BD50E39217E7005B609E29403_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, Il2CppChar ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->____items;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mA1A224D6DC21C2A7B5A728192ADB43A9ECC82064(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		Il2CppChar L_15 = ___1_item;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (Il2CppChar)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mE4B27EBD8D6D9C26C0D4F8A2298A47BB2A2B2925_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m93EFDEE741FB849BD50E39217E7005B609E29403(__this, L_1, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mF1D09129B2DDA7248BCD15C07166154DA6EB57E2_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mA1A224D6DC21C2A7B5A728192ADB43A9ECC82064(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = __this->____items;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				Il2CppChar L_45;
				L_45 = InterfaceFuncInvoker0< Il2CppChar >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_44);
				List_1_Insert_m93EFDEE741FB849BD50E39217E7005B609E29403(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m4C6705B4E5970531347EB22B494526D1166F1160(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m02E1DF27506A00E153037AD60BCF6966B8407CC8_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppChar L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mF2509E11A7B54B54C011049AB62AF21A826EBCFE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m4088E696F2E983A168CFD204B228E773695E5C26(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mAC21DB88E024B0A73009F0B9EBE6AB0DC8FB317B_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m7A2A17403F61C98861524C74822FAE6BBA4E0988(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m02E1DF27506A00E153037AD60BCF6966B8407CC8(__this, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m8D77FB83CD28277B9A20C72578EA1E22F43D3135_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* L_4 = ___0_match;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		Il2CppChar L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m8243A1B2012C89E94D47EF84A7D2AA8D5F440AA5_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* L_16 = ___0_match;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		Il2CppChar L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m8243A1B2012C89E94D47EF84A7D2AA8D5F440AA5_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		Il2CppChar L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (Il2CppChar)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m4088E696F2E983A168CFD204B228E773695E5C26_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m01FAF3427A418EA0063A134E89DFBDF8D347915D_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m9FC29AE0BE8C0B9C21C786EDC50D001A1FAFA3C8_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_mB9ED94F34C25EEA03B4335A2077E1CADCB9A3A71(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB9ED94F34C25EEA03B4335A2077E1CADCB9A3A71_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9B8A5AAC3295C28E6DD6C5E9C61D8B6BEF506AF2(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEF4F2CE2AD4207529B3735A956A2FF3C182C88F3_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m94B6D109F51B9AC3485C8D1DFFF516A23294B554(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m94B6D109F51B9AC3485C8D1DFFF516A23294B554_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE0333A739303139C223C5EE631115880C5160F21(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m16639693BC35097493D42B649CB40BE5E19E06D5_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Comparison_1_tD2BC24ACADC7AE1FDC0BDF807145456FDE58C734* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tD2BC24ACADC7AE1FDC0BDF807145456FDE58C734* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tD2BC24ACADC7AE1FDC0BDF807145456FDE58C734* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 48));
		ArraySortHelper_1_Sort_mEB144F35631CDE3C91A0F1549342F937C6F71995(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* List_1_ToArray_m77841A4D182AAC74078D56BAF90A48AEB570D17E_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ((List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = __this->____items;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_TrimExcess_mB80164744F16CB7F46491D8ED070458FE3580BC8_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____items;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		List_1_set_Capacity_m80805224A0926C2561F849752A37A2569134A03D(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m4C6705B4E5970531347EB22B494526D1166F1160_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				Il2CppChar L_6;
				L_6 = InterfaceFuncInvoker0< Il2CppChar >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = __this->____items;
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mA1A224D6DC21C2A7B5A728192ADB43A9ECC82064(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				Il2CppChar L_14 = V_1;
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (Il2CppChar)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m4DCBC2C2702B5A9E4C9408C11A852A72A9BAC6F1_gshared (const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____items;
		InterfaceActionInvoker2< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_m8F694C6D5103039B8D50B032DD67E6A49E1A7B6B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mDA21D2FFF7A4A17311DEA5D1F58D0B5FDF8D5D71_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m0282477399CABCA202E725739468CDD1A81894A8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m7955A9D0A82598F84D4B407A1C5859C271D02BD9_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m1E933D1B423B829C27D0AAE6181F4C5E0CA89F33_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m9CD1267F4F075504130F719883E3EFD9DF762253_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587(__this, L_1, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m39E3DB029FA8CE14D5437A70E01A96684957F6B6_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952* List_1_AsReadOnly_m96EF4EC3211CE1ABE04F8AE21BE311E9C990555E_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952* L_0 = (ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		ReadOnlyCollection_1__ctor_mD41819F73F264B50313DE018DC19E0428FC120E5(L_0, (RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mE7517FD1F4EBD12003672EAFAEB76B269822CD44_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mF4D90DC6EDE97B45F2F568839E9D5C34233FFA6B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		List_1_CopyTo_m030AAF730ACCF739D45671086EBF4786FED908D5(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mB9E522FCF1D9B1628FBD94CA249A772409309756_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m030AAF730ACCF739D45671086EBF4786FED908D5_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m1586340C3D588CF61B941F469BDB9556E22BCCE0_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_4 = ___0_action;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mB9F20F5DCF4F0D1D426C507F13B662C972AE4516_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mC6BECA0B4B79418D229C9568104AEBCE2D23C903_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____items;
		int32_t L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m9FC60CFC60B64D25F3F26455A4AC0386E6E2C26F_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		int32_t L_15 = ___1_item;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (int32_t)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m998EB213788F375DC5B0A8A62C3400CBD267E86B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE(__this, L_1, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = __this->____items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				int32_t L_45;
				L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_44);
				List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mC39E90783873C337B8CB0938BE43A6E5AD42EF0A_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_mF14DFF09F0ADFF511FBE004265EF8B7269ABA4D8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_4 = ___0_match;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_16 = ___0_match;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		int32_t L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (int32_t)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m1E69C4C8438AA5D7E05C2936C79C01D96F89BE68_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m09394C650409964E568ED088D88C1BA78EE468DC_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57764BD8E3718881AE35094284EFDECEE528991D(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m8AF34E53DDA0850F189B6FA670A2CC358C9747E7_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E0CF4C26182BB9D788C90ABE423C2F4CD145E41(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 48));
		ArraySortHelper_1_Sort_m7FA55FB83B1A81CF769D2928FCE3E06425DAC06B(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_TrimExcess_mAC2994253290058A3B609DC80F57FD65CD0F080C_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____items;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				int32_t L_6;
				L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____items;
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				int32_t L_14 = V_1;
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (int32_t)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m34A28120D67ECFCD65E7E95E5A27026C1DF8B865_gshared (const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7C3D0A1FD36704AFBBE4FD4E69204B809D3FC90E_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = ((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFA5964F4DCFAAF3789DB92674BFBD4734426BDF8_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_2 = ((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9F9FACA262C60BC180B483D011636D28822CF4C5_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = ((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_8 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_10 = __this->____items;
		InterfaceActionInvoker2< Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_12 = ((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m888E7562D4D5756B46E7DE52614832960DA81A0D(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m7ED78746E0AFEF2F59490B581943C977BE1A5479_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = __this->____items;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_8 = __this->____items;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_12 = ((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_m532B7F952F457F0AC3B7B0AD42A0257C257E6456_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m94A9DF9D55CC3136DB3FD45DC9EAFD824B401267_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_mBDEDAB261381FF8A6A32B93F5BF72814FAAC8096_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m9B8E301A17A11AA9C9B11CD5290E2FFB530085BA_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mDE2F02C693FD9EAA8F93873E407BC46C47ACFC7A_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mB4FCD891721B07472641D7000AAE93A9CABBAE5A_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m6983F200CA61558FE9D93EC1C37297CD534233EE_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = List_1_get_Item_mDE2F02C693FD9EAA8F93873E407BC46C47ACFC7A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m9C2490004857BB44F978BF7988ED4912C73C570A_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_mB4FCD891721B07472641D7000AAE93A9CABBAE5A(__this, L_1, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		List_1_AddWithResize_mAD159B09F28BD7914562E219CA52E2D4BDCF5530(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mAD159B09F28BD7914562E219CA52E2D4BDCF5530_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = __this->____items;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m8DD55D9D9CB66A56905DE172614C28F716BAFE35_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_inline(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m4874A6690007FD4908D00149317EF9E93E70C03A_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m97B7B4D0EFFBE810751F8A48DA53CFB8B91B4A3B(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t147FA1FCB6E2EB047E003D795B981985F4219E5F* List_1_AsReadOnly_mB425A30AE0021D8B0AC8A28EA2240D772C50038E_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_t147FA1FCB6E2EB047E003D795B981985F4219E5F* L_0 = (ReadOnlyCollection_1_t147FA1FCB6E2EB047E003D795B981985F4219E5F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		ReadOnlyCollection_1__ctor_m5E55BDC1020352A441CBC58EDD29F36D0399FC43(L_0, (RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m4F220B4D805F163DF05F6FB4538DBC9D1610D16E_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m39706E6EBA76CBA5A2D9981863397BEEA368096D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m306E211EDE0C075140F253CD2C9196DD9E1147A4_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, const RuntimeMethod* method) 
{
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = ___0_array;
		List_1_CopyTo_m839F5ADDC59B70CAC1B14D9841A524465A3BC9E5(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mC112CD31B36C5ACECC64EDD676DF26DA4AEE7487_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m839F5ADDC59B70CAC1B14D9841A524465A3BC9E5_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = __this->____items;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m7ED78746E0AFEF2F59490B581943C977BE1A5479(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_mAD085AEF49E43B2F0590480CC39503833809A2D3_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* L_4 = ___0_action;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC6E6B2337772FC83C59264783DAFF1D4CF9F023E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mA9DF5D78B8C879762C73551E01777F5F175D71F0_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC6E6B2337772FC83C59264783DAFF1D4CF9F023E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m98A983CE0706CC345CEDB4FCD924FE648FAA6731_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC6E6B2337772FC83C59264783DAFF1D4CF9F023E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = __this->____items;
		int32_t L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA27917199B3C9E1A60C5791FB1B2AC5EB4C2103A(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mC54DA10260369766A8625313EA0119E4EE1E1EEB_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m1E433D24E9C67F0BA5D1ACF7708F97EF1DC4AE3D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = __this->____items;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		int32_t L_15 = ___1_item;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (int32_t)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m2BFCF4BC60FEBF9FE7646CCBB3EB86B85F4B27C5_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m1E433D24E9C67F0BA5D1ACF7708F97EF1DC4AE3D(__this, L_1, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m97B7B4D0EFFBE810751F8A48DA53CFB8B91B4A3B_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_20 = __this->____items;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				int32_t L_45;
				L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_44);
				List_1_Insert_m1E433D24E9C67F0BA5D1ACF7708F97EF1DC4AE3D(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m888E7562D4D5756B46E7DE52614832960DA81A0D(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4238AF38CE7EEE7C4C5C568B53D88116FB692B53_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_mA0D34DB4A9D4C8FECCD3278530CEEB3147A19D54(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mA0EB41D8902BACEC49286B9EFAF58046DB1943E4_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m4238AF38CE7EEE7C4C5C568B53D88116FB692B53(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m16B29FE13BB76F2EA2F3F420843BDE5842C3A11F_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* L_4 = ___0_match;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* L_16 = ___0_match;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		int32_t L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (int32_t)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mA0D34DB4A9D4C8FECCD3278530CEEB3147A19D54_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mD0C33E51143D0DF95FBCC1C503FBC9463088C2BC_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB85151226AC8FFAB3654B7CEC3DBBCD852CE2F3B_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_m7DE6AE4FAB338990D0A930D6CD525BA07B7E3CB4(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m7DE6AE4FAB338990D0A930D6CD525BA07B7E3CB4_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF0352521EE3186887C68DFC25905E29D1393515(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m98CE28BB7BF76E332649A98449718159CB3C76B5_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m3EC8C34030BE04C522C1CBDB2E96DFAEDB2F011D(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3EC8C34030BE04C522C1CBDB2E96DFAEDB2F011D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m632FD913827035A385A987CEA4B0D30A6C1BB317(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m12C3A6424300825E4F1541100D2BF098D5CB9542_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 48));
		ArraySortHelper_1_Sort_m3FCF73F735AAA03BF7352EF6635F318F66177EB9(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* List_1_ToArray_mAA6D48892E79049030D3619D8931B026C1328974_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = ((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = __this->____items;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_TrimExcess_mEA12218FFF3DCCA8668633FBC9215BF91B7B4192_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = __this->____items;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		List_1_set_Capacity_m7ED78746E0AFEF2F59490B581943C977BE1A5479(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m888E7562D4D5756B46E7DE52614832960DA81A0D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				int32_t L_6;
				L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_8 = __this->____items;
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				int32_t L_14 = V_1;
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (int32_t)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mE9586868AA80CB6AD6E8540292BFD0AD2B0EB4A7_gshared (const RuntimeMethod* method) 
{
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mBDEA187405CBA000750E73FE30509648A1A0AD28_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_0 = ((List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m88FDFD737EF729833A18FBFBDA5B4A9BFD8CBBB6_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_2 = ((List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_4 = (InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB*)(InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB508DF3DB8B8A663663B8FEBC62E239DCA91921C_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_6 = ((List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_8 = (InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB*)(InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_10 = __this->____items;
		InterfaceActionInvoker2< InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_12 = ((List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m5BC63B920994BE878D143B6B599CF0BBA31856EC(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m976652335EA1B49CF3FB1B389C76BBAD1C69E0A9_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_3 = __this->____items;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_6 = (InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB*)(InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_8 = __this->____items;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_12 = ((List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE780D5A4373D244D420DBB851419C525F52259C4_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_m7759A2447B3925C5E5519B4B4C9F112484E34B9A_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2AC8342B43F0985C5FC8584E5536A3B9F8FD41FC_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_mE81865070F38C9761233D7E568CDE6C6744FCD06_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m2A946E66C4A2440A7B987A1E4EFE3D8CEE61DBB9_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 List_1_get_Item_m3F7E7702879C444EC4474C557ED539C680117E9D_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mE8E4F86EEE546D1E79D488A28B191590EBE28952_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m1F0A55DB8ACE0BBE2ECFBF37D87179FFDC9CA81A_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321));
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m35FCC7A6B922E3A9D8EE950444FA16CC643895E8_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_1;
		L_1 = List_1_get_Item_m3F7E7702879C444EC4474C557ED539C680117E9D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mC9DD99AD62894BF93DF7FE0872FF3B0A2CB5D7EC_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_m893F6F54ECFCBFEFD521CDF0F9C2518C1E93BE1D(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_mE8E4F86EEE546D1E79D488A28B191590EBE28952(__this, L_1, ((*(InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321*)((InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321*)(InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE231002F031F4776008D0907C601BECDE4B3384E_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_item, const RuntimeMethod* method) 
{
	InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_6 = V_0;
		int32_t L_7 = V_1;
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321)L_8);
		return;
	}

IL_0034:
	{
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_9 = ___0_item;
		List_1_AddWithResize_m8DA2AB2970B4FD43A6642148294235B4096D59B3(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m8DA2AB2970B4FD43A6642148294235B4096D59B3_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m25098ED9FE97AD909A91D26E0ABFC9FE1242905F(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_3 = __this->____items;
		int32_t L_4 = V_0;
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m72FE7DDA377DAF2272CA2CCDE4090E0CC7DE6333_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_m893F6F54ECFCBFEFD521CDF0F9C2518C1E93BE1D(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_mE231002F031F4776008D0907C601BECDE4B3384E_inline(__this, ((*(InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321*)((InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321*)(InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_mE780D5A4373D244D420DBB851419C525F52259C4_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m694E6282FBD9FBADF13DCE2C4296C5629B3989FE_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m0FD09735612A341F64184DD2E6E7FAAD50D027CF(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tF6537A9DB6A2D45E0376852BAB829185E7F25FD1* List_1_AsReadOnly_mA0F770CA4F0D092A0635BC53212FE6AE31822E22_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_tF6537A9DB6A2D45E0376852BAB829185E7F25FD1* L_0 = (ReadOnlyCollection_1_tF6537A9DB6A2D45E0376852BAB829185E7F25FD1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		ReadOnlyCollection_1__ctor_m864EE170DDFFF7DBFA9CD267BED29B9344DB124D(L_0, (RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC077F5D302F57125F137CB248B0F260D11300B79_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mF2080F931E8FB5D5B0B64A4927FB22F419BF0360_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mF785B6AFB037D8D8636258A081A99969297CF011(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mC86C6DFB0DC5961796B6A2E08351BCFF9D0E5C55_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m1F0A55DB8ACE0BBE2ECFBF37D87179FFDC9CA81A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_mF2080F931E8FB5D5B0B64A4927FB22F419BF0360(__this, ((*(InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321*)((InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321*)(InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m36C28BA05B0A15A71138654403501919BE401C1D_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* ___0_array, const RuntimeMethod* method) 
{
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_0 = ___0_array;
		List_1_CopyTo_mEFB3B11ACFCADAD629C459AD094B71E1E8B980AA(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mBC013ED45B13FDBC805F2FBA236DE6BB6AFD306D_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mEFB3B11ACFCADAD629C459AD094B71E1E8B980AA_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_0 = __this->____items;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m25098ED9FE97AD909A91D26E0ABFC9FE1242905F_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m976652335EA1B49CF3FB1B389C76BBAD1C69E0A9(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_mCCB08B69CB858728E6AD4B81360182820F77289F_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, Action_1_t138B53097F6755F546931F0B87469E19A8F66439* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t138B53097F6755F546931F0B87469E19A8F66439* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t138B53097F6755F546931F0B87469E19A8F66439* L_4 = ___0_action;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m2733607C3DD21A44FD183357EEF8D8DEA6CF64E5_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tDC50C3EEFE54EBE6DF94FA28C6AC2434C3B3B7FD List_1_GetEnumerator_m8AE87AD4D632E49D1E3CCC650D6CE08C88C7A6CC_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tDC50C3EEFE54EBE6DF94FA28C6AC2434C3B3B7FD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE9E2FC72C71CC523E659FB47E020BF265D11A90F((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mFE3DF30954A40F8B96FB8F38E93FB7214E2E87A9_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tDC50C3EEFE54EBE6DF94FA28C6AC2434C3B3B7FD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE9E2FC72C71CC523E659FB47E020BF265D11A90F((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tDC50C3EEFE54EBE6DF94FA28C6AC2434C3B3B7FD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m14EB59F392759EC3592D6525DCE7C9941A8B0514_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tDC50C3EEFE54EBE6DF94FA28C6AC2434C3B3B7FD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE9E2FC72C71CC523E659FB47E020BF265D11A90F((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tDC50C3EEFE54EBE6DF94FA28C6AC2434C3B3B7FD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mF785B6AFB037D8D8636258A081A99969297CF011_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_item, const RuntimeMethod* method) 
{
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_0 = __this->____items;
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_m46BAF30F5A18DECEC4C3F6ECEFD0F4F726B02705(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mEF9F9EB8C1CF34E733BFD79F85564BFACC6BA6EF_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m1F0A55DB8ACE0BBE2ECFBF37D87179FFDC9CA81A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mF785B6AFB037D8D8636258A081A99969297CF011(__this, ((*(InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321*)((InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321*)(InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m6F0E9F11DBD3185465DAF020F2B7815318E16E45_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_3 = __this->____items;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m25098ED9FE97AD909A91D26E0ABFC9FE1242905F(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_15 = ___1_item;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mFBAF387680A61F081BB7F549241B7BDE7F907E0D_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_m893F6F54ECFCBFEFD521CDF0F9C2518C1E93BE1D(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m6F0E9F11DBD3185465DAF020F2B7815318E16E45(__this, L_1, ((*(InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321*)((InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321*)(InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m0FD09735612A341F64184DD2E6E7FAAD50D027CF_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m25098ED9FE97AD909A91D26E0ABFC9FE1242905F(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_20 = __this->____items;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_45;
				L_45 = InterfaceFuncInvoker0< InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_44);
				List_1_Insert_m6F0E9F11DBD3185465DAF020F2B7815318E16E45(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m5BC63B920994BE878D143B6B599CF0BBA31856EC(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mF868741ABA260F08A384BA582821EEDD7EE03E10_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mF785B6AFB037D8D8636258A081A99969297CF011(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_mF8223D425371B1091C253BD3F7403D175C1090B7(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m7787D72470C2C75F64B3BF3EDCAEA41D4DBDE5E9_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m1F0A55DB8ACE0BBE2ECFBF37D87179FFDC9CA81A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_mF868741ABA260F08A384BA582821EEDD7EE03E10(__this, ((*(InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321*)((InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321*)(InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m1887DC0A79243907718D0D79BBBF26F49100B328_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, Predicate_1_t5805DB64113904AB19024DCCBF911D02BFAF1A18* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t5805DB64113904AB19024DCCBF911D02BFAF1A18* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t5805DB64113904AB19024DCCBF911D02BFAF1A18* L_4 = ___0_match;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m7ABF70CC6F474DFA1A056B41C752C21D2905F570_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t5805DB64113904AB19024DCCBF911D02BFAF1A18* L_16 = ___0_match;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m7ABF70CC6F474DFA1A056B41C752C21D2905F570_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF8223D425371B1091C253BD3F7403D175C1090B7_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321));
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m4AB22A5651F5553ED8B0281F3E9432CBAD5F2E23_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m1407C67A9268AB872DA7349E16CD50DDC48FA768_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mE780D5A4373D244D420DBB851419C525F52259C4_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_m9587C71D93C86C2E6B04C8348FBAC08180E3BED9(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m9587C71D93C86C2E6B04C8348FBAC08180E3BED9_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_mC514C31DCD2061240515329117869F96D5D48E95(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mBA6F651FE4408A4FFE43355F568ED533D480EED4_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mE780D5A4373D244D420DBB851419C525F52259C4_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m819BF97DE6F72084C2CCC7F28106F0726550A1A0(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m819BF97DE6F72084C2CCC7F28106F0726550A1A0_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisInterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_mB7E7B569A34A9B2C99E08CED896D698F7C6B325D(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mD297C68EC8C70BC9F7797BAAC436CE0E3F8D3FEE_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, Comparison_1_t09ED0BE2699D1546D891A69C97AFC4FE705CBB3B* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t09ED0BE2699D1546D891A69C97AFC4FE705CBB3B* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t09ED0BE2699D1546D891A69C97AFC4FE705CBB3B* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 48));
		ArraySortHelper_1_Sort_m6440CA605E806B3B7F838164133F2AE8F57A88AE(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* List_1_ToArray_m31367F2E5A43B9CCB462C893E85323F23F5C4760_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, const RuntimeMethod* method) 
{
	InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_1 = ((List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_3 = (InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB*)(InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_4 = __this->____items;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_TrimExcess_m6A6E3F2FCE9659194F3DEEB129FB04BED65DF7EE_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_0 = __this->____items;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		List_1_set_Capacity_m976652335EA1B49CF3FB1B389C76BBAD1C69E0A9(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m5BC63B920994BE878D143B6B599CF0BBA31856EC_gshared (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_6;
				L_6 = InterfaceFuncInvoker0< InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_8 = __this->____items;
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m25098ED9FE97AD909A91D26E0ABFC9FE1242905F(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_14 = V_1;
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mB952C954690EB6D3CADBEC505C835D8A9FA5F9A6_gshared (const RuntimeMethod* method) 
{
	{
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_0 = (InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB*)(InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____items;
		InterfaceActionInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m76C85811BC9C905E7224C054AD480C3062FA7700(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_m91531330AAD4529EF744089430EC9AF39E9565DD_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49DBCC449BC3304A3B6144768F836078C8280D8F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m6785B4B320F35B6D5C0D396DDA90168F4A720A80_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_mE9D45E28E97F7F221F6C407E048C8AFAA66E6647_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		RuntimeObject* L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mA16AEEE513931A1F6B7E2E879B5000186ADDF9CD_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		RuntimeObject* L_1;
		L_1 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m378A583B6ABD929C885A270D70D5CAEF2FC728A9_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56(__this, L_1, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = V_0;
		RuntimeObject* L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (RuntimeObject*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mFDD792FAEB50E998B498C5082CCE1203B51CD20D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m386ABA9B2C4950D31E787C87CDEF3D3E103F1B1A(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* List_1_AsReadOnly_m69D18D2353099DC61F87AD42FF87F25B1A4D299B_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* L_0 = (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65(L_0, (RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mFF1DD68BFF34C5CD7693D70DBB3E36B44ED2AD76_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mDA4751F464411AB4C757C63C6EDBF4891BFD6891_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_m7D6AA655BACB66B136908375A600DF5FB2C80B5F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ___0_action;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m540236388ED02DCFB606983FBE3A7C536408505E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6A110D28B34507C23474622BC01CD205DD04684C_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m540236388ED02DCFB606983FBE3A7C536408505E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mC65F2E69508537CAEE5F7297FF628592DF247196_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m540236388ED02DCFB606983FBE3A7C536408505E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		RuntimeObject* L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m5714EFA2C05BD9FCE2C1B9F4D12B8B8E2ACEF9BC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		RuntimeObject* L_15 = ___1_item;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (RuntimeObject*)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mD38B1EE6D7CF56FA397CF7CE0821CDEC6E0B3E78_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094(__this, L_1, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m386ABA9B2C4950D31E787C87CDEF3D3E103F1B1A_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				RuntimeObject* L_45;
				L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_44);
				List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m76C85811BC9C905E7224C054AD480C3062FA7700(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m74B10668D8142FF08C21D9EE75765AEB0E762A92_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m1A8DE2A7640CC473609F3ADAC38FDB960520636D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_4 = ___0_match;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_16 = ___0_match;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (RuntimeObject*)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (RuntimeObject*)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0D2A25C95EFDC6E9CD22B663D9633426B51E3699_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_mA271B5B013C60CD038FA95C13BB2B5F09168D920(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mA271B5B013C60CD038FA95C13BB2B5F09168D920_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisRuntimeObject_m06FF2E5011A594BEE1AF5EC3AEA51997A9812FE1(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m4204C143D97E871DF2553329CFB0FBE3CD1A01F2_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_mC96F92ACF35F9B37F0A5E3338FF61E5229554338(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mC96F92ACF35F9B37F0A5E3338FF61E5229554338_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisRuntimeObject_mF8C07FB088390BE91CF3D4F9C8C4AC052B3FBCBA(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 48));
		ArraySortHelper_1_Sort_m1D1E1B0D0C13AF3B0C1B76665039738BFFE3125A(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_TrimExcess_mCE60BB9032C2BB07A9AC08FE1C61A79CBE88140F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m76C85811BC9C905E7224C054AD480C3062FA7700_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____items;
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				RuntimeObject* L_14 = V_1;
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (RuntimeObject*)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m4C197A153076A17E0758C854773B02793337637A_gshared (const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____items;
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD365C22FA3D32D70A2088AB13116E7BA5FBF0BFB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_m9BB85C4C7B3D227CAA4B56F531CCA9112C5FE801_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3F886C476FAC47C7E0B22BBEFA863E6E28CB6967_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m14CBA0E79745928530A7F91F920E3B29BF5977C2_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m81521F85F116B00354BB0F726158451F3F1543F8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		il2cpp_codegen_memcpy(L_5, (L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_value : &___1_value), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)), L_4, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mF063A5AC0A6B869965B78A300A210C77D7D85A9E_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	memset(V_0, 0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		bool L_3 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_2);
		bool L_4 = L_3;
		return L_4;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m9468A95C180AB56C22EF37B808E722B82FA5DA1D_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m0F05BC227468EA87CF5E5E2D0707EFEDD6DB1D48_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_3);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_6 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)), L_5, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m16AFA75CCE3355CE51D428B0931951485666BF3D_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)))));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_5 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_8;
		L_8 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* List_1_AsReadOnly_m7815E4F80542F2F7532AD847F4AA17739E5A7158_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_0 = (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		((  void (*) (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_0, (RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = __this->____size;
		V_0 = L_2;
		__this->____size = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_1: *(void**)L_1));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m20FD9B23AB202EAE6A3EBD3271A64B10BB21C5D9_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)), il2cpp_rgctx_method(method->klass->rgctx_data, 25), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m9632CAFAB9E06DBDE71886CC36E6C910F8350F9C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mAAA2256D3B50B6A712DFB270B01B470759AB4FE9_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m0116C3A6AF6FB7DCF2E909AD859A0ADC86A60C66_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_mA959944628050F666BD4CD147F51232EAC2E1B64_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___0_action, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_4 = ___0_action;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_8: *(void**)L_8));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_0 = alloca(SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
	{
		memset(L_0, 0, SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
		Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mF8AB18BC6656CC469BFB6E837C001C2DE0833859_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_0 = alloca(SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
	{
		memset(L_0, 0, SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
		Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m83A6D1115899BF6BA842C33FE41FAD8D6EB43ED9_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30));
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_0 = alloca(SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
	{
		memset(L_0, 0, SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
		Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m1FFA888B47CE3256B0AC301302FAD79AAAFC0818_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_1: *(void**)L_1), 0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mF0601617A54C360278652B7AEE34E69F21B5ADDA_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		return L_5;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mB8862677E04375531A30F3EC07AC2372FCE61F55_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_item : &___1_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)), L_15, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)), (void*)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m3A5BCE3337DF64C89354C0CDF5DB4EE39A30BCA7_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_3);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)), il2cpp_rgctx_method(method->klass->rgctx_data, 34), __this, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_6 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m729639E2C8D1AA7579AC78D259085921E7DC72F2_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_45 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_44, (Il2CppFullySharedGenericAny*)L_45);
				InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)), il2cpp_rgctx_method(method->klass->rgctx_data, 34), __this, L_43, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_45: *(void**)L_45));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m69B0EB46209420A0DF794AE7598F8C3E02515509_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)), il2cpp_rgctx_method(method->klass->rgctx_data, 38), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m64ACE8FD442E00A79160BB070C0133B43A8C4075_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_20 = L_8;
	const Il2CppFullySharedGenericAny L_31 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_4 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)), il2cpp_rgctx_method(method->klass->rgctx_data, 40), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_16 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		il2cpp_codegen_memcpy(L_20, (L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19)), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		bool L_21;
		L_21 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)), il2cpp_rgctx_method(method->klass->rgctx_data, 40), L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_20: *(void**)L_20));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		il2cpp_codegen_memcpy(L_31, (L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)), L_31, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)), (void*)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		bool L_34;
		L_34 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (!L_34)
		{
			goto IL_00ad;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_35 = __this->____items;
		int32_t L_36 = V_0;
		int32_t L_37 = __this->____size;
		int32_t L_38 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_35, L_36, ((int32_t)il2cpp_codegen_subtract(L_37, L_38)), NULL);
	}

IL_00ad:
	{
		int32_t L_39 = __this->____size;
		int32_t L_40 = V_0;
		int32_t L_41 = V_0;
		__this->____size = L_41;
		int32_t L_42 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_42, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	memset(V_0, 0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		bool L_11;
		L_11 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____items;
		int32_t L_13 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
	}

IL_0063:
	{
		int32_t L_15 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mCD6121D4FDE143767E6F0EC89183A9A349884DFF_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		bool L_19;
		L_19 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (!L_19)
		{
			goto IL_008d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = __this->____items;
		int32_t L_21 = __this->____size;
		int32_t L_22 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_20, L_21, L_22, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m31924FC6445F9A1633DA40A8930F89E271B477F2_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m4F224F8A44C29751CCF7ED914FC00BFE7F27CD01_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mCBEFEE4479438557E591F7AEF3BFDE2297DA269D_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m851B4290E563560C0037434A52D469666ABDE79D_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mF939EF9300267AF108323ABAECB490A27894309B_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 48));
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_TrimExcess_m915005BC7D68487C2006E5A31D87D1CAED751407_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mFD4E2919839A27C7CEACADF62222C63701302D02_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_14 = L_6;
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	memset(V_1, 0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_5, (Il2CppFullySharedGenericAny*)L_6);
				il2cpp_codegen_memcpy(V_1, L_6, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
				int32_t L_7 = __this->____size;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				il2cpp_codegen_memcpy(L_14, V_1, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
				il2cpp_codegen_memcpy((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mFBD61154F711CE4EF252AA0B8B504EFC3E7E5B37_gshared (const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF5CCF832B2A17822B9C64E78D9814190165C1D7B_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = ((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3F4723F3305F67834CE85E425907F53C7AB30484_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_2 = ((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_4 = (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)(OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m704785946C26F21A75CF1D70A2DF69E177349DEC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_6 = ((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_8 = (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)(OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_10 = __this->____items;
		InterfaceActionInvoker2< OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_12 = ((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_mA6E73354873BEAC5429A80AE43CB210589A7EC7E(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mC49015D45A78A39909C4541BDB84DAA369E6A4C1_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = __this->____items;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_6 = (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)(OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_8 = __this->____items;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_12 = ((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_mA39F224BE8021007D2DB9CF7ED9BBD0B456F64B1_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mBED108A047B825499042EC8A2431574F954E5A1E_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m6C1F6CE05082E4FB4A2F6D416FC3061FDDA22A58_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m220D863F6533A08A7363BF166DA7009AD0717998_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 List_1_get_Item_mB65D799560ADD289EA08E717412A24EFADA7FB57_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m7533012D6C4CE083D5CAF670259B97F6D5D506F4_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837));
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m1E70F596E00E1A551FAA8FBC581829AC9F9C5380_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_1;
		L_1 = List_1_get_Item_mB65D799560ADD289EA08E717412A24EFADA7FB57(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m1DA92BD10C1F7E8C92A5ADDC41B5B59E38B45DEC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m7533012D6C4CE083D5CAF670259B97F6D5D506F4(__this, L_1, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mB308EE5BFFD89A7B8C251644D76CA547456F3012_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_6 = V_0;
		int32_t L_7 = V_1;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_8);
		return;
	}

IL_0034:
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_9 = ___0_item;
		List_1_AddWithResize_m8B3D79788ADC2B54C9B12CC9EC1158E6A04CDEBC(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m8B3D79788ADC2B54C9B12CC9EC1158E6A04CDEBC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = __this->____items;
		int32_t L_4 = V_0;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mAC1736DC5831C59BD64FC09C14F03AF5B9802CBF_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_mB308EE5BFFD89A7B8C251644D76CA547456F3012_inline(__this, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m4C28D7F5EE927CF1E9858BE460EA4DFB7F5D3AFA_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m9AA9E2C5627FB6CD9F3493CA8A99588EDA08125D(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* List_1_AsReadOnly_m3E59B457103D2F1A4D283713A62EFBFC7F91322C_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E* L_0 = (ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		ReadOnlyCollection_1__ctor_m5D03D2E5CE6AAFA9914B3F1E1707393948DA34CB(L_0, (RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mFCE2A5F0F23BC41E5B1E6F8ABA41D99A8A5AABA9_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m590D7926DA2B45C95850710F87644BCD235F1A70_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m04EF9F1B5EB5475A55429F987420A7AE443BE0BB_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m590D7926DA2B45C95850710F87644BCD235F1A70(__this, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m901F0963BA82CF65FCD89C086C5D7B3ABA3765C2_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, const RuntimeMethod* method) 
{
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = ___0_array;
		List_1_CopyTo_m96F4BF1E6FF691338A44AAB62506964ACAD70715(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mB2933E53E11C20CD8D22EF6328C1D9FB7595BA9E_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m96F4BF1E6FF691338A44AAB62506964ACAD70715_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = __this->____items;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_mC49015D45A78A39909C4541BDB84DAA369E6A4C1(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m5C1E0FFD399F81B5E18DE08684C9DE90A930234D_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, Action_1_t43B3A21E3139B3E2E49698F940F979F37AD1E63E* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t43B3A21E3139B3E2E49698F940F979F37AD1E63E* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t43B3A21E3139B3E2E49698F940F979F37AD1E63E* L_4 = ___0_action;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m1D3248EEA732AE8F2AA160F73A481C0102193D15_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 List_1_GetEnumerator_mBE57F88655594CAF946932CCDC95E8773FC4C4A6_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAD56839187542C3B25E2C1493BBD62861333E4E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8956517C0AA90A843C73167BF6CF0156995ADB13_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAD56839187542C3B25E2C1493BBD62861333E4E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m8D77CF72C1A81595B4557A40BD1877C3EC630AA3_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAD56839187542C3B25E2C1493BBD62861333E4E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = __this->____items;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m972A3CE5298A6193E512B34C64201444B051D8E9(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m3FAB7DEDF1376DCB40FF595ECE24A82D09D133E9_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C(__this, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mF138D66498A5DE06E21A7149C35FA14729F4F5E1_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = __this->____items;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_15 = ___1_item;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m22B1E1E9ABC66027ABDF98D71BAC7AE153F67C15_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mF138D66498A5DE06E21A7149C35FA14729F4F5E1(__this, L_1, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m9AA9E2C5627FB6CD9F3493CA8A99588EDA08125D_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_20 = __this->____items;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_45;
				L_45 = InterfaceFuncInvoker0< OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_44);
				List_1_Insert_mF138D66498A5DE06E21A7149C35FA14729F4F5E1(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_mA6E73354873BEAC5429A80AE43CB210589A7EC7E(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m02DCEAFFE826B31F80767A9D191CB4587D82F7BC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m30CC1D4CA1984DCAEDBCD2228B538A0503AF854A(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m2E22ECF19C2591E73B083E2B26EED5B2E4B8B3BB_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m02DCEAFFE826B31F80767A9D191CB4587D82F7BC(__this, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m99F96CEBE01EC91E6838BFE939CF7B3C41D67CAE_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* L_4 = ___0_match;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m182E0ACAA85455151F5750CE87F942DA6E3DD3D6_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* L_16 = ___0_match;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m182E0ACAA85455151F5750CE87F942DA6E3DD3D6_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m30CC1D4CA1984DCAEDBCD2228B538A0503AF854A_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837));
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mC34416B52737986556034E2111A5817EDEE0C189_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mFF087DD699EA7B98F8636ED593ED83D64ABE078F_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_m5903E8D5CE5B92A29530763E182314BDFA781664(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m5903E8D5CE5B92A29530763E182314BDFA781664_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mDCB49D07F30FD9D952124968159FDF346234BD04(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mC839D031A5AAA84A68243F93E39544BA3A966203_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_mEBED487B845A66E3298CA30654B7EC17F7481995(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEBED487B845A66E3298CA30654B7EC17F7481995_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m438D9EDDBF93A09C81E89458C2362F85487923EC(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m014D10ACC5ECFB795A9812357A6AD9FFF19F3C47_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 48));
		ArraySortHelper_1_Sort_m4A8362BBA870329F45001F17310B50E583BFF19F(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* List_1_ToArray_m5E0DDBEF3289BA470AD71416C050605CE275FF3B_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_1 = ((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)(OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_4 = __this->____items;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_TrimExcess_m69153C4A7944BFD9A4B05B1269114DA8E499764B_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = __this->____items;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		List_1_set_Capacity_mC49015D45A78A39909C4541BDB84DAA369E6A4C1(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mA6E73354873BEAC5429A80AE43CB210589A7EC7E_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_6;
				L_6 = InterfaceFuncInvoker0< OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_8 = __this->____items;
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_14 = V_1;
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mBA1A334B4DB00D75CD4BF205DE68E28F92477FF0_gshared (const RuntimeMethod* method) 
{
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)(OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEF8BE0609A5B0185A946E4BE78E3AE078DCDFDF_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_0 = ((List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9D4C783EADEFE471AE4694A264FC274077D002B4_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_2 = ((List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_4 = (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)(SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9B0EBFC1936470C69C4E10C853BDA10392BBB663_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_6 = ((List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_8 = (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)(SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_10 = __this->____items;
		InterfaceActionInvoker2< SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_12 = ((List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_mDF2147E522AD80A7B6A79CF8E7F00EC7DBF8A032(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m40FE27C2AB4F6F5F863957210FA90C1BF581D293_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_3 = __this->____items;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_6 = (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)(SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_8 = __this->____items;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_12 = ((List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF3540C84790DAB9D381F00753BA20A85694C3446_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_m4555484688FA5BBA3F7E9CE8C72F3963BA3E5F41_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m822C3C1C1A45E2F95780EF9170EEEC8BDB72A42A_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_mC73F97533663A2940520ECD601A07775A683F622_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_mACA969D1E637325E64B895FFA84FF8DBB882724B_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC List_1_get_Item_mAAE7FBDBD94CC48BA01C01ACFC3C66EE219110D0_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m58893707EC3B663186D1550A23DE96C818416CBD_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mC9CB5EB21839923C050E6922FE7050867F374865_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC));
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m328466F241E01D12C4560BF873B0DCB364184FAC_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_1;
		L_1 = List_1_get_Item_mAAE7FBDBD94CC48BA01C01ACFC3C66EE219110D0(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mC8AC62D168434E9AB15DF194B4259FE7913CD978_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m85CB6FEF509A4859399929F09F545FA1133C3051(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m58893707EC3B663186D1550A23DE96C818416CBD(__this, L_1, ((*(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)((SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m624C469B79ADC28E429B7A3CA96DA72345621643_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) 
{
	SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_6 = V_0;
		int32_t L_7 = V_1;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC)L_8);
		return;
	}

IL_0034:
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_9 = ___0_item;
		List_1_AddWithResize_m594A4155F206677F45ECD9AAE7E9EFD0AE6137ED(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m594A4155F206677F45ECD9AAE7E9EFD0AE6137ED_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m1A140613D2D236E9CF413F81D549E39415DF0058(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_3 = __this->____items;
		int32_t L_4 = V_0;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mA3942A650A2BBD4285AB8BCB8F6E3C9AC3C4C6C4_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m85CB6FEF509A4859399929F09F545FA1133C3051(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m624C469B79ADC28E429B7A3CA96DA72345621643_inline(__this, ((*(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)((SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_mF3540C84790DAB9D381F00753BA20A85694C3446_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6C9383E6FC71D115A5C539DD079A91E2472A7DB0_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m8C743BAB2CDB84037FE830DF12A8B561EFEEEA60(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* List_1_AsReadOnly_m95A11E2B168BD4F033EE85776867849761D059CA_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* L_0 = (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		ReadOnlyCollection_1__ctor_m236FFEDF5196507C82BBA262351A75F0337621F3(L_0, (RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m21752AD1C5AFF444A40956A05C1AC41FB9F88DCB_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA5832B215E464CAC8345E7ECC45562E884AE146D_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mF5A7DA78EA07100BDE8044CA37C505F36AD7ACB1(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mED517429468C156C8F8C5608555F8420C755EEF1_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mC9CB5EB21839923C050E6922FE7050867F374865(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_mA5832B215E464CAC8345E7ECC45562E884AE146D(__this, ((*(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)((SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m3BE7B292C99B3D90B11E5E2B982FC38BEDB111F1_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, const RuntimeMethod* method) 
{
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_0 = ___0_array;
		List_1_CopyTo_m15B9FC56E0418F730FC3A37C8E482F7108D73B62(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mAACFB6ECDBAA2A5F6B154D4F3CCC28E9B4BA781E_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m15B9FC56E0418F730FC3A37C8E482F7108D73B62_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_0 = __this->____items;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m1A140613D2D236E9CF413F81D549E39415DF0058_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m40FE27C2AB4F6F5F863957210FA90C1BF581D293(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m8B78D3EEAEFEC7828745574DAF7C38944F2F8E8A_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, Action_1_t4501483487EE874F237B6B25ACC1026A64FBF612* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t4501483487EE874F237B6B25ACC1026A64FBF612* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t4501483487EE874F237B6B25ACC1026A64FBF612* L_4 = ___0_action;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m6A44347B678A89104F91C3A85581DCC41A21AD5B_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9 List_1_GetEnumerator_mAAAF1FE8DEBF77859AC0663A4C794BB8570C9930_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m159144864209387AA18DEABE7B7985388F8F3452((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mBCEC03D60D1DB36D692026A18BEB259489900E5C_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m159144864209387AA18DEABE7B7985388F8F3452((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m2720314B086456588769D3DE8AFB012759038C96_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m159144864209387AA18DEABE7B7985388F8F3452((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t59E02176F2EE4E264A4750514AA127E2E21FF5D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mF5A7DA78EA07100BDE8044CA37C505F36AD7ACB1_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) 
{
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_0 = __this->____items;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m5A2EB67A073F2BFF5B3DCDDBD15D75BC3CFB909C(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mB8E1E8E1A197395AD882409A03CD6F2D4B9BE328_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mC9CB5EB21839923C050E6922FE7050867F374865(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mF5A7DA78EA07100BDE8044CA37C505F36AD7ACB1(__this, ((*(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)((SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC8E7189F3D9D95975CFE821AC3B560B2EA7AB7A8_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_3 = __this->____items;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m1A140613D2D236E9CF413F81D549E39415DF0058(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_15 = ___1_item;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mBD8DBA214029319A0AED43030E4EDE7B27E12C6A_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m85CB6FEF509A4859399929F09F545FA1133C3051(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mC8E7189F3D9D95975CFE821AC3B560B2EA7AB7A8(__this, L_1, ((*(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)((SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m8C743BAB2CDB84037FE830DF12A8B561EFEEEA60_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m1A140613D2D236E9CF413F81D549E39415DF0058(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_20 = __this->____items;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_45;
				L_45 = InterfaceFuncInvoker0< SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_44);
				List_1_Insert_mC8E7189F3D9D95975CFE821AC3B560B2EA7AB7A8(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_mDF2147E522AD80A7B6A79CF8E7F00EC7DBF8A032(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mA8E72E7CFB72101AA88E01A84F746ECBD8E91B3F_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mF5A7DA78EA07100BDE8044CA37C505F36AD7ACB1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m911F1AFFA59FD181BA9363E0B6C8B5B95067EC3B(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mF11CDACF173F28EBB282A0E10465306215533D69_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mC9CB5EB21839923C050E6922FE7050867F374865(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_mA8E72E7CFB72101AA88E01A84F746ECBD8E91B3F(__this, ((*(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)((SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m942EE1B1849CFF13050D5AC9C5543626606E41FD_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C* L_4 = ___0_match;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_mADD6CFDE192E3E822D5296926054ED8A41DB09C4_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C* L_16 = ___0_match;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_mADD6CFDE192E3E822D5296926054ED8A41DB09C4_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m911F1AFFA59FD181BA9363E0B6C8B5B95067EC3B_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m5B47428142038A77A46C58F4673D5B84A07CEA92_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m615589F6FA55D03C1E49CD0793C4579B1EA8ACB9_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mF3540C84790DAB9D381F00753BA20A85694C3446_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_m6558ECB96638BF339DAB6BDB70413BA7570A84F9(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m6558ECB96638BF339DAB6BDB70413BA7570A84F9_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mD8F006C0A007C05BB69E417FA65A5A66965F997C(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m73682F7A633F3DDE4C73BA091D7DF9A6B37C9EDF_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mF3540C84790DAB9D381F00753BA20A85694C3446_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m4F48B52D720DB8E76904DB4647F7BDA63FDEC552(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m4F48B52D720DB8E76904DB4647F7BDA63FDEC552_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mE6A4B57DE0CB3DEC8371BDC3DAAAD29D6C9E3B2B(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mA14F47787ACFCA9DBDE6F5227BC1070CC0AC6E24_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, Comparison_1_tA6E38F9B8A5E125EC6515F9679C2079C747A0149* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tA6E38F9B8A5E125EC6515F9679C2079C747A0149* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tA6E38F9B8A5E125EC6515F9679C2079C747A0149* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 48));
		ArraySortHelper_1_Sort_m3182DABDA1EFACFF8268887837CA976A3577C3E6(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* List_1_ToArray_m60A0D5DD91FC53DD96E7949CE29E6FA9724180F2_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_1 = ((List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_3 = (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)(SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_4 = __this->____items;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_TrimExcess_m9307B879174F09EF87156E10C406F7D0E8ED3A25_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_0 = __this->____items;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		List_1_set_Capacity_m40FE27C2AB4F6F5F863957210FA90C1BF581D293(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mDF2147E522AD80A7B6A79CF8E7F00EC7DBF8A032_gshared (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_6;
				L_6 = InterfaceFuncInvoker0< SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_8 = __this->____items;
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m1A140613D2D236E9CF413F81D549E39415DF0058(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_14 = V_1;
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mC80073FB316593C1A68C371348A1661067257614_gshared (const RuntimeMethod* method) 
{
	{
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_0 = (SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)(SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76818CA3690BB91AA7450B449616AE334EA0972C_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = ((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8708E31E39AC124FF9BFE9D74B61944006EBA29A_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_2 = ((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_4 = (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)(WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17517E2A0D5972758C0BE550758EC2FC7AD88D3F_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_6 = ((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_8 = (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)(WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_10 = __this->____items;
		InterfaceActionInvoker2< WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_12 = ((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m0C19209F7F2E7D8F63F4AEDAB78FF7F76347ECFB(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m060BDC309579AD262C87F876AC2A1E81D316472A_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = __this->____items;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_6 = (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)(WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_8 = __this->____items;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_12 = ((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2F90A932E325FFA55047769F5E45E453D80C27D1_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_mB1720DF99F83C7A7472F1A25946744D42B48DFCB_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9B7FE4A7EBCCC2B672D99C7E6425070115CBD2E8_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m8736FE812286213E4682031FDDA83EBAAF4CC0A5_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_mD2CB873FD4B92A901140ED6AD5BCCD54DAEAE6F4_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 List_1_get_Item_mE33CCA6A6D338BD1F44C8E35CE75806952CBF0CC_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m47EF2DD78187A4AFDDBA8AFE5C2D83DE376C0A0A_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m041D9A4962B238EF7BC9922EAF0F5FC8E6267EF6_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44));
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mBFBEA7C6C4D0AB8A0D8EF79E28EBF53FCB7FFEF1_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_1;
		L_1 = List_1_get_Item_mE33CCA6A6D338BD1F44C8E35CE75806952CBF0CC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m4AAC3D191376883593AF8E9B6B334B92FB0D9C4D_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m47EF2DD78187A4AFDDBA8AFE5C2D83DE376C0A0A(__this, L_1, ((*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m4AF1A89B7FCCDFD5755D0C21A65347642A37B152_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_6 = V_0;
		int32_t L_7 = V_1;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_8);
		return;
	}

IL_0034:
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_9 = ___0_item;
		List_1_AddWithResize_m45EC1E38A4A473EA779C21FBFEB2C0E39E4C7846(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m45EC1E38A4A473EA779C21FBFEB2C0E39E4C7846_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = __this->____items;
		int32_t L_4 = V_0;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m1B366DE3275E543F3FA70031C94C7F336BD5CFFF_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m4AF1A89B7FCCDFD5755D0C21A65347642A37B152_inline(__this, ((*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m2F90A932E325FFA55047769F5E45E453D80C27D1_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m916A38AAB2F35C697A0CC9EE87A56C6B6D047302_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m13CC4FA54580EFF2DDFDDB9E830D9A383A0E4DCC(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* List_1_AsReadOnly_m348BDEF50B30F518FD354FD22B5D1DF0C67AA9F6_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* L_0 = (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		ReadOnlyCollection_1__ctor_mEA8F62A9DC91A24300FEFCF8A40F606FECC6289D(L_0, (RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m1F57FE95E77F7897B0685BE4B2CAD395A384B6DB_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m1303A79CAE668AD1204F2D7DF8D2DFCF9DDC6D0D_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m09BA6D1CC549FA9F5642F3FC47741F976B5F35D9_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m041D9A4962B238EF7BC9922EAF0F5FC8E6267EF6(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m1303A79CAE668AD1204F2D7DF8D2DFCF9DDC6D0D(__this, ((*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m451E2DF9CA2E0541B3E2970333284D8A5A327356_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, const RuntimeMethod* method) 
{
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = ___0_array;
		List_1_CopyTo_m0E03ED6DB864BF551838BF1B49786675D995A7E7(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_m1C8CDB982CCA69CC00815F2CC7A9F57C8588DF5D_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m0E03ED6DB864BF551838BF1B49786675D995A7E7_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = __this->____items;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m060BDC309579AD262C87F876AC2A1E81D316472A(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_mD9B07FA3910B7DB7D5ECCC874F52C84EFF42A8A2_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, Action_1_t056FB23C2911679EFD99E438847C226611A2247F* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t056FB23C2911679EFD99E438847C226611A2247F* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t056FB23C2911679EFD99E438847C226611A2247F* L_4 = ___0_action;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m0C6E5F5797F0292E98084D59E0ABAFFF268286FA_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C List_1_GetEnumerator_mDAC48FEB52A5FC903525BC2573F962982C808938_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67AC7635AF0AF22787100E7C16277521B24BF922((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8B0D48A21061F79C1042EC9FF62A0662C3DA57E9_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67AC7635AF0AF22787100E7C16277521B24BF922((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m7FF9BA8186A2B5BB00640308FB254A09C44A455D_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67AC7635AF0AF22787100E7C16277521B24BF922((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = __this->____items;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mD7FA52403DD62EA78B636E1A4E8119ABED32F37E(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m6D8F7CA7A498C36D9C2987B99914AA61C55A46A1_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m041D9A4962B238EF7BC9922EAF0F5FC8E6267EF6(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1(__this, ((*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m3AA6C81C13315A0F1CD886CA63438F3FC55EFD70_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = __this->____items;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_15 = ___1_item;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mF8E5FAD14C555D38AEC224571195D52EA3C14D23_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m3AA6C81C13315A0F1CD886CA63438F3FC55EFD70(__this, L_1, ((*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m13CC4FA54580EFF2DDFDDB9E830D9A383A0E4DCC_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_20 = __this->____items;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_45;
				L_45 = InterfaceFuncInvoker0< WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_44);
				List_1_Insert_m3AA6C81C13315A0F1CD886CA63438F3FC55EFD70(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m0C19209F7F2E7D8F63F4AEDAB78FF7F76347ECFB(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mC74ED88927A060D6631231DB26A042412C32D85B_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m7476D799F5CC07697D447853DA4DAEB4D3741B84(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m5D7BE3C47B2C061A2B8FA92A1D33CB76FC7245B5_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m041D9A4962B238EF7BC9922EAF0F5FC8E6267EF6(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_mC74ED88927A060D6631231DB26A042412C32D85B(__this, ((*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m005637F944C32E3C8F63E3D10D1267C2746F11D4_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* L_4 = ___0_match;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* L_16 = ___0_match;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m7476D799F5CC07697D447853DA4DAEB4D3741B84_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44));
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m2901392D7A738F8CF88B0BA8F672545272728AAE_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mC5E17A02816494CB629ABC67C63BF7C11660EEE2_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m2F90A932E325FFA55047769F5E45E453D80C27D1_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_mA82B743941194D34E26FD74ABCA431B3E5B9C2FF(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mA82B743941194D34E26FD74ABCA431B3E5B9C2FF_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m88E01FB6C608D58721AAECE3C58B2107CB926E3B(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mDED6F07C6D7F8E15DD7BE41B1F142B361F45E41F_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m2F90A932E325FFA55047769F5E45E453D80C27D1_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m740F84AD8B0226D65AE841BEA5DA739C69A29FAE(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m740F84AD8B0226D65AE841BEA5DA739C69A29FAE_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m4974E84199207C342ABD5C3DDB83FB22A7831AF8(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m9C2F84308D7884A5E74414FA29C52E3922BE50D8_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 48));
		ArraySortHelper_1_Sort_mF8B226978F672DF67F415832E3FCC44027498627(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* List_1_ToArray_m984AB52176DCF42799585854230BD2EF36BF8312_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_1 = ((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)(WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_4 = __this->____items;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_TrimExcess_m3474086F7B346B93646EDAFC9029621B2FFDCD32_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = __this->____items;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		List_1_set_Capacity_m060BDC309579AD262C87F876AC2A1E81D316472A(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m0C19209F7F2E7D8F63F4AEDAB78FF7F76347ECFB_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_6;
				L_6 = InterfaceFuncInvoker0< WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_8 = __this->____items;
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_14 = V_1;
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m6D6789A3D7BD60EC295E929536719E1D5FB94E91_gshared (const RuntimeMethod* method) 
{
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)(WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8E723204CEB9D0194D564133CFF2ACE2DDC1D72D_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_0 = ((List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD5795532E6B6E81BD3F1974B2CAD02A62A20DD52_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_2 = ((List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_4 = (InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*)(InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA012EAECBB515B46D8911E0B6A95697A5B9474CA_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_6 = ((List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_8 = (InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*)(InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_10 = __this->____items;
		InterfaceActionInvoker2< InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_12 = ((List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m3A3C1CDA39FA5508C45CCB0F24AC6DF44419C17C(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m537C9FB08AEE7BA69FFBC9E11542DDC3FA75A6AA_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_3 = __this->____items;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_6 = (InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*)(InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_8 = __this->____items;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_12 = ((List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m6DD52194437C4A4E33590FE40BD0EB3FDD85D373_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_m23249FE995E137C4D014F1868D33C271476FBBA5_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55D36189F14B4B25B201B1166698D0504D311B79_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m00318F88558C1C8AA52C1D1B3CE38CE9BCD3F641_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_mBFC98E14C21065336EA4257C5A131B54342E20CB_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D List_1_get_Item_m5726E3006845A58F320312B88B8BB76FC4AB16CA_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mDAB769772A9FB34AD61FB07A4C188CD97E7A1A15_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mD07951F7A529B12EFB0066C5118F1D6434E85070_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D));
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m9D6E0F44DAB116FA071A908EB5CF07145E7E2E3B_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_1;
		L_1 = List_1_get_Item_m5726E3006845A58F320312B88B8BB76FC4AB16CA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m19EF7431D72F7E629A81EBBBA786C7F4E447A914_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_m2ECC87E2F5AA78302D3456A1A0563708395F722B(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_mDAB769772A9FB34AD61FB07A4C188CD97E7A1A15(__this, L_1, ((*(InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)((InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)(InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m95328F0F59DDEB1A8A7D044DAF427CC7DEB1EB93_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_item, const RuntimeMethod* method) 
{
	InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_6 = V_0;
		int32_t L_7 = V_1;
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D)L_8);
		return;
	}

IL_0034:
	{
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_9 = ___0_item;
		List_1_AddWithResize_m47222083904E5992F1343D4C4CE32F5282C06809(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m47222083904E5992F1343D4C4CE32F5282C06809_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mC227D0851E18347BAD40BAB0934AD5A1001031B8(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_3 = __this->____items;
		int32_t L_4 = V_0;
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m763BA248F33364EFABA70297E06A0A3387503E7F_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_m2ECC87E2F5AA78302D3456A1A0563708395F722B(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m95328F0F59DDEB1A8A7D044DAF427CC7DEB1EB93_inline(__this, ((*(InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)((InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)(InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m6DD52194437C4A4E33590FE40BD0EB3FDD85D373_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m9611D297A42026D10FE73ACA5BEFF01B209E1A12_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m4F4A827D176514113FAA544F9B887A319DE2917F(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* List_1_AsReadOnly_mB2B7E35AE439121AFC5CD979C54ACD4A5B39591C_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* L_0 = (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		ReadOnlyCollection_1__ctor_mDC6B15D558789C0310CE2ADF74A7A2398F5DA556(L_0, (RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mB84DA321070EE7E2B3655D697EA8E7BD8F809D11_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mBDF07664E1A538F04E3FB7FBF52C88ECACC4F168_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m944CCB5C81536FEC4E38E8CC5785698FEBBE33C6(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m9226CC014E2B038967ED4424BF2623DBE592F5A0_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mD07951F7A529B12EFB0066C5118F1D6434E85070(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_mBDF07664E1A538F04E3FB7FBF52C88ECACC4F168(__this, ((*(InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)((InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)(InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mC8C3A904BB0D7980B271D8A486BD10B9E13E39A7_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* ___0_array, const RuntimeMethod* method) 
{
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_0 = ___0_array;
		List_1_CopyTo_m1AE7A24E5B2B6BBBD272D9C4189AAD9791842898(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mC38BD403CDB5C9A0227D0413E34F6F5AAE3CDC0A_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m1AE7A24E5B2B6BBBD272D9C4189AAD9791842898_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_0 = __this->____items;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mC227D0851E18347BAD40BAB0934AD5A1001031B8_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m537C9FB08AEE7BA69FFBC9E11542DDC3FA75A6AA(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_mB3AE416C66FDD6C32FA13C85AEF924146F662AAB_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, Action_1_t49F19F6D8F6FE90ECA808F2608FB278D414DD05A* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t49F19F6D8F6FE90ECA808F2608FB278D414DD05A* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t49F19F6D8F6FE90ECA808F2608FB278D414DD05A* L_4 = ___0_action;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m6BADC1E75837D17C7C206C74AB63B78F8BFCD450_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE8C173434DE13194E4C9E6856B75BFF0CAEC951F List_1_GetEnumerator_m82E406E68664A7ED6C63EF5B85ACE836B55E8707_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE8C173434DE13194E4C9E6856B75BFF0CAEC951F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5B02D3C70DFCA7B55F85F9766F6D2495501C30F6((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m94374B213BC498B7EF60291A525CED2EC76BB4FC_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE8C173434DE13194E4C9E6856B75BFF0CAEC951F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5B02D3C70DFCA7B55F85F9766F6D2495501C30F6((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tE8C173434DE13194E4C9E6856B75BFF0CAEC951F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m57CA7B02DF882DF3C19CF25A896EE42B107CCBD7_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE8C173434DE13194E4C9E6856B75BFF0CAEC951F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5B02D3C70DFCA7B55F85F9766F6D2495501C30F6((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Enumerator_tE8C173434DE13194E4C9E6856B75BFF0CAEC951F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 30), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m944CCB5C81536FEC4E38E8CC5785698FEBBE33C6_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_item, const RuntimeMethod* method) 
{
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_0 = __this->____items;
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_mE582C4BE8F0A7ADE1DBBC8942F7E41FD96C92347(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m98493942F40C1741B81E6A71A27485345CD8820A_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mD07951F7A529B12EFB0066C5118F1D6434E85070(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m944CCB5C81536FEC4E38E8CC5785698FEBBE33C6(__this, ((*(InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)((InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)(InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m5706D9DCD4E44962FAC65B7F57DD98D6755A5A14_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_3 = __this->____items;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mC227D0851E18347BAD40BAB0934AD5A1001031B8(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_15 = ___1_item;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m98025B60FD0CAF3C623E9B0B1B1E23A578A36AB6_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_m2ECC87E2F5AA78302D3456A1A0563708395F722B(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m5706D9DCD4E44962FAC65B7F57DD98D6755A5A14(__this, L_1, ((*(InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)((InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)(InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m4F4A827D176514113FAA544F9B887A319DE2917F_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mC227D0851E18347BAD40BAB0934AD5A1001031B8(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_20 = __this->____items;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_45;
				L_45 = InterfaceFuncInvoker0< InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_44);
				List_1_Insert_m5706D9DCD4E44962FAC65B7F57DD98D6755A5A14(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m3A3C1CDA39FA5508C45CCB0F24AC6DF44419C17C(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mE669E18E1E3B8BD9A783EA97EEBF156DEE2CEA22_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m944CCB5C81536FEC4E38E8CC5785698FEBBE33C6(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m85C9935C7C89AAD3EAFFEB95F2258C0375C2E9C1(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mCF30ED8A3A63532AC23A9B165AF8166AD3FAFBF9_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mD07951F7A529B12EFB0066C5118F1D6434E85070(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_mE669E18E1E3B8BD9A783EA97EEBF156DEE2CEA22(__this, ((*(InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)((InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)(InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_mC591E61CEB5C9B829FD614EA7C36C27EFBFE7948_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, Predicate_1_t2E5711CB35BA617C8E9CB94509B236A2133DC6BD* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t2E5711CB35BA617C8E9CB94509B236A2133DC6BD* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t2E5711CB35BA617C8E9CB94509B236A2133DC6BD* L_4 = ___0_match;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m7CECE6D4B69BA1AB9C0C5C5AD16F7FB9246B57B8_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t2E5711CB35BA617C8E9CB94509B236A2133DC6BD* L_16 = ___0_match;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m7CECE6D4B69BA1AB9C0C5C5AD16F7FB9246B57B8_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m85C9935C7C89AAD3EAFFEB95F2258C0375C2E9C1_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D));
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mB18DBB6FC6894BD874DCA25C0EAEBC455E9A7FD3_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m4C75F973F5D86736F4EF7210B9EA55A95D20A768_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m6DD52194437C4A4E33590FE40BD0EB3FDD85D373_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_m0D7C274B99A4B52392CBEDD5F117535434682799(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m0D7C274B99A4B52392CBEDD5F117535434682799_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_m7C8B5BC262FBE7FEE47F8D767CFF499ACDE79E24(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mAC97E643DDFB58ACA06107732621D1999C40FCB1_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m6DD52194437C4A4E33590FE40BD0EB3FDD85D373_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_mA45766AD040502AA974D5AB0F201B1C1F2F38124(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mA45766AD040502AA974D5AB0F201B1C1F2F38124_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_m2E8C24B4F6C629DB8AE3ABC183CD1689D8B6EA18(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mE6D42888CB02FADE30B33CB822A373CAE2686B3D_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, Comparison_1_t0D538E030DA616BAE9EC08BBAF8EAB30350CCADC* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t0D538E030DA616BAE9EC08BBAF8EAB30350CCADC* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t0D538E030DA616BAE9EC08BBAF8EAB30350CCADC* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 48));
		ArraySortHelper_1_Sort_mF516B23537CB3D62862D63EE2336653FBC74BD3A(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* List_1_ToArray_m1B58840B91C8D0BD5921B17D33B1F00A9D11B7D3_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, const RuntimeMethod* method) 
{
	InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_1 = ((List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_3 = (InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*)(InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_4 = __this->____items;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_TrimExcess_m44E4B98D4260C1136EB618A2D7C381267FF414B3_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_0 = __this->____items;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		List_1_set_Capacity_m537C9FB08AEE7BA69FFBC9E11542DDC3FA75A6AA(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m3A3C1CDA39FA5508C45CCB0F24AC6DF44419C17C_gshared (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_6;
				L_6 = InterfaceFuncInvoker0< InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_8 = __this->____items;
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mC227D0851E18347BAD40BAB0934AD5A1001031B8(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_14 = V_1;
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mDC12C35A053A24973F0FF59755532C015A126249_gshared (const RuntimeMethod* method) 
{
	{
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_0 = (InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*)(InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m9BAF9FC9B01B86AB9E16C2A54BAB69042D04B974_gshared_inline (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_item, const RuntimeMethod* method) 
{
	KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_6 = V_0;
		int32_t L_7 = V_1;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8)L_8);
		return;
	}

IL_0034:
	{
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_9 = ___0_item;
		List_1_AddWithResize_m280DB6514ABCB446654DDAD55DA87D6D939D6574(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m8AD37AF1186CEAD50E0C80CBCFBCF5F104D77023_gshared_inline (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mFADFA3B447682798B8D67B977A30F6BA4BB1EACB_gshared_inline (Action_1_t6BF8D9007A2A7F49C909CE38D7F7A51FA6CD6496* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m9FD574A8B117EBFEE39DBD83FC67702DA3A35A0A_gshared_inline (Predicate_1_t2ABDDC79221089ACAA67305D172D6E9ABDE6FB6D* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = V_0;
		int32_t L_7 = V_1;
		Il2CppChar L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (Il2CppChar)L_8);
		return;
	}

IL_0034:
	{
		Il2CppChar L_9 = ___0_item;
		List_1_AddWithResize_m11185A14288763FB9A0FF8111453AC739E76CF35(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m2D463A02A40BD8F16A42B9EA5771DCE3DD6D321D_gshared_inline (Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F* __this, Il2CppChar ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppChar, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8243A1B2012C89E94D47EF84A7D2AA8D5F440AA5_gshared_inline (Predicate_1_t498CAB8C3A239510DF1CD4E0D9D0B8EFB398536E* __this, Il2CppChar ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppChar, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_gshared_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		List_1_AddWithResize_mAD159B09F28BD7914562E219CA52E2D4BDCF5530(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_gshared_inline (Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mE231002F031F4776008D0907C601BECDE4B3384E_gshared_inline (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_item, const RuntimeMethod* method) 
{
	InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		InterpretedFrameInfoU5BU5D_t97E24C7783C90A15DDACF04305E730DBAEC0A8BB* L_6 = V_0;
		int32_t L_7 = V_1;
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321)L_8);
		return;
	}

IL_0034:
	{
		InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 L_9 = ___0_item;
		List_1_AddWithResize_m8DA2AB2970B4FD43A6642148294235B4096D59B3(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE780D5A4373D244D420DBB851419C525F52259C4_gshared_inline (List_1_t97A207C741F8FEABA65120A2E5276BC94C778D01* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m2733607C3DD21A44FD183357EEF8D8DEA6CF64E5_gshared_inline (Action_1_t138B53097F6755F546931F0B87469E19A8F66439* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m7ABF70CC6F474DFA1A056B41C752C21D2905F570_gshared_inline (Predicate_1_t5805DB64113904AB19024DCCBF911D02BFAF1A18* __this, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB308EE5BFFD89A7B8C251644D76CA547456F3012_gshared_inline (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_6 = V_0;
		int32_t L_7 = V_1;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_8);
		return;
	}

IL_0034:
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_9 = ___0_item;
		List_1_AddWithResize_m8B3D79788ADC2B54C9B12CC9EC1158E6A04CDEBC(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_gshared_inline (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m1D3248EEA732AE8F2AA160F73A481C0102193D15_gshared_inline (Action_1_t43B3A21E3139B3E2E49698F940F979F37AD1E63E* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m182E0ACAA85455151F5750CE87F942DA6E3DD3D6_gshared_inline (Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m624C469B79ADC28E429B7A3CA96DA72345621643_gshared_inline (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) 
{
	SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_6 = V_0;
		int32_t L_7 = V_1;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC)L_8);
		return;
	}

IL_0034:
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_9 = ___0_item;
		List_1_AddWithResize_m594A4155F206677F45ECD9AAE7E9EFD0AE6137ED(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF3540C84790DAB9D381F00753BA20A85694C3446_gshared_inline (List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m6A44347B678A89104F91C3A85581DCC41A21AD5B_gshared_inline (Action_1_t4501483487EE874F237B6B25ACC1026A64FBF612* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mADD6CFDE192E3E822D5296926054ED8A41DB09C4_gshared_inline (Predicate_1_t107748E0E0D2277266234EAF67AC068394C4351C* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m4AF1A89B7FCCDFD5755D0C21A65347642A37B152_gshared_inline (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_6 = V_0;
		int32_t L_7 = V_1;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_8);
		return;
	}

IL_0034:
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_9 = ___0_item;
		List_1_AddWithResize_m45EC1E38A4A473EA779C21FBFEB2C0E39E4C7846(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2F90A932E325FFA55047769F5E45E453D80C27D1_gshared_inline (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m0C6E5F5797F0292E98084D59E0ABAFFF268286FA_gshared_inline (Action_1_t056FB23C2911679EFD99E438847C226611A2247F* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_gshared_inline (Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m95328F0F59DDEB1A8A7D044DAF427CC7DEB1EB93_gshared_inline (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_item, const RuntimeMethod* method) 
{
	InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_6 = V_0;
		int32_t L_7 = V_1;
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D)L_8);
		return;
	}

IL_0034:
	{
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_9 = ___0_item;
		List_1_AddWithResize_m47222083904E5992F1343D4C4CE32F5282C06809(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m6DD52194437C4A4E33590FE40BD0EB3FDD85D373_gshared_inline (List_1_t6CD7C05A234AA2E6AB05AA0F27B4FDFF79C0E61D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m6BADC1E75837D17C7C206C74AB63B78F8BFCD450_gshared_inline (Action_1_t49F19F6D8F6FE90ECA808F2608FB278D414DD05A* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m7CECE6D4B69BA1AB9C0C5C5AD16F7FB9246B57B8_gshared_inline (Predicate_1_t2E5711CB35BA617C8E9CB94509B236A2133DC6BD* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
