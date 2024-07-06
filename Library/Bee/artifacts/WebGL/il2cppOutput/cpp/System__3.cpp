#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE;
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083;
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E;
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93;
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1;
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86;
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7;
struct ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F;
struct ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4;
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8;
struct FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8;
struct FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98;
struct FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A;
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFileWatcher_t1D3469880AFBF0496F0609AD59946CBFC2849A7C;
struct IODescriptionAttribute_t457D25714ADF43A878BE90470924C860BDF64DBF;
struct ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93;
struct ISynchronizeInvoke_t94542FC52B3B1FCA7BC4D8CC518FC2EF9870861F;
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F;
struct NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89;
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30;
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65;
struct RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377;
struct RenamedEventHandler_t32CFBCE0B817A32EA931724556757BE7DAE60A23;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451;
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2;
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12;
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167;
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463;
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00;
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF;
struct U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B;
struct U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB;
struct Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultWatcher_tD9C6E76DF2F1AF34A815431B230AF1DD8D63BA6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFileWatcher_t1D3469880AFBF0496F0609AD59946CBFC2849A7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISynchronizeInvoke_t94542FC52B3B1FCA7BC4D8CC518FC2EF9870861F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PathInternal_t36F6564801FC7B79D95F359D78D29AF16DF4BD71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenamedEventHandler_t32CFBCE0B817A32EA931724556757BE7DAE60A23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0659ACC9E0B651980048A0EBBA6751971F746403;
IL2CPP_EXTERN_C String_t* _stringLiteral0C7F57443E21815E0C0D281629845C1805E8DDBD;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral5601A0ED74C235668EBD9B6850B0C73C8B338118;
IL2CPP_EXTERN_C String_t* _stringLiteral5D977376715BE7FC944C7838B1A40D855E0A6FE6;
IL2CPP_EXTERN_C String_t* _stringLiteral855DC2CE49DCC1C549D22D5DB0CF5A8D5ABF0987;
IL2CPP_EXTERN_C String_t* _stringLiteral93DD9F3D06B9403D1B5019C5998A0A64DE4FBBEC;
IL2CPP_EXTERN_C String_t* _stringLiteralD773E0A14D2FEF23923A02949AF57C4C0E2A4EE1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
IL2CPP_EXTERN_C String_t* _stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileSystemWatcher__ctor_mF0847BBAC140DD63725F92C4F886AC571E165E7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileSystemWatcher_set_EnableRaisingEvents_m96BD4F5A49A6961E99601CEB094A26C684472D43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SearchPattern2_Compile_mE1451FF44E2DDF8ED6B52636EF07FB42535EA477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass70_0_U3CDispatchEventsU3Eb__0_mDEE588C10C17B59F393202662C4B8F6A2F02A443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass70_0_U3CDispatchEventsU3Eb__1_m533A262114B04E5863766679AF81B5B963FF39EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass70_0_U3CDispatchEventsU3Eb__2_m619ED553175CE1AB8CF63394E449E8F23A990F3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass70_1_U3CDispatchEventsU3Eb__3_m137F8F11DED84B88E62B09D138A7B84626F3AD47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3  : public RuntimeObject
{
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E  : public RuntimeObject
{
};
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93  : public RuntimeObject
{
};
struct ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863  : public RuntimeObject
{
};
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7  : public RuntimeObject
{
};
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89  : public RuntimeObject
{
};
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC  : public RuntimeObject
{
};
struct SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451  : public RuntimeObject
{
	Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* ___ops;
	bool ___ignore;
	bool ___hasWildcard;
	String_t* ___pattern;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
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
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
};
struct U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B  : public RuntimeObject
{
	FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* ___U3CU3E4__this;
	String_t* ___filename;
};
struct U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB  : public RuntimeObject
{
	RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377* ___renamed_ref;
	U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* ___CSU24U3CU3E8__locals1;
};
struct Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67  : public RuntimeObject
{
	int32_t ___Code;
	String_t* ___Argument;
	Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* ___Next;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	RuntimeObject* ___site;
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ___events;
};
struct ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	String_t* ___U3CDescriptionValueU3Ek__BackingField;
};
struct ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
};
struct FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	int32_t ____changeType;
	String_t* ____name;
	String_t* ____fullPath;
};
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
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
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F  : public ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863
{
};
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
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
struct WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2 
{
	int32_t ___U3CChangeTypeU3Ek__BackingField;
	String_t* ___U3CNameU3Ek__BackingField;
	String_t* ___U3COldNameU3Ek__BackingField;
	bool ___U3CTimedOutU3Ek__BackingField;
};
struct WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_marshaled_pinvoke
{
	int32_t ___U3CChangeTypeU3Ek__BackingField;
	char* ___U3CNameU3Ek__BackingField;
	char* ___U3COldNameU3Ek__BackingField;
	int32_t ___U3CTimedOutU3Ek__BackingField;
};
struct WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_marshaled_com
{
	int32_t ___U3CChangeTypeU3Ek__BackingField;
	Il2CppChar* ___U3CNameU3Ek__BackingField;
	Il2CppChar* ___U3COldNameU3Ek__BackingField;
	int32_t ___U3CTimedOutU3Ek__BackingField;
};
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
struct WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D10_t92CF09DC4E69422B6E8E804C0DE84FDE8FB89800 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t92CF09DC4E69422B6E8E804C0DE84FDE8FB89800__padding[10];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E__padding[128];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48__padding[32];
	};
};
#pragma pack(pop, tp)
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
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
struct FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A  : public Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083
{
	bool ___inited;
	bool ___start_requested;
	bool ___enableRaisingEvents;
	String_t* ___filter;
	bool ___includeSubdirectories;
	int32_t ___internalBufferSize;
	int32_t ___notifyFilter;
	String_t* ___path;
	String_t* ___fullpath;
	RuntimeObject* ___synchronizingObject;
	WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2 ___lastData;
	bool ___waiting;
	SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451* ___pattern;
	bool ___disposed;
	String_t* ___mangledFilter;
	RuntimeObject* ___watcher;
	RuntimeObject* ___watcher_handle;
	FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* ___Changed;
	FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* ___Created;
	FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* ___Deleted;
	ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4* ___Error;
	RenamedEventHandler_t32CFBCE0B817A32EA931724556757BE7DAE60A23* ___Renamed;
};
struct IODescriptionAttribute_t457D25714ADF43A878BE90470924C860BDF64DBF  : public DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86
{
};
struct RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377  : public FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8
{
	String_t* ____oldName;
	String_t* ____oldFullPath;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
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
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4  : public MulticastDelegate_t
{
};
struct FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98  : public MulticastDelegate_t
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct RenamedEventHandler_t32CFBCE0B817A32EA931724556757BE7DAE60A23  : public MulticastDelegate_t
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	String_t* ____objectName;
};
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};
struct ThrowStub_tA028CA7941154A8E0F17F9AD0563D538617A7A47  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};
struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3_StaticFields
{
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5;
	int64_t ___1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B;
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70;
	__StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E ___B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C;
	__StaticArrayInitTypeSizeU3D10_t92CF09DC4E69422B6E8E804C0DE84FDE8FB89800 ___E478CC6C0579E2198C99BFDE0ABAADC66644AF69312CB9D6E94E2D4E3559482A;
};
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty;
};
struct NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89_StaticFields
{
	RuntimeObject* ___instance;
};
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___InvalidPathChars;
	Il2CppChar ___AltDirectorySeparatorChar;
	Il2CppChar ___DirectorySeparatorChar;
	Il2CppChar ___PathSeparator;
	String_t* ___DirectorySeparatorStr;
	Il2CppChar ___VolumeSeparatorChar;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___PathSeparatorChars;
	bool ___dirEqualsVolume;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsWindows;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsUnix;
};
struct SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___WildcardChars;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___InvalidChars;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
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
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields
{
	RuntimeObject* ___EventDisposed;
};
struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_StaticFields
{
	DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* ___Default;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_StaticFields
{
	WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2 ___TimedOutResult;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A_StaticFields
{
	RuntimeObject* ___lockobj;
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
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher__ctor_mF0847BBAC140DD63725F92C4F886AC571E165E7B (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, String_t* ___0_path, String_t* ___1_filter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component__ctor_mDA70A27899B8D66203C57A3E8678A11E033B4DF6 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_InitWatcher_m4CAAEA1B38526E2B634E4277D367BAA2232715B4 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetEnvironmentVariable_mAF8CC6EC1CB916789ABB16A02C032F89E508C21A (String_t* ___0_variable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m9772C6EB9834E1AD625F4663FB9A519AB10A3A14 (String_t* ___0_strA, String_t* ___1_strB, bool ___2_ignoreCase, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullFileWatcher_GetInstance_m5839544378C0E21E7D788430427E209795184D82 (RuntimeObject** ___0_watcher, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultWatcher_GetInstance_m1B8378C4278091D0BF6E146965D1E2A71BFD3B64 (RuntimeObject** ___0_watcher, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileSystemWatcher_get_MangledFilter_m67CAA7003EF9D2E44C751D742D1A1FF9FA42C0AA (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchPattern2__ctor_mBE5D52B2273A10A7D9AB2DA81C88DB003C238360 (SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451* __this, String_t* ___0_pattern, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_CurrentDirectory_m96621163A47F5BE09FEBA00EB4644EE115B5E259 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFullPath_m9E485D7D38A868A6A5863CBD24677231288EECE2 (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_Start_m145F904E20D2DE3C98706B4D893CD714E25D6868 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_Stop_m27FF994400220D04FC337C9914135440EACDF3A0 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PathInternal_get_StringComparison_mF1C7FDC979687701B819DD49F918790D7BC2D24A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B (String_t* ___0_a, String_t* ___1_b, int32_t ___2_comparisonType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_Dispose_mD106692D0A494758CFFA2C9ACC0D7F94DD389192 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, bool ___0_disposing, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_Finalize_m124F6FA2207E76C9DF18740E653C49D483A6E5C6 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenamedEventHandler_Invoke_m85B315BB5530AD039A8B6663846D99696ABE9E5E_inline (RenamedEventHandler_t32CFBCE0B817A32EA931724556757BE7DAE60A23* __this, RuntimeObject* ___0_sender, RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377* ___1_e, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorEventHandler_Invoke_m3A5CFB7726095F0AE60A34740165419F52125A0C_inline (ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4* __this, RuntimeObject* ___0_sender, ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F* ___1_e, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileSystemEventHandler_Invoke_m6B172CCA9A63898ED96FC0BEFFC4B73747782A78_inline (FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* __this, RuntimeObject* ___0_sender, FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8* ___1_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_RaiseEvent_m04638F63BFE9953226751D87D4CD059251502BF0 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, Delegate_t* ___0_ev, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_arg, int32_t ___2_evtype, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_0__ctor_m1086378899EEF39D293E8F3E4CE7B54A1A154568 (U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_1__ctor_mCE49B444728BEEAE3F21B6CB03151F71DD3B8561 (U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WaitForChangedResult_set_Name_m46AD2BE2CF26C5CD70F0BC2AAC87777D7D34C37D_inline (WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WaitForChangedResult_set_ChangeType_m8025313FAB1B29316A9B04B98FFACA1B27043EB7_inline (WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_OnRenamed_m0C259EC20C016015CCE7A65D421FB3AA26F2FD77 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377* ___0_e, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WaitForChangedResult_set_OldName_m36FF98F2393ADFF9CD670CAD035B9672750928B0_inline (WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenamedEventArgs__ctor_m18AC75CE0153C0CB153C9D3C32C7814FCAD7EE34 (RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377* __this, int32_t ___0_changeType, String_t* ___1_directory, String_t* ___2_name, String_t* ___3_oldName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemEventArgs__ctor_mCE20714E1E42C388FA85416C9FC260F6D90364A1 (FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8* __this, int32_t ___0_changeType, String_t* ___1_directory, String_t* ___2_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_OnCreated_m43F229241EBC677400912B86B11D2DF771715C52 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8* ___0_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_OnDeleted_m6A7D606BFD2ECE00BD9997DC8DD88F7E4BEA1BC3 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8* ___0_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_OnChanged_m043A5F8DBF2A9D47E0C7B232C4451EDEEE481DCE (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8* ___0_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute__ctor_m5A3D1DF34E3AACD9FF690A3CBE78F822F3A2EF97 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, String_t* ___0_description, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DescriptionAttribute_get_DescriptionValue_m1F4A0829E3BE8AF3BBB9A5F2344BA672E07DC975_inline (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullFileWatcher__ctor_mEF7E812F6B509D37C129966C3F8A5924B299B1DA (NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchPattern2__ctor_m82DEB7844EEE3CA62B8132407D763EB07EE8ABE8 (SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451* __this, String_t* ___0_pattern, bool ___1_ignore, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchPattern2_Compile_mE1451FF44E2DDF8ED6B52636EF07FB42535EA477 (SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451* __this, String_t* ___0_pattern, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_mC7AA4AE42B38667BDB9B214AA6230F322306CFF6 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_anyOf, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Op__ctor_m4E23FB716A65201164A9757326E3A63718BFDA3E (Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* __this, int32_t ___0_code, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_m1AE18DB3B14A0D05EF4A2D3403D4DC1930A199F3 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_anyOf, int32_t ___1_startIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
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
void ErrorEventHandler_Invoke_m3A5CFB7726095F0AE60A34740165419F52125A0C_Multicast(ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4* __this, RuntimeObject* ___0_sender, ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F* ___1_e, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4* currentDelegate = reinterpret_cast<ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void ErrorEventHandler_Invoke_m3A5CFB7726095F0AE60A34740165419F52125A0C_OpenInst(ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4* __this, RuntimeObject* ___0_sender, ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F* ___1_e, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_sender, ___1_e, method);
}
void ErrorEventHandler_Invoke_m3A5CFB7726095F0AE60A34740165419F52125A0C_OpenStatic(ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4* __this, RuntimeObject* ___0_sender, ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F* ___1_e, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_sender, ___1_e, method);
}
void ErrorEventHandler_Invoke_m3A5CFB7726095F0AE60A34740165419F52125A0C_OpenVirtual(ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4* __this, RuntimeObject* ___0_sender, ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F* ___1_e, const RuntimeMethod* method)
{
	VirtualActionInvoker1< ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_sender, ___1_e);
}
void ErrorEventHandler_Invoke_m3A5CFB7726095F0AE60A34740165419F52125A0C_OpenInterface(ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4* __this, RuntimeObject* ___0_sender, ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F* ___1_e, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_sender, ___1_e);
}
void ErrorEventHandler_Invoke_m3A5CFB7726095F0AE60A34740165419F52125A0C_OpenGenericVirtual(ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4* __this, RuntimeObject* ___0_sender, ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F* ___1_e, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F* >::Invoke(method, ___0_sender, ___1_e);
}
void ErrorEventHandler_Invoke_m3A5CFB7726095F0AE60A34740165419F52125A0C_OpenGenericInterface(ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4* __this, RuntimeObject* ___0_sender, ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F* ___1_e, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F* >::Invoke(method, ___0_sender, ___1_e);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventHandler__ctor_mC552996D70B547E336F2A8F21D169AB173E35807 (ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ErrorEventHandler_Invoke_m3A5CFB7726095F0AE60A34740165419F52125A0C_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ErrorEventHandler_Invoke_m3A5CFB7726095F0AE60A34740165419F52125A0C_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&ErrorEventHandler_Invoke_m3A5CFB7726095F0AE60A34740165419F52125A0C_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ErrorEventHandler_Invoke_m3A5CFB7726095F0AE60A34740165419F52125A0C_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&ErrorEventHandler_Invoke_m3A5CFB7726095F0AE60A34740165419F52125A0C_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&ErrorEventHandler_Invoke_m3A5CFB7726095F0AE60A34740165419F52125A0C_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&ErrorEventHandler_Invoke_m3A5CFB7726095F0AE60A34740165419F52125A0C_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventHandler_Invoke_m3A5CFB7726095F0AE60A34740165419F52125A0C (ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4* __this, RuntimeObject* ___0_sender, ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher__ctor_mBE362AB1096733EF53E61CDF047E501424787A88 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_path;
		FileSystemWatcher__ctor_mF0847BBAC140DD63725F92C4F886AC571E165E7B(__this, L_0, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher__ctor_mF0847BBAC140DD63725F92C4F886AC571E165E7B (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, String_t* ___0_path, String_t* ___1_filter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral855DC2CE49DCC1C549D22D5DB0CF5A8D5ABF0987);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var);
		Component__ctor_mDA70A27899B8D66203C57A3E8678A11E033B4DF6(__this, NULL);
		String_t* L_0 = ___0_path;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileSystemWatcher__ctor_mF0847BBAC140DD63725F92C4F886AC571E165E7B_RuntimeMethod_var)));
	}

IL_0014:
	{
		String_t* L_2 = ___1_filter;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5601A0ED74C235668EBD9B6850B0C73C8B338118)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileSystemWatcher__ctor_mF0847BBAC140DD63725F92C4F886AC571E165E7B_RuntimeMethod_var)));
	}

IL_0022:
	{
		String_t* L_4 = ___0_path;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD773E0A14D2FEF23923A02949AF57C4C0E2A4EE1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileSystemWatcher__ctor_mF0847BBAC140DD63725F92C4F886AC571E165E7B_RuntimeMethod_var)));
	}

IL_003f:
	{
		String_t* L_8 = ___0_path;
		bool L_9;
		L_9 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_8, NULL);
		if (L_9)
		{
			goto IL_0057;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D977376715BE7FC944C7838B1A40D855E0A6FE6)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileSystemWatcher__ctor_mF0847BBAC140DD63725F92C4F886AC571E165E7B_RuntimeMethod_var)));
	}

IL_0057:
	{
		__this->___inited = (bool)0;
		__this->___start_requested = (bool)0;
		__this->___enableRaisingEvents = (bool)0;
		String_t* L_11 = ___1_filter;
		__this->___filter = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___filter), (void*)L_11);
		String_t* L_12 = __this->___filter;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral855DC2CE49DCC1C549D22D5DB0CF5A8D5ABF0987, NULL);
		if (!L_13)
		{
			goto IL_0090;
		}
	}
	{
		__this->___filter = _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___filter), (void*)_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
	}

IL_0090:
	{
		__this->___includeSubdirectories = (bool)0;
		__this->___internalBufferSize = ((int32_t)8192);
		__this->___notifyFilter = ((int32_t)19);
		String_t* L_14 = ___0_path;
		__this->___path = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path), (void*)L_14);
		__this->___synchronizingObject = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___synchronizingObject), (void*)(RuntimeObject*)NULL);
		FileSystemWatcher_InitWatcher_m4CAAEA1B38526E2B634E4277D367BAA2232715B4(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_InitWatcher_m4CAAEA1B38526E2B634E4277D367BAA2232715B4 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultWatcher_tD9C6E76DF2F1AF34A815431B230AF1DD8D63BA6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C7F57443E21815E0C0D281629845C1805E8DDBD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93DD9F3D06B9403D1B5019C5998A0A64DE4FBBEC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A_StaticFields*)il2cpp_codegen_static_fields_for(FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A_il2cpp_TypeInfo_var))->___lockobj;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				RuntimeObject* L_4 = __this->___watcher_handle;
				if (!L_4)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_006f;
			}

IL_001a_1:
			{
				String_t* L_5;
				L_5 = Environment_GetEnvironmentVariable_mAF8CC6EC1CB916789ABB16A02C032F89E508C21A(_stringLiteral93DD9F3D06B9403D1B5019C5998A0A64DE4FBBEC, NULL);
				V_2 = L_5;
				V_3 = (bool)0;
				if (!0)
				{
					goto IL_002d_1;
				}
			}
			{
				bool L_6 = V_3;
				if (L_6)
				{
					goto IL_005c_1;
				}
			}

IL_002d_1:
			{
				String_t* L_7 = V_2;
				int32_t L_8;
				L_8 = String_Compare_m9772C6EB9834E1AD625F4663FB9A519AB10A3A14(L_7, _stringLiteral0C7F57443E21815E0C0D281629845C1805E8DDBD, (bool)1, NULL);
				if (L_8)
				{
					goto IL_0049_1;
				}
			}
			{
				RuntimeObject** L_9 = (RuntimeObject**)(&__this->___watcher);
				bool L_10;
				L_10 = NullFileWatcher_GetInstance_m5839544378C0E21E7D788430427E209795184D82(L_9, NULL);
				goto IL_005c_1;
			}

IL_0049_1:
			{
				RuntimeObject** L_11 = (RuntimeObject**)(&__this->___watcher);
				il2cpp_codegen_runtime_class_init_inline(DefaultWatcher_tD9C6E76DF2F1AF34A815431B230AF1DD8D63BA6C_il2cpp_TypeInfo_var);
				bool L_12;
				L_12 = DefaultWatcher_GetInstance_m1B8378C4278091D0BF6E146965D1E2A71BFD3B64(L_11, NULL);
				__this->___watcher_handle = __this;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___watcher_handle), (void*)__this);
			}

IL_005c_1:
			{
				__this->___inited = (bool)1;
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileSystemWatcher_get_Waiting_mD9C27E6C526EF7AB52E089E89DC2C51B2F3D24E5 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___waiting;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_set_Waiting_m50E8538E29AF432021218617226222074CC2CA74 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___waiting = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileSystemWatcher_get_MangledFilter_m67CAA7003EF9D2E44C751D742D1A1FF9FA42C0AA (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral855DC2CE49DCC1C549D22D5DB0CF5A8D5ABF0987);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___filter;
		bool L_1;
		L_1 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_0, _stringLiteral855DC2CE49DCC1C549D22D5DB0CF5A8D5ABF0987, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = __this->___filter;
		return L_2;
	}

IL_0019:
	{
		String_t* L_3 = __this->___mangledFilter;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_4 = __this->___mangledFilter;
		return L_4;
	}

IL_0028:
	{
		return _stringLiteral855DC2CE49DCC1C549D22D5DB0CF5A8D5ABF0987;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451* FileSystemWatcher_get_Pattern_mAFDBBA5BE92EB33923C68A913C112B0ECD722274 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451* L_0 = __this->___pattern;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1;
		L_1 = FileSystemWatcher_get_MangledFilter_m67CAA7003EF9D2E44C751D742D1A1FF9FA42C0AA(__this, NULL);
		SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451* L_2 = (SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451*)il2cpp_codegen_object_new(SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_il2cpp_TypeInfo_var);
		SearchPattern2__ctor_mBE5D52B2273A10A7D9AB2DA81C88DB003C238360(L_2, L_1, NULL);
		__this->___pattern = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pattern), (void*)L_2);
	}

IL_0019:
	{
		SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451* L_3 = __this->___pattern;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileSystemWatcher_get_FullPath_m1C0704E049F0CD510C2A8DCEB4911CB2D9FCE8E0 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___fullpath;
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_1 = __this->___path;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_2 = __this->___path;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}

IL_0022:
	{
		String_t* L_4;
		L_4 = Environment_get_CurrentDirectory_m96621163A47F5BE09FEBA00EB4644EE115B5E259(NULL);
		__this->___fullpath = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fullpath), (void*)L_4);
		goto IL_0040;
	}

IL_002f:
	{
		String_t* L_5 = __this->___path;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = Path_GetFullPath_m9E485D7D38A868A6A5863CBD24677231288EECE2(L_5, NULL);
		__this->___fullpath = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fullpath), (void*)L_6);
	}

IL_0040:
	{
		String_t* L_7 = __this->___fullpath;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_set_EnableRaisingEvents_m96BD4F5A49A6961E99601CEB094A26C684472D43 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileSystemWatcher_set_EnableRaisingEvents_m96BD4F5A49A6961E99601CEB094A26C684472D43_RuntimeMethod_var)));
	}

IL_0019:
	{
		__this->___start_requested = (bool)1;
		bool L_4 = __this->___inited;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		bool L_5 = ___0_value;
		bool L_6 = __this->___enableRaisingEvents;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0033;
		}
	}
	{
		return;
	}

IL_0033:
	{
		bool L_7 = ___0_value;
		__this->___enableRaisingEvents = L_7;
		bool L_8 = ___0_value;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		FileSystemWatcher_Start_m145F904E20D2DE3C98706B4D893CD714E25D6868(__this, NULL);
		return;
	}

IL_0044:
	{
		FileSystemWatcher_Stop_m27FF994400220D04FC337C9914135440EACDF3A0(__this, NULL);
		__this->___start_requested = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_set_Filter_m71D40CAB8E798724F2936510999DAE4F73AC0F07 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathInternal_t36F6564801FC7B79D95F359D78D29AF16DF4BD71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral855DC2CE49DCC1C549D22D5DB0CF5A8D5ABF0987);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* G_B6_0 = NULL;
	FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* G_B7_1 = NULL;
	{
		String_t* L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_1 = ___0_value;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}

IL_0010:
	{
		___0_value = _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
	}

IL_0017:
	{
		String_t* L_3 = __this->___filter;
		String_t* L_4 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(PathInternal_t36F6564801FC7B79D95F359D78D29AF16DF4BD71_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = PathInternal_get_StringComparison_mF1C7FDC979687701B819DD49F918790D7BC2D24A(NULL);
		bool L_6;
		L_6 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_3, L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_7 = ___0_value;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral855DC2CE49DCC1C549D22D5DB0CF5A8D5ABF0987, NULL);
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_003b;
		}
		G_B5_0 = __this;
	}
	{
		String_t* L_9 = ___0_value;
		G_B7_0 = L_9;
		G_B7_1 = G_B5_0;
		goto IL_0040;
	}

IL_003b:
	{
		G_B7_0 = _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
		G_B7_1 = G_B6_0;
	}

IL_0040:
	{
		G_B7_1->___filter = G_B7_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B7_1->___filter), (void*)G_B7_0);
		__this->___pattern = (SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pattern), (void*)(SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451*)NULL);
		__this->___mangledFilter = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mangledFilter), (void*)(String_t*)NULL);
	}

IL_0053:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileSystemWatcher_get_IncludeSubdirectories_m6CD3799E3694FFEB1966F17D19BB4CB6893114BD (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___includeSubdirectories;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_set_NotifyFilter_m8AE6CFFAB4FBE3C95D0EA936AFCFB17A10E5675E (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___notifyFilter;
		int32_t L_1 = ___0_value;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		int32_t L_2 = ___0_value;
		__this->___notifyFilter = L_2;
		bool L_3 = __this->___enableRaisingEvents;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		FileSystemWatcher_Stop_m27FF994400220D04FC337C9914135440EACDF3A0(__this, NULL);
		FileSystemWatcher_Start_m145F904E20D2DE3C98706B4D893CD714E25D6868(__this, NULL);
	}

IL_0025:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_Dispose_m643BE069A48D62ABC0D5154A7ED7996EB1C96FE5 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileWatcher_t1D3469880AFBF0496F0609AD59946CBFC2849A7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	{
		bool L_0 = __this->___disposed;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
	}
	try
	{
		{
			RuntimeObject* L_1 = __this->___watcher;
			RuntimeObject* L_2 = L_1;
			if (L_2)
			{
				G_B5_0 = L_2;
				goto IL_0016_1;
			}
			G_B4_0 = L_2;
		}
		{
			goto IL_0021_1;
		}

IL_0016_1:
		{
			RuntimeObject* L_3 = __this->___watcher_handle;
			InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IFileWatcher_t1D3469880AFBF0496F0609AD59946CBFC2849A7C_il2cpp_TypeInfo_var, G_B5_0, L_3);
		}

IL_0021_1:
		{
			RuntimeObject* L_4 = __this->___watcher;
			RuntimeObject* L_5 = L_4;
			if (L_5)
			{
				G_B8_0 = L_5;
				goto IL_002d_1;
			}
			G_B7_0 = L_5;
		}
		{
			goto IL_0038_1;
		}

IL_002d_1:
		{
			RuntimeObject* L_6 = __this->___watcher_handle;
			InterfaceActionInvoker1< RuntimeObject* >::Invoke(2, IFileWatcher_t1D3469880AFBF0496F0609AD59946CBFC2849A7C_il2cpp_TypeInfo_var, G_B8_0, L_6);
		}

IL_0038_1:
		{
			goto IL_003d;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003a;
		}
		throw e;
	}

CATCH_003a:
	{
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003d;
	}

IL_003d:
	{
		__this->___watcher_handle = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___watcher_handle), (void*)NULL);
		__this->___watcher = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___watcher), (void*)(RuntimeObject*)NULL);
		__this->___disposed = (bool)1;
		bool L_7 = ___0_disposing;
		Component_Dispose_mD106692D0A494758CFFA2C9ACC0D7F94DD389192(__this, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_Finalize_m8A18C197F762DDBE07188BB313F7A9373AE007CE (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				Component_Finalize_m124F6FA2207E76C9DF18740E653C49D483A6E5C6(__this, NULL);
				return;
			}
		});
		try
		{
			{
				bool L_0 = __this->___disposed;
				if (!L_0)
				{
					goto IL_000a_1;
				}
			}
			{
				goto IL_001a;
			}

IL_000a_1:
			{
				VirtualActionInvoker1< bool >::Invoke(8, __this, (bool)0);
				goto IL_001a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_RaiseEvent_m04638F63BFE9953226751D87D4CD059251502BF0 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, Delegate_t* ___0_ev, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_arg, int32_t ___2_evtype, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISynchronizeInvoke_t94542FC52B3B1FCA7BC4D8CC518FC2EF9870861F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenamedEventHandler_t32CFBCE0B817A32EA931724556757BE7DAE60A23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* V_0 = NULL;
	int32_t V_1 = 0;
	Delegate_t* V_2 = NULL;
	{
		bool L_0 = __this->___disposed;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		Delegate_t* L_1 = ___0_ev;
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		RuntimeObject* L_2 = __this->___synchronizingObject;
		if (L_2)
		{
			goto IL_007d;
		}
	}
	{
		Delegate_t* L_3 = ___0_ev;
		DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* L_4;
		L_4 = VirtualFuncInvoker0< DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* >::Invoke(9, L_3);
		V_0 = L_4;
		V_1 = 0;
		goto IL_0076;
	}

IL_0020:
	{
		DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		Delegate_t* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		int32_t L_9 = ___2_evtype;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0060;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_0072;
	}

IL_0038:
	{
		Delegate_t* L_10 = V_2;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_11 = ___1_arg;
		RenamedEventHandler_Invoke_m85B315BB5530AD039A8B6663846D99696ABE9E5E_inline(((RenamedEventHandler_t32CFBCE0B817A32EA931724556757BE7DAE60A23*)CastclassSealed((RuntimeObject*)L_10, RenamedEventHandler_t32CFBCE0B817A32EA931724556757BE7DAE60A23_il2cpp_TypeInfo_var)), __this, ((RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377*)CastclassClass((RuntimeObject*)L_11, RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377_il2cpp_TypeInfo_var)), NULL);
		goto IL_0072;
	}

IL_004c:
	{
		Delegate_t* L_12 = V_2;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_13 = ___1_arg;
		ErrorEventHandler_Invoke_m3A5CFB7726095F0AE60A34740165419F52125A0C_inline(((ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4*)CastclassSealed((RuntimeObject*)L_12, ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4_il2cpp_TypeInfo_var)), __this, ((ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F*)CastclassClass((RuntimeObject*)L_13, ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F_il2cpp_TypeInfo_var)), NULL);
		goto IL_0072;
	}

IL_0060:
	{
		Delegate_t* L_14 = V_2;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_15 = ___1_arg;
		FileSystemEventHandler_Invoke_m6B172CCA9A63898ED96FC0BEFFC4B73747782A78_inline(((FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98*)CastclassSealed((RuntimeObject*)L_14, FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98_il2cpp_TypeInfo_var)), __this, ((FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8*)CastclassClass((RuntimeObject*)L_15, FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8_il2cpp_TypeInfo_var)), NULL);
	}

IL_0072:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0076:
	{
		int32_t L_17 = V_1;
		DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_007d:
	{
		RuntimeObject* L_19 = __this->___synchronizingObject;
		Delegate_t* L_20 = ___0_ev;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_21;
		ArrayElementTypeCheck (L_22, __this);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)__this);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_22;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_24 = ___1_arg;
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, Delegate_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0, ISynchronizeInvoke_t94542FC52B3B1FCA7BC4D8CC518FC2EF9870861F_il2cpp_TypeInfo_var, L_19, L_20, L_23);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_OnChanged_m043A5F8DBF2A9D47E0C7B232C4451EDEEE481DCE (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8* ___0_e, const RuntimeMethod* method) 
{
	{
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_0 = __this->___Changed;
		FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8* L_1 = ___0_e;
		FileSystemWatcher_RaiseEvent_m04638F63BFE9953226751D87D4CD059251502BF0(__this, L_0, L_1, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_OnCreated_m43F229241EBC677400912B86B11D2DF771715C52 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8* ___0_e, const RuntimeMethod* method) 
{
	{
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_0 = __this->___Created;
		FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8* L_1 = ___0_e;
		FileSystemWatcher_RaiseEvent_m04638F63BFE9953226751D87D4CD059251502BF0(__this, L_0, L_1, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_OnDeleted_m6A7D606BFD2ECE00BD9997DC8DD88F7E4BEA1BC3 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8* ___0_e, const RuntimeMethod* method) 
{
	{
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_0 = __this->___Deleted;
		FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8* L_1 = ___0_e;
		FileSystemWatcher_RaiseEvent_m04638F63BFE9953226751D87D4CD059251502BF0(__this, L_0, L_1, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_OnRenamed_m0C259EC20C016015CCE7A65D421FB3AA26F2FD77 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377* ___0_e, const RuntimeMethod* method) 
{
	{
		RenamedEventHandler_t32CFBCE0B817A32EA931724556757BE7DAE60A23* L_0 = __this->___Renamed;
		RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377* L_1 = ___0_e;
		FileSystemWatcher_RaiseEvent_m04638F63BFE9953226751D87D4CD059251502BF0(__this, L_0, L_1, 2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_DispatchEvents_m54C9ECE3E3C5FD0E3FA94736F81C02745740C83A (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, int32_t ___0_act, String_t* ___1_filename, RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377** ___2_renamed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass70_0_U3CDispatchEventsU3Eb__0_mDEE588C10C17B59F393202662C4B8F6A2F02A443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass70_0_U3CDispatchEventsU3Eb__1_m533A262114B04E5863766679AF81B5B963FF39EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass70_0_U3CDispatchEventsU3Eb__2_m619ED553175CE1AB8CF63394E449E8F23A990F3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass70_1_U3CDispatchEventsU3Eb__3_m137F8F11DED84B88E62B09D138A7B84626F3AD47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* V_0 = NULL;
	U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* L_0 = (U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass70_0__ctor_m1086378899EEF39D293E8F3E4CE7B54A1A154568(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* L_1 = V_0;
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* L_2 = V_0;
		String_t* L_3 = ___1_filename;
		L_2->___filename = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___filename), (void*)L_3);
		bool L_4 = __this->___disposed;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		bool L_5 = __this->___waiting;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2* L_6 = (WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2*)(&__this->___lastData);
		il2cpp_codegen_initobj(L_6, sizeof(WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2));
	}

IL_0031:
	{
		U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB* L_7 = (U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass70_1__ctor_mCE49B444728BEEAE3F21B6CB03151F71DD3B8561(L_7, NULL);
		V_1 = L_7;
		U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB* L_8 = V_1;
		U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* L_9 = V_0;
		L_8->___CSU24U3CU3E8__locals1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___CSU24U3CU3E8__locals1), (void*)L_9);
		int32_t L_10 = ___0_act;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, 1)))
		{
			case 0:
			{
				goto IL_005b;
			}
			case 1:
			{
				goto IL_0095;
			}
			case 2:
			{
				goto IL_00cf;
			}
			case 3:
			{
				goto IL_0109;
			}
			case 4:
			{
				goto IL_0156;
			}
		}
	}
	{
		return;
	}

IL_005b:
	{
		WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2* L_11 = (WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2*)(&__this->___lastData);
		U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB* L_12 = V_1;
		U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* L_13 = L_12->___CSU24U3CU3E8__locals1;
		String_t* L_14 = L_13->___filename;
		il2cpp_codegen_runtime_class_init_inline(WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_il2cpp_TypeInfo_var);
		WaitForChangedResult_set_Name_m46AD2BE2CF26C5CD70F0BC2AAC87777D7D34C37D_inline(L_11, L_14, NULL);
		WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2* L_15 = (WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2*)(&__this->___lastData);
		WaitForChangedResult_set_ChangeType_m8025313FAB1B29316A9B04B98FFACA1B27043EB7_inline(L_15, 1, NULL);
		U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB* L_16 = V_1;
		U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* L_17 = L_16->___CSU24U3CU3E8__locals1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_18 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_18, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass70_0_U3CDispatchEventsU3Eb__0_mDEE588C10C17B59F393202662C4B8F6A2F02A443_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_19;
		L_19 = Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853(L_18, NULL);
		return;
	}

IL_0095:
	{
		WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2* L_20 = (WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2*)(&__this->___lastData);
		U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB* L_21 = V_1;
		U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* L_22 = L_21->___CSU24U3CU3E8__locals1;
		String_t* L_23 = L_22->___filename;
		il2cpp_codegen_runtime_class_init_inline(WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_il2cpp_TypeInfo_var);
		WaitForChangedResult_set_Name_m46AD2BE2CF26C5CD70F0BC2AAC87777D7D34C37D_inline(L_20, L_23, NULL);
		WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2* L_24 = (WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2*)(&__this->___lastData);
		WaitForChangedResult_set_ChangeType_m8025313FAB1B29316A9B04B98FFACA1B27043EB7_inline(L_24, 2, NULL);
		U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB* L_25 = V_1;
		U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* L_26 = L_25->___CSU24U3CU3E8__locals1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_27 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_27, L_26, (intptr_t)((void*)U3CU3Ec__DisplayClass70_0_U3CDispatchEventsU3Eb__1_m533A262114B04E5863766679AF81B5B963FF39EC_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_28;
		L_28 = Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853(L_27, NULL);
		return;
	}

IL_00cf:
	{
		WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2* L_29 = (WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2*)(&__this->___lastData);
		U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB* L_30 = V_1;
		U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* L_31 = L_30->___CSU24U3CU3E8__locals1;
		String_t* L_32 = L_31->___filename;
		il2cpp_codegen_runtime_class_init_inline(WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_il2cpp_TypeInfo_var);
		WaitForChangedResult_set_Name_m46AD2BE2CF26C5CD70F0BC2AAC87777D7D34C37D_inline(L_29, L_32, NULL);
		WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2* L_33 = (WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2*)(&__this->___lastData);
		WaitForChangedResult_set_ChangeType_m8025313FAB1B29316A9B04B98FFACA1B27043EB7_inline(L_33, 4, NULL);
		U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB* L_34 = V_1;
		U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* L_35 = L_34->___CSU24U3CU3E8__locals1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_36 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_36, L_35, (intptr_t)((void*)U3CU3Ec__DisplayClass70_0_U3CDispatchEventsU3Eb__2_m619ED553175CE1AB8CF63394E449E8F23A990F3E_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_37;
		L_37 = Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853(L_36, NULL);
		return;
	}

IL_0109:
	{
		RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377** L_38 = ___2_renamed;
		RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377* L_39 = *((RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377**)L_38);
		if (!L_39)
		{
			goto IL_0115;
		}
	}
	{
		RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377** L_40 = ___2_renamed;
		RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377* L_41 = *((RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377**)L_40);
		FileSystemWatcher_OnRenamed_m0C259EC20C016015CCE7A65D421FB3AA26F2FD77(__this, L_41, NULL);
	}

IL_0115:
	{
		WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2* L_42 = (WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2*)(&__this->___lastData);
		U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB* L_43 = V_1;
		U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* L_44 = L_43->___CSU24U3CU3E8__locals1;
		String_t* L_45 = L_44->___filename;
		il2cpp_codegen_runtime_class_init_inline(WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_il2cpp_TypeInfo_var);
		WaitForChangedResult_set_OldName_m36FF98F2393ADFF9CD670CAD035B9672750928B0_inline(L_42, L_45, NULL);
		WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2* L_46 = (WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2*)(&__this->___lastData);
		WaitForChangedResult_set_ChangeType_m8025313FAB1B29316A9B04B98FFACA1B27043EB7_inline(L_46, 8, NULL);
		RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377** L_47 = ___2_renamed;
		String_t* L_48 = __this->___path;
		U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB* L_49 = V_1;
		U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* L_50 = L_49->___CSU24U3CU3E8__locals1;
		String_t* L_51 = L_50->___filename;
		RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377* L_52 = (RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377*)il2cpp_codegen_object_new(RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377_il2cpp_TypeInfo_var);
		RenamedEventArgs__ctor_m18AC75CE0153C0CB153C9D3C32C7814FCAD7EE34(L_52, 8, L_48, L_51, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		*((RuntimeObject**)L_47) = (RuntimeObject*)L_52;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_47, (void*)(RuntimeObject*)L_52);
		return;
	}

IL_0156:
	{
		WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2* L_53 = (WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2*)(&__this->___lastData);
		U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB* L_54 = V_1;
		U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* L_55 = L_54->___CSU24U3CU3E8__locals1;
		String_t* L_56 = L_55->___filename;
		il2cpp_codegen_runtime_class_init_inline(WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_il2cpp_TypeInfo_var);
		WaitForChangedResult_set_Name_m46AD2BE2CF26C5CD70F0BC2AAC87777D7D34C37D_inline(L_53, L_56, NULL);
		WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2* L_57 = (WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2*)(&__this->___lastData);
		WaitForChangedResult_set_ChangeType_m8025313FAB1B29316A9B04B98FFACA1B27043EB7_inline(L_57, 8, NULL);
		RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377** L_58 = ___2_renamed;
		RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377* L_59 = *((RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377**)L_58);
		if (L_59)
		{
			goto IL_019a;
		}
	}
	{
		RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377** L_60 = ___2_renamed;
		String_t* L_61 = __this->___path;
		U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB* L_62 = V_1;
		U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* L_63 = L_62->___CSU24U3CU3E8__locals1;
		String_t* L_64 = L_63->___filename;
		RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377* L_65 = (RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377*)il2cpp_codegen_object_new(RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377_il2cpp_TypeInfo_var);
		RenamedEventArgs__ctor_m18AC75CE0153C0CB153C9D3C32C7814FCAD7EE34(L_65, 8, L_61, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_64, NULL);
		*((RuntimeObject**)L_60) = (RuntimeObject*)L_65;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_60, (void*)(RuntimeObject*)L_65);
	}

IL_019a:
	{
		U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB* L_66 = V_1;
		RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377** L_67 = ___2_renamed;
		RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377* L_68 = *((RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377**)L_67);
		L_66->___renamed_ref = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&L_66->___renamed_ref), (void*)L_68);
		U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB* L_69 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_70 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_70, L_69, (intptr_t)((void*)U3CU3Ec__DisplayClass70_1_U3CDispatchEventsU3Eb__3_m137F8F11DED84B88E62B09D138A7B84626F3AD47_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_71;
		L_71 = Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853(L_70, NULL);
		RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377** L_72 = ___2_renamed;
		*((RuntimeObject**)L_72) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_72, (void*)(RuntimeObject*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_Start_m145F904E20D2DE3C98706B4D893CD714E25D6868 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileWatcher_t1D3469880AFBF0496F0609AD59946CBFC2849A7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		bool L_0 = __this->___disposed;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		RuntimeObject* L_1 = __this->___watcher_handle;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		RuntimeObject* L_2 = __this->___watcher;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B6_0 = L_3;
			goto IL_001d;
		}
		G_B5_0 = L_3;
	}
	{
		return;
	}

IL_001d:
	{
		RuntimeObject* L_4 = __this->___watcher_handle;
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IFileWatcher_t1D3469880AFBF0496F0609AD59946CBFC2849A7C_il2cpp_TypeInfo_var, G_B6_0, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_Stop_m27FF994400220D04FC337C9914135440EACDF3A0 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileWatcher_t1D3469880AFBF0496F0609AD59946CBFC2849A7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		bool L_0 = __this->___disposed;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		RuntimeObject* L_1 = __this->___watcher_handle;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		RuntimeObject* L_2 = __this->___watcher;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B6_0 = L_3;
			goto IL_001d;
		}
		G_B5_0 = L_3;
	}
	{
		return;
	}

IL_001d:
	{
		RuntimeObject* L_4 = __this->___watcher_handle;
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IFileWatcher_t1D3469880AFBF0496F0609AD59946CBFC2849A7C_il2cpp_TypeInfo_var, G_B6_0, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_add_Changed_mCD10973FF9EBA23B3220639603239EA54AEF0F53 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* V_0 = NULL;
	FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* V_1 = NULL;
	FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* V_2 = NULL;
	{
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_0 = __this->___Changed;
		V_0 = L_0;
	}

IL_0007:
	{
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_1 = V_0;
		V_1 = L_1;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_2 = V_1;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98*)CastclassSealed((RuntimeObject*)L_4, FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98_il2cpp_TypeInfo_var));
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98** L_5 = (FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98**)(&__this->___Changed);
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_6 = V_2;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_7 = V_1;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_8;
		L_8 = InterlockedCompareExchangeImpl<FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98*>(L_5, L_6, L_7);
		V_0 = L_8;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_9 = V_0;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_10 = V_1;
		if ((!(((RuntimeObject*)(FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98*)L_9) == ((RuntimeObject*)(FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_remove_Changed_m699821FB5E0A9D7F280692679ED04DD499DF1CD8 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* V_0 = NULL;
	FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* V_1 = NULL;
	FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* V_2 = NULL;
	{
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_0 = __this->___Changed;
		V_0 = L_0;
	}

IL_0007:
	{
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_1 = V_0;
		V_1 = L_1;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_2 = V_1;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98*)CastclassSealed((RuntimeObject*)L_4, FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98_il2cpp_TypeInfo_var));
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98** L_5 = (FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98**)(&__this->___Changed);
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_6 = V_2;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_7 = V_1;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_8;
		L_8 = InterlockedCompareExchangeImpl<FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98*>(L_5, L_6, L_7);
		V_0 = L_8;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_9 = V_0;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_10 = V_1;
		if ((!(((RuntimeObject*)(FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98*)L_9) == ((RuntimeObject*)(FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_add_Created_m2C42C4271B22250100DD4A29785DAAF520247544 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* V_0 = NULL;
	FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* V_1 = NULL;
	FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* V_2 = NULL;
	{
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_0 = __this->___Created;
		V_0 = L_0;
	}

IL_0007:
	{
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_1 = V_0;
		V_1 = L_1;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_2 = V_1;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98*)CastclassSealed((RuntimeObject*)L_4, FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98_il2cpp_TypeInfo_var));
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98** L_5 = (FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98**)(&__this->___Created);
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_6 = V_2;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_7 = V_1;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_8;
		L_8 = InterlockedCompareExchangeImpl<FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98*>(L_5, L_6, L_7);
		V_0 = L_8;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_9 = V_0;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_10 = V_1;
		if ((!(((RuntimeObject*)(FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98*)L_9) == ((RuntimeObject*)(FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher_remove_Created_m3BFC8608F7CDC9F3EC7FBAA152AFAF553ED78E36 (FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* __this, FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* V_0 = NULL;
	FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* V_1 = NULL;
	FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* V_2 = NULL;
	{
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_0 = __this->___Created;
		V_0 = L_0;
	}

IL_0007:
	{
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_1 = V_0;
		V_1 = L_1;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_2 = V_1;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98*)CastclassSealed((RuntimeObject*)L_4, FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98_il2cpp_TypeInfo_var));
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98** L_5 = (FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98**)(&__this->___Created);
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_6 = V_2;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_7 = V_1;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_8;
		L_8 = InterlockedCompareExchangeImpl<FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98*>(L_5, L_6, L_7);
		V_0 = L_8;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_9 = V_0;
		FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* L_10 = V_1;
		if ((!(((RuntimeObject*)(FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98*)L_9) == ((RuntimeObject*)(FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemWatcher__cctor_mAA2F10B158DF398B652856056A4341E670A6B7E2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A_StaticFields*)il2cpp_codegen_static_fields_for(FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A_il2cpp_TypeInfo_var))->___lockobj = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A_StaticFields*)il2cpp_codegen_static_fields_for(FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A_il2cpp_TypeInfo_var))->___lockobj), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_0__ctor_m1086378899EEF39D293E8F3E4CE7B54A1A154568 (U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_0_U3CDispatchEventsU3Eb__0_mDEE588C10C17B59F393202662C4B8F6A2F02A443 (U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* L_0 = __this->___U3CU3E4__this;
		FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* L_1 = __this->___U3CU3E4__this;
		String_t* L_2 = L_1->___path;
		String_t* L_3 = __this->___filename;
		FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8* L_4 = (FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8*)il2cpp_codegen_object_new(FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8_il2cpp_TypeInfo_var);
		FileSystemEventArgs__ctor_mCE20714E1E42C388FA85416C9FC260F6D90364A1(L_4, 1, L_2, L_3, NULL);
		FileSystemWatcher_OnCreated_m43F229241EBC677400912B86B11D2DF771715C52(L_0, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_0_U3CDispatchEventsU3Eb__1_m533A262114B04E5863766679AF81B5B963FF39EC (U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* L_0 = __this->___U3CU3E4__this;
		FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* L_1 = __this->___U3CU3E4__this;
		String_t* L_2 = L_1->___path;
		String_t* L_3 = __this->___filename;
		FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8* L_4 = (FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8*)il2cpp_codegen_object_new(FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8_il2cpp_TypeInfo_var);
		FileSystemEventArgs__ctor_mCE20714E1E42C388FA85416C9FC260F6D90364A1(L_4, 2, L_2, L_3, NULL);
		FileSystemWatcher_OnDeleted_m6A7D606BFD2ECE00BD9997DC8DD88F7E4BEA1BC3(L_0, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_0_U3CDispatchEventsU3Eb__2_m619ED553175CE1AB8CF63394E449E8F23A990F3E (U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* L_0 = __this->___U3CU3E4__this;
		FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* L_1 = __this->___U3CU3E4__this;
		String_t* L_2 = L_1->___path;
		String_t* L_3 = __this->___filename;
		FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8* L_4 = (FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8*)il2cpp_codegen_object_new(FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8_il2cpp_TypeInfo_var);
		FileSystemEventArgs__ctor_mCE20714E1E42C388FA85416C9FC260F6D90364A1(L_4, 4, L_2, L_3, NULL);
		FileSystemWatcher_OnChanged_m043A5F8DBF2A9D47E0C7B232C4451EDEEE481DCE(L_0, L_4, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_1__ctor_mCE49B444728BEEAE3F21B6CB03151F71DD3B8561 (U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_1_U3CDispatchEventsU3Eb__3_m137F8F11DED84B88E62B09D138A7B84626F3AD47 (U3CU3Ec__DisplayClass70_1_t5D492F2F7714647B41514CAC705AB5B5F812BDFB* __this, const RuntimeMethod* method) 
{
	{
		U3CU3Ec__DisplayClass70_0_t05EA9B91E3D09D072107D416437D5A8C6BDC612B* L_0 = __this->___CSU24U3CU3E8__locals1;
		FileSystemWatcher_t3F7347BD8C92E4D38DE0EFCB4039BE41383EDF3A* L_1 = L_0->___U3CU3E4__this;
		RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377* L_2 = __this->___renamed_ref;
		FileSystemWatcher_OnRenamed_m0C259EC20C016015CCE7A65D421FB3AA26F2FD77(L_1, L_2, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IODescriptionAttribute__ctor_mC7FEACED75B4A65CA286D1ED21B537AFA38A50A2 (IODescriptionAttribute_t457D25714ADF43A878BE90470924C860BDF64DBF* __this, String_t* ___0_description, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_description;
		il2cpp_codegen_runtime_class_init_inline(DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var);
		DescriptionAttribute__ctor_m5A3D1DF34E3AACD9FF690A3CBE78F822F3A2EF97(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IODescriptionAttribute_get_Description_mAA9B18B00E71DA451F1AA0244DDC43968861E1CB (IODescriptionAttribute_t457D25714ADF43A878BE90470924C860BDF64DBF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = DescriptionAttribute_get_DescriptionValue_m1F4A0829E3BE8AF3BBB9A5F2344BA672E07DC975_inline(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullFileWatcher_StartDispatching_m879FD832B8C148B7F7C4FD4F969E177F33C2440B (NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89* __this, RuntimeObject* ___0_handle, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullFileWatcher_StopDispatching_mA8F9C3E4E21F3C30F33C02CB671048250D031D18 (NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89* __this, RuntimeObject* ___0_handle, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullFileWatcher_Dispose_mFD957BCE9762EF0CB48E04F4A53CAB19F4797ED9 (NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89* __this, RuntimeObject* ___0_handle, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullFileWatcher_GetInstance_m5839544378C0E21E7D788430427E209795184D82 (RuntimeObject** ___0_watcher, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ((NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89_StaticFields*)il2cpp_codegen_static_fields_for(NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89_il2cpp_TypeInfo_var))->___instance;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject** L_1 = ___0_watcher;
		RuntimeObject* L_2 = ((NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89_StaticFields*)il2cpp_codegen_static_fields_for(NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89_il2cpp_TypeInfo_var))->___instance;
		*((RuntimeObject**)L_1) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)L_2);
		return (bool)1;
	}

IL_0010:
	{
		RuntimeObject** L_3 = ___0_watcher;
		NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89* L_4 = (NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89*)il2cpp_codegen_object_new(NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89_il2cpp_TypeInfo_var);
		NullFileWatcher__ctor_mEF7E812F6B509D37C129966C3F8A5924B299B1DA(L_4, NULL);
		NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89* L_5 = L_4;
		V_0 = L_5;
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_5);
		RuntimeObject* L_6 = V_0;
		((NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89_StaticFields*)il2cpp_codegen_static_fields_for(NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89_il2cpp_TypeInfo_var))->___instance = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89_StaticFields*)il2cpp_codegen_static_fields_for(NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89_il2cpp_TypeInfo_var))->___instance), (void*)L_6);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullFileWatcher__ctor_mEF7E812F6B509D37C129966C3F8A5924B299B1DA (NullFileWatcher_t02657DB03BCA0841283D325CD2458432300A3A89* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchPattern2__ctor_mBE5D52B2273A10A7D9AB2DA81C88DB003C238360 (SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451* __this, String_t* ___0_pattern, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_pattern;
		SearchPattern2__ctor_m82DEB7844EEE3CA62B8132407D763EB07EE8ABE8(__this, L_0, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchPattern2__ctor_m82DEB7844EEE3CA62B8132407D763EB07EE8ABE8 (SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451* __this, String_t* ___0_pattern, bool ___1_ignore, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___1_ignore;
		__this->___ignore = L_0;
		String_t* L_1 = ___0_pattern;
		__this->___pattern = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pattern), (void*)L_1);
		String_t* L_2 = ___0_pattern;
		SearchPattern2_Compile_mE1451FF44E2DDF8ED6B52636EF07FB42535EA477(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SearchPattern2_get_HasWildcard_mFCAB5504AA7991F16D5C230DA9F07AAAA8658AE8 (SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasWildcard;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchPattern2_Compile_mE1451FF44E2DDF8ED6B52636EF07FB42535EA477 (SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451* __this, String_t* ___0_pattern, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* V_1 = NULL;
	Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	{
		String_t* L_0 = ___0_pattern;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___0_pattern;
		il2cpp_codegen_runtime_class_init_inline(SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ((SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_StaticFields*)il2cpp_codegen_static_fields_for(SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_il2cpp_TypeInfo_var))->___InvalidChars;
		int32_t L_3;
		L_3 = String_IndexOfAny_mC7AA4AE42B38667BDB9B214AA6230F322306CFF6(L_1, L_2, NULL);
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}

IL_0011:
	{
		String_t* L_4 = ___0_pattern;
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0659ACC9E0B651980048A0EBBA6751971F746403)), L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SearchPattern2_Compile_mE1451FF44E2DDF8ED6B52636EF07FB42535EA477_RuntimeMethod_var)));
	}

IL_0027:
	{
		String_t* L_7 = ___0_pattern;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* L_9 = (Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67*)il2cpp_codegen_object_new(Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67_il2cpp_TypeInfo_var);
		Op__ctor_m4E23FB716A65201164A9757326E3A63718BFDA3E(L_9, 4, NULL);
		__this->___ops = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ops), (void*)L_9);
		__this->___hasWildcard = (bool)1;
		return;
	}

IL_0048:
	{
		__this->___ops = (Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ops), (void*)(Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67*)NULL);
		V_0 = 0;
		V_1 = (Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67*)NULL;
		goto IL_00f4;
	}

IL_0058:
	{
		String_t* L_10 = ___0_pattern;
		int32_t L_11 = V_0;
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		V_4 = L_12;
		Il2CppChar L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)42))))
		{
			goto IL_0081;
		}
	}
	{
		Il2CppChar L_14 = V_4;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0095;
		}
	}
	{
		Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* L_15 = (Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67*)il2cpp_codegen_object_new(Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67_il2cpp_TypeInfo_var);
		Op__ctor_m4E23FB716A65201164A9757326E3A63718BFDA3E(L_15, 1, NULL);
		V_2 = L_15;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		__this->___hasWildcard = (bool)1;
		goto IL_00df;
	}

IL_0081:
	{
		Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* L_17 = (Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67*)il2cpp_codegen_object_new(Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67_il2cpp_TypeInfo_var);
		Op__ctor_m4E23FB716A65201164A9757326E3A63718BFDA3E(L_17, 2, NULL);
		V_2 = L_17;
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		__this->___hasWildcard = (bool)1;
		goto IL_00df;
	}

IL_0095:
	{
		Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* L_19 = (Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67*)il2cpp_codegen_object_new(Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67_il2cpp_TypeInfo_var);
		Op__ctor_m4E23FB716A65201164A9757326E3A63718BFDA3E(L_19, 0, NULL);
		V_2 = L_19;
		String_t* L_20 = ___0_pattern;
		il2cpp_codegen_runtime_class_init_inline(SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = ((SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_StaticFields*)il2cpp_codegen_static_fields_for(SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_il2cpp_TypeInfo_var))->___WildcardChars;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = String_IndexOfAny_m1AE18DB3B14A0D05EF4A2D3403D4DC1930A199F3(L_20, L_21, L_22, NULL);
		V_3 = L_23;
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_25 = ___0_pattern;
		int32_t L_26;
		L_26 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_25, NULL);
		V_3 = L_26;
	}

IL_00b4:
	{
		Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* L_27 = V_2;
		String_t* L_28 = ___0_pattern;
		int32_t L_29 = V_0;
		int32_t L_30 = V_3;
		int32_t L_31 = V_0;
		String_t* L_32;
		L_32 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_28, L_29, ((int32_t)il2cpp_codegen_subtract(L_30, L_31)), NULL);
		L_27->___Argument = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___Argument), (void*)L_32);
		bool L_33 = __this->___ignore;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* L_34 = V_2;
		Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* L_35 = V_2;
		String_t* L_36 = L_35->___Argument;
		String_t* L_37;
		L_37 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_36, NULL);
		L_34->___Argument = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->___Argument), (void*)L_37);
	}

IL_00dd:
	{
		int32_t L_38 = V_3;
		V_0 = L_38;
	}

IL_00df:
	{
		Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* L_39 = V_1;
		if (L_39)
		{
			goto IL_00eb;
		}
	}
	{
		Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* L_40 = V_2;
		__this->___ops = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ops), (void*)L_40);
		goto IL_00f2;
	}

IL_00eb:
	{
		Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* L_41 = V_1;
		Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* L_42 = V_2;
		L_41->___Next = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&L_41->___Next), (void*)L_42);
	}

IL_00f2:
	{
		Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* L_43 = V_2;
		V_1 = L_43;
	}

IL_00f4:
	{
		int32_t L_44 = V_0;
		String_t* L_45 = ___0_pattern;
		int32_t L_46;
		L_46 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_45, NULL);
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_0058;
		}
	}
	{
		Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* L_47 = V_1;
		if (L_47)
		{
			goto IL_0110;
		}
	}
	{
		Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* L_48 = (Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67*)il2cpp_codegen_object_new(Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67_il2cpp_TypeInfo_var);
		Op__ctor_m4E23FB716A65201164A9757326E3A63718BFDA3E(L_48, 3, NULL);
		__this->___ops = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ops), (void*)L_48);
		return;
	}

IL_0110:
	{
		Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* L_49 = V_1;
		Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* L_50 = (Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67*)il2cpp_codegen_object_new(Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67_il2cpp_TypeInfo_var);
		Op__ctor_m4E23FB716A65201164A9757326E3A63718BFDA3E(L_50, 3, NULL);
		L_49->___Next = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&L_49->___Next), (void*)L_50);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchPattern2__cctor_m7485597FFD96E94DCADB9679584F245A9DD1405D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)42));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)63));
		((SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_StaticFields*)il2cpp_codegen_static_fields_for(SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_il2cpp_TypeInfo_var))->___WildcardChars = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_StaticFields*)il2cpp_codegen_static_fields_for(SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_il2cpp_TypeInfo_var))->___WildcardChars), (void*)L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = L_3;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_5 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_5);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = L_4;
		Il2CppChar L_7 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)L_7);
		((SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_StaticFields*)il2cpp_codegen_static_fields_for(SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_il2cpp_TypeInfo_var))->___InvalidChars = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_StaticFields*)il2cpp_codegen_static_fields_for(SearchPattern2_t018E1B27DDCC9870BC2E3202F395A28A10115451_il2cpp_TypeInfo_var))->___InvalidChars), (void*)L_6);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Op__ctor_m4E23FB716A65201164A9757326E3A63718BFDA3E (Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67* __this, int32_t ___0_code, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_code;
		__this->___Code = L_0;
		__this->___Argument = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Argument), (void*)(String_t*)NULL);
		__this->___Next = (Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Next), (void*)(Op_t0A61813CAFE5EAC6718FF293E45DCA1F144C6B67*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m171C269D828658C44041FA68B6DE8CA290ED517F (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3 (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___0_parentElement, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70 (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717 (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC (NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242 (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821 (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6 (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3 (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, RuntimeObject* ___0_parent, RuntimeObject* ___1_configContext, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___2_section, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		return NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2 (const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenamedEventHandler_Invoke_m85B315BB5530AD039A8B6663846D99696ABE9E5E_inline (RenamedEventHandler_t32CFBCE0B817A32EA931724556757BE7DAE60A23* __this, RuntimeObject* ___0_sender, RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RenamedEventArgs_t0ADA37AFBE1BCABEA7C4D9DB23CED3013FC29377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorEventHandler_Invoke_m3A5CFB7726095F0AE60A34740165419F52125A0C_inline (ErrorEventHandler_t7166C810399B9428173CE89A1D84E63ABC4424C4* __this, RuntimeObject* ___0_sender, ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ErrorEventArgs_tEC6942F123A1D7AA05EFE8F8F756690CBB3BAF0F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileSystemEventHandler_Invoke_m6B172CCA9A63898ED96FC0BEFFC4B73747782A78_inline (FileSystemEventHandler_t36374788BEA68CE41D5442331970684FA98AED98* __this, RuntimeObject* ___0_sender, FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, FileSystemEventArgs_t83F321C376D09F89C720B25C4C72A1A1108735A8*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WaitForChangedResult_set_Name_m46AD2BE2CF26C5CD70F0BC2AAC87777D7D34C37D_inline (WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WaitForChangedResult_set_ChangeType_m8025313FAB1B29316A9B04B98FFACA1B27043EB7_inline (WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CChangeTypeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WaitForChangedResult_set_OldName_m36FF98F2393ADFF9CD670CAD035B9672750928B0_inline (WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3COldNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COldNameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DescriptionAttribute_get_DescriptionValue_m1F4A0829E3BE8AF3BBB9A5F2344BA672E07DC975_inline (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDescriptionValueU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
