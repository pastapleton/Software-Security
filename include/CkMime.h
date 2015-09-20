// CkMime.h: interface for the CkMime class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkMime_H
#define _CkMime_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkCert;
class CkPrivateKey;
class CkByteData;
class CkStringArray;
class CkCsp;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkMime
class CkMime  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkMime(const CkMime &);
	CkMime &operator=(const CkMime &);

    public:
	CkMime(void);
	virtual ~CkMime(void);

	static CkMime *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_Boundary(CkString &str);
	const char *boundary(void);
	void put_Boundary(const char *newVal);

	void get_Charset(CkString &str);
	const char *charset(void);
	void put_Charset(const char *newVal);

	void get_ContentType(CkString &str);
	const char *contentType(void);
	void put_ContentType(const char *newVal);

	void get_CurrentDateTime(CkString &str);
	const char *currentDateTime(void);

	void get_Disposition(CkString &str);
	const char *disposition(void);
	void put_Disposition(const char *newVal);

	void get_Encoding(CkString &str);
	const char *encoding(void);
	void put_Encoding(const char *newVal);

	void get_Filename(CkString &str);
	const char *filename(void);
	void put_Filename(const char *newVal);

	void get_Micalg(CkString &str);
	const char *micalg(void);
	void put_Micalg(const char *newVal);

	void get_Name(CkString &str);
	const char *name(void);
	void put_Name(const char *newVal);

	int get_NumEncryptCerts(void);

	int get_NumHeaderFields(void);

	int get_NumParts(void);

	int get_NumSignerCerts(void);

	void get_Pkcs7CryptAlg(CkString &str);
	const char *pkcs7CryptAlg(void);
	void put_Pkcs7CryptAlg(const char *newVal);

	int get_Pkcs7KeyLength(void);
	void put_Pkcs7KeyLength(int newVal);

	void get_Protocol(CkString &str);
	const char *protocol(void);
	void put_Protocol(const char *newVal);

	void get_SigningHashAlg(CkString &str);
	const char *signingHashAlg(void);
	void put_SigningHashAlg(const char *newVal);

	bool get_UnwrapExtras(void);
	void put_UnwrapExtras(bool newVal);

	bool get_UseMmDescription(void);
	void put_UseMmDescription(bool newVal);

	bool get_UseXPkcs7(void);
	void put_UseXPkcs7(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	void AddContentLength(void);

	bool AddDetachedSignature(const CkCert &cert);

	bool AddDetachedSignature2(const CkCert &cert, bool transferHeaderFields);

	bool AddDetachedSignaturePk(const CkCert &cert, const CkPrivateKey &privateKey);

	bool AddDetachedSignaturePk2(const CkCert &cert, const CkPrivateKey &privateKey, bool transferHeaderFields);

	bool AddEncryptCert(CkCert &cert);

	bool AddHeaderField(const char *name, const char *value);

	bool AddPfxSourceData(const CkByteData &pfxData, const char *password);

	bool AddPfxSourceFile(const char *pfxFilePath, const char *password);

	bool AppendPart(const CkMime &mime);

	bool AppendPartFromFile(const char *path);

	bool AsnBodyToXml(CkString &outStr);
	const char *asnBodyToXml(void);

	void ClearEncryptCerts(void);

	bool ContainsEncryptedParts(void);

	bool ContainsSignedParts(void);

	void Convert8Bit(void);

	void ConvertToMultipartAlt(void);

	void ConvertToMultipartMixed(void);

	bool ConvertToSigned(const CkCert &cert);

	bool ConvertToSignedPk(const CkCert &cert, const CkPrivateKey &privateKey);

	bool Decrypt(void);

	bool Decrypt2(const CkCert &cert, const CkPrivateKey &privateKey);

	bool DecryptUsingPfxData(const CkByteData &pfxData, const char *password);

	bool DecryptUsingPfxFile(const char *pfxFilePath, const char *password);

	bool Encrypt(const CkCert &cert);

	bool EncryptN(void);

#ifndef MOBILE_MIME
	CkStringArray *ExtractPartsToFiles(const char *dirPath);
#endif

	CkCert *FindIssuer(CkCert &cert);

	bool GetBodyBinary(CkByteData &outData);

	bool GetBodyDecoded(CkString &outStr);
	const char *getBodyDecoded(void);
	const char *bodyDecoded(void);

	bool GetBodyEncoded(CkString &outStr);
	const char *getBodyEncoded(void);
	const char *bodyEncoded(void);

	CkCert *GetEncryptCert(int index);

	bool GetEntireBody(CkString &outStr);
	const char *getEntireBody(void);
	const char *entireBody(void);

	bool GetEntireHead(CkString &outStr);
	const char *getEntireHead(void);
	const char *entireHead(void);

	bool GetHeaderField(const char *name, CkString &outStr);
	const char *getHeaderField(const char *name);
	const char *headerField(const char *name);

	bool GetHeaderFieldAttribute(const char *name, const char *attrName, CkString &outStr);
	const char *getHeaderFieldAttribute(const char *name, const char *attrName);
	const char *headerFieldAttribute(const char *name, const char *attrName);

	bool GetHeaderFieldName(int index, CkString &outStr);
	const char *getHeaderFieldName(int index);
	const char *headerFieldName(int index);

	bool GetHeaderFieldValue(int index, CkString &outStr);
	const char *getHeaderFieldValue(int index);
	const char *headerFieldValue(int index);

	bool GetMime(CkString &outStr);
	const char *getMime(void);
	const char *mime(void);

	bool GetMimeBytes(CkByteData &outBytes);

	CkMime *GetPart(int index);

	bool GetSignatureSigningTime(int index, SYSTEMTIME &outSysTime);

	bool GetSignatureSigningTimeStr(int index, CkString &outStr);
	const char *getSignatureSigningTimeStr(int index);
	const char *signatureSigningTimeStr(int index);

	CkCert *GetSignerCert(int index);

	bool GetXml(CkString &outStr);
	const char *getXml(void);
	const char *xml(void);

	bool HasSignatureSigningTime(int index);

	bool IsApplicationData(void);

	bool IsAttachment(void);

	bool IsAudio(void);

	bool IsEncrypted(void);

	bool IsHtml(void);

	bool IsImage(void);

	bool IsMultipart(void);

	bool IsMultipartAlternative(void);

	bool IsMultipartMixed(void);

	bool IsMultipartRelated(void);

	bool IsPlainText(void);

	bool IsSigned(void);

	bool IsText(void);

	bool IsUnlocked(void);

	bool IsVideo(void);

	bool IsXml(void);

	bool LoadMime(const char *mimeText);

	bool LoadMimeBytes(const CkByteData &bData);

	bool LoadMimeFile(const char *path);

	bool LoadXml(const char *xmlText);

	bool LoadXmlFile(const char *path);

	bool NewMessageRfc822(const CkMime &mimeObject);

	bool NewMultipartAlternative(void);

	bool NewMultipartMixed(void);

	bool NewMultipartRelated(void);

	void RemoveHeaderField(const char *name, bool bAllOccurances);

	bool RemovePart(int index);

	bool SaveBody(const char *path);

	bool SaveMime(const char *path);

	bool SaveXml(const char *path);

	void SetBody(const char *str);

	bool SetBodyFromBinary(const CkByteData &dbuf);

	bool SetBodyFromEncoded(const char *encoding, const char *str);

	bool SetBodyFromFile(const char *path);

	bool SetBodyFromHtml(const char *str);

	bool SetBodyFromPlainText(const char *str);

	bool SetBodyFromXml(const char *str);

#if defined(CK_CSP_INCLUDED)
	bool SetCSP(const CkCsp &csp);
#endif

	bool SetHeaderField(const char *name, const char *value);

	void SetVerifyCert(const CkCert &cert);

	bool UnlockComponent(const char *unlockCode);

	bool UnwrapSecurity(void);

	void UrlEncodeBody(const char *charset);

	bool Verify(void);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
