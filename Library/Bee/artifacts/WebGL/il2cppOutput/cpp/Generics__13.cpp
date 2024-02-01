#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
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
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8;
struct EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2;
struct EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C;
struct EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331;
struct EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E;
struct EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4;
struct EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694;
struct EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041;
struct EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0;
struct EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5;
struct EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5;
struct EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203;
struct EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80;
struct EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB;
struct EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18;
struct EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5;
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4;
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8;
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B;
struct EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE;
struct EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44;
struct EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A;
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB;
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399;
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B;
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499;
struct EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41;
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70;
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862;
struct EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E;
struct Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C;
struct Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F;
struct Func_2_t98484B0812610F727324B05DF0039164FD39A4E7;
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct IEnumerable_1_t76AB0BC9B3C9C1EAE8CA0B959CFF2D5BF2B7BB5A;
struct IEnumerable_1_t9CC3C47C67E4184F7F1B8B0AFAEF692B9EDDDF05;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t819E733E3DA1171A575B03B1B06FD64D9406E196;
struct IEnumerator_1_t067D943FA808557FBA1FBED8EA4E9A1BFCB791B8;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA;
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA;
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0;
struct List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B;
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE;
struct WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA;
struct WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6;
struct WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039;
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4;
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B;
struct WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB;
struct WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0;
struct WhereSelectArrayIterator_2_t60DB48D26CC6C2C9B2E2ED4947D4C563324DC49A;
struct WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859;
struct WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58;
struct WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174;
struct WhereSelectEnumerableIterator_2_t96BA0BD35D43BFEC26C4BE0C50B1B50C7E0FEB5B;
struct WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523;
struct WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F;
struct WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C;
struct WhereSelectListIterator_2_t3BFC51AF95F35D0B4877B7FA08D62BC4BD05AD02;
struct WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675;
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A;
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336;
struct WrappedValue_1_t038BEFC004F46FAB767F45F8815E8432F8FE798F;
struct WrappedValue_1_tEECC84FD02441C3B391CBDBF2865E5B168BB895C;
struct WrappedValue_1_t02F152AD1C2A0D08E54E3E5762D46667B7CF94C5;
struct WrappedValue_1_tC6DF74086B33736065E471AB6DFBA4C382D9ECB9;
struct WrappedValue_1_t6A86A69A5D7E4F05512B9460B09FEFBEACEB405E;
struct WrappedValue_1_tF789D1365EFD286B9985361743A35348AEB43F16;
struct WrappedValue_1_t05C6D0355A089F3AC2424F605AD1C521B11AFBC8;
struct WrappedValue_1_t2B578379719E1F9499D751FEB82BA72226B668C6;
struct WrappedValue_1_tD35A3788939F50F1E2A2720D91649A0AF6B826BD;
struct WrappedValue_1_t5FD375EA11518E6140F855B737BD2E9F10107D58;
struct WrappedValue_1_tA1D60AED94DEDD8CF96236CA6946E9FFB5AE1094;
struct WrappedValue_1_t62343E85AB28E6EB6CB50590D4E21CA3BCB1789A;
struct WrappedValue_1_tE7A8D38DBC847F1C43C2FC9C83DF1BC9D09C0667;
struct WrappedValue_1_t3D769C0E18CE756D9F9F3053772D36C6133F9465;
struct WrappedValue_1_t385843449CB29A743E0A49C3377762B10D94F7D8;
struct WrappedValue_1_t3D602AF66C1228250B68787536CF9240F44EF940;
struct WrappedValue_1_t729B27FE79AB1B3B4DAB75E7C1156F458E42E495;
struct WrappedValue_1_t1EB1AAB44E67CBFC009A8C8EA8CA78B7A35A9CB1;
struct WrappedValue_1_tF7CCFBCFB6DFBCB97BFC8EF0858D0ACEB370AC64;
struct WrappedValue_1_t73173AF7595A46F664705B4182B0CA0FDF421EC1;
struct WrappedValue_1_t79C04924BC7586B94EEA70EC82111804416A084D;
struct WrappedValue_1_tE2A5ADC91C24730012A0D89E29E766595D5A80CF;
struct WrappedValue_1_tD51D6DDD0C09899E1CC6F23E204A0436D5E41A51;
struct WrappedValue_1_tDBD2E2AA1CA35EEA618C15496FF2104E7B7CA37B;
struct WrappedValue_1_tCA5027D3B7F72F98E63929D51B82013C1172B91F;
struct WrappedValue_1_tDAAEBDEE88F3A8DE06ECA05C1E191368D16FC608;
struct WrappedValue_1_tFCFD37F89941250A9CFC19A55B5C1B1C583D5205;
struct WrappedValue_1_t96969F56BF2DAF4FA7A9AD37CC85EDF9C5B48296;
struct WrappedValue_1_tF0A4A84D2019A785F6E9BD208CA577199A6A1569;
struct WrappedValue_1_t43451D8A65E3D98CFC11F483300FD6640D70335F;
struct WrappedValue_1_tF983A2518D15C724FACBA71A5B53FDE5E005EFD7;
struct WrappedValue_1_t9717F9CCB663633CB9B85813A633F18BDEBD5028;
struct WrappedValue_1_t428210A061F150CC0822ED9FA2A05CFE14772F5C;
struct WrappedValue_1_t3C9579230F8F7A78F089F1FB7AB8A6471F9DA1B3;
struct WrappedValue_1_t27403FA5E17D39B528E4EE63DA29050565E4F52A;
struct KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0;
IL2CPP_EXTERN_C String_t* _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8  : public RuntimeObject
{
};
struct EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2  : public RuntimeObject
{
};
struct EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C  : public RuntimeObject
{
};
struct EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331  : public RuntimeObject
{
};
struct EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E  : public RuntimeObject
{
};
struct EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4  : public RuntimeObject
{
};
struct EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694  : public RuntimeObject
{
};
struct EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041  : public RuntimeObject
{
};
struct EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0  : public RuntimeObject
{
};
struct EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5  : public RuntimeObject
{
};
struct EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5  : public RuntimeObject
{
};
struct EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203  : public RuntimeObject
{
};
struct EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80  : public RuntimeObject
{
};
struct EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB  : public RuntimeObject
{
};
struct EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18  : public RuntimeObject
{
};
struct EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5  : public RuntimeObject
{
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4  : public RuntimeObject
{
};
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8  : public RuntimeObject
{
};
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B  : public RuntimeObject
{
};
struct EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE  : public RuntimeObject
{
};
struct EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44  : public RuntimeObject
{
};
struct EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A  : public RuntimeObject
{
};
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB  : public RuntimeObject
{
};
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399  : public RuntimeObject
{
};
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B  : public RuntimeObject
{
};
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499  : public RuntimeObject
{
};
struct EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41  : public RuntimeObject
{
};
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70  : public RuntimeObject
{
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862  : public RuntimeObject
{
};
struct EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	Il2CppChar ___current;
};
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	RuntimeObject* ___current;
};
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};
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
struct WrappedValue_1_t729B27FE79AB1B3B4DAB75E7C1156F458E42E495  : public RuntimeObject
{
	bool ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_t1EB1AAB44E67CBFC009A8C8EA8CA78B7A35A9CB1  : public RuntimeObject
{
	uint8_t ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_tF7CCFBCFB6DFBCB97BFC8EF0858D0ACEB370AC64  : public RuntimeObject
{
	Il2CppChar ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_tD51D6DDD0C09899E1CC6F23E204A0436D5E41A51  : public RuntimeObject
{
	double ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_tCA5027D3B7F72F98E63929D51B82013C1172B91F  : public RuntimeObject
{
	int16_t ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_tDAAEBDEE88F3A8DE06ECA05C1E191368D16FC608  : public RuntimeObject
{
	int32_t ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_tFCFD37F89941250A9CFC19A55B5C1B1C583D5205  : public RuntimeObject
{
	int64_t ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_t96969F56BF2DAF4FA7A9AD37CC85EDF9C5B48296  : public RuntimeObject
{
	RuntimeObject* ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_tF0A4A84D2019A785F6E9BD208CA577199A6A1569  : public RuntimeObject
{
	int8_t ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_t43451D8A65E3D98CFC11F483300FD6640D70335F  : public RuntimeObject
{
	float ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_t9717F9CCB663633CB9B85813A633F18BDEBD5028  : public RuntimeObject
{
	uint16_t ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_t428210A061F150CC0822ED9FA2A05CFE14772F5C  : public RuntimeObject
{
	uint32_t ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_t3C9579230F8F7A78F089F1FB7AB8A6471F9DA1B3  : public RuntimeObject
{
	uint64_t ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_t27403FA5E17D39B528E4EE63DA29050565E4F52A : public RuntimeObject {};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	bool ___hasValue;
	bool ___value;
};
struct Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 
{
	bool ___hasValue;
	uint8_t ___value;
};
struct Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 
{
	bool ___hasValue;
	Il2CppChar ___value;
};
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	bool ___hasValue;
	double ___value;
};
struct Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C 
{
	bool ___hasValue;
	int16_t ___value;
};
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	bool ___hasValue;
	int64_t ___value;
};
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	bool ___hasValue;
	float ___value;
};
struct Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 
{
	bool ___hasValue;
	uint16_t ___value;
};
struct Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 
{
	bool ___hasValue;
	uint32_t ___value;
};
struct Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 
{
	bool ___hasValue;
	uint64_t ___value;
};
struct WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	int32_t ___index;
};
struct WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6 : public RuntimeObject {};
struct WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039  : public Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA
{
	RuntimeObject* ___source;
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	RuntimeObject* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};
struct WhereSelectArrayIterator_2_t60DB48D26CC6C2C9B2E2ED4947D4C563324DC49A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___source;
	Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* ___predicate;
	Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859  : public Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___source;
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___predicate;
	Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174 : public RuntimeObject {};
struct WhereSelectEnumerableIterator_2_t96BA0BD35D43BFEC26C4BE0C50B1B50C7E0FEB5B  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	RuntimeObject* ___source;
	Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* ___predicate;
	Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523  : public Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA
{
	RuntimeObject* ___source;
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___predicate;
	Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	RuntimeObject* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C : public RuntimeObject {};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_OffsetPadding[4];
			int32_t ___hi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_OffsetPadding[8];
			int32_t ___lo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_OffsetPadding[12];
			int32_t ___mid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
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
struct Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39 
{
	List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* ____list;
	int32_t ____index;
	int32_t ____version;
	KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ____current;
};
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	bool ___hasValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value;
};
struct Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB 
{
	bool ___hasValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value;
};
struct Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 
{
	bool ___hasValue;
	Guid_t ___value;
};
struct Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 
{
	bool ___hasValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value;
};
struct WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator;
};
struct WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0 : public RuntimeObject {};
struct WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675  : public Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA
{
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___source;
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___predicate;
	Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* ___selector;
	Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D ___enumerator;
};
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator;
};
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336 : public RuntimeObject {};
struct WrappedValue_1_t038BEFC004F46FAB767F45F8815E8432F8FE798F  : public RuntimeObject
{
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_tEECC84FD02441C3B391CBDBF2865E5B168BB895C  : public RuntimeObject
{
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_t02F152AD1C2A0D08E54E3E5762D46667B7CF94C5  : public RuntimeObject
{
	Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_t05C6D0355A089F3AC2424F605AD1C521B11AFBC8  : public RuntimeObject
{
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_tD35A3788939F50F1E2A2720D91649A0AF6B826BD  : public RuntimeObject
{
	Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_t5FD375EA11518E6140F855B737BD2E9F10107D58  : public RuntimeObject
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_tA1D60AED94DEDD8CF96236CA6946E9FFB5AE1094  : public RuntimeObject
{
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_t62343E85AB28E6EB6CB50590D4E21CA3BCB1789A  : public RuntimeObject
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_t3D769C0E18CE756D9F9F3053772D36C6133F9465  : public RuntimeObject
{
	Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_t385843449CB29A743E0A49C3377762B10D94F7D8  : public RuntimeObject
{
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_t3D602AF66C1228250B68787536CF9240F44EF940  : public RuntimeObject
{
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_t73173AF7595A46F664705B4182B0CA0FDF421EC1  : public RuntimeObject
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_tE2A5ADC91C24730012A0D89E29E766595D5A80CF  : public RuntimeObject
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_tDBD2E2AA1CA35EEA618C15496FF2104E7B7CA37B  : public RuntimeObject
{
	Guid_t ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_tF983A2518D15C724FACBA71A5B53FDE5E005EFD7  : public RuntimeObject
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___U3CValueU3Ek__BackingField;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime;
	int16_t ____offsetMinutes;
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
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GCHandleType_t4CD45A3495E593D093AB0CE36EF9EC1A1572F82A 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B 
{
	bool ___hasValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value;
};
struct WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE  : public RuntimeObject
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___handle;
	bool ___trackResurrection;
};
struct WhereSelectListIterator_2_t3BFC51AF95F35D0B4877B7FA08D62BC4BD05AD02  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* ___source;
	Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* ___predicate;
	Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* ___selector;
	Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39 ___enumerator;
};
struct WrappedValue_1_tC6DF74086B33736065E471AB6DFBA4C382D9ECB9  : public RuntimeObject
{
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_tF789D1365EFD286B9985361743A35348AEB43F16  : public RuntimeObject
{
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_t2B578379719E1F9499D751FEB82BA72226B668C6  : public RuntimeObject
{
	Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_tE7A8D38DBC847F1C43C2FC9C83DF1BC9D09C0667  : public RuntimeObject
{
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___U3CValueU3Ek__BackingField;
};
struct WrappedValue_1_t79C04924BC7586B94EEA70EC82111804416A084D  : public RuntimeObject
{
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___U3CValueU3Ek__BackingField;
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
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E  : public MulticastDelegate_t
{
};
struct Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C  : public MulticastDelegate_t
{
};
struct Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F  : public MulticastDelegate_t
{
};
struct Func_2_t98484B0812610F727324B05DF0039164FD39A4E7  : public MulticastDelegate_t
{
};
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct WrappedValue_1_t6A86A69A5D7E4F05512B9460B09FEFBEACEB405E  : public RuntimeObject
{
	Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___U3CValueU3Ek__BackingField;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8_StaticFields
{
	EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8* ___defaultComparer;
};
struct EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2_StaticFields
{
	EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2* ___defaultComparer;
};
struct EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C_StaticFields
{
	EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C* ___defaultComparer;
};
struct EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331_StaticFields
{
	EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331* ___defaultComparer;
};
struct EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E_StaticFields
{
	EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E* ___defaultComparer;
};
struct EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4_StaticFields
{
	EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4* ___defaultComparer;
};
struct EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694_StaticFields
{
	EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* ___defaultComparer;
};
struct EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041_StaticFields
{
	EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041* ___defaultComparer;
};
struct EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0_StaticFields
{
	EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0* ___defaultComparer;
};
struct EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5_StaticFields
{
	EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5* ___defaultComparer;
};
struct EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5_StaticFields
{
	EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5* ___defaultComparer;
};
struct EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203_StaticFields
{
	EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* ___defaultComparer;
};
struct EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80_StaticFields
{
	EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80* ___defaultComparer;
};
struct EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB_StaticFields
{
	EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB* ___defaultComparer;
};
struct EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18_StaticFields
{
	EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18* ___defaultComparer;
};
struct EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5_StaticFields
{
	EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5* ___defaultComparer;
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* ___defaultComparer;
};
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields
{
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* ___defaultComparer;
};
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields
{
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* ___defaultComparer;
};
struct EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE_StaticFields
{
	EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE* ___defaultComparer;
};
struct EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44_StaticFields
{
	EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44* ___defaultComparer;
};
struct EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A_StaticFields
{
	EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A* ___defaultComparer;
};
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB_StaticFields
{
	EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ___defaultComparer;
};
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields
{
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* ___defaultComparer;
};
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields
{
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* ___defaultComparer;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504_StaticFields
{
	EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* ___defaultComparer;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields
{
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* ___defaultComparer;
};
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields
{
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___defaultComparer;
};
struct EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41_StaticFields
{
	EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41* ___defaultComparer;
};
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields
{
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* ___defaultComparer;
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields
{
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* ___defaultComparer;
};
struct EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17_StaticFields
{
	EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B_StaticFields
{
	KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___s_emptyArray;
};
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
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
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m99141AB321E022D9933448CDD7139BC9FAA443E8_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, bool ___1_trackResurrection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mC17BAA23BA92C7455512FDA5B1618C6D2B54ACA2_gshared (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* Enumerable_CombinePredicates_TisRuntimeObject_m613479C29B013E8FC2987E22F42A3BC6CC2C9768_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate1, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m82B17BDE54CDD809DF119425803C4B65CDEE115F_gshared (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mBA5C8B874F6A1A8AD981C46A7D054B5135517C43_gshared (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* __this, RuntimeObject* ___0_source, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1_Dispose_mA5FEAFCF23A3AE46B5054859D4C7C40259FCCE5E_gshared (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m4733F0A0FE136C9F8DCE4963455215585E8BE2CD_gshared_inline (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* __this, Il2CppChar ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* Enumerable_CombinePredicates_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8D26C321E5E8644D931AB49CCA9445628281A4B5_gshared (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___0_predicate1, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1_Dispose_m953BCF886C8A63456821023DBA45EBD9AC44EB07_gshared (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mEF8F62B9078E538C1DC46BCB876C2AC5B29EA73B_gshared (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m3E9E4C07B1F3F6CC6A54D7DEC571B2D35BBB1515_gshared (WhereSelectArrayIterator_2_t60DB48D26CC6C2C9B2E2ED4947D4C563324DC49A* __this, KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_source, Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* ___1_predicate, Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mECD514E493F9F65FC71FE3556ADE0A2E6419C03D_gshared_inline (Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m1D654CA41A2FC43EECC21031D6623DB89679596A_gshared_inline (Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m9E856676CD28C48E31CDFFD36878CEB9894EA7EA_gshared (WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_source, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate, Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar Func_2_Invoke_mF0637A69B6444509F1E28F469D561339E1F8636F_gshared_inline (Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* __this, Il2CppChar ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m3660F197ECE4BF2A6F8BC99BC8BEF585C9D7BF97_gshared (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m02FC5BD5A7E202C5D01C6B3803417980DFC0995D_gshared (WhereSelectEnumerableIterator_2_t96BA0BD35D43BFEC26C4BE0C50B1B50C7E0FEB5B* __this, RuntimeObject* ___0_source, Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* ___1_predicate, Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m88FD7312A33F197FDDED392F8CEED6049D1FE991_gshared (WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523* __this, RuntimeObject* ___0_source, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate, Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m2E08505C4CB96CC2AD340B4A2B0D3BF0D6DA01F9_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15BA8C7F93A5644C6398735BDD39FF23CEB6D0E8_gshared (WhereSelectListIterator_2_t3BFC51AF95F35D0B4877B7FA08D62BC4BD05AD02* __this, List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* ___0_source, Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* ___1_predicate, Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39 List_1_GetEnumerator_mA470FE029F16C9C2CF4CF4B94F44C54DE0EDE84A_gshared (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 Enumerator_get_Current_m7362387DF032E42E572F7041F4C1A3CD21679DCD_gshared_inline (Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mDE2B6C6EB1965BF7A51BC0785BAA55A818EDD46F_gshared (Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m464A0F88FBC476834CFEC766528072F8B4B4C8B8_gshared (WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675* __this, List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___0_source, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate, Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D List_1_GetEnumerator_m4FD62856A4FB2E97031D88470D704316F1DCD928_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar Enumerator_get_Current_m50891A1A1A5F69FFF0D667B82BD22B8658F1A6E7_gshared_inline (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEB23589F285449D3A1439C810FB122ECDD2FFAC2_gshared (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8* EqualityComparer_1_get_Default_m580F3ACD89A4B05DD1CC6BE2C290108F9AA790C6_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 WrappedValue_1_get_Value_mEFEF2030836DFC681FD0C1069BF11380F0EF66F3_gshared_inline (WrappedValue_1_t038BEFC004F46FAB767F45F8815E8432F8FE798F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_m2AFEAD36F48D2F5DE8ECE59A6D10D73B229DDAC7_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2* EqualityComparer_1_get_Default_m53444E492B798009A5D017FC35049EF3DBB7356F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 WrappedValue_1_get_Value_m1AD9FBAF561601DD04BDBEDDFCEBBD8CF8DE6097_gshared_inline (WrappedValue_1_tEECC84FD02441C3B391CBDBF2865E5B168BB895C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_m19A63A75A12D6B320BE3429B01E987325706ECA2_gshared (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C* EqualityComparer_1_get_Default_mE883532964DB2B0FBAD3168E1FDE2A79C2D3D8EF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 WrappedValue_1_get_Value_m8FDAC1ED0CEFA215AA92A6D6D5AC5A4D7C84B6AC_gshared_inline (WrappedValue_1_t02F152AD1C2A0D08E54E3E5762D46667B7CF94C5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_mBEB6A6F482339D2259F6E306C2367CC2047F4D6E_gshared (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331* EqualityComparer_1_get_Default_mEE0F7E7E6B5F46413743A1D60FDCA1E1C867A464_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC WrappedValue_1_get_Value_mB7A5F1ACB34B427EB7B305D08295EE8F39889FE8_gshared_inline (WrappedValue_1_tC6DF74086B33736065E471AB6DFBA4C382D9ECB9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_mB41C0A37C509DA525A8C03D8776DC6AEF6C41C47_gshared (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E* EqualityComparer_1_get_Default_m9365807624DE89FD1CC20935AA1CE1055358D494_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B WrappedValue_1_get_Value_mB1682F4DAEA23DBA3201A740469AF3470BB2A8C9_gshared_inline (WrappedValue_1_t6A86A69A5D7E4F05512B9460B09FEFBEACEB405E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_m4AF9EC5FD0E6DB4DA457D30E32A66536F3708C87_gshared (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4* EqualityComparer_1_get_Default_m1E5BD6D8FD7F1D2FF85113EF07641DE62EEB4519_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB WrappedValue_1_get_Value_m67ECE63E767B78EFB8EB84EB99AE96B757BF60F6_gshared_inline (WrappedValue_1_tF789D1365EFD286B9985361743A35348AEB43F16* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_mCB8328716B83ABF1959C9094829EC83EF7DAA3DB_gshared (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* EqualityComparer_1_get_Default_m13DD6F4C665FB5BD7AF62F9FE1F51848D35211BA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 WrappedValue_1_get_Value_mCADADF22F761D0759D60D12328B040BB3EFA2689_gshared_inline (WrappedValue_1_t05C6D0355A089F3AC2424F605AD1C521B11AFBC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_m4DA928BE4A77EB6BCFBBBA297191CC071DDDDC12_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041* EqualityComparer_1_get_Default_m735D02B82383F0158CFB46E97E87BE2DA8D582BA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 WrappedValue_1_get_Value_m23135D15AC8CC5E111A31F086CF84051BFCADBB6_gshared_inline (WrappedValue_1_t2B578379719E1F9499D751FEB82BA72226B668C6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_m11DB651F5399C16C4775AEECFC159BF929C95C0D_gshared (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0* EqualityComparer_1_get_Default_mE72B25D9A32B5E5D05D89D4A159A2E0FA149CC15_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C WrappedValue_1_get_Value_mF6D6B66C73587731BA99590E798278E9153E697E_gshared_inline (WrappedValue_1_tD35A3788939F50F1E2A2720D91649A0AF6B826BD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_m79DB169E37CDABFFD799FE526DB816C29A422387_gshared (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5* EqualityComparer_1_get_Default_m2335E4A9C135593934E9CC78A2DDB9D50307D29C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 WrappedValue_1_get_Value_mDFC09AB2FD93C911603F8A216FF0DD2D73DD53E5_gshared_inline (WrappedValue_1_t5FD375EA11518E6140F855B737BD2E9F10107D58* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_mEFF21B20BCF8D73B802CFF48B4088B1985CB8AA3_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5* EqualityComparer_1_get_Default_m06ACB88BDADF7BC3AAB4663C877CD1AA2ADAA30D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 WrappedValue_1_get_Value_m67F8E477B0DB16439FB3574C0077EDB0A2743897_gshared_inline (WrappedValue_1_tA1D60AED94DEDD8CF96236CA6946E9FFB5AE1094* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_m0BA8FC436E9F78DCCCA729D80797AEF7B03463B5_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* EqualityComparer_1_get_Default_m1879FDE74BF5D95C5EE4A6BA72777E01D763C60C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 WrappedValue_1_get_Value_m847D91077D31950B94668DC0E75084E39C67F54A_gshared_inline (WrappedValue_1_t62343E85AB28E6EB6CB50590D4E21CA3BCB1789A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_mAEBC06B26971A4CA651E0D0C8E2F5D3C57FAF5B2_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80* EqualityComparer_1_get_Default_mDAD3208D3D489C268E00D308B991A55D92AB2BD7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 WrappedValue_1_get_Value_mA17E95330CF73077B659A6F8730739148215468B_gshared_inline (WrappedValue_1_tE7A8D38DBC847F1C43C2FC9C83DF1BC9D09C0667* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_m2F0D34FEDE151C799EA539AC73DF91D9B53A7D23_gshared (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB* EqualityComparer_1_get_Default_m3D19280994C8052E058E95F202C8537D60128B29_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 WrappedValue_1_get_Value_mF2C9ED6D6B759379CE4506329AC6FE3B823AC9FA_gshared_inline (WrappedValue_1_t3D769C0E18CE756D9F9F3053772D36C6133F9465* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_m17AAF4452771A7C90F57EC64440B88CAC178B082_gshared (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18* EqualityComparer_1_get_Default_mCF5AE443B005C17982581081CC2BAE1250236CA2_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 WrappedValue_1_get_Value_mD39FF4217A2E95D870B4C5F8E68EAF8C64DB5947_gshared_inline (WrappedValue_1_t385843449CB29A743E0A49C3377762B10D94F7D8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_mD93BBB27DA4B62EDF63C8F4F35A12FFFC6AE3CEE_gshared (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5* EqualityComparer_1_get_Default_m2ADE72FA4E9F5488FDAA1AE33E7B7ADD08168152_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 WrappedValue_1_get_Value_mA58485FE891E1CCFA8CC02A4201A8A27DEC7E074_gshared_inline (WrappedValue_1_t3D602AF66C1228250B68787536CF9240F44EF940* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetHashCode_mBAF160D90D1F730D5E2CFB1781C847AF892242BC_gshared (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WrappedValue_1_get_Value_mB00D5A901097E3AFBD209CAD11E5E272E49BDEA2_gshared_inline (WrappedValue_1_t729B27FE79AB1B3B4DAB75E7C1156F458E42E495* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t WrappedValue_1_get_Value_m29CFDE1F43E4655D2350117C261363D206C1BA6B_gshared_inline (WrappedValue_1_t1EB1AAB44E67CBFC009A8C8EA8CA78B7A35A9CB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar WrappedValue_1_get_Value_m03E785FD6CE3D0B244BD9285BDA5E0C0ED26A0DC_gshared_inline (WrappedValue_1_tF7CCFBCFB6DFBCB97BFC8EF0858D0ACEB370AC64* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE* EqualityComparer_1_get_Default_mF4BB724F5222831DB014E8DA90A10FA86ACC0415_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D WrappedValue_1_get_Value_m14D99C8F64B99A298C562600DDAEDA4F67DEBED8_gshared_inline (WrappedValue_1_t73173AF7595A46F664705B4182B0CA0FDF421EC1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44* EqualityComparer_1_get_Default_m5940F55379DF8F2C0717CB910CAA32DD9E69F06E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 WrappedValue_1_get_Value_m2714F9E555808614624D1F44C27548FF2A72E279_gshared_inline (WrappedValue_1_t79C04924BC7586B94EEA70EC82111804416A084D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A* EqualityComparer_1_get_Default_mFDAB2569319FBB5F0B809089CE6413BF798C0677_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F WrappedValue_1_get_Value_mED2E6DF18DADD8DF429DC9C00DDEA667663F9619_gshared_inline (WrappedValue_1_tE2A5ADC91C24730012A0D89E29E766595D5A80CF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* EqualityComparer_1_get_Default_m12CC270D19620F4E8E3ABFE7BF8C2B1955476A04_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double WrappedValue_1_get_Value_mF5B93BD631E7AE43365A68E381210C55F8A062E9_gshared_inline (WrappedValue_1_tD51D6DDD0C09899E1CC6F23E204A0436D5E41A51* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t WrappedValue_1_get_Value_m408948E1C0488F465326AB3758067FA734C27F61_gshared_inline (WrappedValue_1_tDBD2E2AA1CA35EEA618C15496FF2104E7B7CA37B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t WrappedValue_1_get_Value_mF8CDCBAE7311112EB8E7E41DA3D2C42C83BB230C_gshared_inline (WrappedValue_1_tCA5027D3B7F72F98E63929D51B82013C1172B91F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WrappedValue_1_get_Value_mA2C6A04E8446D296296134B42C7AA77D7101E09C_gshared_inline (WrappedValue_1_tDAAEBDEE88F3A8DE06ECA05C1E191368D16FC608* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* EqualityComparer_1_get_Default_m76691DC579907239261E159E4DFDD8B1C3C9E5FE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t WrappedValue_1_get_Value_m3DF887EC7F01D3E293D2EFD20467BE0479D589EA_gshared_inline (WrappedValue_1_tFCFD37F89941250A9CFC19A55B5C1B1C583D5205* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WrappedValue_1_get_Value_mA9FC7D0093C8B91E8BD6A2FF19B5855207CA3342_gshared_inline (WrappedValue_1_t96969F56BF2DAF4FA7A9AD37CC85EDF9C5B48296* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t WrappedValue_1_get_Value_m82EB73B3E4E81D77905F9D425CA3498341CBCFAC_gshared_inline (WrappedValue_1_tF0A4A84D2019A785F6E9BD208CA577199A6A1569* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WrappedValue_1_get_Value_m14CB5C7659D18C6BA603D47917FF24EE856AA54D_gshared_inline (WrappedValue_1_t43451D8A65E3D98CFC11F483300FD6640D70335F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41* EqualityComparer_1_get_Default_m54987862FB97262994FF5257CF4B3E47D9ED5700_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A WrappedValue_1_get_Value_mA3EF12A20538B2E70E7295C035B36552FB6C196A_gshared_inline (WrappedValue_1_tF983A2518D15C724FACBA71A5B53FDE5E005EFD7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t WrappedValue_1_get_Value_m8A872E34244A4E828F6D89950F038FE3E0C82E27_gshared_inline (WrappedValue_1_t9717F9CCB663633CB9B85813A633F18BDEBD5028* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WrappedValue_1_get_Value_mCB61FDD64803251C6BD573BCA23F4FD710A67906_gshared_inline (WrappedValue_1_t428210A061F150CC0822ED9FA2A05CFE14772F5C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t WrappedValue_1_get_Value_m3DBB0EF74B7942CC2E83061AD590EAD6C0AA5443_gshared_inline (WrappedValue_1_t3C9579230F8F7A78F089F1FB7AB8A6471F9DA1B3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8* EqualityComparer_1_CreateComparer_mC94265A152B9B377D877A7F20B11DFBA46C0E06D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2* EqualityComparer_1_CreateComparer_m9FF44C6E5D94BE0C04F0F33546CD3904D0C74B1F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C* EqualityComparer_1_CreateComparer_mCB3927DA01EB7872F7A45A16C5246BFBB3089404_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331* EqualityComparer_1_CreateComparer_m30AB42A41BED45F164EDB09B164801D3E558C06A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E* EqualityComparer_1_CreateComparer_mBF70314A2EC5A2F146D36747EE7431F10691441B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4* EqualityComparer_1_CreateComparer_m914D8986564016370DE8CE88AEDAA9BA65D32656_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* EqualityComparer_1_CreateComparer_m6C9A510DB6C173B969E97CCDD8068052691B223C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041* EqualityComparer_1_CreateComparer_mDA5E49C8521857A45E94FA486C1570A47EA06144_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0* EqualityComparer_1_CreateComparer_mCBC2F5EBDB56D6FEF90AAA989E6280EB87F4B63F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5* EqualityComparer_1_CreateComparer_m2A4CCA3BF5A278473D4E739B5BA81ACEDC6D3E36_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5* EqualityComparer_1_CreateComparer_mC5F2F4D1D82FB977954F70F5F3F44CBCDDD7F05D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* EqualityComparer_1_CreateComparer_m3884FCBAE34EBA4703509EACCD65D3ECE496B895_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80* EqualityComparer_1_CreateComparer_mAF0712E89C354103D1AF44B3C095A1A0EC657F10_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB* EqualityComparer_1_CreateComparer_m42BB9945254BD30979F3BF34F90E2EBC96D5995D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18* EqualityComparer_1_CreateComparer_m872D877FAB897FBF1321820C6178388DE5ECF352_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5* EqualityComparer_1_CreateComparer_m56BD47695516C905856FD5C99480476EB9A92A29_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE* EqualityComparer_1_CreateComparer_m5CF2DA9BBC2FDD1BD2283E230615FF8F1C0130F5_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44* EqualityComparer_1_CreateComparer_mFC293535AE341A11EB4152755FD4F64309B163BF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A* EqualityComparer_1_CreateComparer_m231D2A454EDE2578C201D23F90E3DB1D6D3D5F0F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* EqualityComparer_1_CreateComparer_m66568B441EE3AB73D292C4F4CE1707FBAC360F5A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* EqualityComparer_1_CreateComparer_m8A944543377C40C1596E4EECED12E463FC3DDFC3_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41* EqualityComparer_1_CreateComparer_m54E0CBACEB549B9E1D28AA2BA11D2B7F04DC3B5B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_CreateComparer_m73A019C274DF1E66D30647A3F24ADC27784B7114_gshared (const RuntimeMethod* method) ;

inline void WeakReference_1__ctor_m99141AB321E022D9933448CDD7139BC9FAA443E8 (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, bool ___1_trackResurrection, const RuntimeMethod* method)
{
	((  void (*) (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE*, RuntimeObject*, bool, const RuntimeMethod*))WeakReference_1__ctor_m99141AB321E022D9933448CDD7139BC9FAA443E8_gshared)(__this, ___0_target, ___1_trackResurrection, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___0_value, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_set_Target_m1DB05E14910747D2A74ACEB4C48028C4AEBFCF3D (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
inline void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63 (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared)(__this, method);
}
inline void WhereArrayIterator_1__ctor_mC17BAA23BA92C7455512FDA5B1618C6D2B54ACA2 (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))WhereArrayIterator_1__ctor_mC17BAA23BA92C7455512FDA5B1618C6D2B54ACA2_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline)(__this, ___0_arg, method);
}
inline Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* Enumerable_CombinePredicates_TisRuntimeObject_m613479C29B013E8FC2987E22F42A3BC6CC2C9768 (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate1, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate2, const RuntimeMethod* method)
{
	return ((  Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))Enumerable_CombinePredicates_TisRuntimeObject_m613479C29B013E8FC2987E22F42A3BC6CC2C9768_gshared)(___0_predicate1, ___1_predicate2, method);
}
inline void Iterator_1__ctor_m82B17BDE54CDD809DF119425803C4B65CDEE115F (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*, const RuntimeMethod*))Iterator_1__ctor_m82B17BDE54CDD809DF119425803C4B65CDEE115F_gshared)(__this, method);
}
inline void WhereEnumerableIterator_1__ctor_mBA5C8B874F6A1A8AD981C46A7D054B5135517C43 (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* __this, RuntimeObject* ___0_source, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039*, RuntimeObject*, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mBA5C8B874F6A1A8AD981C46A7D054B5135517C43_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1_Dispose_mA5FEAFCF23A3AE46B5054859D4C7C40259FCCE5E (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*, const RuntimeMethod*))Iterator_1_Dispose_mA5FEAFCF23A3AE46B5054859D4C7C40259FCCE5E_gshared)(__this, method);
}
inline bool Func_2_Invoke_m4733F0A0FE136C9F8DCE4963455215585E8BE2CD_inline (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* __this, Il2CppChar ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Il2CppChar, const RuntimeMethod*))Func_2_Invoke_m4733F0A0FE136C9F8DCE4963455215585E8BE2CD_gshared_inline)(__this, ___0_arg, method);
}
inline Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* Enumerable_CombinePredicates_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8D26C321E5E8644D931AB49CCA9445628281A4B5 (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___0_predicate1, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate2, const RuntimeMethod* method)
{
	return ((  Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* (*) (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, const RuntimeMethod*))Enumerable_CombinePredicates_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8D26C321E5E8644D931AB49CCA9445628281A4B5_gshared)(___0_predicate1, ___1_predicate2, method);
}
inline void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01 (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1_Dispose_m953BCF886C8A63456821023DBA45EBD9AC44EB07 (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))Iterator_1_Dispose_m953BCF886C8A63456821023DBA45EBD9AC44EB07_gshared)(__this, method);
}
inline void WhereListIterator_1__ctor_mEF8F62B9078E538C1DC46BCB876C2AC5B29EA73B (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))WhereListIterator_1__ctor_mEF8F62B9078E538C1DC46BCB876C2AC5B29EA73B_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
inline void WhereSelectArrayIterator_2__ctor_m3E9E4C07B1F3F6CC6A54D7DEC571B2D35BBB1515 (WhereSelectArrayIterator_2_t60DB48D26CC6C2C9B2E2ED4947D4C563324DC49A* __this, KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_source, Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* ___1_predicate, Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_t60DB48D26CC6C2C9B2E2ED4947D4C563324DC49A*, KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3*, Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E*, Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_m3E9E4C07B1F3F6CC6A54D7DEC571B2D35BBB1515_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline bool Func_2_Invoke_mECD514E493F9F65FC71FE3556ADE0A2E6419C03D_inline (Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E*, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8, const RuntimeMethod*))Func_2_Invoke_mECD514E493F9F65FC71FE3556ADE0A2E6419C03D_gshared_inline)(__this, ___0_arg, method);
}
inline RuntimeObject* Func_2_Invoke_m1D654CA41A2FC43EECC21031D6623DB89679596A_inline (Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C*, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8, const RuntimeMethod*))Func_2_Invoke_m1D654CA41A2FC43EECC21031D6623DB89679596A_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectArrayIterator_2__ctor_m9E856676CD28C48E31CDFFD36878CEB9894EA7EA (WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_source, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate, Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Func_2_t98484B0812610F727324B05DF0039164FD39A4E7*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_m9E856676CD28C48E31CDFFD36878CEB9894EA7EA_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Il2CppChar Func_2_Invoke_mF0637A69B6444509F1E28F469D561339E1F8636F_inline (Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* __this, Il2CppChar ___0_arg, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (Func_2_t98484B0812610F727324B05DF0039164FD39A4E7*, Il2CppChar, const RuntimeMethod*))Func_2_Invoke_mF0637A69B6444509F1E28F469D561339E1F8636F_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectArrayIterator_2__ctor_m3660F197ECE4BF2A6F8BC99BC8BEF585C9D7BF97 (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_m3660F197ECE4BF2A6F8BC99BC8BEF585C9D7BF97_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_m02FC5BD5A7E202C5D01C6B3803417980DFC0995D (WhereSelectEnumerableIterator_2_t96BA0BD35D43BFEC26C4BE0C50B1B50C7E0FEB5B* __this, RuntimeObject* ___0_source, Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* ___1_predicate, Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_t96BA0BD35D43BFEC26C4BE0C50B1B50C7E0FEB5B*, RuntimeObject*, Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E*, Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_m02FC5BD5A7E202C5D01C6B3803417980DFC0995D_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_m88FD7312A33F197FDDED392F8CEED6049D1FE991 (WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523* __this, RuntimeObject* ___0_source, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate, Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523*, RuntimeObject*, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Func_2_t98484B0812610F727324B05DF0039164FD39A4E7*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_m88FD7312A33F197FDDED392F8CEED6049D1FE991_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_m2E08505C4CB96CC2AD340B4A2B0D3BF0D6DA01F9 (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_m2E08505C4CB96CC2AD340B4A2B0D3BF0D6DA01F9_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectListIterator_2__ctor_m15BA8C7F93A5644C6398735BDD39FF23CEB6D0E8 (WhereSelectListIterator_2_t3BFC51AF95F35D0B4877B7FA08D62BC4BD05AD02* __this, List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* ___0_source, Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* ___1_predicate, Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t3BFC51AF95F35D0B4877B7FA08D62BC4BD05AD02*, List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E*, Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m15BA8C7F93A5644C6398735BDD39FF23CEB6D0E8_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39 List_1_GetEnumerator_mA470FE029F16C9C2CF4CF4B94F44C54DE0EDE84A (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39 (*) (List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B*, const RuntimeMethod*))List_1_GetEnumerator_mA470FE029F16C9C2CF4CF4B94F44C54DE0EDE84A_gshared)(__this, method);
}
inline KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 Enumerator_get_Current_m7362387DF032E42E572F7041F4C1A3CD21679DCD_inline (Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 (*) (Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39*, const RuntimeMethod*))Enumerator_get_Current_m7362387DF032E42E572F7041F4C1A3CD21679DCD_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mDE2B6C6EB1965BF7A51BC0785BAA55A818EDD46F (Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39*, const RuntimeMethod*))Enumerator_MoveNext_mDE2B6C6EB1965BF7A51BC0785BAA55A818EDD46F_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m464A0F88FBC476834CFEC766528072F8B4B4C8B8 (WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675* __this, List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___0_source, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate, Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675*, List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Func_2_t98484B0812610F727324B05DF0039164FD39A4E7*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m464A0F88FBC476834CFEC766528072F8B4B4C8B8_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D List_1_GetEnumerator_m4FD62856A4FB2E97031D88470D704316F1DCD928 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))List_1_GetEnumerator_m4FD62856A4FB2E97031D88470D704316F1DCD928_gshared)(__this, method);
}
inline Il2CppChar Enumerator_get_Current_m50891A1A1A5F69FFF0D667B82BD22B8658F1A6E7_inline (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D*, const RuntimeMethod*))Enumerator_get_Current_m50891A1A1A5F69FFF0D667B82BD22B8658F1A6E7_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mEB23589F285449D3A1439C810FB122ECDD2FFAC2 (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D*, const RuntimeMethod*))Enumerator_MoveNext_mEB23589F285449D3A1439C810FB122ECDD2FFAC2_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8* EqualityComparer_1_get_Default_m580F3ACD89A4B05DD1CC6BE2C290108F9AA790C6_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m580F3ACD89A4B05DD1CC6BE2C290108F9AA790C6_gshared_inline)(method);
}
inline Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 WrappedValue_1_get_Value_mEFEF2030836DFC681FD0C1069BF11380F0EF66F3_inline (WrappedValue_1_t038BEFC004F46FAB767F45F8815E8432F8FE798F* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 (*) (WrappedValue_1_t038BEFC004F46FAB767F45F8815E8432F8FE798F*, const RuntimeMethod*))WrappedValue_1_get_Value_mEFEF2030836DFC681FD0C1069BF11380F0EF66F3_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetHashCode_m2AFEAD36F48D2F5DE8ECE59A6D10D73B229DDAC7 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_GetHashCode_m2AFEAD36F48D2F5DE8ECE59A6D10D73B229DDAC7_gshared)(__this, method);
}
inline EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2* EqualityComparer_1_get_Default_m53444E492B798009A5D017FC35049EF3DBB7356F_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m53444E492B798009A5D017FC35049EF3DBB7356F_gshared_inline)(method);
}
inline Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 WrappedValue_1_get_Value_m1AD9FBAF561601DD04BDBEDDFCEBBD8CF8DE6097_inline (WrappedValue_1_tEECC84FD02441C3B391CBDBF2865E5B168BB895C* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 (*) (WrappedValue_1_tEECC84FD02441C3B391CBDBF2865E5B168BB895C*, const RuntimeMethod*))WrappedValue_1_get_Value_m1AD9FBAF561601DD04BDBEDDFCEBBD8CF8DE6097_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetHashCode_m19A63A75A12D6B320BE3429B01E987325706ECA2 (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505*, const RuntimeMethod*))Nullable_1_GetHashCode_m19A63A75A12D6B320BE3429B01E987325706ECA2_gshared)(__this, method);
}
inline EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C* EqualityComparer_1_get_Default_mE883532964DB2B0FBAD3168E1FDE2A79C2D3D8EF_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mE883532964DB2B0FBAD3168E1FDE2A79C2D3D8EF_gshared_inline)(method);
}
inline Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 WrappedValue_1_get_Value_m8FDAC1ED0CEFA215AA92A6D6D5AC5A4D7C84B6AC_inline (WrappedValue_1_t02F152AD1C2A0D08E54E3E5762D46667B7CF94C5* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 (*) (WrappedValue_1_t02F152AD1C2A0D08E54E3E5762D46667B7CF94C5*, const RuntimeMethod*))WrappedValue_1_get_Value_m8FDAC1ED0CEFA215AA92A6D6D5AC5A4D7C84B6AC_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetHashCode_mBEB6A6F482339D2259F6E306C2367CC2047F4D6E (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1*, const RuntimeMethod*))Nullable_1_GetHashCode_mBEB6A6F482339D2259F6E306C2367CC2047F4D6E_gshared)(__this, method);
}
inline EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331* EqualityComparer_1_get_Default_mEE0F7E7E6B5F46413743A1D60FDCA1E1C867A464_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mEE0F7E7E6B5F46413743A1D60FDCA1E1C867A464_gshared_inline)(method);
}
inline Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC WrappedValue_1_get_Value_mB7A5F1ACB34B427EB7B305D08295EE8F39889FE8_inline (WrappedValue_1_tC6DF74086B33736065E471AB6DFBA4C382D9ECB9* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC (*) (WrappedValue_1_tC6DF74086B33736065E471AB6DFBA4C382D9ECB9*, const RuntimeMethod*))WrappedValue_1_get_Value_mB7A5F1ACB34B427EB7B305D08295EE8F39889FE8_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetHashCode_mB41C0A37C509DA525A8C03D8776DC6AEF6C41C47 (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC*, const RuntimeMethod*))Nullable_1_GetHashCode_mB41C0A37C509DA525A8C03D8776DC6AEF6C41C47_gshared)(__this, method);
}
inline EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E* EqualityComparer_1_get_Default_m9365807624DE89FD1CC20935AA1CE1055358D494_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m9365807624DE89FD1CC20935AA1CE1055358D494_gshared_inline)(method);
}
inline Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B WrappedValue_1_get_Value_mB1682F4DAEA23DBA3201A740469AF3470BB2A8C9_inline (WrappedValue_1_t6A86A69A5D7E4F05512B9460B09FEFBEACEB405E* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B (*) (WrappedValue_1_t6A86A69A5D7E4F05512B9460B09FEFBEACEB405E*, const RuntimeMethod*))WrappedValue_1_get_Value_mB1682F4DAEA23DBA3201A740469AF3470BB2A8C9_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetHashCode_m4AF9EC5FD0E6DB4DA457D30E32A66536F3708C87 (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B*, const RuntimeMethod*))Nullable_1_GetHashCode_m4AF9EC5FD0E6DB4DA457D30E32A66536F3708C87_gshared)(__this, method);
}
inline EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4* EqualityComparer_1_get_Default_m1E5BD6D8FD7F1D2FF85113EF07641DE62EEB4519_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m1E5BD6D8FD7F1D2FF85113EF07641DE62EEB4519_gshared_inline)(method);
}
inline Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB WrappedValue_1_get_Value_m67ECE63E767B78EFB8EB84EB99AE96B757BF60F6_inline (WrappedValue_1_tF789D1365EFD286B9985361743A35348AEB43F16* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB (*) (WrappedValue_1_tF789D1365EFD286B9985361743A35348AEB43F16*, const RuntimeMethod*))WrappedValue_1_get_Value_m67ECE63E767B78EFB8EB84EB99AE96B757BF60F6_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetHashCode_mCB8328716B83ABF1959C9094829EC83EF7DAA3DB (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*, const RuntimeMethod*))Nullable_1_GetHashCode_mCB8328716B83ABF1959C9094829EC83EF7DAA3DB_gshared)(__this, method);
}
inline EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* EqualityComparer_1_get_Default_m13DD6F4C665FB5BD7AF62F9FE1F51848D35211BA_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m13DD6F4C665FB5BD7AF62F9FE1F51848D35211BA_gshared_inline)(method);
}
inline Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 WrappedValue_1_get_Value_mCADADF22F761D0759D60D12328B040BB3EFA2689_inline (WrappedValue_1_t05C6D0355A089F3AC2424F605AD1C521B11AFBC8* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 (*) (WrappedValue_1_t05C6D0355A089F3AC2424F605AD1C521B11AFBC8*, const RuntimeMethod*))WrappedValue_1_get_Value_mCADADF22F761D0759D60D12328B040BB3EFA2689_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetHashCode_m4DA928BE4A77EB6BCFBBBA297191CC071DDDDC12 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_GetHashCode_m4DA928BE4A77EB6BCFBBBA297191CC071DDDDC12_gshared)(__this, method);
}
inline EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041* EqualityComparer_1_get_Default_m735D02B82383F0158CFB46E97E87BE2DA8D582BA_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m735D02B82383F0158CFB46E97E87BE2DA8D582BA_gshared_inline)(method);
}
inline Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 WrappedValue_1_get_Value_m23135D15AC8CC5E111A31F086CF84051BFCADBB6_inline (WrappedValue_1_t2B578379719E1F9499D751FEB82BA72226B668C6* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 (*) (WrappedValue_1_t2B578379719E1F9499D751FEB82BA72226B668C6*, const RuntimeMethod*))WrappedValue_1_get_Value_m23135D15AC8CC5E111A31F086CF84051BFCADBB6_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetHashCode_m11DB651F5399C16C4775AEECFC159BF929C95C0D (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7*, const RuntimeMethod*))Nullable_1_GetHashCode_m11DB651F5399C16C4775AEECFC159BF929C95C0D_gshared)(__this, method);
}
inline EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0* EqualityComparer_1_get_Default_mE72B25D9A32B5E5D05D89D4A159A2E0FA149CC15_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mE72B25D9A32B5E5D05D89D4A159A2E0FA149CC15_gshared_inline)(method);
}
inline Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C WrappedValue_1_get_Value_mF6D6B66C73587731BA99590E798278E9153E697E_inline (WrappedValue_1_tD35A3788939F50F1E2A2720D91649A0AF6B826BD* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C (*) (WrappedValue_1_tD35A3788939F50F1E2A2720D91649A0AF6B826BD*, const RuntimeMethod*))WrappedValue_1_get_Value_mF6D6B66C73587731BA99590E798278E9153E697E_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetHashCode_m79DB169E37CDABFFD799FE526DB816C29A422387 (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C*, const RuntimeMethod*))Nullable_1_GetHashCode_m79DB169E37CDABFFD799FE526DB816C29A422387_gshared)(__this, method);
}
inline EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5* EqualityComparer_1_get_Default_m2335E4A9C135593934E9CC78A2DDB9D50307D29C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m2335E4A9C135593934E9CC78A2DDB9D50307D29C_gshared_inline)(method);
}
inline Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 WrappedValue_1_get_Value_mDFC09AB2FD93C911603F8A216FF0DD2D73DD53E5_inline (WrappedValue_1_t5FD375EA11518E6140F855B737BD2E9F10107D58* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 (*) (WrappedValue_1_t5FD375EA11518E6140F855B737BD2E9F10107D58*, const RuntimeMethod*))WrappedValue_1_get_Value_mDFC09AB2FD93C911603F8A216FF0DD2D73DD53E5_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetHashCode_mEFF21B20BCF8D73B802CFF48B4088B1985CB8AA3 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetHashCode_mEFF21B20BCF8D73B802CFF48B4088B1985CB8AA3_gshared)(__this, method);
}
inline EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5* EqualityComparer_1_get_Default_m06ACB88BDADF7BC3AAB4663C877CD1AA2ADAA30D_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m06ACB88BDADF7BC3AAB4663C877CD1AA2ADAA30D_gshared_inline)(method);
}
inline Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 WrappedValue_1_get_Value_m67F8E477B0DB16439FB3574C0077EDB0A2743897_inline (WrappedValue_1_tA1D60AED94DEDD8CF96236CA6946E9FFB5AE1094* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 (*) (WrappedValue_1_tA1D60AED94DEDD8CF96236CA6946E9FFB5AE1094*, const RuntimeMethod*))WrappedValue_1_get_Value_m67F8E477B0DB16439FB3574C0077EDB0A2743897_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetHashCode_m0BA8FC436E9F78DCCCA729D80797AEF7B03463B5 (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_GetHashCode_m0BA8FC436E9F78DCCCA729D80797AEF7B03463B5_gshared)(__this, method);
}
inline EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* EqualityComparer_1_get_Default_m1879FDE74BF5D95C5EE4A6BA72777E01D763C60C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m1879FDE74BF5D95C5EE4A6BA72777E01D763C60C_gshared_inline)(method);
}
inline Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 WrappedValue_1_get_Value_m847D91077D31950B94668DC0E75084E39C67F54A_inline (WrappedValue_1_t62343E85AB28E6EB6CB50590D4E21CA3BCB1789A* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 (*) (WrappedValue_1_t62343E85AB28E6EB6CB50590D4E21CA3BCB1789A*, const RuntimeMethod*))WrappedValue_1_get_Value_m847D91077D31950B94668DC0E75084E39C67F54A_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetHashCode_mAEBC06B26971A4CA651E0D0C8E2F5D3C57FAF5B2 (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_GetHashCode_mAEBC06B26971A4CA651E0D0C8E2F5D3C57FAF5B2_gshared)(__this, method);
}
inline EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80* EqualityComparer_1_get_Default_mDAD3208D3D489C268E00D308B991A55D92AB2BD7_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mDAD3208D3D489C268E00D308B991A55D92AB2BD7_gshared_inline)(method);
}
inline Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 WrappedValue_1_get_Value_mA17E95330CF73077B659A6F8730739148215468B_inline (WrappedValue_1_tE7A8D38DBC847F1C43C2FC9C83DF1BC9D09C0667* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 (*) (WrappedValue_1_tE7A8D38DBC847F1C43C2FC9C83DF1BC9D09C0667*, const RuntimeMethod*))WrappedValue_1_get_Value_mA17E95330CF73077B659A6F8730739148215468B_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetHashCode_m2F0D34FEDE151C799EA539AC73DF91D9B53A7D23 (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, const RuntimeMethod*))Nullable_1_GetHashCode_m2F0D34FEDE151C799EA539AC73DF91D9B53A7D23_gshared)(__this, method);
}
inline EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB* EqualityComparer_1_get_Default_m3D19280994C8052E058E95F202C8537D60128B29_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m3D19280994C8052E058E95F202C8537D60128B29_gshared_inline)(method);
}
inline Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 WrappedValue_1_get_Value_mF2C9ED6D6B759379CE4506329AC6FE3B823AC9FA_inline (WrappedValue_1_t3D769C0E18CE756D9F9F3053772D36C6133F9465* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 (*) (WrappedValue_1_t3D769C0E18CE756D9F9F3053772D36C6133F9465*, const RuntimeMethod*))WrappedValue_1_get_Value_mF2C9ED6D6B759379CE4506329AC6FE3B823AC9FA_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetHashCode_m17AAF4452771A7C90F57EC64440B88CAC178B082 (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9*, const RuntimeMethod*))Nullable_1_GetHashCode_m17AAF4452771A7C90F57EC64440B88CAC178B082_gshared)(__this, method);
}
inline EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18* EqualityComparer_1_get_Default_mCF5AE443B005C17982581081CC2BAE1250236CA2_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mCF5AE443B005C17982581081CC2BAE1250236CA2_gshared_inline)(method);
}
inline Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 WrappedValue_1_get_Value_mD39FF4217A2E95D870B4C5F8E68EAF8C64DB5947_inline (WrappedValue_1_t385843449CB29A743E0A49C3377762B10D94F7D8* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 (*) (WrappedValue_1_t385843449CB29A743E0A49C3377762B10D94F7D8*, const RuntimeMethod*))WrappedValue_1_get_Value_mD39FF4217A2E95D870B4C5F8E68EAF8C64DB5947_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetHashCode_mD93BBB27DA4B62EDF63C8F4F35A12FFFC6AE3CEE (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099*, const RuntimeMethod*))Nullable_1_GetHashCode_mD93BBB27DA4B62EDF63C8F4F35A12FFFC6AE3CEE_gshared)(__this, method);
}
inline EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5* EqualityComparer_1_get_Default_m2ADE72FA4E9F5488FDAA1AE33E7B7ADD08168152_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m2ADE72FA4E9F5488FDAA1AE33E7B7ADD08168152_gshared_inline)(method);
}
inline Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 WrappedValue_1_get_Value_mA58485FE891E1CCFA8CC02A4201A8A27DEC7E074_inline (WrappedValue_1_t3D602AF66C1228250B68787536CF9240F44EF940* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 (*) (WrappedValue_1_t3D602AF66C1228250B68787536CF9240F44EF940*, const RuntimeMethod*))WrappedValue_1_get_Value_mA58485FE891E1CCFA8CC02A4201A8A27DEC7E074_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetHashCode_mBAF160D90D1F730D5E2CFB1781C847AF892242BC (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99*, const RuntimeMethod*))Nullable_1_GetHashCode_mBAF160D90D1F730D5E2CFB1781C847AF892242BC_gshared)(__this, method);
}
inline EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline)(method);
}
inline bool WrappedValue_1_get_Value_mB00D5A901097E3AFBD209CAD11E5E272E49BDEA2_inline (WrappedValue_1_t729B27FE79AB1B3B4DAB75E7C1156F458E42E495* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (WrappedValue_1_t729B27FE79AB1B3B4DAB75E7C1156F458E42E495*, const RuntimeMethod*))WrappedValue_1_get_Value_mB00D5A901097E3AFBD209CAD11E5E272E49BDEA2_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline)(method);
}
inline uint8_t WrappedValue_1_get_Value_m29CFDE1F43E4655D2350117C261363D206C1BA6B_inline (WrappedValue_1_t1EB1AAB44E67CBFC009A8C8EA8CA78B7A35A9CB1* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (WrappedValue_1_t1EB1AAB44E67CBFC009A8C8EA8CA78B7A35A9CB1*, const RuntimeMethod*))WrappedValue_1_get_Value_m29CFDE1F43E4655D2350117C261363D206C1BA6B_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline)(method);
}
inline Il2CppChar WrappedValue_1_get_Value_m03E785FD6CE3D0B244BD9285BDA5E0C0ED26A0DC_inline (WrappedValue_1_tF7CCFBCFB6DFBCB97BFC8EF0858D0ACEB370AC64* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (WrappedValue_1_tF7CCFBCFB6DFBCB97BFC8EF0858D0ACEB370AC64*, const RuntimeMethod*))WrappedValue_1_get_Value_m03E785FD6CE3D0B244BD9285BDA5E0C0ED26A0DC_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Char_GetHashCode_mB5406F7D8B6D7545CD1CE6FCA0567BD7217E6B93 (Il2CppChar* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE* EqualityComparer_1_get_Default_mF4BB724F5222831DB014E8DA90A10FA86ACC0415_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF4BB724F5222831DB014E8DA90A10FA86ACC0415_gshared_inline)(method);
}
inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D WrappedValue_1_get_Value_m14D99C8F64B99A298C562600DDAEDA4F67DEBED8_inline (WrappedValue_1_t73173AF7595A46F664705B4182B0CA0FDF421EC1* __this, const RuntimeMethod* method)
{
	return ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D (*) (WrappedValue_1_t73173AF7595A46F664705B4182B0CA0FDF421EC1*, const RuntimeMethod*))WrappedValue_1_get_Value_m14D99C8F64B99A298C562600DDAEDA4F67DEBED8_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_GetHashCode_m206A3B9394E6D089311A1A81305A5A1AB30B2D99 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44* EqualityComparer_1_get_Default_m5940F55379DF8F2C0717CB910CAA32DD9E69F06E_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m5940F55379DF8F2C0717CB910CAA32DD9E69F06E_gshared_inline)(method);
}
inline DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 WrappedValue_1_get_Value_m2714F9E555808614624D1F44C27548FF2A72E279_inline (WrappedValue_1_t79C04924BC7586B94EEA70EC82111804416A084D* __this, const RuntimeMethod* method)
{
	return ((  DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 (*) (WrappedValue_1_t79C04924BC7586B94EEA70EC82111804416A084D*, const RuntimeMethod*))WrappedValue_1_get_Value_m2714F9E555808614624D1F44C27548FF2A72E279_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTimeOffset_GetHashCode_mD133F5089095D2C75A1B7C90D71D62D39F0D11CD (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A* EqualityComparer_1_get_Default_mFDAB2569319FBB5F0B809089CE6413BF798C0677_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mFDAB2569319FBB5F0B809089CE6413BF798C0677_gshared_inline)(method);
}
inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F WrappedValue_1_get_Value_mED2E6DF18DADD8DF429DC9C00DDEA667663F9619_inline (WrappedValue_1_tE2A5ADC91C24730012A0D89E29E766595D5A80CF* __this, const RuntimeMethod* method)
{
	return ((  Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F (*) (WrappedValue_1_tE2A5ADC91C24730012A0D89E29E766595D5A80CF*, const RuntimeMethod*))WrappedValue_1_get_Value_mED2E6DF18DADD8DF429DC9C00DDEA667663F9619_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Decimal_GetHashCode_m66F324087D323E0783EA339024D989FF5568E960 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* EqualityComparer_1_get_Default_m12CC270D19620F4E8E3ABFE7BF8C2B1955476A04_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m12CC270D19620F4E8E3ABFE7BF8C2B1955476A04_gshared_inline)(method);
}
inline double WrappedValue_1_get_Value_mF5B93BD631E7AE43365A68E381210C55F8A062E9_inline (WrappedValue_1_tD51D6DDD0C09899E1CC6F23E204A0436D5E41A51* __this, const RuntimeMethod* method)
{
	return ((  double (*) (WrappedValue_1_tD51D6DDD0C09899E1CC6F23E204A0436D5E41A51*, const RuntimeMethod*))WrappedValue_1_get_Value_mF5B93BD631E7AE43365A68E381210C55F8A062E9_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_gshared_inline)(method);
}
inline Guid_t WrappedValue_1_get_Value_m408948E1C0488F465326AB3758067FA734C27F61_inline (WrappedValue_1_tDBD2E2AA1CA35EEA618C15496FF2104E7B7CA37B* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (WrappedValue_1_tDBD2E2AA1CA35EEA618C15496FF2104E7B7CA37B*, const RuntimeMethod*))WrappedValue_1_get_Value_m408948E1C0488F465326AB3758067FA734C27F61_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline)(method);
}
inline int16_t WrappedValue_1_get_Value_mF8CDCBAE7311112EB8E7E41DA3D2C42C83BB230C_inline (WrappedValue_1_tCA5027D3B7F72F98E63929D51B82013C1172B91F* __this, const RuntimeMethod* method)
{
	return ((  int16_t (*) (WrappedValue_1_tCA5027D3B7F72F98E63929D51B82013C1172B91F*, const RuntimeMethod*))WrappedValue_1_get_Value_mF8CDCBAE7311112EB8E7E41DA3D2C42C83BB230C_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1 (int16_t* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline)(method);
}
inline int32_t WrappedValue_1_get_Value_mA2C6A04E8446D296296134B42C7AA77D7101E09C_inline (WrappedValue_1_tDAAEBDEE88F3A8DE06ECA05C1E191368D16FC608* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WrappedValue_1_tDAAEBDEE88F3A8DE06ECA05C1E191368D16FC608*, const RuntimeMethod*))WrappedValue_1_get_Value_mA2C6A04E8446D296296134B42C7AA77D7101E09C_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* EqualityComparer_1_get_Default_m76691DC579907239261E159E4DFDD8B1C3C9E5FE_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m76691DC579907239261E159E4DFDD8B1C3C9E5FE_gshared_inline)(method);
}
inline int64_t WrappedValue_1_get_Value_m3DF887EC7F01D3E293D2EFD20467BE0479D589EA_inline (WrappedValue_1_tFCFD37F89941250A9CFC19A55B5C1B1C583D5205* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (WrappedValue_1_tFCFD37F89941250A9CFC19A55B5C1B1C583D5205*, const RuntimeMethod*))WrappedValue_1_get_Value_m3DF887EC7F01D3E293D2EFD20467BE0479D589EA_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline RuntimeObject* WrappedValue_1_get_Value_mA9FC7D0093C8B91E8BD6A2FF19B5855207CA3342_inline (WrappedValue_1_t96969F56BF2DAF4FA7A9AD37CC85EDF9C5B48296* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (WrappedValue_1_t96969F56BF2DAF4FA7A9AD37CC85EDF9C5B48296*, const RuntimeMethod*))WrappedValue_1_get_Value_mA9FC7D0093C8B91E8BD6A2FF19B5855207CA3342_gshared_inline)(__this, method);
}
inline EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline)(method);
}
inline int8_t WrappedValue_1_get_Value_m82EB73B3E4E81D77905F9D425CA3498341CBCFAC_inline (WrappedValue_1_tF0A4A84D2019A785F6E9BD208CA577199A6A1569* __this, const RuntimeMethod* method)
{
	return ((  int8_t (*) (WrappedValue_1_tF0A4A84D2019A785F6E9BD208CA577199A6A1569*, const RuntimeMethod*))WrappedValue_1_get_Value_m82EB73B3E4E81D77905F9D425CA3498341CBCFAC_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF (int8_t* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline)(method);
}
inline float WrappedValue_1_get_Value_m14CB5C7659D18C6BA603D47917FF24EE856AA54D_inline (WrappedValue_1_t43451D8A65E3D98CFC11F483300FD6640D70335F* __this, const RuntimeMethod* method)
{
	return ((  float (*) (WrappedValue_1_t43451D8A65E3D98CFC11F483300FD6640D70335F*, const RuntimeMethod*))WrappedValue_1_get_Value_m14CB5C7659D18C6BA603D47917FF24EE856AA54D_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41* EqualityComparer_1_get_Default_m54987862FB97262994FF5257CF4B3E47D9ED5700_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m54987862FB97262994FF5257CF4B3E47D9ED5700_gshared_inline)(method);
}
inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A WrappedValue_1_get_Value_mA3EF12A20538B2E70E7295C035B36552FB6C196A_inline (WrappedValue_1_tF983A2518D15C724FACBA71A5B53FDE5E005EFD7* __this, const RuntimeMethod* method)
{
	return ((  TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A (*) (WrappedValue_1_tF983A2518D15C724FACBA71A5B53FDE5E005EFD7*, const RuntimeMethod*))WrappedValue_1_get_Value_mA3EF12A20538B2E70E7295C035B36552FB6C196A_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_GetHashCode_m2CBBAD27522E17FE6006390ED0E3874676CAA76D (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline)(method);
}
inline uint16_t WrappedValue_1_get_Value_m8A872E34244A4E828F6D89950F038FE3E0C82E27_inline (WrappedValue_1_t9717F9CCB663633CB9B85813A633F18BDEBD5028* __this, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (WrappedValue_1_t9717F9CCB663633CB9B85813A633F18BDEBD5028*, const RuntimeMethod*))WrappedValue_1_get_Value_m8A872E34244A4E828F6D89950F038FE3E0C82E27_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200 (uint16_t* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_gshared_inline)(method);
}
inline uint32_t WrappedValue_1_get_Value_mCB61FDD64803251C6BD573BCA23F4FD710A67906_inline (WrappedValue_1_t428210A061F150CC0822ED9FA2A05CFE14772F5C* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (WrappedValue_1_t428210A061F150CC0822ED9FA2A05CFE14772F5C*, const RuntimeMethod*))WrappedValue_1_get_Value_mCB61FDD64803251C6BD573BCA23F4FD710A67906_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_gshared_inline)(method);
}
inline uint64_t WrappedValue_1_get_Value_m3DBB0EF74B7942CC2E83061AD590EAD6C0AA5443_inline (WrappedValue_1_t3C9579230F8F7A78F089F1FB7AB8A6471F9DA1B3* __this, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (WrappedValue_1_t3C9579230F8F7A78F089F1FB7AB8A6471F9DA1B3*, const RuntimeMethod*))WrappedValue_1_get_Value_m3DBB0EF74B7942CC2E83061AD590EAD6C0AA5443_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) ;
inline EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8* EqualityComparer_1_CreateComparer_mC94265A152B9B377D877A7F20B11DFBA46C0E06D (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mC94265A152B9B377D877A7F20B11DFBA46C0E06D_gshared)(method);
}
inline EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2* EqualityComparer_1_CreateComparer_m9FF44C6E5D94BE0C04F0F33546CD3904D0C74B1F (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m9FF44C6E5D94BE0C04F0F33546CD3904D0C74B1F_gshared)(method);
}
inline EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C* EqualityComparer_1_CreateComparer_mCB3927DA01EB7872F7A45A16C5246BFBB3089404 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mCB3927DA01EB7872F7A45A16C5246BFBB3089404_gshared)(method);
}
inline EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331* EqualityComparer_1_CreateComparer_m30AB42A41BED45F164EDB09B164801D3E558C06A (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m30AB42A41BED45F164EDB09B164801D3E558C06A_gshared)(method);
}
inline EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E* EqualityComparer_1_CreateComparer_mBF70314A2EC5A2F146D36747EE7431F10691441B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mBF70314A2EC5A2F146D36747EE7431F10691441B_gshared)(method);
}
inline EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4* EqualityComparer_1_CreateComparer_m914D8986564016370DE8CE88AEDAA9BA65D32656 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m914D8986564016370DE8CE88AEDAA9BA65D32656_gshared)(method);
}
inline EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* EqualityComparer_1_CreateComparer_m6C9A510DB6C173B969E97CCDD8068052691B223C (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m6C9A510DB6C173B969E97CCDD8068052691B223C_gshared)(method);
}
inline EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041* EqualityComparer_1_CreateComparer_mDA5E49C8521857A45E94FA486C1570A47EA06144 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mDA5E49C8521857A45E94FA486C1570A47EA06144_gshared)(method);
}
inline EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0* EqualityComparer_1_CreateComparer_mCBC2F5EBDB56D6FEF90AAA989E6280EB87F4B63F (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mCBC2F5EBDB56D6FEF90AAA989E6280EB87F4B63F_gshared)(method);
}
inline EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5* EqualityComparer_1_CreateComparer_m2A4CCA3BF5A278473D4E739B5BA81ACEDC6D3E36 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m2A4CCA3BF5A278473D4E739B5BA81ACEDC6D3E36_gshared)(method);
}
inline EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5* EqualityComparer_1_CreateComparer_mC5F2F4D1D82FB977954F70F5F3F44CBCDDD7F05D (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mC5F2F4D1D82FB977954F70F5F3F44CBCDDD7F05D_gshared)(method);
}
inline EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* EqualityComparer_1_CreateComparer_m3884FCBAE34EBA4703509EACCD65D3ECE496B895 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m3884FCBAE34EBA4703509EACCD65D3ECE496B895_gshared)(method);
}
inline EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80* EqualityComparer_1_CreateComparer_mAF0712E89C354103D1AF44B3C095A1A0EC657F10 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mAF0712E89C354103D1AF44B3C095A1A0EC657F10_gshared)(method);
}
inline EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB* EqualityComparer_1_CreateComparer_m42BB9945254BD30979F3BF34F90E2EBC96D5995D (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m42BB9945254BD30979F3BF34F90E2EBC96D5995D_gshared)(method);
}
inline EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18* EqualityComparer_1_CreateComparer_m872D877FAB897FBF1321820C6178388DE5ECF352 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m872D877FAB897FBF1321820C6178388DE5ECF352_gshared)(method);
}
inline EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5* EqualityComparer_1_CreateComparer_m56BD47695516C905856FD5C99480476EB9A92A29 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m56BD47695516C905856FD5C99480476EB9A92A29_gshared)(method);
}
inline EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66_gshared)(method);
}
inline EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377_gshared)(method);
}
inline EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93_gshared)(method);
}
inline EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE* EqualityComparer_1_CreateComparer_m5CF2DA9BBC2FDD1BD2283E230615FF8F1C0130F5 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m5CF2DA9BBC2FDD1BD2283E230615FF8F1C0130F5_gshared)(method);
}
inline EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44* EqualityComparer_1_CreateComparer_mFC293535AE341A11EB4152755FD4F64309B163BF (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mFC293535AE341A11EB4152755FD4F64309B163BF_gshared)(method);
}
inline EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A* EqualityComparer_1_CreateComparer_m231D2A454EDE2578C201D23F90E3DB1D6D3D5F0F (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m231D2A454EDE2578C201D23F90E3DB1D6D3D5F0F_gshared)(method);
}
inline EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* EqualityComparer_1_CreateComparer_m66568B441EE3AB73D292C4F4CE1707FBAC360F5A (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m66568B441EE3AB73D292C4F4CE1707FBAC360F5A_gshared)(method);
}
inline EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A_gshared)(method);
}
inline EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B_gshared)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared)(method);
}
inline EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* EqualityComparer_1_CreateComparer_m8A944543377C40C1596E4EECED12E463FC3DDFC3 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m8A944543377C40C1596E4EECED12E463FC3DDFC3_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D_gshared)(method);
}
inline EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002_gshared)(method);
}
inline EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41* EqualityComparer_1_CreateComparer_m54E0CBACEB549B9E1D28AA2BA11D2B7F04DC3B5B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m54E0CBACEB549B9E1D28AA2BA11D2B7F04DC3B5B_gshared)(method);
}
inline EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8_gshared)(method);
}
inline EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B_gshared)(method);
}
inline EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_CreateComparer_m73A019C274DF1E66D30647A3F24ADC27784B7114 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m73A019C274DF1E66D30647A3F24ADC27784B7114_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m932665C8861A22B177DC1ACF1EDAA87E1624B5AC_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_target;
		WeakReference_1__ctor_m99141AB321E022D9933448CDD7139BC9FAA443E8(__this, L_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m99141AB321E022D9933448CDD7139BC9FAA443E8_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, bool ___1_trackResurrection, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		bool L_0 = ___1_trackResurrection;
		__this->___trackResurrection = L_0;
		bool L_1 = ___1_trackResurrection;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (int32_t)G_B3_0;
		RuntimeObject* L_2 = ___0_target;
		int32_t L_3 = V_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_2, L_3, NULL);
		__this->___handle = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m2289DC7F3597E1BA77555086A86F91807FDC96E2_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		bool L_3;
		L_3 = SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5(L_2, _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, NULL);
		__this->___trackResurrection = L_3;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeObject* L_7;
		L_7 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_4, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, L_6, NULL);
		V_0 = L_7;
		bool L_8 = __this->___trackResurrection;
		if (L_8)
		{
			goto IL_0046;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 1;
	}

IL_0047:
	{
		V_1 = (int32_t)G_B5_0;
		RuntimeObject* L_9 = V_0;
		int32_t L_10 = V_1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_11;
		L_11 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_9, L_10, NULL);
		__this->___handle = L_11;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_GetObjectData_m6F2E12AF126FAE536995F52F9501498BDA5917A7_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		bool L_3 = __this->___trackResurrection;
		SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D(L_2, _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, L_3, NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_4 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
		bool L_5;
		L_5 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_4, NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = ___0_info;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_7 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
		RuntimeObject* L_8;
		L_8 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5(L_7, NULL);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_6, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, L_8, NULL);
		return;
	}

IL_0043:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_9, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_SetTarget_mCEAE8D9CF9551015CE46420AB8614A8D1F14C329_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
		RuntimeObject* L_1 = ___0_target;
		GCHandle_set_Target_m1DB05E14910747D2A74ACEB4C48028C4AEBFCF3D(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_m4982797589731AB705E9C79FA4531331F40410AB_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject** ___0_target, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
		bool L_1;
		L_1 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_0, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject** L_2 = ___0_target;
		il2cpp_codegen_initobj(L_2, sizeof(RuntimeObject*));
		return (bool)0;
	}

IL_0016:
	{
		RuntimeObject** L_3 = ___0_target;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_4 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
		RuntimeObject* L_5;
		L_5 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5(L_4, NULL);
		*(RuntimeObject**)L_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		RuntimeObject** L_6 = ___0_target;
		RuntimeObject* L_7 = (*(RuntimeObject**)L_6);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_Finalize_m22CABA82C1F2B17A77E275483306A0DADECAF151_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2((RuntimeObject*)__this, NULL);
				return;
			}
		});
		try
		{
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
			GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_0, NULL);
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mC17BAA23BA92C7455512FDA5B1618C6D2B54ACA2_gshared (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereArrayIterator_1_Clone_m23B21F0E17F85746DFAF09C90772262DF3B707AF_gshared (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* L_2 = (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereArrayIterator_1__ctor_mC17BAA23BA92C7455512FDA5B1618C6D2B54ACA2(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m205D669337F73902F61F7BBFD6165B9005890564_gshared (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_6 = __this->___predicate;
		RuntimeObject* L_7 = V_0;
		bool L_8;
		L_8 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_9 = V_0;
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = __this->___index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = __this->___source;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(11, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m00D679C5996A876F2AF50976C1F93D89F8F42C62_gshared (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___0_predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3;
		L_3 = Enumerable_CombinePredicates_TisRuntimeObject_m613479C29B013E8FC2987E22F42A3BC6CC2C9768(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* L_4 = (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereArrayIterator_1__ctor_mC17BAA23BA92C7455512FDA5B1618C6D2B54ACA2(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mD8BDE04F9897AAED299EE4DC32BF3879F2CBB668_gshared (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereArrayIterator_1_Clone_m1D80001794E47D2DF00A77273FD71D61987E8A44_gshared (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* L_2 = (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m42FC055181A1CDD12BBB46A9EE9ED76C6048BA07_gshared (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	const Il2CppFullySharedGenericAny L_9 = L_4;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	memset(V_0, 0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, V_0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),2), L_9, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(11, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mB2C59E78355E518D359A6D5035BCD6254337B84E_gshared (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___0_predicate;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = ((  Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* (*) (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* L_4 = (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mBA5C8B874F6A1A8AD981C46A7D054B5135517C43_gshared (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* __this, RuntimeObject* ___0_source, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m82B17BDE54CDD809DF119425803C4B65CDEE115F((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA* WhereEnumerableIterator_1_Clone_m29012D0BE1F245E54AE1603113E68C934C6B5FAF_gshared (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = __this->___predicate;
		WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* L_2 = (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereEnumerableIterator_1__ctor_mBA5C8B874F6A1A8AD981C46A7D054B5135517C43(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m3DEE49AC82001271B1C7F17A5B33C2E36B853796_gshared (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		Iterator_1_Dispose_mA5FEAFCF23A3AE46B5054859D4C7C40259FCCE5E((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m86690A73C6D58115878BCEC9F233AFA31A1C607D_gshared (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		int32_t L_0 = ((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___state = 2;
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		Il2CppChar L_6;
		L_6 = InterfaceFuncInvoker0< Il2CppChar >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_7 = __this->___predicate;
		Il2CppChar L_8 = V_1;
		bool L_9;
		L_9 = Func_2_Invoke_m4733F0A0FE136C9F8DCE4963455215585E8BE2CD_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Il2CppChar L_10 = V_1;
		((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___current = L_10;
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___enumerator;
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(11, (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m1A6FA62F2122EE2A8F051B00E135C20CCDCF77F8_gshared (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* __this, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___0_predicate, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = __this->___predicate;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_2 = ___0_predicate;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_3;
		L_3 = Enumerable_CombinePredicates_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8D26C321E5E8644D931AB49CCA9445628281A4B5(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* L_4 = (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereEnumerableIterator_1__ctor_mBA5C8B874F6A1A8AD981C46A7D054B5135517C43(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereEnumerableIterator_1_Clone_m25DBF44FABBFE76AB4314BD7F62334FE2A74F5CA_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_2 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m7EB3C00CC0ED06056CF70FE322BF44A93F0C4136_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		Iterator_1_Dispose_m953BCF886C8A63456821023DBA45EBD9AC44EB07((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m7F8C3A8E4FC2835971FF35C1F4C51A061483BEDD_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state = 2;
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = __this->___predicate;
		RuntimeObject* L_8 = V_1;
		bool L_9;
		L_9 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___enumerator;
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(11, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m48ED4EDDA686615E779F1400A17479B243C85100_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___0_predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3;
		L_3 = Enumerable_CombinePredicates_TisRuntimeObject_m613479C29B013E8FC2987E22F42A3BC6CC2C9768(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_4 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2DD2BB86C5517EDD8C051BBF8CE38C43D712A8D6_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereEnumerableIterator_1_Clone_m0317D203B88386A9A479C72FA9D62763FD0A91D3_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_2 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m2583FECFDC8EDFE66C959C7C386F99E287C5763E_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), (RuntimeObject*)NULL);
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m1A18D4050C069B6C4310DAB9857281E37DCB2C69_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	const Il2CppFullySharedGenericAny L_10 = L_6;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	memset(V_1, 0, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1), 2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),2), L_10, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(11, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mC623267514B4299E409A01161DBBDA5362CEDFC2_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___0_predicate;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = ((  Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* (*) (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_4 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mEF8F62B9078E538C1DC46BCB876C2AC5B29EA73B_gshared (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereListIterator_1_Clone_mB7087945B135AFA9D70F30479082AD370DDDB66A_gshared (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* L_2 = (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereListIterator_1__ctor_mEF8F62B9078E538C1DC46BCB876C2AC5B29EA73B(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mEE70CAE79424880884D3CD6947167DEDB297FB47_gshared (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = __this->___source;
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____current), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state = 2;
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = __this->___predicate;
		RuntimeObject* L_8 = V_1;
		bool L_9;
		L_9 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_11 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator);
		bool L_12;
		L_12 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(11, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mD1D1F307DE1E555A5F7237BCA2C32947BCF6A14D_gshared (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___0_predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3;
		L_3 = Enumerable_CombinePredicates_TisRuntimeObject_m613479C29B013E8FC2987E22F42A3BC6CC2C9768(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* L_4 = (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereListIterator_1__ctor_mEF8F62B9078E538C1DC46BCB876C2AC5B29EA73B(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mC075454926AF320E4679335A1B81D3F56ACEFC0C_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereListIterator_1_Clone_mAA3ED56493E5FF2F49FE37EB7CDF6C0A957698B5_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* L_2 = (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mB5E4EB089AD8CF7156B8972C7FB61739C466ED5E_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	const Il2CppFullySharedGenericAny L_9 = L_5;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	memset(V_1, 0, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_4, SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1), 2);
		goto IL_004e;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),2), L_9, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		return (bool)1;
	}

IL_004e:
	{
		bool L_10;
		L_10 = ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2)))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (L_10)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(11, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mC767815DE2249E70B38D6D172A0C61B028D7A44B_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___0_predicate;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = ((  Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* (*) (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* L_4 = (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m3E9E4C07B1F3F6CC6A54D7DEC571B2D35BBB1515_gshared (WhereSelectArrayIterator_2_t60DB48D26CC6C2C9B2E2ED4947D4C563324DC49A* __this, KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* ___0_source, Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* ___1_predicate, Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectArrayIterator_2_Clone_m6AC69403664D0D090FA12A084986855EC85F106F_gshared (WhereSelectArrayIterator_2_t60DB48D26CC6C2C9B2E2ED4947D4C563324DC49A* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_0 = __this->___source;
		Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* L_1 = __this->___predicate;
		Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_t60DB48D26CC6C2C9B2E2ED4947D4C563324DC49A* L_3 = (WhereSelectArrayIterator_2_t60DB48D26CC6C2C9B2E2ED4947D4C563324DC49A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_m3E9E4C07B1F3F6CC6A54D7DEC571B2D35BBB1515(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m43E10D40669792D49D1C976DEED18CDBFBE0053A_gshared (WhereSelectArrayIterator_2_t60DB48D26CC6C2C9B2E2ED4947D4C563324DC49A* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		int32_t L_3 = L_2;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* L_7 = __this->___predicate;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_8 = V_0;
		bool L_9;
		L_9 = Func_2_Invoke_mECD514E493F9F65FC71FE3556ADE0A2E6419C03D_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* L_10 = __this->___selector;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_11 = V_0;
		RuntimeObject* L_12;
		L_12 = Func_2_Invoke_m1D654CA41A2FC43EECC21031D6623DB89679596A_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		KeyValuePair_2U5BU5D_tF5EFD20ACC3BB6CE90DBB51F3461B2C8F1D2E2F3* L_14 = __this->___source;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(11, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m61EAFCA2660E874F3C699C0F322F73BC43C94FD2_gshared (WhereSelectArrayIterator_2_t60DB48D26CC6C2C9B2E2ED4947D4C563324DC49A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m9E856676CD28C48E31CDFFD36878CEB9894EA7EA_gshared (WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_source, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate, Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m82B17BDE54CDD809DF119425803C4B65CDEE115F((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA* WhereSelectArrayIterator_2_Clone_m1174858AF1E0D196A5C36D2FD4C81D6646C7D5F1_gshared (WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859* __this, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___source;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = __this->___predicate;
		Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859* L_3 = (WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_m9E856676CD28C48E31CDFFD36878CEB9894EA7EA(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m0786C9403DB8B55CA5F578694C873B2FAA32C370_gshared (WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859* __this, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		int32_t L_0 = ((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		int32_t L_3 = L_2;
		Il2CppChar L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_7 = __this->___predicate;
		Il2CppChar L_8 = V_0;
		bool L_9;
		L_9 = Func_2_Invoke_m4733F0A0FE136C9F8DCE4963455215585E8BE2CD_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* L_10 = __this->___selector;
		Il2CppChar L_11 = V_0;
		Il2CppChar L_12;
		L_12 = Func_2_Invoke_mF0637A69B6444509F1E28F469D561339E1F8636F_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___current = L_12;
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = __this->___source;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(11, (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mD8F1D0F326DCA4EB134B2C7A219B88355361A0D6_gshared (WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859* __this, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* L_1 = (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_mBA5C8B874F6A1A8AD981C46A7D054B5135517C43(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m3660F197ECE4BF2A6F8BC99BC8BEF585C9D7BF97_gshared (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectArrayIterator_2_Clone_mDABFA8CCAFDC157CCF8428160F29DA90F22FCBD0_gshared (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58* L_3 = (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_m3660F197ECE4BF2A6F8BC99BC8BEF585C9D7BF97(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m4A8194EF96624D7C6656C87F6058990E389F6290_gshared (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = __this->___predicate;
		RuntimeObject* L_8 = V_0;
		bool L_9;
		L_9 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_10 = __this->___selector;
		RuntimeObject* L_11 = V_0;
		RuntimeObject* L_12;
		L_12 = Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->___source;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(11, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m14341A500E696138BE1356922F31FA3E16E131D7_gshared (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mB15DB27A8DC3B4E00BCA6E8F63F00F7E374F76A4_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectArrayIterator_2_Clone_mFBF81AE0E2B6F7A7A79FC98398E7A6AC0FD330E9_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* L_3 = (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mEF7E8E7B117D6D1147C53CAE838836974171392C_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const uint32_t SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	const Il2CppFullySharedGenericAny L_8 = L_4;
	const Il2CppFullySharedGenericAny L_11 = L_4;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	memset(V_0, 0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(11, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mD81DB59B1D07BC8DDB099A652B22BA9C1538D7A3_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m02FC5BD5A7E202C5D01C6B3803417980DFC0995D_gshared (WhereSelectEnumerableIterator_2_t96BA0BD35D43BFEC26C4BE0C50B1B50C7E0FEB5B* __this, RuntimeObject* ___0_source, Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* ___1_predicate, Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectEnumerableIterator_2_Clone_mA091E731B20FABDB1E6D69422DABC6F64438AD9E_gshared (WhereSelectEnumerableIterator_2_t96BA0BD35D43BFEC26C4BE0C50B1B50C7E0FEB5B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* L_1 = __this->___predicate;
		Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_t96BA0BD35D43BFEC26C4BE0C50B1B50C7E0FEB5B* L_3 = (WhereSelectEnumerableIterator_2_t96BA0BD35D43BFEC26C4BE0C50B1B50C7E0FEB5B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_m02FC5BD5A7E202C5D01C6B3803417980DFC0995D(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mC492C8A0B75BA4500AB7C6B7473105685347BE88_gshared (WhereSelectEnumerableIterator_2_t96BA0BD35D43BFEC26C4BE0C50B1B50C7E0FEB5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		Iterator_1_Dispose_m953BCF886C8A63456821023DBA45EBD9AC44EB07((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m71F87A4C1BE9272ED99F519D2EBEDB29FD7F969A_gshared (WhereSelectEnumerableIterator_2_t96BA0BD35D43BFEC26C4BE0C50B1B50C7E0FEB5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* L_8 = __this->___predicate;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_9 = V_1;
		bool L_10;
		L_10 = Func_2_Invoke_mECD514E493F9F65FC71FE3556ADE0A2E6419C03D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* L_11 = __this->___selector;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_12 = V_1;
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m1D654CA41A2FC43EECC21031D6623DB89679596A_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(11, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m17787173E71AB7CE1C7C5ABA07334DCC885B0AC4_gshared (WhereSelectEnumerableIterator_2_t96BA0BD35D43BFEC26C4BE0C50B1B50C7E0FEB5B* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m88FD7312A33F197FDDED392F8CEED6049D1FE991_gshared (WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523* __this, RuntimeObject* ___0_source, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate, Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m82B17BDE54CDD809DF119425803C4B65CDEE115F((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA* WhereSelectEnumerableIterator_2_Clone_mD5F280D35C0962703D3FCA43B214E07956C4FB5A_gshared (WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = __this->___predicate;
		Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523* L_3 = (WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_m88FD7312A33F197FDDED392F8CEED6049D1FE991(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m12E219C6FB875FC5B66A374EC54D2A5CCF8872F4_gshared (WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		Iterator_1_Dispose_mA5FEAFCF23A3AE46B5054859D4C7C40259FCCE5E((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mEEA1380FD259E49F52756FC212FB1FF41338A7FB_gshared (WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		int32_t L_0 = ((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		Il2CppChar L_6;
		L_6 = InterfaceFuncInvoker0< Il2CppChar >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_8 = __this->___predicate;
		Il2CppChar L_9 = V_1;
		bool L_10;
		L_10 = Func_2_Invoke_m4733F0A0FE136C9F8DCE4963455215585E8BE2CD_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* L_11 = __this->___selector;
		Il2CppChar L_12 = V_1;
		Il2CppChar L_13;
		L_13 = Func_2_Invoke_mF0637A69B6444509F1E28F469D561339E1F8636F_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(11, (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m51011A12E08CDBC5E2C6F2B9F872A2E1FBD18C35_gshared (WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523* __this, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* L_1 = (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_mBA5C8B874F6A1A8AD981C46A7D054B5135517C43(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m2E08505C4CB96CC2AD340B4A2B0D3BF0D6DA01F9_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectEnumerableIterator_2_Clone_m2ED927CF2549A759AE2454F97E33F05FA19B552E_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* L_3 = (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_m2E08505C4CB96CC2AD340B4A2B0D3BF0D6DA01F9(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mD2A476DDFBA6E23D20625E4C1C35AC98DE5F19F2_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		Iterator_1_Dispose_m953BCF886C8A63456821023DBA45EBD9AC44EB07((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mC68F6626ADFD57493351521CE15400BBD158BC68_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = __this->___predicate;
		RuntimeObject* L_9 = V_1;
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_11 = __this->___selector;
		RuntimeObject* L_12 = V_1;
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(11, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mA93AACD32DB1D01903967A4CD1F5D74E84AA5F96_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m9A4AF54DC527FA1CEF8B803C8DDA5E632838B06F_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectEnumerableIterator_2_Clone_mD773B8B24D1459B11BA4462A6DD68865514ADC9E_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* L_3 = (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m640FAC111BC786414B40480BB03E4F84B2FFB179_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), (RuntimeObject*)NULL);
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mB384EFAF6366166F28EDFDBA272EEC1089E1A115_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	const Il2CppFullySharedGenericAny L_9 = L_6;
	const Il2CppFullySharedGenericAny L_12 = L_6;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	memset(V_1, 0, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_8 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_11 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_12, V_1, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_12: *(void**)L_12), (Il2CppFullySharedGenericAny*)L_13);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_13, SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(11, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mB8ACBBFA48460E67B18647EF16E6EE4D0BE08679_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15BA8C7F93A5644C6398735BDD39FF23CEB6D0E8_gshared (WhereSelectListIterator_2_t3BFC51AF95F35D0B4877B7FA08D62BC4BD05AD02* __this, List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* ___0_source, Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* ___1_predicate, Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mAC7E64D7CC14A4B3813AE512DC463BD7F3C4541D_gshared (WhereSelectListIterator_2_t3BFC51AF95F35D0B4877B7FA08D62BC4BD05AD02* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* L_0 = __this->___source;
		Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* L_1 = __this->___predicate;
		Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* L_2 = __this->___selector;
		WhereSelectListIterator_2_t3BFC51AF95F35D0B4877B7FA08D62BC4BD05AD02* L_3 = (WhereSelectListIterator_2_t3BFC51AF95F35D0B4877B7FA08D62BC4BD05AD02*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m15BA8C7F93A5644C6398735BDD39FF23CEB6D0E8(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m8DE629C196FCD0ABFC78184C9AB378DDDDE51471_gshared (WhereSelectListIterator_2_t3BFC51AF95F35D0B4877B7FA08D62BC4BD05AD02* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA61AD775C53D69BA8C4CB85F6A1A7866AAC6997B* L_3 = __this->___source;
		Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39 L_4;
		L_4 = List_1_GetEnumerator_mA470FE029F16C9C2CF4CF4B94F44C54DE0EDE84A(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___key), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39* L_5 = (Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39*)(&__this->___enumerator);
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_6;
		L_6 = Enumerator_get_Current_m7362387DF032E42E572F7041F4C1A3CD21679DCD_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* L_8 = __this->___predicate;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_9 = V_1;
		bool L_10;
		L_10 = Func_2_Invoke_mECD514E493F9F65FC71FE3556ADE0A2E6419C03D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* L_11 = __this->___selector;
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_12 = V_1;
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m1D654CA41A2FC43EECC21031D6623DB89679596A_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39* L_14 = (Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_mDE2B6C6EB1965BF7A51BC0785BAA55A818EDD46F(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(11, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m596A1ADC600594F0282DD7BA7C93611632D2C114_gshared (WhereSelectListIterator_2_t3BFC51AF95F35D0B4877B7FA08D62BC4BD05AD02* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m464A0F88FBC476834CFEC766528072F8B4B4C8B8_gshared (WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675* __this, List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___0_source, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate, Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m82B17BDE54CDD809DF119425803C4B65CDEE115F((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA* WhereSelectListIterator_2_Clone_m0E0EF202B83C28BF19FDF73C02171B1A6BFDC849_gshared (WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675* __this, const RuntimeMethod* method) 
{
	{
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_0 = __this->___source;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = __this->___predicate;
		Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* L_2 = __this->___selector;
		WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675* L_3 = (WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m464A0F88FBC476834CFEC766528072F8B4B4C8B8(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9D96C3C31441478BF055EF604A7A86D8D6A63868_gshared (WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		int32_t L_0 = ((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_3 = __this->___source;
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D L_4;
		L_4 = List_1_GetEnumerator_m4FD62856A4FB2E97031D88470D704316F1DCD928(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* L_5 = (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D*)(&__this->___enumerator);
		Il2CppChar L_6;
		L_6 = Enumerator_get_Current_m50891A1A1A5F69FFF0D667B82BD22B8658F1A6E7_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_8 = __this->___predicate;
		Il2CppChar L_9 = V_1;
		bool L_10;
		L_10 = Func_2_Invoke_m4733F0A0FE136C9F8DCE4963455215585E8BE2CD_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* L_11 = __this->___selector;
		Il2CppChar L_12 = V_1;
		Il2CppChar L_13;
		L_13 = Func_2_Invoke_mF0637A69B6444509F1E28F469D561339E1F8636F_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* L_14 = (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_mEB23589F285449D3A1439C810FB122ECDD2FFAC2(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(11, (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mBD0795E250FB94137B1B87F8B068782D921A47F2_gshared (WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675* __this, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* L_1 = (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_mBA5C8B874F6A1A8AD981C46A7D054B5135517C43(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mF22589DABD608C024E039C0F5DE9F457967EC3E8_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = __this->___selector;
		WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* L_3 = (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4609B745A7644E640F319C2651F1A97C2D304458_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = __this->___source;
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____current), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = __this->___predicate;
		RuntimeObject* L_9 = V_1;
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_11 = __this->___selector;
		RuntimeObject* L_12 = V_1;
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(11, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA37F84C07852A5760237B9A50C373846A6528477_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectListIterator_2_Clone_m8EC8E684FFDC3BC579DF37C08993B7F80966639D_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* L_3 = (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB81EEF5DFFEBDDB1AC24116FAD1D13505525569_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_11 = L_5;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	memset(V_1, 0, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), L_4, SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
		return (bool)1;
	}

IL_0061:
	{
		bool L_13;
		L_13 = ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(11, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1739BDD134D3AF5A55DBB06AEE130B0C58E47014_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 WrappedValue_1_get_Value_mEFEF2030836DFC681FD0C1069BF11380F0EF66F3_gshared (WrappedValue_1_t038BEFC004F46FAB767F45F8815E8432F8FE798F* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m3FFA2D7C14178CB2EC96C0FAC06A3DF707A6FFD2_gshared (WrappedValue_1_t038BEFC004F46FAB767F45F8815E8432F8FE798F* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m26BD7235DDCD2E9424AC2B72B236F7BE4EC766C9_gshared (WrappedValue_1_t038BEFC004F46FAB767F45F8815E8432F8FE798F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_t038BEFC004F46FAB767F45F8815E8432F8FE798F* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t038BEFC004F46FAB767F45F8815E8432F8FE798F*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t038BEFC004F46FAB767F45F8815E8432F8FE798F*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t038BEFC004F46FAB767F45F8815E8432F8FE798F* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8* L_3;
		L_3 = EqualityComparer_1_get_Default_m580F3ACD89A4B05DD1CC6BE2C290108F9AA790C6_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_4;
		L_4 = WrappedValue_1_get_Value_mEFEF2030836DFC681FD0C1069BF11380F0EF66F3_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_t038BEFC004F46FAB767F45F8815E8432F8FE798F* L_5 = V_0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_6;
		L_6 = WrappedValue_1_get_Value_mEFEF2030836DFC681FD0C1069BF11380F0EF66F3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m6C5A1C937D2734115F9AC6E3DC5CCFC85F67B527_gshared (WrappedValue_1_t038BEFC004F46FAB767F45F8815E8432F8FE798F* __this, const RuntimeMethod* method) 
{
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* G_B2_0 = NULL;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* G_B1_0 = NULL;
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0;
		L_0 = WrappedValue_1_get_Value_mEFEF2030836DFC681FD0C1069BF11380F0EF66F3_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* L_1 = (&V_0);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_2 = (*(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*)L_1);
		if (L_2.___hasValue)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetHashCode_m2AFEAD36F48D2F5DE8ECE59A6D10D73B229DDAC7(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 WrappedValue_1_get_Value_m1AD9FBAF561601DD04BDBEDDFCEBBD8CF8DE6097_gshared (WrappedValue_1_tEECC84FD02441C3B391CBDBF2865E5B168BB895C* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m860C2AFA58374B249D5B2871DB91EE4437019A57_gshared (WrappedValue_1_tEECC84FD02441C3B391CBDBF2865E5B168BB895C* __this, Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m0C1E3B3141C0A913482854BDBEB31FDA4AA9EB35_gshared (WrappedValue_1_tEECC84FD02441C3B391CBDBF2865E5B168BB895C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_tEECC84FD02441C3B391CBDBF2865E5B168BB895C* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_tEECC84FD02441C3B391CBDBF2865E5B168BB895C*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_tEECC84FD02441C3B391CBDBF2865E5B168BB895C*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_tEECC84FD02441C3B391CBDBF2865E5B168BB895C* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2* L_3;
		L_3 = EqualityComparer_1_get_Default_m53444E492B798009A5D017FC35049EF3DBB7356F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_4;
		L_4 = WrappedValue_1_get_Value_m1AD9FBAF561601DD04BDBEDDFCEBBD8CF8DE6097_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_tEECC84FD02441C3B391CBDBF2865E5B168BB895C* L_5 = V_0;
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_6;
		L_6 = WrappedValue_1_get_Value_m1AD9FBAF561601DD04BDBEDDFCEBBD8CF8DE6097_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505, Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m79EB1199B7627189510ACE2D95DF5EAC13784132_gshared (WrappedValue_1_tEECC84FD02441C3B391CBDBF2865E5B168BB895C* __this, const RuntimeMethod* method) 
{
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* G_B2_0 = NULL;
	Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* G_B1_0 = NULL;
	{
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_0;
		L_0 = WrappedValue_1_get_Value_m1AD9FBAF561601DD04BDBEDDFCEBBD8CF8DE6097_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505* L_1 = (&V_0);
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_2 = (*(Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505*)L_1);
		if (L_2.___hasValue)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetHashCode_m19A63A75A12D6B320BE3429B01E987325706ECA2(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 WrappedValue_1_get_Value_m8FDAC1ED0CEFA215AA92A6D6D5AC5A4D7C84B6AC_gshared (WrappedValue_1_t02F152AD1C2A0D08E54E3E5762D46667B7CF94C5* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m298467F270002FDCA18ACD82FDBD72769C58273F_gshared (WrappedValue_1_t02F152AD1C2A0D08E54E3E5762D46667B7CF94C5* __this, Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_mD740378A1C4F0145F5930E34180D5E713C47E792_gshared (WrappedValue_1_t02F152AD1C2A0D08E54E3E5762D46667B7CF94C5* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_t02F152AD1C2A0D08E54E3E5762D46667B7CF94C5* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t02F152AD1C2A0D08E54E3E5762D46667B7CF94C5*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t02F152AD1C2A0D08E54E3E5762D46667B7CF94C5*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t02F152AD1C2A0D08E54E3E5762D46667B7CF94C5* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C* L_3;
		L_3 = EqualityComparer_1_get_Default_mE883532964DB2B0FBAD3168E1FDE2A79C2D3D8EF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 L_4;
		L_4 = WrappedValue_1_get_Value_m8FDAC1ED0CEFA215AA92A6D6D5AC5A4D7C84B6AC_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_t02F152AD1C2A0D08E54E3E5762D46667B7CF94C5* L_5 = V_0;
		Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 L_6;
		L_6 = WrappedValue_1_get_Value_m8FDAC1ED0CEFA215AA92A6D6D5AC5A4D7C84B6AC_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1, Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_mAE66EB57DC15C1FCA010C297EB648F97605F806F_gshared (WrappedValue_1_t02F152AD1C2A0D08E54E3E5762D46667B7CF94C5* __this, const RuntimeMethod* method) 
{
	Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* G_B2_0 = NULL;
	Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* G_B1_0 = NULL;
	{
		Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 L_0;
		L_0 = WrappedValue_1_get_Value_m8FDAC1ED0CEFA215AA92A6D6D5AC5A4D7C84B6AC_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* L_1 = (&V_0);
		Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 L_2 = (*(Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1*)L_1);
		if (L_2.___hasValue)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetHashCode_mBEB6A6F482339D2259F6E306C2367CC2047F4D6E(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC WrappedValue_1_get_Value_mB7A5F1ACB34B427EB7B305D08295EE8F39889FE8_gshared (WrappedValue_1_tC6DF74086B33736065E471AB6DFBA4C382D9ECB9* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m0E0C7205F0BC4E2A165DCF4491C58342006A8BCE_gshared (WrappedValue_1_tC6DF74086B33736065E471AB6DFBA4C382D9ECB9* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m8C4D9AFD9E7BFE7E551E621054D59457CD420310_gshared (WrappedValue_1_tC6DF74086B33736065E471AB6DFBA4C382D9ECB9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_tC6DF74086B33736065E471AB6DFBA4C382D9ECB9* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_tC6DF74086B33736065E471AB6DFBA4C382D9ECB9*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_tC6DF74086B33736065E471AB6DFBA4C382D9ECB9*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_tC6DF74086B33736065E471AB6DFBA4C382D9ECB9* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331* L_3;
		L_3 = EqualityComparer_1_get_Default_mEE0F7E7E6B5F46413743A1D60FDCA1E1C867A464_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_4;
		L_4 = WrappedValue_1_get_Value_mB7A5F1ACB34B427EB7B305D08295EE8F39889FE8_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_tC6DF74086B33736065E471AB6DFBA4C382D9ECB9* L_5 = V_0;
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_6;
		L_6 = WrappedValue_1_get_Value_mB7A5F1ACB34B427EB7B305D08295EE8F39889FE8_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m2B4DD30394ECA2C1F44D8A48EE86606CD63F0270_gshared (WrappedValue_1_tC6DF74086B33736065E471AB6DFBA4C382D9ECB9* __this, const RuntimeMethod* method) 
{
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* G_B2_0 = NULL;
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* G_B1_0 = NULL;
	{
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0;
		L_0 = WrappedValue_1_get_Value_mB7A5F1ACB34B427EB7B305D08295EE8F39889FE8_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* L_1 = (&V_0);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_2 = (*(Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC*)L_1);
		if (L_2.___hasValue)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetHashCode_mB41C0A37C509DA525A8C03D8776DC6AEF6C41C47(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B WrappedValue_1_get_Value_mB1682F4DAEA23DBA3201A740469AF3470BB2A8C9_gshared (WrappedValue_1_t6A86A69A5D7E4F05512B9460B09FEFBEACEB405E* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_mC4728F6E7AB900B31431D83F615212A42D475F1B_gshared (WrappedValue_1_t6A86A69A5D7E4F05512B9460B09FEFBEACEB405E* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m40CD3472A243CE93391E41C015C2E0168EAF68E3_gshared (WrappedValue_1_t6A86A69A5D7E4F05512B9460B09FEFBEACEB405E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_t6A86A69A5D7E4F05512B9460B09FEFBEACEB405E* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t6A86A69A5D7E4F05512B9460B09FEFBEACEB405E*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t6A86A69A5D7E4F05512B9460B09FEFBEACEB405E*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t6A86A69A5D7E4F05512B9460B09FEFBEACEB405E* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E* L_3;
		L_3 = EqualityComparer_1_get_Default_m9365807624DE89FD1CC20935AA1CE1055358D494_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_4;
		L_4 = WrappedValue_1_get_Value_mB1682F4DAEA23DBA3201A740469AF3470BB2A8C9_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_t6A86A69A5D7E4F05512B9460B09FEFBEACEB405E* L_5 = V_0;
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_6;
		L_6 = WrappedValue_1_get_Value_mB1682F4DAEA23DBA3201A740469AF3470BB2A8C9_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m86322E440CA6501D1B288D1C6E77CF8B9033B261_gshared (WrappedValue_1_t6A86A69A5D7E4F05512B9460B09FEFBEACEB405E* __this, const RuntimeMethod* method) 
{
	Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B* G_B2_0 = NULL;
	Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B* G_B1_0 = NULL;
	{
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_0;
		L_0 = WrappedValue_1_get_Value_mB1682F4DAEA23DBA3201A740469AF3470BB2A8C9_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B* L_1 = (&V_0);
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_2 = (*(Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B*)L_1);
		if (L_2.___hasValue)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetHashCode_m4AF9EC5FD0E6DB4DA457D30E32A66536F3708C87(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB WrappedValue_1_get_Value_m67ECE63E767B78EFB8EB84EB99AE96B757BF60F6_gshared (WrappedValue_1_tF789D1365EFD286B9985361743A35348AEB43F16* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m73F67B1AF640CB22BA2C27DC58A95152EFF59F2B_gshared (WrappedValue_1_tF789D1365EFD286B9985361743A35348AEB43F16* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_mD124522231D737D36C38360B0CDF1BDA4EC831B6_gshared (WrappedValue_1_tF789D1365EFD286B9985361743A35348AEB43F16* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_tF789D1365EFD286B9985361743A35348AEB43F16* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_tF789D1365EFD286B9985361743A35348AEB43F16*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_tF789D1365EFD286B9985361743A35348AEB43F16*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_tF789D1365EFD286B9985361743A35348AEB43F16* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4* L_3;
		L_3 = EqualityComparer_1_get_Default_m1E5BD6D8FD7F1D2FF85113EF07641DE62EEB4519_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_4;
		L_4 = WrappedValue_1_get_Value_m67ECE63E767B78EFB8EB84EB99AE96B757BF60F6_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_tF789D1365EFD286B9985361743A35348AEB43F16* L_5 = V_0;
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_6;
		L_6 = WrappedValue_1_get_Value_m67ECE63E767B78EFB8EB84EB99AE96B757BF60F6_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m5022B90770AF73A1B5BFDC3142ED95074AB20B75_gshared (WrappedValue_1_tF789D1365EFD286B9985361743A35348AEB43F16* __this, const RuntimeMethod* method) 
{
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* G_B2_0 = NULL;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* G_B1_0 = NULL;
	{
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_0;
		L_0 = WrappedValue_1_get_Value_m67ECE63E767B78EFB8EB84EB99AE96B757BF60F6_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_1 = (&V_0);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_2 = (*(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)L_1);
		if (L_2.___hasValue)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetHashCode_mCB8328716B83ABF1959C9094829EC83EF7DAA3DB(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 WrappedValue_1_get_Value_mCADADF22F761D0759D60D12328B040BB3EFA2689_gshared (WrappedValue_1_t05C6D0355A089F3AC2424F605AD1C521B11AFBC8* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m223E6B2839FECD7300BDE057878D4A77FBC94C70_gshared (WrappedValue_1_t05C6D0355A089F3AC2424F605AD1C521B11AFBC8* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m0479039542147112AF2CA953A74B476D16C7637A_gshared (WrappedValue_1_t05C6D0355A089F3AC2424F605AD1C521B11AFBC8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_t05C6D0355A089F3AC2424F605AD1C521B11AFBC8* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t05C6D0355A089F3AC2424F605AD1C521B11AFBC8*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t05C6D0355A089F3AC2424F605AD1C521B11AFBC8*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t05C6D0355A089F3AC2424F605AD1C521B11AFBC8* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* L_3;
		L_3 = EqualityComparer_1_get_Default_m13DD6F4C665FB5BD7AF62F9FE1F51848D35211BA_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_4;
		L_4 = WrappedValue_1_get_Value_mCADADF22F761D0759D60D12328B040BB3EFA2689_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_t05C6D0355A089F3AC2424F605AD1C521B11AFBC8* L_5 = V_0;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_6;
		L_6 = WrappedValue_1_get_Value_mCADADF22F761D0759D60D12328B040BB3EFA2689_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_mC94D5F0DFAB02DC11DBAD1D9508AEE838A9147ED_gshared (WrappedValue_1_t05C6D0355A089F3AC2424F605AD1C521B11AFBC8* __this, const RuntimeMethod* method) 
{
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* G_B2_0 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* G_B1_0 = NULL;
	{
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0;
		L_0 = WrappedValue_1_get_Value_mCADADF22F761D0759D60D12328B040BB3EFA2689_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_1 = (&V_0);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_2 = (*(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)L_1);
		if (L_2.___hasValue)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetHashCode_m4DA928BE4A77EB6BCFBBBA297191CC071DDDDC12(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 WrappedValue_1_get_Value_m23135D15AC8CC5E111A31F086CF84051BFCADBB6_gshared (WrappedValue_1_t2B578379719E1F9499D751FEB82BA72226B668C6* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_mB53F727D139632440732E910E54DACD66E056855_gshared (WrappedValue_1_t2B578379719E1F9499D751FEB82BA72226B668C6* __this, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m26740A664BDFBD7C13A6E63B5AED1A167001A8E9_gshared (WrappedValue_1_t2B578379719E1F9499D751FEB82BA72226B668C6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_t2B578379719E1F9499D751FEB82BA72226B668C6* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t2B578379719E1F9499D751FEB82BA72226B668C6*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t2B578379719E1F9499D751FEB82BA72226B668C6*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t2B578379719E1F9499D751FEB82BA72226B668C6* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041* L_3;
		L_3 = EqualityComparer_1_get_Default_m735D02B82383F0158CFB46E97E87BE2DA8D582BA_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_4;
		L_4 = WrappedValue_1_get_Value_m23135D15AC8CC5E111A31F086CF84051BFCADBB6_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_t2B578379719E1F9499D751FEB82BA72226B668C6* L_5 = V_0;
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_6;
		L_6 = WrappedValue_1_get_Value_m23135D15AC8CC5E111A31F086CF84051BFCADBB6_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7, Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m222F51DB6D89F4E01AC00CCFB9E057E019AF1F35_gshared (WrappedValue_1_t2B578379719E1F9499D751FEB82BA72226B668C6* __this, const RuntimeMethod* method) 
{
	Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* G_B2_0 = NULL;
	Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* G_B1_0 = NULL;
	{
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_0;
		L_0 = WrappedValue_1_get_Value_m23135D15AC8CC5E111A31F086CF84051BFCADBB6_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7* L_1 = (&V_0);
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_2 = (*(Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7*)L_1);
		if (L_2.___hasValue)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetHashCode_m11DB651F5399C16C4775AEECFC159BF929C95C0D(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C WrappedValue_1_get_Value_mF6D6B66C73587731BA99590E798278E9153E697E_gshared (WrappedValue_1_tD35A3788939F50F1E2A2720D91649A0AF6B826BD* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_mA5C6CED931DD66D4A5855F176ED6A5661395E0F3_gshared (WrappedValue_1_tD35A3788939F50F1E2A2720D91649A0AF6B826BD* __this, Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m1F864A412E20C9CB3DFD6ED7EB8679E50385EF2A_gshared (WrappedValue_1_tD35A3788939F50F1E2A2720D91649A0AF6B826BD* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_tD35A3788939F50F1E2A2720D91649A0AF6B826BD* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_tD35A3788939F50F1E2A2720D91649A0AF6B826BD*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_tD35A3788939F50F1E2A2720D91649A0AF6B826BD*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_tD35A3788939F50F1E2A2720D91649A0AF6B826BD* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0* L_3;
		L_3 = EqualityComparer_1_get_Default_mE72B25D9A32B5E5D05D89D4A159A2E0FA149CC15_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C L_4;
		L_4 = WrappedValue_1_get_Value_mF6D6B66C73587731BA99590E798278E9153E697E_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_tD35A3788939F50F1E2A2720D91649A0AF6B826BD* L_5 = V_0;
		Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C L_6;
		L_6 = WrappedValue_1_get_Value_mF6D6B66C73587731BA99590E798278E9153E697E_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C, Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_mAB1D563826F1939D9FDF33B409D7941D9E9C6570_gshared (WrappedValue_1_tD35A3788939F50F1E2A2720D91649A0AF6B826BD* __this, const RuntimeMethod* method) 
{
	Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C* G_B2_0 = NULL;
	Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C* G_B1_0 = NULL;
	{
		Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C L_0;
		L_0 = WrappedValue_1_get_Value_mF6D6B66C73587731BA99590E798278E9153E697E_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C* L_1 = (&V_0);
		Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C L_2 = (*(Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C*)L_1);
		if (L_2.___hasValue)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetHashCode_m79DB169E37CDABFFD799FE526DB816C29A422387(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 WrappedValue_1_get_Value_mDFC09AB2FD93C911603F8A216FF0DD2D73DD53E5_gshared (WrappedValue_1_t5FD375EA11518E6140F855B737BD2E9F10107D58* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_mD06F5A8B2EB21E119BB6C79724CD11B4D73EE2C4_gshared (WrappedValue_1_t5FD375EA11518E6140F855B737BD2E9F10107D58* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m2D48B310F4E04438A6C1A83E92FADFFED2A737F9_gshared (WrappedValue_1_t5FD375EA11518E6140F855B737BD2E9F10107D58* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_t5FD375EA11518E6140F855B737BD2E9F10107D58* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t5FD375EA11518E6140F855B737BD2E9F10107D58*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t5FD375EA11518E6140F855B737BD2E9F10107D58*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t5FD375EA11518E6140F855B737BD2E9F10107D58* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5* L_3;
		L_3 = EqualityComparer_1_get_Default_m2335E4A9C135593934E9CC78A2DDB9D50307D29C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_4;
		L_4 = WrappedValue_1_get_Value_mDFC09AB2FD93C911603F8A216FF0DD2D73DD53E5_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_t5FD375EA11518E6140F855B737BD2E9F10107D58* L_5 = V_0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_6;
		L_6 = WrappedValue_1_get_Value_mDFC09AB2FD93C911603F8A216FF0DD2D73DD53E5_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_mB382CF6F4A8E1069735463A2E6855425409FDCFB_gshared (WrappedValue_1_t5FD375EA11518E6140F855B737BD2E9F10107D58* __this, const RuntimeMethod* method) 
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* G_B2_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* G_B1_0 = NULL;
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0;
		L_0 = WrappedValue_1_get_Value_mDFC09AB2FD93C911603F8A216FF0DD2D73DD53E5_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_1 = (&V_0);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_2 = (*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_1);
		if (L_2.___hasValue)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetHashCode_mEFF21B20BCF8D73B802CFF48B4088B1985CB8AA3(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 WrappedValue_1_get_Value_m67F8E477B0DB16439FB3574C0077EDB0A2743897_gshared (WrappedValue_1_tA1D60AED94DEDD8CF96236CA6946E9FFB5AE1094* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m107F3CFAA663EC3D04D830D184A9E7B7A6E36018_gshared (WrappedValue_1_tA1D60AED94DEDD8CF96236CA6946E9FFB5AE1094* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m9A10FBCCE570484E2AAEDCB0F71B85149DA5E486_gshared (WrappedValue_1_tA1D60AED94DEDD8CF96236CA6946E9FFB5AE1094* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_tA1D60AED94DEDD8CF96236CA6946E9FFB5AE1094* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_tA1D60AED94DEDD8CF96236CA6946E9FFB5AE1094*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_tA1D60AED94DEDD8CF96236CA6946E9FFB5AE1094*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_tA1D60AED94DEDD8CF96236CA6946E9FFB5AE1094* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5* L_3;
		L_3 = EqualityComparer_1_get_Default_m06ACB88BDADF7BC3AAB4663C877CD1AA2ADAA30D_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_4;
		L_4 = WrappedValue_1_get_Value_m67F8E477B0DB16439FB3574C0077EDB0A2743897_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_tA1D60AED94DEDD8CF96236CA6946E9FFB5AE1094* L_5 = V_0;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_6;
		L_6 = WrappedValue_1_get_Value_m67F8E477B0DB16439FB3574C0077EDB0A2743897_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_mC5C06961A06BCAA43998CA15EBBFDB80E63FBB91_gshared (WrappedValue_1_tA1D60AED94DEDD8CF96236CA6946E9FFB5AE1094* __this, const RuntimeMethod* method) 
{
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* G_B2_0 = NULL;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* G_B1_0 = NULL;
	{
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0;
		L_0 = WrappedValue_1_get_Value_m67F8E477B0DB16439FB3574C0077EDB0A2743897_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_1 = (&V_0);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_2 = (*(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)L_1);
		if (L_2.___hasValue)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetHashCode_m0BA8FC436E9F78DCCCA729D80797AEF7B03463B5(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 WrappedValue_1_get_Value_m847D91077D31950B94668DC0E75084E39C67F54A_gshared (WrappedValue_1_t62343E85AB28E6EB6CB50590D4E21CA3BCB1789A* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m45F5CE713F3972BFC721F8CF8D79E3A3F2DF31A8_gshared (WrappedValue_1_t62343E85AB28E6EB6CB50590D4E21CA3BCB1789A* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m19E985CDB6C45D889E84969AD92828685377881E_gshared (WrappedValue_1_t62343E85AB28E6EB6CB50590D4E21CA3BCB1789A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_t62343E85AB28E6EB6CB50590D4E21CA3BCB1789A* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t62343E85AB28E6EB6CB50590D4E21CA3BCB1789A*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t62343E85AB28E6EB6CB50590D4E21CA3BCB1789A*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t62343E85AB28E6EB6CB50590D4E21CA3BCB1789A* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* L_3;
		L_3 = EqualityComparer_1_get_Default_m1879FDE74BF5D95C5EE4A6BA72777E01D763C60C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_4;
		L_4 = WrappedValue_1_get_Value_m847D91077D31950B94668DC0E75084E39C67F54A_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_t62343E85AB28E6EB6CB50590D4E21CA3BCB1789A* L_5 = V_0;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_6;
		L_6 = WrappedValue_1_get_Value_m847D91077D31950B94668DC0E75084E39C67F54A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m78EDE8FE29C1D96DFA49947AD2F69EB484F870B4_gshared (WrappedValue_1_t62343E85AB28E6EB6CB50590D4E21CA3BCB1789A* __this, const RuntimeMethod* method) 
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* G_B2_0 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* G_B1_0 = NULL;
	{
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_0;
		L_0 = WrappedValue_1_get_Value_m847D91077D31950B94668DC0E75084E39C67F54A_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_1 = (&V_0);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_2 = (*(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)L_1);
		if (L_2.___hasValue)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetHashCode_mAEBC06B26971A4CA651E0D0C8E2F5D3C57FAF5B2(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 WrappedValue_1_get_Value_mA17E95330CF73077B659A6F8730739148215468B_gshared (WrappedValue_1_tE7A8D38DBC847F1C43C2FC9C83DF1BC9D09C0667* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m7C47F70FCF1EC4C7F578302C9275E2E95B33B07F_gshared (WrappedValue_1_tE7A8D38DBC847F1C43C2FC9C83DF1BC9D09C0667* __this, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m24DA6F60600D68612E4EA82D9E9F442623767178_gshared (WrappedValue_1_tE7A8D38DBC847F1C43C2FC9C83DF1BC9D09C0667* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_tE7A8D38DBC847F1C43C2FC9C83DF1BC9D09C0667* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_tE7A8D38DBC847F1C43C2FC9C83DF1BC9D09C0667*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_tE7A8D38DBC847F1C43C2FC9C83DF1BC9D09C0667*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_tE7A8D38DBC847F1C43C2FC9C83DF1BC9D09C0667* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80* L_3;
		L_3 = EqualityComparer_1_get_Default_mDAD3208D3D489C268E00D308B991A55D92AB2BD7_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_4;
		L_4 = WrappedValue_1_get_Value_mA17E95330CF73077B659A6F8730739148215468B_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_tE7A8D38DBC847F1C43C2FC9C83DF1BC9D09C0667* L_5 = V_0;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_6;
		L_6 = WrappedValue_1_get_Value_mA17E95330CF73077B659A6F8730739148215468B_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m0B6FCAADF171DE674FDF08223A2D6D268911C2D6_gshared (WrappedValue_1_tE7A8D38DBC847F1C43C2FC9C83DF1BC9D09C0667* __this, const RuntimeMethod* method) 
{
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* G_B2_0 = NULL;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* G_B1_0 = NULL;
	{
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0;
		L_0 = WrappedValue_1_get_Value_mA17E95330CF73077B659A6F8730739148215468B_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* L_1 = (&V_0);
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_2 = (*(Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*)L_1);
		if (L_2.___hasValue)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetHashCode_m2F0D34FEDE151C799EA539AC73DF91D9B53A7D23(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 WrappedValue_1_get_Value_mF2C9ED6D6B759379CE4506329AC6FE3B823AC9FA_gshared (WrappedValue_1_t3D769C0E18CE756D9F9F3053772D36C6133F9465* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m427CE00BB9507623886CB2D2294CC2762ADA7F2A_gshared (WrappedValue_1_t3D769C0E18CE756D9F9F3053772D36C6133F9465* __this, Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m9D8AA88D2B3FE80474D3E3220E6E701EBF787688_gshared (WrappedValue_1_t3D769C0E18CE756D9F9F3053772D36C6133F9465* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_t3D769C0E18CE756D9F9F3053772D36C6133F9465* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t3D769C0E18CE756D9F9F3053772D36C6133F9465*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t3D769C0E18CE756D9F9F3053772D36C6133F9465*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t3D769C0E18CE756D9F9F3053772D36C6133F9465* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB* L_3;
		L_3 = EqualityComparer_1_get_Default_m3D19280994C8052E058E95F202C8537D60128B29_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 L_4;
		L_4 = WrappedValue_1_get_Value_mF2C9ED6D6B759379CE4506329AC6FE3B823AC9FA_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_t3D769C0E18CE756D9F9F3053772D36C6133F9465* L_5 = V_0;
		Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 L_6;
		L_6 = WrappedValue_1_get_Value_mF2C9ED6D6B759379CE4506329AC6FE3B823AC9FA_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9, Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_mD7A3DD0F1BACB7BBDC4FFBB84AF8EB33D8D93B1B_gshared (WrappedValue_1_t3D769C0E18CE756D9F9F3053772D36C6133F9465* __this, const RuntimeMethod* method) 
{
	Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9* G_B2_0 = NULL;
	Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9* G_B1_0 = NULL;
	{
		Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 L_0;
		L_0 = WrappedValue_1_get_Value_mF2C9ED6D6B759379CE4506329AC6FE3B823AC9FA_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9* L_1 = (&V_0);
		Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 L_2 = (*(Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9*)L_1);
		if (L_2.___hasValue)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetHashCode_m17AAF4452771A7C90F57EC64440B88CAC178B082(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 WrappedValue_1_get_Value_mD39FF4217A2E95D870B4C5F8E68EAF8C64DB5947_gshared (WrappedValue_1_t385843449CB29A743E0A49C3377762B10D94F7D8* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_mF521A5DA0FBABFE936235308A2EC66DF8BCFBDBD_gshared (WrappedValue_1_t385843449CB29A743E0A49C3377762B10D94F7D8* __this, Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m8BBCD989DB9FD3B753CFEBE157CAD1B2C9586719_gshared (WrappedValue_1_t385843449CB29A743E0A49C3377762B10D94F7D8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_t385843449CB29A743E0A49C3377762B10D94F7D8* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t385843449CB29A743E0A49C3377762B10D94F7D8*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t385843449CB29A743E0A49C3377762B10D94F7D8*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t385843449CB29A743E0A49C3377762B10D94F7D8* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18* L_3;
		L_3 = EqualityComparer_1_get_Default_mCF5AE443B005C17982581081CC2BAE1250236CA2_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_4;
		L_4 = WrappedValue_1_get_Value_mD39FF4217A2E95D870B4C5F8E68EAF8C64DB5947_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_t385843449CB29A743E0A49C3377762B10D94F7D8* L_5 = V_0;
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_6;
		L_6 = WrappedValue_1_get_Value_mD39FF4217A2E95D870B4C5F8E68EAF8C64DB5947_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099, Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m622647B95C9A5EC97BF81A1D8021DA71F3378609_gshared (WrappedValue_1_t385843449CB29A743E0A49C3377762B10D94F7D8* __this, const RuntimeMethod* method) 
{
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* G_B2_0 = NULL;
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* G_B1_0 = NULL;
	{
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_0;
		L_0 = WrappedValue_1_get_Value_mD39FF4217A2E95D870B4C5F8E68EAF8C64DB5947_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* L_1 = (&V_0);
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_2 = (*(Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099*)L_1);
		if (L_2.___hasValue)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetHashCode_mD93BBB27DA4B62EDF63C8F4F35A12FFFC6AE3CEE(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 WrappedValue_1_get_Value_mA58485FE891E1CCFA8CC02A4201A8A27DEC7E074_gshared (WrappedValue_1_t3D602AF66C1228250B68787536CF9240F44EF940* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m0AF4B8C09E5FD7A27319FC5CDBA724614804237C_gshared (WrappedValue_1_t3D602AF66C1228250B68787536CF9240F44EF940* __this, Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m36BAACEC239EBB21185BEDE41E189B3B1883553C_gshared (WrappedValue_1_t3D602AF66C1228250B68787536CF9240F44EF940* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_t3D602AF66C1228250B68787536CF9240F44EF940* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t3D602AF66C1228250B68787536CF9240F44EF940*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t3D602AF66C1228250B68787536CF9240F44EF940*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t3D602AF66C1228250B68787536CF9240F44EF940* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5* L_3;
		L_3 = EqualityComparer_1_get_Default_m2ADE72FA4E9F5488FDAA1AE33E7B7ADD08168152_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 L_4;
		L_4 = WrappedValue_1_get_Value_mA58485FE891E1CCFA8CC02A4201A8A27DEC7E074_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_t3D602AF66C1228250B68787536CF9240F44EF940* L_5 = V_0;
		Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 L_6;
		L_6 = WrappedValue_1_get_Value_mA58485FE891E1CCFA8CC02A4201A8A27DEC7E074_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99, Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m0CA2E5D1022152B945F1D7CD96A794E5CF7D04C3_gshared (WrappedValue_1_t3D602AF66C1228250B68787536CF9240F44EF940* __this, const RuntimeMethod* method) 
{
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99* G_B2_0 = NULL;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99* G_B1_0 = NULL;
	{
		Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 L_0;
		L_0 = WrappedValue_1_get_Value_mA58485FE891E1CCFA8CC02A4201A8A27DEC7E074_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99* L_1 = (&V_0);
		Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 L_2 = (*(Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99*)L_1);
		if (L_2.___hasValue)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetHashCode_mBAF160D90D1F730D5E2CFB1781C847AF892242BC(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_get_Value_mB00D5A901097E3AFBD209CAD11E5E272E49BDEA2_gshared (WrappedValue_1_t729B27FE79AB1B3B4DAB75E7C1156F458E42E495* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m268770654A7D94B528B4B8F688E1AE34DD8DCB68_gshared (WrappedValue_1_t729B27FE79AB1B3B4DAB75E7C1156F458E42E495* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		bool L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_mF59F927358A8E886DCA4703E02C97B5A42A00BC4_gshared (WrappedValue_1_t729B27FE79AB1B3B4DAB75E7C1156F458E42E495* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_t729B27FE79AB1B3B4DAB75E7C1156F458E42E495* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t729B27FE79AB1B3B4DAB75E7C1156F458E42E495*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t729B27FE79AB1B3B4DAB75E7C1156F458E42E495*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t729B27FE79AB1B3B4DAB75E7C1156F458E42E495* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3;
		L_3 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		bool L_4;
		L_4 = WrappedValue_1_get_Value_mB00D5A901097E3AFBD209CAD11E5E272E49BDEA2_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_t729B27FE79AB1B3B4DAB75E7C1156F458E42E495* L_5 = V_0;
		bool L_6;
		L_6 = WrappedValue_1_get_Value_mB00D5A901097E3AFBD209CAD11E5E272E49BDEA2_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_mB36DA592A5619E6D814FEC8C2F3F118DB295DD9F_gshared (WrappedValue_1_t729B27FE79AB1B3B4DAB75E7C1156F458E42E495* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool* G_B2_0 = NULL;
	bool* G_B1_0 = NULL;
	{
		bool L_0;
		L_0 = WrappedValue_1_get_Value_mB00D5A901097E3AFBD209CAD11E5E272E49BDEA2_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		bool* L_1 = (&V_0);
		G_B2_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WrappedValue_1_get_Value_m29CFDE1F43E4655D2350117C261363D206C1BA6B_gshared (WrappedValue_1_t1EB1AAB44E67CBFC009A8C8EA8CA78B7A35A9CB1* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_mC46D3EE3007598E184AF107A6F96E6BBF3B94953_gshared (WrappedValue_1_t1EB1AAB44E67CBFC009A8C8EA8CA78B7A35A9CB1* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		uint8_t L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m61BCE481E58E7679E34761902B19732F03D37999_gshared (WrappedValue_1_t1EB1AAB44E67CBFC009A8C8EA8CA78B7A35A9CB1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_t1EB1AAB44E67CBFC009A8C8EA8CA78B7A35A9CB1* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t1EB1AAB44E67CBFC009A8C8EA8CA78B7A35A9CB1*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t1EB1AAB44E67CBFC009A8C8EA8CA78B7A35A9CB1*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t1EB1AAB44E67CBFC009A8C8EA8CA78B7A35A9CB1* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_3;
		L_3 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		uint8_t L_4;
		L_4 = WrappedValue_1_get_Value_m29CFDE1F43E4655D2350117C261363D206C1BA6B_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_t1EB1AAB44E67CBFC009A8C8EA8CA78B7A35A9CB1* L_5 = V_0;
		uint8_t L_6;
		L_6 = WrappedValue_1_get_Value_m29CFDE1F43E4655D2350117C261363D206C1BA6B_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m91C30459134654540A8867681C54BD05E4942B42_gshared (WrappedValue_1_t1EB1AAB44E67CBFC009A8C8EA8CA78B7A35A9CB1* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	uint8_t* G_B2_0 = NULL;
	uint8_t* G_B1_0 = NULL;
	{
		uint8_t L_0;
		L_0 = WrappedValue_1_get_Value_m29CFDE1F43E4655D2350117C261363D206C1BA6B_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		uint8_t* L_1 = (&V_0);
		G_B2_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2;
		L_2 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar WrappedValue_1_get_Value_m03E785FD6CE3D0B244BD9285BDA5E0C0ED26A0DC_gshared (WrappedValue_1_tF7CCFBCFB6DFBCB97BFC8EF0858D0ACEB370AC64* __this, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_mEB92B09B07BC0FFD8E5223D8FB0552DAFC2C1C8C_gshared (WrappedValue_1_tF7CCFBCFB6DFBCB97BFC8EF0858D0ACEB370AC64* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Il2CppChar L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m3CD786C5EDA9CF36C3E96D07D705B258B2D092D6_gshared (WrappedValue_1_tF7CCFBCFB6DFBCB97BFC8EF0858D0ACEB370AC64* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_tF7CCFBCFB6DFBCB97BFC8EF0858D0ACEB370AC64* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_tF7CCFBCFB6DFBCB97BFC8EF0858D0ACEB370AC64*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_tF7CCFBCFB6DFBCB97BFC8EF0858D0ACEB370AC64*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_tF7CCFBCFB6DFBCB97BFC8EF0858D0ACEB370AC64* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_3;
		L_3 = EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Il2CppChar L_4;
		L_4 = WrappedValue_1_get_Value_m03E785FD6CE3D0B244BD9285BDA5E0C0ED26A0DC_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_tF7CCFBCFB6DFBCB97BFC8EF0858D0ACEB370AC64* L_5 = V_0;
		Il2CppChar L_6;
		L_6 = WrappedValue_1_get_Value_m03E785FD6CE3D0B244BD9285BDA5E0C0ED26A0DC_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_mE5C53B9F83CAF3A2B19C3ADE721CEF7365660E4E_gshared (WrappedValue_1_tF7CCFBCFB6DFBCB97BFC8EF0858D0ACEB370AC64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	Il2CppChar* G_B2_0 = NULL;
	Il2CppChar* G_B1_0 = NULL;
	{
		Il2CppChar L_0;
		L_0 = WrappedValue_1_get_Value_m03E785FD6CE3D0B244BD9285BDA5E0C0ED26A0DC_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		Il2CppChar* L_1 = (&V_0);
		G_B2_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Char_GetHashCode_mB5406F7D8B6D7545CD1CE6FCA0567BD7217E6B93(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D WrappedValue_1_get_Value_m14D99C8F64B99A298C562600DDAEDA4F67DEBED8_gshared (WrappedValue_1_t73173AF7595A46F664705B4182B0CA0FDF421EC1* __this, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_mB0873E9BB7EA59E8587A9C8F637CA22BC3650B96_gshared (WrappedValue_1_t73173AF7595A46F664705B4182B0CA0FDF421EC1* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m539506CDE8F62BDBB538CF10F11E69B3B4B947FA_gshared (WrappedValue_1_t73173AF7595A46F664705B4182B0CA0FDF421EC1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_t73173AF7595A46F664705B4182B0CA0FDF421EC1* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t73173AF7595A46F664705B4182B0CA0FDF421EC1*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t73173AF7595A46F664705B4182B0CA0FDF421EC1*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t73173AF7595A46F664705B4182B0CA0FDF421EC1* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE* L_3;
		L_3 = EqualityComparer_1_get_Default_mF4BB724F5222831DB014E8DA90A10FA86ACC0415_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = WrappedValue_1_get_Value_m14D99C8F64B99A298C562600DDAEDA4F67DEBED8_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_t73173AF7595A46F664705B4182B0CA0FDF421EC1* L_5 = V_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6;
		L_6 = WrappedValue_1_get_Value_m14D99C8F64B99A298C562600DDAEDA4F67DEBED8_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m28A8C22FC9EA4BA9A4F30F077330AB0ED7042466_gshared (WrappedValue_1_t73173AF7595A46F664705B4182B0CA0FDF421EC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* G_B2_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* G_B1_0 = NULL;
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = WrappedValue_1_get_Value_m14D99C8F64B99A298C562600DDAEDA4F67DEBED8_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_1 = (&V_0);
		G_B2_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DateTime_GetHashCode_m206A3B9394E6D089311A1A81305A5A1AB30B2D99(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 WrappedValue_1_get_Value_m2714F9E555808614624D1F44C27548FF2A72E279_gshared (WrappedValue_1_t79C04924BC7586B94EEA70EC82111804416A084D* __this, const RuntimeMethod* method) 
{
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m4990E3FF2FC8D1C4D6B2B12F35E4847012B0C937_gshared (WrappedValue_1_t79C04924BC7586B94EEA70EC82111804416A084D* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m10B0C7BAECB90954F30DB2EA8959AC9B0AB18F9E_gshared (WrappedValue_1_t79C04924BC7586B94EEA70EC82111804416A084D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_t79C04924BC7586B94EEA70EC82111804416A084D* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t79C04924BC7586B94EEA70EC82111804416A084D*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t79C04924BC7586B94EEA70EC82111804416A084D*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t79C04924BC7586B94EEA70EC82111804416A084D* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44* L_3;
		L_3 = EqualityComparer_1_get_Default_m5940F55379DF8F2C0717CB910CAA32DD9E69F06E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_4;
		L_4 = WrappedValue_1_get_Value_m2714F9E555808614624D1F44C27548FF2A72E279_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_t79C04924BC7586B94EEA70EC82111804416A084D* L_5 = V_0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_6;
		L_6 = WrappedValue_1_get_Value_m2714F9E555808614624D1F44C27548FF2A72E279_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_mDC67C70A9312604A7643B93687BE04F0304FF75A_gshared (WrappedValue_1_t79C04924BC7586B94EEA70EC82111804416A084D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* G_B2_0 = NULL;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* G_B1_0 = NULL;
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_0;
		L_0 = WrappedValue_1_get_Value_m2714F9E555808614624D1F44C27548FF2A72E279_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_1 = (&V_0);
		G_B2_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DateTimeOffset_GetHashCode_mD133F5089095D2C75A1B7C90D71D62D39F0D11CD(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F WrappedValue_1_get_Value_mED2E6DF18DADD8DF429DC9C00DDEA667663F9619_gshared (WrappedValue_1_tE2A5ADC91C24730012A0D89E29E766595D5A80CF* __this, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m4D1F90E1D8DB255B3A5D70B7F55BD5958235147D_gshared (WrappedValue_1_tE2A5ADC91C24730012A0D89E29E766595D5A80CF* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_mF872CB803E1AF8E1714A4C21383BEE2549F1EFCD_gshared (WrappedValue_1_tE2A5ADC91C24730012A0D89E29E766595D5A80CF* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_tE2A5ADC91C24730012A0D89E29E766595D5A80CF* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_tE2A5ADC91C24730012A0D89E29E766595D5A80CF*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_tE2A5ADC91C24730012A0D89E29E766595D5A80CF*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_tE2A5ADC91C24730012A0D89E29E766595D5A80CF* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A* L_3;
		L_3 = EqualityComparer_1_get_Default_mFDAB2569319FBB5F0B809089CE6413BF798C0677_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4;
		L_4 = WrappedValue_1_get_Value_mED2E6DF18DADD8DF429DC9C00DDEA667663F9619_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_tE2A5ADC91C24730012A0D89E29E766595D5A80CF* L_5 = V_0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_6;
		L_6 = WrappedValue_1_get_Value_mED2E6DF18DADD8DF429DC9C00DDEA667663F9619_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m70EA9A266141BB15A06FE060FBA8D73960D824DC_gshared (WrappedValue_1_tE2A5ADC91C24730012A0D89E29E766595D5A80CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* G_B2_0 = NULL;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* G_B1_0 = NULL;
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0;
		L_0 = WrappedValue_1_get_Value_mED2E6DF18DADD8DF429DC9C00DDEA667663F9619_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_1 = (&V_0);
		G_B2_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Decimal_GetHashCode_m66F324087D323E0783EA339024D989FF5568E960(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double WrappedValue_1_get_Value_mF5B93BD631E7AE43365A68E381210C55F8A062E9_gshared (WrappedValue_1_tD51D6DDD0C09899E1CC6F23E204A0436D5E41A51* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m83CDEC2F23C4512546FA1598D48956DB990E8EB3_gshared (WrappedValue_1_tD51D6DDD0C09899E1CC6F23E204A0436D5E41A51* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		double L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_mC6BB41B3C5EE7F6C4E030A1070D6B6E4ADAF6FF5_gshared (WrappedValue_1_tD51D6DDD0C09899E1CC6F23E204A0436D5E41A51* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_tD51D6DDD0C09899E1CC6F23E204A0436D5E41A51* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_tD51D6DDD0C09899E1CC6F23E204A0436D5E41A51*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_tD51D6DDD0C09899E1CC6F23E204A0436D5E41A51*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_tD51D6DDD0C09899E1CC6F23E204A0436D5E41A51* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_3;
		L_3 = EqualityComparer_1_get_Default_m12CC270D19620F4E8E3ABFE7BF8C2B1955476A04_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		double L_4;
		L_4 = WrappedValue_1_get_Value_mF5B93BD631E7AE43365A68E381210C55F8A062E9_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_tD51D6DDD0C09899E1CC6F23E204A0436D5E41A51* L_5 = V_0;
		double L_6;
		L_6 = WrappedValue_1_get_Value_mF5B93BD631E7AE43365A68E381210C55F8A062E9_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, double, double >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_mEFFB29B1F4C5551773AA92EDC1503593389733C7_gshared (WrappedValue_1_tD51D6DDD0C09899E1CC6F23E204A0436D5E41A51* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double* G_B2_0 = NULL;
	double* G_B1_0 = NULL;
	{
		double L_0;
		L_0 = WrappedValue_1_get_Value_mF5B93BD631E7AE43365A68E381210C55F8A062E9_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		double* L_1 = (&V_0);
		G_B2_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2;
		L_2 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t WrappedValue_1_get_Value_m408948E1C0488F465326AB3758067FA734C27F61_gshared (WrappedValue_1_tDBD2E2AA1CA35EEA618C15496FF2104E7B7CA37B* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m2400339A5630A2C8BEAE9FE8396FB3CB3EBFA804_gshared (WrappedValue_1_tDBD2E2AA1CA35EEA618C15496FF2104E7B7CA37B* __this, Guid_t ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Guid_t L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_mD7851B97F77A14286635A6BB51644087F6395380_gshared (WrappedValue_1_tDBD2E2AA1CA35EEA618C15496FF2104E7B7CA37B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_tDBD2E2AA1CA35EEA618C15496FF2104E7B7CA37B* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_tDBD2E2AA1CA35EEA618C15496FF2104E7B7CA37B*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_tDBD2E2AA1CA35EEA618C15496FF2104E7B7CA37B*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_tDBD2E2AA1CA35EEA618C15496FF2104E7B7CA37B* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_3;
		L_3 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Guid_t L_4;
		L_4 = WrappedValue_1_get_Value_m408948E1C0488F465326AB3758067FA734C27F61_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_tDBD2E2AA1CA35EEA618C15496FF2104E7B7CA37B* L_5 = V_0;
		Guid_t L_6;
		L_6 = WrappedValue_1_get_Value_m408948E1C0488F465326AB3758067FA734C27F61_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_mA0B962F935C8768FDD3983F62691FC7175C2EB59_gshared (WrappedValue_1_tDBD2E2AA1CA35EEA618C15496FF2104E7B7CA37B* __this, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Guid_t* G_B2_0 = NULL;
	Guid_t* G_B1_0 = NULL;
	{
		Guid_t L_0;
		L_0 = WrappedValue_1_get_Value_m408948E1C0488F465326AB3758067FA734C27F61_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		Guid_t* L_1 = (&V_0);
		G_B2_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2;
		L_2 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t WrappedValue_1_get_Value_mF8CDCBAE7311112EB8E7E41DA3D2C42C83BB230C_gshared (WrappedValue_1_tCA5027D3B7F72F98E63929D51B82013C1172B91F* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m065B5F9F53E30FF0D6052E047B4E8C6D414C2FBB_gshared (WrappedValue_1_tCA5027D3B7F72F98E63929D51B82013C1172B91F* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int16_t L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_mE6592DCA830A7CE57C6B74D4EC37A7ED2EB76B27_gshared (WrappedValue_1_tCA5027D3B7F72F98E63929D51B82013C1172B91F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_tCA5027D3B7F72F98E63929D51B82013C1172B91F* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_tCA5027D3B7F72F98E63929D51B82013C1172B91F*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_tCA5027D3B7F72F98E63929D51B82013C1172B91F*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_tCA5027D3B7F72F98E63929D51B82013C1172B91F* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_3;
		L_3 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		int16_t L_4;
		L_4 = WrappedValue_1_get_Value_mF8CDCBAE7311112EB8E7E41DA3D2C42C83BB230C_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_tCA5027D3B7F72F98E63929D51B82013C1172B91F* L_5 = V_0;
		int16_t L_6;
		L_6 = WrappedValue_1_get_Value_mF8CDCBAE7311112EB8E7E41DA3D2C42C83BB230C_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m2C921083F7E90EFAAB7EE37429260835038A9FEC_gshared (WrappedValue_1_tCA5027D3B7F72F98E63929D51B82013C1172B91F* __this, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	int16_t* G_B2_0 = NULL;
	int16_t* G_B1_0 = NULL;
	{
		int16_t L_0;
		L_0 = WrappedValue_1_get_Value_mF8CDCBAE7311112EB8E7E41DA3D2C42C83BB230C_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		int16_t* L_1 = (&V_0);
		G_B2_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2;
		L_2 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_get_Value_mA2C6A04E8446D296296134B42C7AA77D7101E09C_gshared (WrappedValue_1_tDAAEBDEE88F3A8DE06ECA05C1E191368D16FC608* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m6671DB0E06CC84AB4F2A3EBD24AA1CBE9040D5D1_gshared (WrappedValue_1_tDAAEBDEE88F3A8DE06ECA05C1E191368D16FC608* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m48D4DE91439F16B23BA13155CEA061BC654BEB44_gshared (WrappedValue_1_tDAAEBDEE88F3A8DE06ECA05C1E191368D16FC608* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_tDAAEBDEE88F3A8DE06ECA05C1E191368D16FC608* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_tDAAEBDEE88F3A8DE06ECA05C1E191368D16FC608*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_tDAAEBDEE88F3A8DE06ECA05C1E191368D16FC608*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_tDAAEBDEE88F3A8DE06ECA05C1E191368D16FC608* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		int32_t L_4;
		L_4 = WrappedValue_1_get_Value_mA2C6A04E8446D296296134B42C7AA77D7101E09C_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_tDAAEBDEE88F3A8DE06ECA05C1E191368D16FC608* L_5 = V_0;
		int32_t L_6;
		L_6 = WrappedValue_1_get_Value_mA2C6A04E8446D296296134B42C7AA77D7101E09C_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m8CA0095FC73F645A3BB8ADE4590B16B4673C4064_gshared (WrappedValue_1_tDAAEBDEE88F3A8DE06ECA05C1E191368D16FC608* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* G_B2_0 = NULL;
	int32_t* G_B1_0 = NULL;
	{
		int32_t L_0;
		L_0 = WrappedValue_1_get_Value_mA2C6A04E8446D296296134B42C7AA77D7101E09C_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		int32_t* L_1 = (&V_0);
		G_B2_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2;
		L_2 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WrappedValue_1_get_Value_m3DF887EC7F01D3E293D2EFD20467BE0479D589EA_gshared (WrappedValue_1_tFCFD37F89941250A9CFC19A55B5C1B1C583D5205* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m446016D5A5F0864AE6B88BAB46121621819FC26D_gshared (WrappedValue_1_tFCFD37F89941250A9CFC19A55B5C1B1C583D5205* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int64_t L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m3008BFB4F0664ADB1D4FDB3F93B4126E2F1BDB22_gshared (WrappedValue_1_tFCFD37F89941250A9CFC19A55B5C1B1C583D5205* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_tFCFD37F89941250A9CFC19A55B5C1B1C583D5205* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_tFCFD37F89941250A9CFC19A55B5C1B1C583D5205*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_tFCFD37F89941250A9CFC19A55B5C1B1C583D5205*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_tFCFD37F89941250A9CFC19A55B5C1B1C583D5205* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_3;
		L_3 = EqualityComparer_1_get_Default_m76691DC579907239261E159E4DFDD8B1C3C9E5FE_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		int64_t L_4;
		L_4 = WrappedValue_1_get_Value_m3DF887EC7F01D3E293D2EFD20467BE0479D589EA_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_tFCFD37F89941250A9CFC19A55B5C1B1C583D5205* L_5 = V_0;
		int64_t L_6;
		L_6 = WrappedValue_1_get_Value_m3DF887EC7F01D3E293D2EFD20467BE0479D589EA_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, int64_t, int64_t >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_mBF4E58AE111A5BDBC943D525463AC67B13D456B2_gshared (WrappedValue_1_tFCFD37F89941250A9CFC19A55B5C1B1C583D5205* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int64_t* G_B2_0 = NULL;
	int64_t* G_B1_0 = NULL;
	{
		int64_t L_0;
		L_0 = WrappedValue_1_get_Value_m3DF887EC7F01D3E293D2EFD20467BE0479D589EA_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		int64_t* L_1 = (&V_0);
		G_B2_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2;
		L_2 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrappedValue_1_get_Value_mA9FC7D0093C8B91E8BD6A2FF19B5855207CA3342_gshared (WrappedValue_1_t96969F56BF2DAF4FA7A9AD37CC85EDF9C5B48296* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m7CC84BBC10A5083CD658B598E6670AEBE0B934FC_gshared (WrappedValue_1_t96969F56BF2DAF4FA7A9AD37CC85EDF9C5B48296* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_mD463BE76B514177A57EF4AA10692DAF544C6D0EE_gshared (WrappedValue_1_t96969F56BF2DAF4FA7A9AD37CC85EDF9C5B48296* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_t96969F56BF2DAF4FA7A9AD37CC85EDF9C5B48296* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t96969F56BF2DAF4FA7A9AD37CC85EDF9C5B48296*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t96969F56BF2DAF4FA7A9AD37CC85EDF9C5B48296*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t96969F56BF2DAF4FA7A9AD37CC85EDF9C5B48296* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RuntimeObject* L_4;
		L_4 = WrappedValue_1_get_Value_mA9FC7D0093C8B91E8BD6A2FF19B5855207CA3342_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_t96969F56BF2DAF4FA7A9AD37CC85EDF9C5B48296* L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = WrappedValue_1_get_Value_mA9FC7D0093C8B91E8BD6A2FF19B5855207CA3342_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_mB549851F5589742FB001CCB38E4A2D28CAF25006_gshared (WrappedValue_1_t96969F56BF2DAF4FA7A9AD37CC85EDF9C5B48296* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject** G_B2_0 = NULL;
	RuntimeObject** G_B1_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = WrappedValue_1_get_Value_mA9FC7D0093C8B91E8BD6A2FF19B5855207CA3342_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		RuntimeObject** L_1 = (&V_0);
		RuntimeObject* L_2 = (*(RuntimeObject**)L_1);
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2, (*G_B2_0));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t WrappedValue_1_get_Value_m82EB73B3E4E81D77905F9D425CA3498341CBCFAC_gshared (WrappedValue_1_tF0A4A84D2019A785F6E9BD208CA577199A6A1569* __this, const RuntimeMethod* method) 
{
	{
		int8_t L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_mDBF47F2FE8DB6C21F7DC34CB65ADB00C799CDC70_gshared (WrappedValue_1_tF0A4A84D2019A785F6E9BD208CA577199A6A1569* __this, int8_t ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int8_t L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m63A3B46210C162F0C01C0910E421ADC1944617BF_gshared (WrappedValue_1_tF0A4A84D2019A785F6E9BD208CA577199A6A1569* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_tF0A4A84D2019A785F6E9BD208CA577199A6A1569* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_tF0A4A84D2019A785F6E9BD208CA577199A6A1569*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_tF0A4A84D2019A785F6E9BD208CA577199A6A1569*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_tF0A4A84D2019A785F6E9BD208CA577199A6A1569* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_3;
		L_3 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		int8_t L_4;
		L_4 = WrappedValue_1_get_Value_m82EB73B3E4E81D77905F9D425CA3498341CBCFAC_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_tF0A4A84D2019A785F6E9BD208CA577199A6A1569* L_5 = V_0;
		int8_t L_6;
		L_6 = WrappedValue_1_get_Value_m82EB73B3E4E81D77905F9D425CA3498341CBCFAC_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m176497B6E6124E14E641D48FD3F14C10F2C7AE3A_gshared (WrappedValue_1_tF0A4A84D2019A785F6E9BD208CA577199A6A1569* __this, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	int8_t* G_B2_0 = NULL;
	int8_t* G_B1_0 = NULL;
	{
		int8_t L_0;
		L_0 = WrappedValue_1_get_Value_m82EB73B3E4E81D77905F9D425CA3498341CBCFAC_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		int8_t* L_1 = (&V_0);
		G_B2_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2;
		L_2 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WrappedValue_1_get_Value_m14CB5C7659D18C6BA603D47917FF24EE856AA54D_gshared (WrappedValue_1_t43451D8A65E3D98CFC11F483300FD6640D70335F* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_mDA88E838A3555B92190F03B8D4D26B84D97D8F84_gshared (WrappedValue_1_t43451D8A65E3D98CFC11F483300FD6640D70335F* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		float L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m2518ADD669C8D6C53FC69943E3879992190905B7_gshared (WrappedValue_1_t43451D8A65E3D98CFC11F483300FD6640D70335F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_t43451D8A65E3D98CFC11F483300FD6640D70335F* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t43451D8A65E3D98CFC11F483300FD6640D70335F*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t43451D8A65E3D98CFC11F483300FD6640D70335F*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t43451D8A65E3D98CFC11F483300FD6640D70335F* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_3;
		L_3 = EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		float L_4;
		L_4 = WrappedValue_1_get_Value_m14CB5C7659D18C6BA603D47917FF24EE856AA54D_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_t43451D8A65E3D98CFC11F483300FD6640D70335F* L_5 = V_0;
		float L_6;
		L_6 = WrappedValue_1_get_Value_m14CB5C7659D18C6BA603D47917FF24EE856AA54D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, float, float >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m0F17EDB6AC6A4C1728524E063F7B500FCD21A53D_gshared (WrappedValue_1_t43451D8A65E3D98CFC11F483300FD6640D70335F* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float* G_B2_0 = NULL;
	float* G_B1_0 = NULL;
	{
		float L_0;
		L_0 = WrappedValue_1_get_Value_m14CB5C7659D18C6BA603D47917FF24EE856AA54D_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		float* L_1 = (&V_0);
		G_B2_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2;
		L_2 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A WrappedValue_1_get_Value_mA3EF12A20538B2E70E7295C035B36552FB6C196A_gshared (WrappedValue_1_tF983A2518D15C724FACBA71A5B53FDE5E005EFD7* __this, const RuntimeMethod* method) 
{
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_mABD35A4E5111E3503058BDE09B0D09D0812EF50F_gshared (WrappedValue_1_tF983A2518D15C724FACBA71A5B53FDE5E005EFD7* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_mFEC85E7F486B4A0747682B6E8D547EAE428FAF25_gshared (WrappedValue_1_tF983A2518D15C724FACBA71A5B53FDE5E005EFD7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_tF983A2518D15C724FACBA71A5B53FDE5E005EFD7* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_tF983A2518D15C724FACBA71A5B53FDE5E005EFD7*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_tF983A2518D15C724FACBA71A5B53FDE5E005EFD7*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_tF983A2518D15C724FACBA71A5B53FDE5E005EFD7* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41* L_3;
		L_3 = EqualityComparer_1_get_Default_m54987862FB97262994FF5257CF4B3E47D9ED5700_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = WrappedValue_1_get_Value_mA3EF12A20538B2E70E7295C035B36552FB6C196A_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_tF983A2518D15C724FACBA71A5B53FDE5E005EFD7* L_5 = V_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_6;
		L_6 = WrappedValue_1_get_Value_mA3EF12A20538B2E70E7295C035B36552FB6C196A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m6B5A554DC118C9340C9F9D95CF9DD7048288484E_gshared (WrappedValue_1_tF983A2518D15C724FACBA71A5B53FDE5E005EFD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* G_B2_0 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* G_B1_0 = NULL;
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0;
		L_0 = WrappedValue_1_get_Value_mA3EF12A20538B2E70E7295C035B36552FB6C196A_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_1 = (&V_0);
		G_B2_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = TimeSpan_GetHashCode_m2CBBAD27522E17FE6006390ED0E3874676CAA76D(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t WrappedValue_1_get_Value_m8A872E34244A4E828F6D89950F038FE3E0C82E27_gshared (WrappedValue_1_t9717F9CCB663633CB9B85813A633F18BDEBD5028* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m1FD850F8CD163CFCE08A461F8D02EB284674CEC2_gshared (WrappedValue_1_t9717F9CCB663633CB9B85813A633F18BDEBD5028* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		uint16_t L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_mBB419E6B130FF7CB3421645426EA269DC98A579C_gshared (WrappedValue_1_t9717F9CCB663633CB9B85813A633F18BDEBD5028* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_t9717F9CCB663633CB9B85813A633F18BDEBD5028* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t9717F9CCB663633CB9B85813A633F18BDEBD5028*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t9717F9CCB663633CB9B85813A633F18BDEBD5028*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t9717F9CCB663633CB9B85813A633F18BDEBD5028* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_3;
		L_3 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		uint16_t L_4;
		L_4 = WrappedValue_1_get_Value_m8A872E34244A4E828F6D89950F038FE3E0C82E27_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_t9717F9CCB663633CB9B85813A633F18BDEBD5028* L_5 = V_0;
		uint16_t L_6;
		L_6 = WrappedValue_1_get_Value_m8A872E34244A4E828F6D89950F038FE3E0C82E27_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_mBB747BC02ECE0AA2F78F94F98602C9D33A75BBE5_gshared (WrappedValue_1_t9717F9CCB663633CB9B85813A633F18BDEBD5028* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	uint16_t* G_B2_0 = NULL;
	uint16_t* G_B1_0 = NULL;
	{
		uint16_t L_0;
		L_0 = WrappedValue_1_get_Value_m8A872E34244A4E828F6D89950F038FE3E0C82E27_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		uint16_t* L_1 = (&V_0);
		G_B2_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2;
		L_2 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WrappedValue_1_get_Value_mCB61FDD64803251C6BD573BCA23F4FD710A67906_gshared (WrappedValue_1_t428210A061F150CC0822ED9FA2A05CFE14772F5C* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_mBDF2F00ED3431082F982DB98317B00F4A45440DB_gshared (WrappedValue_1_t428210A061F150CC0822ED9FA2A05CFE14772F5C* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		uint32_t L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_mFCFFE6D188DD693D7E4232A50C6783D63B5CA5B5_gshared (WrappedValue_1_t428210A061F150CC0822ED9FA2A05CFE14772F5C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_t428210A061F150CC0822ED9FA2A05CFE14772F5C* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t428210A061F150CC0822ED9FA2A05CFE14772F5C*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t428210A061F150CC0822ED9FA2A05CFE14772F5C*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t428210A061F150CC0822ED9FA2A05CFE14772F5C* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3;
		L_3 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		uint32_t L_4;
		L_4 = WrappedValue_1_get_Value_mCB61FDD64803251C6BD573BCA23F4FD710A67906_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_t428210A061F150CC0822ED9FA2A05CFE14772F5C* L_5 = V_0;
		uint32_t L_6;
		L_6 = WrappedValue_1_get_Value_mCB61FDD64803251C6BD573BCA23F4FD710A67906_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m67CA4D95507D538A764C7828973B5003E2DF566A_gshared (WrappedValue_1_t428210A061F150CC0822ED9FA2A05CFE14772F5C* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t* G_B2_0 = NULL;
	uint32_t* G_B1_0 = NULL;
	{
		uint32_t L_0;
		L_0 = WrappedValue_1_get_Value_mCB61FDD64803251C6BD573BCA23F4FD710A67906_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		uint32_t* L_1 = (&V_0);
		G_B2_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2;
		L_2 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WrappedValue_1_get_Value_m3DBB0EF74B7942CC2E83061AD590EAD6C0AA5443_gshared (WrappedValue_1_t3C9579230F8F7A78F089F1FB7AB8A6471F9DA1B3* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_mCA2122C44AAF43116193CE69CDF30908D4B3D916_gshared (WrappedValue_1_t3C9579230F8F7A78F089F1FB7AB8A6471F9DA1B3* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		uint64_t L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_m9E24AD390F8A0C183E44A27B5A8F866DB2886D89_gshared (WrappedValue_1_t3C9579230F8F7A78F089F1FB7AB8A6471F9DA1B3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	WrappedValue_1_t3C9579230F8F7A78F089F1FB7AB8A6471F9DA1B3* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t3C9579230F8F7A78F089F1FB7AB8A6471F9DA1B3*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t3C9579230F8F7A78F089F1FB7AB8A6471F9DA1B3*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t3C9579230F8F7A78F089F1FB7AB8A6471F9DA1B3* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_3;
		L_3 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		uint64_t L_4;
		L_4 = WrappedValue_1_get_Value_m3DBB0EF74B7942CC2E83061AD590EAD6C0AA5443_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		WrappedValue_1_t3C9579230F8F7A78F089F1FB7AB8A6471F9DA1B3* L_5 = V_0;
		uint64_t L_6;
		L_6 = WrappedValue_1_get_Value_m3DBB0EF74B7942CC2E83061AD590EAD6C0AA5443_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(8, L_3, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_mACFFEA8D047E4BBB1CD791DF50945F2FAC0E4E6B_gshared (WrappedValue_1_t3C9579230F8F7A78F089F1FB7AB8A6471F9DA1B3* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t* G_B2_0 = NULL;
	uint64_t* G_B1_0 = NULL;
	{
		uint64_t L_0;
		L_0 = WrappedValue_1_get_Value_m3DBB0EF74B7942CC2E83061AD590EAD6C0AA5443_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_0 = L_0;
		uint64_t* L_1 = (&V_0);
		G_B2_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2;
		L_2 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1_get_Value_m0C9068E65E28388FBC2517338B6BB53C6D44CDD8_gshared (WrappedValue_1_t27403FA5E17D39B528E4EE63DA29050565E4F52A* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedValue_1__ctor_m0EED64E0AA385D265A0501DD9D1ADF4B6715CC95_gshared (WrappedValue_1_t27403FA5E17D39B528E4EE63DA29050565E4F52A* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_value : &___0_value), SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0, SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedValue_1_Equals_mECCB8DF78E164A1DD6D3DFE8DE04CA4FAADA7911_gshared (WrappedValue_1_t27403FA5E17D39B528E4EE63DA29050565E4F52A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
	WrappedValue_1_t27403FA5E17D39B528E4EE63DA29050565E4F52A* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(WrappedValue_1_t27403FA5E17D39B528E4EE63DA29050565E4F52A*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((WrappedValue_1_t27403FA5E17D39B528E4EE63DA29050565E4F52A*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		WrappedValue_1_t27403FA5E17D39B528E4EE63DA29050565E4F52A* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), __this, (Il2CppFullySharedGenericAny*)L_4);
		WrappedValue_1_t27403FA5E17D39B528E4EE63DA29050565E4F52A* L_5 = V_0;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_5, (Il2CppFullySharedGenericAny*)L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_4: *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_6: *(void**)L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedValue_1_GetHashCode_m66554E78733DE4355CC81D092E2866219E9FEFAF_gshared (WrappedValue_1_t27403FA5E17D39B528E4EE63DA29050565E4F52A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
	memset(V_0, 0, SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
	memset(G_B2_0, 0, SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
	Il2CppFullySharedGenericAny G_B1_0 = alloca(SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
	memset(G_B1_0, 0, SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), __this, (Il2CppFullySharedGenericAny*)L_0);
		il2cpp_codegen_memcpy(V_0, L_0, SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
		Il2CppFullySharedGenericAny* L_1 = (Il2CppFullySharedGenericAny*)V_0;
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_2);
		if (L_3)
		{
			il2cpp_codegen_memcpy(G_B2_0, L_1, SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
			goto IL_0019;
		}
		il2cpp_codegen_memcpy(G_B1_0, L_1, SizeOf_TValue_tB17247D9F4F027D3679E8B823346DF4634EFD48A);
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_5;
		L_5 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_4, (void*)G_B2_0);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		double L_0 = *((double*)__this);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if ((((int64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)1)))&((int64_t)(std::numeric_limits<int64_t>::max)())))) < ((int64_t)((int64_t)9218868437227405312LL))))
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_3 = V_0;
		V_0 = ((int64_t)(L_3&((int64_t)9218868437227405312LL)));
	}

IL_002d:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		return ((int32_t)(((int32_t)L_4)^((int32_t)((int64_t)(L_5>>((int32_t)32))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m4733F0A0FE136C9F8DCE4963455215585E8BE2CD_gshared_inline (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* __this, Il2CppChar ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppChar, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mECD514E493F9F65FC71FE3556ADE0A2E6419C03D_gshared_inline (Func_2_tF79EB306F5092BDE9E8C4856A462183F75F42E0E* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m1D654CA41A2FC43EECC21031D6623DB89679596A_gshared_inline (Func_2_t787059BE0FE614D65C46B2791347A3F534BC0A0C* __this, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar Func_2_Invoke_mF0637A69B6444509F1E28F469D561339E1F8636F_gshared_inline (Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* __this, Il2CppChar ___0_arg, const RuntimeMethod* method) 
{
	typedef Il2CppChar (*FunctionPointerType) (RuntimeObject*, Il2CppChar, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 Enumerator_get_Current_m7362387DF032E42E572F7041F4C1A3CD21679DCD_gshared_inline (Enumerator_t7F9BA7E481A1947D155FE5B42578F1117860DC39* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar Enumerator_get_Current_m50891A1A1A5F69FFF0D667B82BD22B8658F1A6E7_gshared_inline (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* __this, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8* EqualityComparer_1_get_Default_m580F3ACD89A4B05DD1CC6BE2C290108F9AA790C6_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8* V_0 = NULL;
	{
		EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8* L_0 = ((EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mC94265A152B9B377D877A7F20B11DFBA46C0E06D(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t0CB6E7793894E25A1C5F568254A829AF83A78BF8* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 WrappedValue_1_get_Value_mEFEF2030836DFC681FD0C1069BF11380F0EF66F3_gshared_inline (WrappedValue_1_t038BEFC004F46FAB767F45F8815E8432F8FE798F* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2* EqualityComparer_1_get_Default_m53444E492B798009A5D017FC35049EF3DBB7356F_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2* V_0 = NULL;
	{
		EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2* L_0 = ((EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m9FF44C6E5D94BE0C04F0F33546CD3904D0C74B1F(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t478EDDEE79DDBD3CF8BB600CC1422C24D7CECCE2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 WrappedValue_1_get_Value_m1AD9FBAF561601DD04BDBEDDFCEBBD8CF8DE6097_gshared_inline (WrappedValue_1_tEECC84FD02441C3B391CBDBF2865E5B168BB895C* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C* EqualityComparer_1_get_Default_mE883532964DB2B0FBAD3168E1FDE2A79C2D3D8EF_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C* V_0 = NULL;
	{
		EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C* L_0 = ((EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mCB3927DA01EB7872F7A45A16C5246BFBB3089404(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t05F9C494B0419816F44B89E3767FE23EA3AF519C* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 WrappedValue_1_get_Value_m8FDAC1ED0CEFA215AA92A6D6D5AC5A4D7C84B6AC_gshared_inline (WrappedValue_1_t02F152AD1C2A0D08E54E3E5762D46667B7CF94C5* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331* EqualityComparer_1_get_Default_mEE0F7E7E6B5F46413743A1D60FDCA1E1C867A464_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331* V_0 = NULL;
	{
		EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331* L_0 = ((EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m30AB42A41BED45F164EDB09B164801D3E558C06A(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t883DC1BC3035981DE8C3F6368CAE4B58217BB331* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC WrappedValue_1_get_Value_mB7A5F1ACB34B427EB7B305D08295EE8F39889FE8_gshared_inline (WrappedValue_1_tC6DF74086B33736065E471AB6DFBA4C382D9ECB9* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E* EqualityComparer_1_get_Default_m9365807624DE89FD1CC20935AA1CE1055358D494_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E* V_0 = NULL;
	{
		EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E* L_0 = ((EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mBF70314A2EC5A2F146D36747EE7431F10691441B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tAF2C7FC027D8D149379DBA9AB898A8777282484E* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B WrappedValue_1_get_Value_mB1682F4DAEA23DBA3201A740469AF3470BB2A8C9_gshared_inline (WrappedValue_1_t6A86A69A5D7E4F05512B9460B09FEFBEACEB405E* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4* EqualityComparer_1_get_Default_m1E5BD6D8FD7F1D2FF85113EF07641DE62EEB4519_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4* V_0 = NULL;
	{
		EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4* L_0 = ((EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m914D8986564016370DE8CE88AEDAA9BA65D32656(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8113DE637B960108C962706B6857621F740268A4* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB WrappedValue_1_get_Value_m67ECE63E767B78EFB8EB84EB99AE96B757BF60F6_gshared_inline (WrappedValue_1_tF789D1365EFD286B9985361743A35348AEB43F16* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* EqualityComparer_1_get_Default_m13DD6F4C665FB5BD7AF62F9FE1F51848D35211BA_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* V_0 = NULL;
	{
		EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* L_0 = ((EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m6C9A510DB6C173B969E97CCDD8068052691B223C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 WrappedValue_1_get_Value_mCADADF22F761D0759D60D12328B040BB3EFA2689_gshared_inline (WrappedValue_1_t05C6D0355A089F3AC2424F605AD1C521B11AFBC8* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041* EqualityComparer_1_get_Default_m735D02B82383F0158CFB46E97E87BE2DA8D582BA_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041* V_0 = NULL;
	{
		EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041* L_0 = ((EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mDA5E49C8521857A45E94FA486C1570A47EA06144(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t4912A84B77E141F4B64B88CA84111102E88EE041* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 WrappedValue_1_get_Value_m23135D15AC8CC5E111A31F086CF84051BFCADBB6_gshared_inline (WrappedValue_1_t2B578379719E1F9499D751FEB82BA72226B668C6* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0* EqualityComparer_1_get_Default_mE72B25D9A32B5E5D05D89D4A159A2E0FA149CC15_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0* V_0 = NULL;
	{
		EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0* L_0 = ((EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mCBC2F5EBDB56D6FEF90AAA989E6280EB87F4B63F(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t09B8658A413E55DAE5D66ADFD0D929C462A5E8B0* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C WrappedValue_1_get_Value_mF6D6B66C73587731BA99590E798278E9153E697E_gshared_inline (WrappedValue_1_tD35A3788939F50F1E2A2720D91649A0AF6B826BD* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5* EqualityComparer_1_get_Default_m2335E4A9C135593934E9CC78A2DDB9D50307D29C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5* V_0 = NULL;
	{
		EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5* L_0 = ((EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m2A4CCA3BF5A278473D4E739B5BA81ACEDC6D3E36(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t39BAA6C1CB174581E963798F96170868B55386C5* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 WrappedValue_1_get_Value_mDFC09AB2FD93C911603F8A216FF0DD2D73DD53E5_gshared_inline (WrappedValue_1_t5FD375EA11518E6140F855B737BD2E9F10107D58* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5* EqualityComparer_1_get_Default_m06ACB88BDADF7BC3AAB4663C877CD1AA2ADAA30D_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5* V_0 = NULL;
	{
		EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5* L_0 = ((EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mC5F2F4D1D82FB977954F70F5F3F44CBCDDD7F05D(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tCF456ED89DB1CBE7E98CDCC88486E6B7F79B26C5* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 WrappedValue_1_get_Value_m67F8E477B0DB16439FB3574C0077EDB0A2743897_gshared_inline (WrappedValue_1_tA1D60AED94DEDD8CF96236CA6946E9FFB5AE1094* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* EqualityComparer_1_get_Default_m1879FDE74BF5D95C5EE4A6BA72777E01D763C60C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* V_0 = NULL;
	{
		EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* L_0 = ((EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m3884FCBAE34EBA4703509EACCD65D3ECE496B895(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 WrappedValue_1_get_Value_m847D91077D31950B94668DC0E75084E39C67F54A_gshared_inline (WrappedValue_1_t62343E85AB28E6EB6CB50590D4E21CA3BCB1789A* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80* EqualityComparer_1_get_Default_mDAD3208D3D489C268E00D308B991A55D92AB2BD7_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80* V_0 = NULL;
	{
		EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80* L_0 = ((EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mAF0712E89C354103D1AF44B3C095A1A0EC657F10(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tE3F6420ADC2E44A4044F43D9BF3D1B5F63706C80* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 WrappedValue_1_get_Value_mA17E95330CF73077B659A6F8730739148215468B_gshared_inline (WrappedValue_1_tE7A8D38DBC847F1C43C2FC9C83DF1BC9D09C0667* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB* EqualityComparer_1_get_Default_m3D19280994C8052E058E95F202C8537D60128B29_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB* V_0 = NULL;
	{
		EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB* L_0 = ((EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m42BB9945254BD30979F3BF34F90E2EBC96D5995D(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tB74CAE386118B4F94947F3FF512C4EEFF3E561FB* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 WrappedValue_1_get_Value_mF2C9ED6D6B759379CE4506329AC6FE3B823AC9FA_gshared_inline (WrappedValue_1_t3D769C0E18CE756D9F9F3053772D36C6133F9465* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18* EqualityComparer_1_get_Default_mCF5AE443B005C17982581081CC2BAE1250236CA2_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18* V_0 = NULL;
	{
		EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18* L_0 = ((EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m872D877FAB897FBF1321820C6178388DE5ECF352(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tA830F708F7DD10752F0D77C07AD5AE5E44F17D18* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 WrappedValue_1_get_Value_mD39FF4217A2E95D870B4C5F8E68EAF8C64DB5947_gshared_inline (WrappedValue_1_t385843449CB29A743E0A49C3377762B10D94F7D8* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5* EqualityComparer_1_get_Default_m2ADE72FA4E9F5488FDAA1AE33E7B7ADD08168152_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5* V_0 = NULL;
	{
		EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5* L_0 = ((EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m56BD47695516C905856FD5C99480476EB9A92A29(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t1DDC8068284616C4C2850515F993998C016EE0F5* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 WrappedValue_1_get_Value_mA58485FE891E1CCFA8CC02A4201A8A27DEC7E074_gshared_inline (WrappedValue_1_t3D602AF66C1228250B68787536CF9240F44EF940* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* V_0 = NULL;
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_0 = ((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WrappedValue_1_get_Value_mB00D5A901097E3AFBD209CAD11E5E272E49BDEA2_gshared_inline (WrappedValue_1_t729B27FE79AB1B3B4DAB75E7C1156F458E42E495* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* V_0 = NULL;
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0 = ((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t WrappedValue_1_get_Value_m29CFDE1F43E4655D2350117C261363D206C1BA6B_gshared_inline (WrappedValue_1_t1EB1AAB44E67CBFC009A8C8EA8CA78B7A35A9CB1* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* V_0 = NULL;
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_0 = ((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar WrappedValue_1_get_Value_m03E785FD6CE3D0B244BD9285BDA5E0C0ED26A0DC_gshared_inline (WrappedValue_1_tF7CCFBCFB6DFBCB97BFC8EF0858D0ACEB370AC64* __this, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE* EqualityComparer_1_get_Default_mF4BB724F5222831DB014E8DA90A10FA86ACC0415_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE* V_0 = NULL;
	{
		EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE* L_0 = ((EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m5CF2DA9BBC2FDD1BD2283E230615FF8F1C0130F5(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t7337CF19E38A0190AC21A219A98ABF65B24327DE* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D WrappedValue_1_get_Value_m14D99C8F64B99A298C562600DDAEDA4F67DEBED8_gshared_inline (WrappedValue_1_t73173AF7595A46F664705B4182B0CA0FDF421EC1* __this, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44* EqualityComparer_1_get_Default_m5940F55379DF8F2C0717CB910CAA32DD9E69F06E_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44* V_0 = NULL;
	{
		EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44* L_0 = ((EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mFC293535AE341A11EB4152755FD4F64309B163BF(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tCF716B718FBD2904B820CBF6A1B3D1A86F3B8E44* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 WrappedValue_1_get_Value_m2714F9E555808614624D1F44C27548FF2A72E279_gshared_inline (WrappedValue_1_t79C04924BC7586B94EEA70EC82111804416A084D* __this, const RuntimeMethod* method) 
{
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A* EqualityComparer_1_get_Default_mFDAB2569319FBB5F0B809089CE6413BF798C0677_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A* V_0 = NULL;
	{
		EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A* L_0 = ((EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m231D2A454EDE2578C201D23F90E3DB1D6D3D5F0F(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t845281B1E2EE5A644E4A9BAAA6A84F8483BE962A* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F WrappedValue_1_get_Value_mED2E6DF18DADD8DF429DC9C00DDEA667663F9619_gshared_inline (WrappedValue_1_tE2A5ADC91C24730012A0D89E29E766595D5A80CF* __this, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* EqualityComparer_1_get_Default_m12CC270D19620F4E8E3ABFE7BF8C2B1955476A04_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* V_0 = NULL;
	{
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_0 = ((EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m66568B441EE3AB73D292C4F4CE1707FBAC360F5A(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double WrappedValue_1_get_Value_mF5B93BD631E7AE43365A68E381210C55F8A062E9_gshared_inline (WrappedValue_1_tD51D6DDD0C09899E1CC6F23E204A0436D5E41A51* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_0 = NULL;
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_0 = ((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t WrappedValue_1_get_Value_m408948E1C0488F465326AB3758067FA734C27F61_gshared_inline (WrappedValue_1_tDBD2E2AA1CA35EEA618C15496FF2104E7B7CA37B* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* V_0 = NULL;
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_0 = ((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t WrappedValue_1_get_Value_mF8CDCBAE7311112EB8E7E41DA3D2C42C83BB230C_gshared_inline (WrappedValue_1_tCA5027D3B7F72F98E63929D51B82013C1172B91F* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WrappedValue_1_get_Value_mA2C6A04E8446D296296134B42C7AA77D7101E09C_gshared_inline (WrappedValue_1_tDAAEBDEE88F3A8DE06ECA05C1E191368D16FC608* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* EqualityComparer_1_get_Default_m76691DC579907239261E159E4DFDD8B1C3C9E5FE_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* V_0 = NULL;
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_0 = ((EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m8A944543377C40C1596E4EECED12E463FC3DDFC3(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t WrappedValue_1_get_Value_m3DF887EC7F01D3E293D2EFD20467BE0479D589EA_gshared_inline (WrappedValue_1_tFCFD37F89941250A9CFC19A55B5C1B1C583D5205* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WrappedValue_1_get_Value_mA9FC7D0093C8B91E8BD6A2FF19B5855207CA3342_gshared_inline (WrappedValue_1_t96969F56BF2DAF4FA7A9AD37CC85EDF9C5B48296* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* V_0 = NULL;
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_0 = ((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t WrappedValue_1_get_Value_m82EB73B3E4E81D77905F9D425CA3498341CBCFAC_gshared_inline (WrappedValue_1_tF0A4A84D2019A785F6E9BD208CA577199A6A1569* __this, const RuntimeMethod* method) 
{
	{
		int8_t L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* V_0 = NULL;
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_0 = ((EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WrappedValue_1_get_Value_m14CB5C7659D18C6BA603D47917FF24EE856AA54D_gshared_inline (WrappedValue_1_t43451D8A65E3D98CFC11F483300FD6640D70335F* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41* EqualityComparer_1_get_Default_m54987862FB97262994FF5257CF4B3E47D9ED5700_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41* V_0 = NULL;
	{
		EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41* L_0 = ((EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m54E0CBACEB549B9E1D28AA2BA11D2B7F04DC3B5B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tC9D2BA6AD795F1F89366AF4E78EB27239F4FBC41* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A WrappedValue_1_get_Value_mA3EF12A20538B2E70E7295C035B36552FB6C196A_gshared_inline (WrappedValue_1_tF983A2518D15C724FACBA71A5B53FDE5E005EFD7* __this, const RuntimeMethod* method) 
{
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* V_0 = NULL;
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_0 = ((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t WrappedValue_1_get_Value_m8A872E34244A4E828F6D89950F038FE3E0C82E27_gshared_inline (WrappedValue_1_t9717F9CCB663633CB9B85813A633F18BDEBD5028* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_0 = NULL;
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_0 = ((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WrappedValue_1_get_Value_mCB61FDD64803251C6BD573BCA23F4FD710A67906_gshared_inline (WrappedValue_1_t428210A061F150CC0822ED9FA2A05CFE14772F5C* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* V_0 = NULL;
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_0 = ((EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m73A019C274DF1E66D30647A3F24ADC27784B7114(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t WrappedValue_1_get_Value_m3DBB0EF74B7942CC2E83061AD590EAD6C0AA5443_gshared_inline (WrappedValue_1_t3C9579230F8F7A78F089F1FB7AB8A6471F9DA1B3* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
