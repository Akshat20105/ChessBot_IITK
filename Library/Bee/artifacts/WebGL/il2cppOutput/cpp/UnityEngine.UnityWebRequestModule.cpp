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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct String_t;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0202811166757AF262261201E48B89F6244FAE6C;
IL2CPP_EXTERN_C String_t* _stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05;
IL2CPP_EXTERN_C String_t* _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84;
IL2CPP_EXTERN_C String_t* _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteralA3EDB257239BA23A2B3196FB9697A402B943583D;
IL2CPP_EXTERN_C String_t* _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke;;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke;;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t42F165DEA2597BD5AB2C914FCF80349ECF878162 
{
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
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
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	String_t* ___m_String;
	String_t* ___m_originalUnicodeString;
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax;
	String_t* ___m_DnsSafeHost;
	uint64_t ___m_Flags;
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info;
	bool ___m_iriParsing;
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
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045  : public RuntimeObject
{
};
struct WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B  : public RuntimeObject
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
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
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	int32_t ____origin;
	int32_t ____position;
	int32_t ____length;
	int32_t ____capacity;
	bool ____expandable;
	bool ____writable;
	bool ____exposable;
	bool ____isOpen;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask;
};
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	intptr_t ___m_Ptr;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri;
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField;
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField;
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField;
};
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField;
};
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	String_t* ___UriSchemeFile;
	String_t* ___UriSchemeFtp;
	String_t* ___UriSchemeGopher;
	String_t* ___UriSchemeHttp;
	String_t* ___UriSchemeHttps;
	String_t* ___UriSchemeWs;
	String_t* ___UriSchemeWss;
	String_t* ___UriSchemeMailto;
	String_t* ___UriSchemeNews;
	String_t* ___UriSchemeNntp;
	String_t* ___UriSchemeNetTcp;
	String_t* ___UriSchemeNetPipe;
	String_t* ___SchemeDelimiter;
	bool ___s_ConfigInitialized;
	bool ___s_ConfigInitializing;
	int32_t ___s_IdnScope;
	bool ___s_IriParsing;
	bool ___useDotNetRelativeOrAbsolute;
	bool ___IsWindowsFileSystem;
	RuntimeObject* ___s_initLock;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars;
};
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dDash;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___crlf;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___contentTypeHeader;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dispositionHeader;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___endQuote;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileNameField;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ampersand;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___equal;
};
struct WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ucHexChars;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lcHexChars;
	uint8_t ___urlEscapeChar;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___urlSpace;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dataSpace;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___urlForbidden;
	uint8_t ___qpEscapeChar;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qpSpace;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qpForbidden;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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

IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_back(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_cleanup(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_back(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_cleanup(UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_back(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_cleanup(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com_back(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com_cleanup(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com_back(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com_cleanup(UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com_back(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com_cleanup(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled);


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_Encode_m86AA40F3F2DC0DADF1CBEB275121F4D81C91D4E4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, uint8_t ___1_escapeChar, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_space, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_forbidden, bool ___4_uppercase, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteArrayContains_mD433242C2C8505F3B71A9A0E7997F724FE789630 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, uint8_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWTranscoder_Byte2Hex_m42C360DFB6FF4C8801AB5AED488B8FDFFA0BA651 (uint8_t ___0_b, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_hexChars, uint8_t* ___2_byte0, uint8_t* ___3_byte1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_EscapeURL_mA76C33EF0C48CDE8CA317256CFAD9D21A125BCDA (String_t* ___0_s, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_URLEncode_mC3A0A499F4A42BED4509092095F505E9BCA8DAC0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_toEncode, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000 (const RuntimeMethod* method) 
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* V_0 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__cctor_m272C4A10B85A1DEC11809F9EEADD0B2DE9166B5F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3EDB257239BA23A2B3196FB9697A402B943583D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16, L_0, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash), (void*)L_1);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16, L_2, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf), (void*)L_3);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16, L_4, _stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___contentTypeHeader = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___contentTypeHeader), (void*)L_5);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16, L_6, _stringLiteralA3EDB257239BA23A2B3196FB9697A402B943583D);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dispositionHeader = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dispositionHeader), (void*)L_7);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
		L_8 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16, L_8, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___endQuote = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___endQuote), (void*)L_9);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16, L_10, _stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___fileNameField = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___fileNameField), (void*)L_11);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_12;
		L_12 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16, L_12, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___ampersand = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___ampersand), (void*)L_13);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_14;
		L_14 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16, L_14, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___equal = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___equal), (void*)L_15);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWTranscoder_Byte2Hex_m42C360DFB6FF4C8801AB5AED488B8FDFFA0BA651 (uint8_t ___0_b, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_hexChars, uint8_t* ___2_byte0, uint8_t* ___3_byte1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___2_byte0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_hexChars;
		uint8_t L_2 = ___0_b;
		int32_t L_3 = ((int32_t)((int32_t)L_2>>4));
		uint8_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		*((int8_t*)L_0) = (int8_t)L_4;
		uint8_t* L_5 = ___3_byte1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_hexChars;
		uint8_t L_7 = ___0_b;
		int32_t L_8 = ((int32_t)((int32_t)L_7&((int32_t)15)));
		uint8_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		*((int8_t*)L_5) = (int8_t)L_9;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_URLEncode_mC3A0A499F4A42BED4509092095F505E9BCA8DAC0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_toEncode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_toEncode;
		il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlEscapeChar;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlSpace;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlForbidden;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = WWWTranscoder_Encode_m86AA40F3F2DC0DADF1CBEB275121F4D81C91D4E4(L_0, L_1, L_2, L_3, (bool)0, NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_Encode_m86AA40F3F2DC0DADF1CBEB275121F4D81C91D4E4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, uint8_t ___1_escapeChar, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_space, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_forbidden, bool ___4_uppercase, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	bool V_6 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B10_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_input;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_1, ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 2)), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					if (!L_2)
					{
						goto IL_00bd;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_00bd:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_1 = 0;
				goto IL_009a_1;
			}

IL_0014_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_input;
				int32_t L_5 = V_1;
				int32_t L_6 = L_5;
				uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
				V_2 = (bool)((((int32_t)L_7) == ((int32_t)((int32_t)32)))? 1 : 0);
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_0030_1;
				}
			}
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___2_space;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___2_space;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24, L_9, L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)));
				goto IL_0095_1;
			}

IL_0030_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_input;
				int32_t L_13 = V_1;
				int32_t L_14 = L_13;
				uint8_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
				if ((((int32_t)L_15) < ((int32_t)((int32_t)32))))
				{
					goto IL_0049_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_input;
				int32_t L_17 = V_1;
				int32_t L_18 = L_17;
				uint8_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
				if ((((int32_t)L_19) > ((int32_t)((int32_t)126))))
				{
					goto IL_0049_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___3_forbidden;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_input;
				int32_t L_22 = V_1;
				int32_t L_23 = L_22;
				uint8_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				bool L_25;
				L_25 = WWWTranscoder_ByteArrayContains_mD433242C2C8505F3B71A9A0E7997F724FE789630(L_20, L_24, NULL);
				G_B8_0 = ((int32_t)(L_25));
				goto IL_004a_1;
			}

IL_0049_1:
			{
				G_B8_0 = 1;
			}

IL_004a_1:
			{
				V_3 = (bool)G_B8_0;
				bool L_26 = V_3;
				if (!L_26)
				{
					goto IL_0089_1;
				}
			}
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_27 = V_0;
				uint8_t L_28 = ___1_escapeChar;
				VirtualActionInvoker1< uint8_t >::Invoke(26, L_27, L_28);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___0_input;
				int32_t L_30 = V_1;
				int32_t L_31 = L_30;
				uint8_t L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
				bool L_33 = ___4_uppercase;
				if (L_33)
				{
					G_B11_0 = ((int32_t)(L_32));
					goto IL_0065_1;
				}
				G_B10_0 = ((int32_t)(L_32));
			}
			{
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___lcHexChars;
				G_B12_0 = L_34;
				G_B12_1 = G_B10_0;
				goto IL_006a_1;
			}

IL_0065_1:
			{
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___ucHexChars;
				G_B12_0 = L_35;
				G_B12_1 = G_B11_0;
			}

IL_006a_1:
			{
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				WWWTranscoder_Byte2Hex_m42C360DFB6FF4C8801AB5AED488B8FDFFA0BA651((uint8_t)G_B12_1, G_B12_0, (&V_4), (&V_5), NULL);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_36 = V_0;
				uint8_t L_37 = V_4;
				VirtualActionInvoker1< uint8_t >::Invoke(26, L_36, L_37);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_38 = V_0;
				uint8_t L_39 = V_5;
				VirtualActionInvoker1< uint8_t >::Invoke(26, L_38, L_39);
				goto IL_0095_1;
			}

IL_0089_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_40 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___0_input;
				int32_t L_42 = V_1;
				int32_t L_43 = L_42;
				uint8_t L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
				VirtualActionInvoker1< uint8_t >::Invoke(26, L_40, L_44);
			}

IL_0095_1:
			{
				int32_t L_45 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
			}

IL_009a_1:
			{
				int32_t L_46 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ___0_input;
				V_6 = (bool)((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))))? 1 : 0);
				bool L_48 = V_6;
				if (L_48)
				{
					goto IL_0014_1;
				}
			}
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_49 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
				L_50 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(30, L_49);
				V_7 = L_50;
				goto IL_00be;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00be:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_7;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteArrayContains_mD433242C2C8505F3B71A9A0E7997F724FE789630 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, uint8_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		V_1 = 0;
		goto IL_001d;
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		uint8_t L_5 = ___1_b;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0018;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_002b;
	}

IL_0018:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001d:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		V_4 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_0009;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_11 = V_3;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWTranscoder__cctor_m105AD5C901F1A72DCDD5956E3FDDE83B65AB0152 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0202811166757AF262261201E48B89F6244FAE6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16, L_0, _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___ucHexChars = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___ucHexChars), (void*)L_1);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16, L_2, _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___lcHexChars = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___lcHexChars), (void*)L_3);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlEscapeChar = (uint8_t)((int32_t)37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)43));
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlSpace = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlSpace), (void*)L_5);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16, L_6, _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___dataSpace = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___dataSpace), (void*)L_7);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
		L_8 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16, L_8, _stringLiteral0202811166757AF262261201E48B89F6244FAE6C);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlForbidden = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlForbidden), (void*)L_9);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpEscapeChar = (uint8_t)((int32_t)61);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)95));
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpSpace = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpSpace), (void*)L_11);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_12;
		L_12 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16, L_12, _stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpForbidden = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpForbidden), (void*)L_13);
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
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr = unmarshaled.___m_Ptr;
}
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_back(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr;
	unmarshaled.___m_Ptr = unmarshaledm_Ptr_temp_0;
}
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_cleanup(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled)
{
	marshaled.___m_Ptr = unmarshaled.___m_Ptr;
}
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com_back(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr;
	unmarshaled.___m_Ptr = unmarshaledm_Ptr_temp_0;
}
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com_cleanup(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr = unmarshaled.___m_Ptr;
}
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_back(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr;
	unmarshaled.___m_Ptr = unmarshaledm_Ptr_temp_0;
}
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_cleanup(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled)
{
	marshaled.___m_Ptr = unmarshaled.___m_Ptr;
}
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com_back(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr;
	unmarshaled.___m_Ptr = unmarshaledm_Ptr_temp_0;
}
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com_cleanup(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif






IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_UriException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_UriException, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_back(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke& marshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled)
{
	Exception_t* ___m_UriException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_UriException, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_cleanup(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke& marshaled)
{
}






IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_com(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com& marshaled)
{
	Exception_t* ___m_UriException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_UriException, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_com_back(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com& marshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled)
{
	Exception_t* ___m_UriException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_UriException, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_com_cleanup(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27 (String_t* ___0_s, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_s;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_2;
		L_2 = UnityWebRequest_EscapeURL_mA76C33EF0C48CDE8CA317256CFAD9D21A125BCDA(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_EscapeURL_mA76C33EF0C48CDE8CA317256CFAD9D21A125BCDA (String_t* ___0_s, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	{
		String_t* L_0 = ___0_s;
		V_2 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_3 = (String_t*)NULL;
		goto IL_004d;
	}

IL_000d:
	{
		String_t* L_2 = ___0_s;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_4 = L_3;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_004d;
	}

IL_0026:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5 = ___1_e;
		V_5 = (bool)((((RuntimeObject*)(Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_5;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		V_3 = (String_t*)NULL;
		goto IL_004d;
	}

IL_0034:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7 = ___1_e;
		String_t* L_8 = ___0_s;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16, L_7, L_8);
		V_0 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = WWWTranscoder_URLEncode_mC3A0A499F4A42BED4509092095F505E9BCA8DAC0(L_10, NULL);
		V_1 = L_11;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_12 = ___1_e;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		String_t* L_14;
		L_14 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(33, L_12, L_13);
		V_3 = L_14;
		goto IL_004d;
	}

IL_004d:
	{
		String_t* L_15 = V_3;
		return L_15;
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
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr = unmarshaled.___m_Ptr;
}
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_back(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr;
	unmarshaled.___m_Ptr = unmarshaledm_Ptr_temp_0;
}
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_cleanup(UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled)
{
	marshaled.___m_Ptr = unmarshaled.___m_Ptr;
}
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com_back(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr;
	unmarshaled.___m_Ptr = unmarshaledm_Ptr_temp_0;
}
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com_cleanup(UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
