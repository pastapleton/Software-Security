// CkEmail.h: interface for the CkEmail class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkEmail_H
#define _CkEmail_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkCert;
class CkStringArray;
class CkDateTime;
class CkMime;
class CkCsp;
class CkPrivateKey;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkEmail
class CkEmail  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkEmail(const CkEmail &);
	CkEmail &operator=(const CkEmail &);

    public:
	CkEmail(void);
	virtual ~CkEmail(void);

	static CkEmail *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_Body(CkString &str);
	const char *body(void);
	void put_Body(const char *newVal);

	void get_BounceAddress(CkString &str);
	const char *bounceAddress(void);
	void put_BounceAddress(const char *newVal);

	void get_Charset(CkString &str);
	const char *charset(void);
	void put_Charset(const char *newVal);

	bool get_Decrypted(void);

	void get_EmailDate(SYSTEMTIME &outSysTime);
	void put_EmailDate(const SYSTEMTIME &sysTime);

	void get_EmailDateStr(CkString &str);
	const char *emailDateStr(void);
	void put_EmailDateStr(const char *newVal);

	void get_EncryptedBy(CkString &str);
	const char *encryptedBy(void);

	void get_FileDistList(CkString &str);
	const char *fileDistList(void);
	void put_FileDistList(const char *newVal);

	void get_From(CkString &str);
	const char *ck_from(void);
	void put_From(const char *newVal);

	void get_FromAddress(CkString &str);
	const char *fromAddress(void);
	void put_FromAddress(const char *newVal);

	void get_FromName(CkString &str);
	const char *fromName(void);
	void put_FromName(const char *newVal);

	void get_Header(CkString &str);
	const char *header(void);

	void get_Language(CkString &str);
	const char *language(void);

	void get_LocalDate(SYSTEMTIME &outSysTime);
	void put_LocalDate(const SYSTEMTIME &sysTime);

	void get_LocalDateStr(CkString &str);
	const char *localDateStr(void);
	void put_LocalDateStr(const char *newVal);

	void get_Mailer(CkString &str);
	const char *mailer(void);
	void put_Mailer(const char *newVal);

	int get_NumAlternatives(void);

	int get_NumAttachedMessages(void);

	int get_NumAttachments(void);

	int get_NumBcc(void);

	int get_NumCC(void);

	int get_NumDaysOld(void);

	int get_NumHeaderFields(void);

	int get_NumRelatedItems(void);

	int get_NumReplacePatterns(void);

	int get_NumReports(void);

	int get_NumTo(void);

	bool get_OverwriteExisting(void);
	void put_OverwriteExisting(bool newVal);

	void get_Pkcs7CryptAlg(CkString &str);
	const char *pkcs7CryptAlg(void);
	void put_Pkcs7CryptAlg(const char *newVal);

	int get_Pkcs7KeyLength(void);
	void put_Pkcs7KeyLength(int newVal);

	void get_PreferredCharset(CkString &str);
	const char *preferredCharset(void);
	void put_PreferredCharset(const char *newVal);

	bool get_PrependHeaders(void);
	void put_PrependHeaders(bool newVal);

	bool get_ReceivedEncrypted(void);

	bool get_ReceivedSigned(void);

	void get_ReplyTo(CkString &str);
	const char *replyTo(void);
	void put_ReplyTo(const char *newVal);

	bool get_ReturnReceipt(void);
	void put_ReturnReceipt(bool newVal);

	bool get_SendEncrypted(void);
	void put_SendEncrypted(bool newVal);

	bool get_SendSigned(void);
	void put_SendSigned(bool newVal);

	bool get_SignaturesValid(void);

	void get_SignedBy(CkString &str);
	const char *signedBy(void);

	void get_SigningHashAlg(CkString &str);
	const char *signingHashAlg(void);
	void put_SigningHashAlg(const char *newVal);

	int get_Size(void);

	void get_Subject(CkString &str);
	const char *subject(void);
	void put_Subject(const char *newVal);

	void get_Uidl(CkString &str);
	const char *uidl(void);

	bool get_UnpackUseRelPaths(void);
	void put_UnpackUseRelPaths(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	void AddAttachmentHeader(int index, const char *fieldName, const char *fieldValue);

	bool AddBcc(const char *friendlyName, const char *emailAddress);

	bool AddCC(const char *friendlyName, const char *emailAddress);

	bool AddDataAttachment(const char *fileName, const unsigned char *pByteData, unsigned long szByteData);

	bool AddDataAttachment2(const char *fileName, const CkByteData &content, const char *contentType);

	bool AddEncryptCert(CkCert &cert);

	bool AddFileAttachment(const char *path, CkString &outStrContentType);
	const char *addFileAttachment(const char *path);

	bool AddFileAttachment2(const char *path, const char *contentType);

	void AddHeaderField(const char *fieldName, const char *fieldValue);

	void AddHeaderField2(const char *fieldName, const char *fieldValue);

	bool AddHtmlAlternativeBody(const char *body);

	bool AddMultipleBcc(const char *commaSeparatedAddresses);

	bool AddMultipleCC(const char *commaSeparatedAddresses);

	bool AddMultipleTo(const char *commaSeparatedAddresses);

	bool AddPfxSourceData(const CkByteData &pfxData, const char *password);

	bool AddPfxSourceFile(const char *pfxFilePath, const char *password);

	bool AddPlainTextAlternativeBody(const char *body);

	bool AddRelatedData(const char *fileName, const CkByteData &inData, CkString &outStr);
	const char *addRelatedData(const char *fileName, const CkByteData &inData);

	void AddRelatedData2(const CkByteData &inData, const char *fileNameInHtml);

#if !defined(CHILKAT_MONO)
	void AddRelatedData2P(const unsigned char *pByteData, unsigned long szByteData, const char *fileNameInHtml);
#endif

#if !defined(CHILKAT_MONO)
	bool AddRelatedDataP(const char *nameInHtml, const unsigned char *pByteData, unsigned long szByteData, CkString &outStrContentId);
	const char *addRelatedDataP(const char *nameInHtml, const unsigned char *pByteData, unsigned long szByteData);
#endif

	bool AddRelatedFile(const char *path, CkString &outStrContentID);
	const char *addRelatedFile(const char *path);

	bool AddRelatedFile2(const char *fileNameOnDisk, const char *filenameInHtml);

	void AddRelatedHeader(int index, const char *fieldName, const char *fieldValue);

	bool AddRelatedString(const char *nameInHtml, const char *str, const char *charset, CkString &outCid);
	const char *addRelatedString(const char *nameInHtml, const char *str, const char *charset);

	void AddRelatedString2(const char *str, const char *charset, const char *filenameInHtml);

	bool AddStringAttachment(const char *fileName, const char *str);

	bool AddStringAttachment2(const char *fileName, const char *str, const char *charset);

	bool AddTo(const char *friendlyName, const char *emailAddress);

	bool AddiCalendarAlternativeBody(const char *body, const char *methodName);

	bool AesDecrypt(const char *password);

	bool AesEncrypt(const char *password);

	void AppendToBody(const char *str);

	bool AspUnpack(const char *prefix, const char *saveDir, const char *urlPath, bool cleanFiles);

	bool AspUnpack2(const char *prefix, const char *saveDir, const char *urlPath, bool cleanFiles, CkByteData &outHtml);

	bool AttachMessage(const CkByteData &mimeBytes);

	bool BEncodeBytes(const unsigned char *pByteData, unsigned long szByteData, const char *charset, CkString &outEncodedStr);
	const char *bEncodeBytes(const unsigned char *pByteData, unsigned long szByteData, const char *charset);

	bool BEncodeString(const char *str, const char *charset, CkString &outEncodedStr);
	const char *bEncodeString(const char *str, const char *charset);

	void ClearBcc(void);

	void ClearCC(void);

	void ClearEncryptCerts(void);

	void ClearTo(void);

	CkEmail *Clone(void);

	bool ComputeGlobalKey(const char *encoding, bool bFold, CkString &outStr);
	const char *computeGlobalKey(const char *encoding, bool bFold);

	CkEmail *CreateDsn(const char *explanation, const char *xmlDeliveryStatus, bool bHeaderOnly);

	CkEmail *CreateForward(void);

	CkEmail *CreateMdn(const char *explanation, const char *xmlMdnFields, bool bHeaderOnly);

	CkEmail *CreateReply(void);

	bool CreateTempMht(const char *inPath, CkString &outPath);
	const char *createTempMht(const char *inPath);

	void DropAttachments(void);

	void DropRelatedItem(int index);

	void DropRelatedItems(void);

	bool DropSingleAttachment(int index);

	CkCert *FindIssuer(CkCert &cert);

	bool GenerateFilename(CkString &outStrFilename);
	const char *generateFilename(void);

	bool GetAltHeaderField(int index, const char *fieldName, CkString &outStr);
	const char *getAltHeaderField(int index, const char *fieldName);
	const char *altHeaderField(int index, const char *fieldName);

	bool GetAlternativeBody(int index, CkString &outStrBody);
	const char *getAlternativeBody(int index);
	const char *alternativeBody(int index);

	bool GetAlternativeBodyByContentType(const char *contentType, CkString &outStr);
	const char *getAlternativeBodyByContentType(const char *contentType);
	const char *alternativeBodyByContentType(const char *contentType);

	bool GetAlternativeContentType(int index, CkString &outStrContentType);
	const char *getAlternativeContentType(int index);
	const char *alternativeContentType(int index);

	CkEmail *GetAttachedMessage(int index);

	bool GetAttachedMessageFilename(int index, CkString &outStr);
	const char *getAttachedMessageFilename(int index);
	const char *attachedMessageFilename(int index);

	bool GetAttachmentContentID(int index, CkString &outStrContentID);
	const char *getAttachmentContentID(int index);
	const char *attachmentContentID(int index);

	bool GetAttachmentContentType(int index, CkString &outStrContentType);
	const char *getAttachmentContentType(int index);
	const char *attachmentContentType(int index);

	bool GetAttachmentData(int index, CkByteData &outData);

	bool GetAttachmentFilename(int index, CkString &outStrFilename);
	const char *getAttachmentFilename(int index);
	const char *attachmentFilename(int index);

	bool GetAttachmentHeader(int index, const char *fieldName, CkString &outFieldValue);
	const char *getAttachmentHeader(int index, const char *fieldName);
	const char *attachmentHeader(int index, const char *fieldName);

	int GetAttachmentSize(int index);

	bool GetAttachmentString(int index, const char *charset, CkString &outStr);
	const char *getAttachmentString(int index, const char *charset);
	const char *attachmentString(int index, const char *charset);

	bool GetAttachmentStringCrLf(int index, const char *charset, CkString &outStrData);
	const char *getAttachmentStringCrLf(int index, const char *charset);
	const char *attachmentStringCrLf(int index, const char *charset);

	bool GetBcc(int index, CkString &outStr);
	const char *getBcc(int index);
	const char *bcc(int index);

	bool GetBccAddr(int index, CkString &outStr);
	const char *getBccAddr(int index);
	const char *bccAddr(int index);

	bool GetBccName(int index, CkString &outStr);
	const char *getBccName(int index);
	const char *bccName(int index);

	bool GetCC(int index, CkString &outStr);
	const char *getCC(int index);
	const char *cC(int index);

	bool GetCcAddr(int index, CkString &outStr);
	const char *getCcAddr(int index);
	const char *ccAddr(int index);

	bool GetCcName(int index, CkString &outStr);
	const char *getCcName(int index);
	const char *ccName(int index);

	bool GetDeliveryStatusInfo(const char *fieldName, CkString &outFieldValue);
	const char *getDeliveryStatusInfo(const char *fieldName);
	const char *deliveryStatusInfo(const char *fieldName);

	CkStringArray *GetDsnFinalRecipients(void);

	CkDateTime *GetDt(void);

	CkCert *GetEncryptCert(void);

	CkCert *GetEncryptedByCert(void);

	bool GetFileContent(const char *path, CkByteData &outData);

	bool GetHeaderField(const char *fieldName, CkString &outStrFieldData);
	const char *getHeaderField(const char *fieldName);
	const char *headerField(const char *fieldName);

	bool GetHeaderFieldName(int index, CkString &outStrFieldName);
	const char *getHeaderFieldName(int index);
	const char *headerFieldName(int index);

	bool GetHeaderFieldValue(int index, CkString &outStrFieldValue);
	const char *getHeaderFieldValue(int index);
	const char *headerFieldValue(int index);

	bool GetHtmlBody(CkString &outStrBody);
	const char *getHtmlBody(void);
	const char *htmlBody(void);

	int GetImapUid(void);

	void GetLinkedDomains(CkStringArray &sa);

	bool GetMbHeaderField(const char *fieldName, CkByteData &outData);

	bool GetMbHeaderField2(const char *charset, const char *fieldName, CkByteData &outData);

	bool GetMbHtmlBody(const char *charset, CkByteData &outData);

	bool GetMbPlainTextBody(const char *charset, CkByteData &outData);

	bool GetMime(CkString &outStrMime);
	const char *getMime(void);
	const char *mime(void);

	bool GetMimeBinary(CkByteData &outBytes);

	CkMime *GetMimeObject(void);

	bool GetPlainTextBody(CkString &outStrBody);
	const char *getPlainTextBody(void);
	const char *plainTextBody(void);

	bool GetRelatedContentID(int index, CkString &outStrContentID);
	const char *getRelatedContentID(int index);
	const char *relatedContentID(int index);

	bool GetRelatedContentLocation(int index, CkString &outStr);
	const char *getRelatedContentLocation(int index);
	const char *relatedContentLocation(int index);

	bool GetRelatedContentType(int index, CkString &outStrContentType);
	const char *getRelatedContentType(int index);
	const char *relatedContentType(int index);

	bool GetRelatedData(int index, CkByteData &outBuffer);

	bool GetRelatedFilename(int index, CkString &outStrFilename);
	const char *getRelatedFilename(int index);
	const char *relatedFilename(int index);

	bool GetRelatedString(int index, const char *charset, CkString &outStrData);
	const char *getRelatedString(int index, const char *charset);
	const char *relatedString(int index, const char *charset);

	bool GetRelatedStringCrLf(int index, const char *charset, CkString &outStr);
	const char *getRelatedStringCrLf(int index, const char *charset);
	const char *relatedStringCrLf(int index, const char *charset);

	bool GetReplacePattern(int index, CkString &outStrPattern);
	const char *getReplacePattern(int index);
	const char *replacePattern(int index);

	bool GetReplaceString(int index, CkString &outStr);
	const char *getReplaceString(int index);
	const char *replaceString(int index);

	bool GetReplaceString2(const char *pattern, CkString &outStr);
	const char *getReplaceString2(const char *pattern);
	const char *replaceString2(const char *pattern);

	bool GetReport(int index, CkString &outStr);
	const char *getReport(int index);
	const char *report(int index);

	CkCert *GetSignedByCert(void);

	CkCert *GetSigningCert(void);

	bool GetTo(int index, CkString &outStr);
	const char *getTo(int index);
	const char *to(int index);

	bool GetToAddr(int index, CkString &outStr);
	const char *getToAddr(int index);
	const char *toAddr(int index);

	bool GetToName(int index, CkString &outStr);
	const char *getToName(int index);
	const char *toName(int index);

	bool GetXml(CkString &outStrXml);
	const char *getXml(void);
	const char *xml(void);

	bool HasHeaderMatching(const char *fieldName, const char *valuePattern, bool caseInsensitive);

	bool HasHtmlBody(void);

	bool HasPlainTextBody(void);

	bool IsMultipartReport(void);

	bool LoadEml(const char *mimePath);

	bool LoadXml(const char *xmlPath);

	bool LoadXmlString(const char *xmlStr);

	bool QEncodeBytes(const unsigned char *pByteData, unsigned long szByteData, const char *charset, CkString &outEncodedStr);
	const char *qEncodeBytes(const unsigned char *pByteData, unsigned long szByteData, const char *charset);

	bool QEncodeString(const char *str, const char *charset, CkString &outEncodedStr);
	const char *qEncodeString(const char *str, const char *charset);

	void RemoveAttachedMessage(int index);

	void RemoveAttachedMessages(void);

	void RemoveAttachmentPaths(void);

	void RemoveHeaderField(const char *fieldName);

	void RemoveHtmlAlternative(void);

	void RemovePlainTextAlternative(void);

	bool SaveAllAttachments(const char *directory);

	bool SaveAttachedFile(int index, const char *directory);

	bool SaveEml(const char *path);

	bool SaveRelatedItem(int index, const char *directory);

	bool SaveXml(const char *path);

	bool SetAttachmentCharset(int index, const char *charset);

	bool SetAttachmentDisposition(int index, const char *disposition);

	bool SetAttachmentFilename(int index, const char *filename);

#if defined(CK_CSP_INCLUDED)
	bool SetCSP(const CkCsp &csp);
#endif

	bool SetDecryptCert2(const CkCert &cert, CkPrivateKey &key);

	bool SetDt(CkDateTime &dt);

	bool SetEncryptCert(const CkCert &cert);

	bool SetFromMimeBytes(const CkByteData &mimeBytes);

	bool SetFromMimeBytes2(const CkByteData &mimeBytes, const char *charset);

	bool SetFromMimeObject(CkMime &mime);

	bool SetFromMimeText(const char *mimeText);

	bool SetFromXmlText(const char *xmlStr);

	void SetHtmlBody(const char *html);

	bool SetMbHtmlBody(const char *charset, const unsigned char *pByteData, unsigned long szByteData);

	bool SetMbPlainTextBody(const char *charset, const unsigned char *pByteData, unsigned long szByteData);

	bool SetRelatedFilename(int index, const char *filename);

	bool SetReplacePattern(const char *pattern, const char *replaceString);

	bool SetSigningCert(const CkCert &cert);

	bool SetSigningCert2(const CkCert &cert, CkPrivateKey &key);

	void SetTextBody(const char *bodyText, const char *contentType);

	bool UidlEquals(const CkEmail &e);

	void UnSpamify(void);

	bool UnpackHtml(const char *unpackDir, const char *htmlFilename, const char *partsSubdir);

	bool UnzipAttachments(void);

	bool ZipAttachments(const char *zipFilename);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
