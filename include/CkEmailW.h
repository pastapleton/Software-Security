#ifndef _CkEmailW_H
#define _CkEmailW_H
// This header is generated.
#include "chilkatDefs.h"

#pragma once

#include "CkWideCharBase.h"
#include "CkString.h"
#include "CkEmail.h"

class CkMimeW;
class CkPrivateKeyW;
#if defined(CK_CSP_INCLUDED)
class CkCspW;
#endif
class CkCertW;
class CkStringArrayW;
class CkDateTimeW;



#ifndef __sun__
#pragma pack (push, 8) 
#endif


class CkEmailW : public CkWideCharBase
{
    private:
	CkEmail *m_impl;
	

        // Disallow assignment or copying this object.
	CkEmailW(const CkEmailW &) { }
	CkEmailW &operator=(const CkEmailW &) { return *this; }


    public:
	CkEmailW();
	CkEmailW(CkEmail *p, bool bForDso);
	CkEmailW(bool bForDso);
	virtual ~CkEmailW();
	CkEmail *getMbPtr(void) { return m_impl; }
	CkEmail &getMbRef(void) { return *m_impl; }
	const CkEmail *getMbConstPtr(void) const { return m_impl; }
	const CkEmail &getMbConstRef(void) const { return *m_impl; }
	void dispose(void) { if (m_impl) m_impl->dispose();  }

void get_Body(CkString &propVal);
void put_Body(const wchar_t *w1);
void get_BounceAddress(CkString &propVal);
void put_BounceAddress(const wchar_t *w1);
void get_Charset(CkString &propVal);
void put_Charset(const wchar_t *w1);
void get_DebugLogFilePath(CkString &propVal);
void put_DebugLogFilePath(const wchar_t *w1);
bool get_Decrypted(void);
void get_EmailDate(SYSTEMTIME &propVal);
void put_EmailDate(SYSTEMTIME & propVal);
void get_EmailDateStr(CkString &propVal);
void put_EmailDateStr(const wchar_t *w1);
void get_EncryptedBy(CkString &propVal);
void get_FileDistList(CkString &propVal);
void put_FileDistList(const wchar_t *w1);
void get_From(CkString &propVal);
void put_From(const wchar_t *w1);
void get_FromAddress(CkString &propVal);
void put_FromAddress(const wchar_t *w1);
void get_FromName(CkString &propVal);
void put_FromName(const wchar_t *w1);
void get_Header(CkString &propVal);
void get_Language(CkString &propVal);
void LastErrorHtml(CkString &propVal);
void LastErrorText(CkString &propVal);
void LastErrorXml(CkString &propVal);
void get_LocalDate(SYSTEMTIME &propVal);
void put_LocalDate(SYSTEMTIME & propVal);
void get_LocalDateStr(CkString &propVal);
void put_LocalDateStr(const wchar_t *w1);
void get_Mailer(CkString &propVal);
void put_Mailer(const wchar_t *w1);
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
void put_OverwriteExisting(bool propVal);
void get_Pkcs7CryptAlg(CkString &propVal);
void put_Pkcs7CryptAlg(const wchar_t *w1);
int get_Pkcs7KeyLength(void);
void put_Pkcs7KeyLength(int propVal);
void get_PreferredCharset(CkString &propVal);
void put_PreferredCharset(const wchar_t *w1);
bool get_PrependHeaders(void);
void put_PrependHeaders(bool propVal);
bool get_ReceivedEncrypted(void);
bool get_ReceivedSigned(void);
void get_ReplyTo(CkString &propVal);
void put_ReplyTo(const wchar_t *w1);
bool get_ReturnReceipt(void);
void put_ReturnReceipt(bool propVal);
bool get_SendEncrypted(void);
void put_SendEncrypted(bool propVal);
bool get_SendSigned(void);
void put_SendSigned(bool propVal);
bool get_SignaturesValid(void);
void get_SignedBy(CkString &propVal);
void get_SigningHashAlg(CkString &propVal);
void put_SigningHashAlg(const wchar_t *w1);
int get_Size(void);
void get_Subject(CkString &propVal);
void put_Subject(const wchar_t *w1);
void get_Uidl(CkString &propVal);
bool get_UnpackUseRelPaths(void);
void put_UnpackUseRelPaths(bool propVal);
bool get_VerboseLogging(void);
void put_VerboseLogging(bool propVal);
void get_Version(CkString &propVal);
void AddAttachmentHeader(int index,const wchar_t *w1,const wchar_t *w2);
bool AddBcc(const wchar_t *w1,const wchar_t *w2);
bool AddCC(const wchar_t *w1,const wchar_t *w2);
bool AddDataAttachment(const wchar_t *w1,const unsigned char *pByteData,unsigned long szByteData);
bool AddDataAttachment2(const wchar_t *w1,const CkByteData &content,const wchar_t *w2);
bool AddEncryptCert(CkCertW &cert);
bool AddFileAttachment(const wchar_t *w1,CkString &outStrContentType);
bool AddFileAttachment2(const wchar_t *w1,const wchar_t *w2);
void AddHeaderField(const wchar_t *w1,const wchar_t *w2);
void AddHeaderField2(const wchar_t *w1,const wchar_t *w2);
bool AddHtmlAlternativeBody(const wchar_t *w1);
bool AddMultipleBcc(const wchar_t *w1);
bool AddMultipleCC(const wchar_t *w1);
bool AddMultipleTo(const wchar_t *w1);
bool AddPfxSourceData(const CkByteData &pfxData,const wchar_t *w1);
bool AddPfxSourceFile(const wchar_t *w1,const wchar_t *w2);
bool AddPlainTextAlternativeBody(const wchar_t *w1);
bool AddRelatedData(const wchar_t *w1,const CkByteData &inData,CkString &outStr);
void AddRelatedData2(const CkByteData &inData,const wchar_t *w1);
#if !defined(CHILKAT_MONO)
void AddRelatedData2P(const unsigned char *pByteData,unsigned long szByteData,const wchar_t *w1);
#endif
#if !defined(CHILKAT_MONO)
bool AddRelatedDataP(const wchar_t *w1,const unsigned char *pByteData,unsigned long szByteData,CkString &outStrContentId);
#endif
bool AddRelatedFile(const wchar_t *w1,CkString &outStrContentID);
bool AddRelatedFile2(const wchar_t *w1,const wchar_t *w2);
void AddRelatedHeader(int index,const wchar_t *w1,const wchar_t *w2);
bool AddRelatedString(const wchar_t *w1,const wchar_t *w2,const wchar_t *w3,CkString &outCid);
void AddRelatedString2(const wchar_t *w1,const wchar_t *w2,const wchar_t *w3);
bool AddStringAttachment(const wchar_t *w1,const wchar_t *w2);
bool AddStringAttachment2(const wchar_t *w1,const wchar_t *w2,const wchar_t *w3);
bool AddTo(const wchar_t *w1,const wchar_t *w2);
bool AddiCalendarAlternativeBody(const wchar_t *w1,const wchar_t *w2);
bool AesDecrypt(const wchar_t *w1);
bool AesEncrypt(const wchar_t *w1);
void AppendToBody(const wchar_t *w1);
bool AspUnpack(const wchar_t *w1,const wchar_t *w2,const wchar_t *w3,bool cleanFiles);
bool AspUnpack2(const wchar_t *w1,const wchar_t *w2,const wchar_t *w3,bool cleanFiles,CkByteData &outHtml);
bool AttachMessage(const CkByteData &mimeBytes);
bool BEncodeBytes(const unsigned char *pByteData,unsigned long szByteData,const wchar_t *w1,CkString &outEncodedStr);
bool BEncodeString(const wchar_t *w1,const wchar_t *w2,CkString &outEncodedStr);
void ClearBcc(void);
void ClearCC(void);
void ClearEncryptCerts(void);
void ClearTo(void);
CkEmailW *Clone(void);
bool ComputeGlobalKey(const wchar_t *w1,bool bFold,CkString &outStr);
CkEmailW *CreateDsn(const wchar_t *w1,const wchar_t *w2,bool bHeaderOnly);
CkEmailW *CreateForward(void);
CkEmailW *CreateMdn(const wchar_t *w1,const wchar_t *w2,bool bHeaderOnly);
CkEmailW *CreateReply(void);
bool CreateTempMht(const wchar_t *w1,CkString &outPath);
void DropAttachments(void);
void DropRelatedItem(int index);
void DropRelatedItems(void);
bool DropSingleAttachment(int index);
CkCertW *FindIssuer(CkCertW &cert);
bool GenerateFilename(CkString &outStrFilename);
bool GetAltHeaderField(int index,const wchar_t *w1,CkString &outStr);
bool GetAlternativeBody(int index,CkString &outStrBody);
bool GetAlternativeBodyByContentType(const wchar_t *w1,CkString &outStr);
bool GetAlternativeContentType(int index,CkString &outStrContentType);
CkEmailW *GetAttachedMessage(int index);
bool GetAttachedMessageFilename(int index,CkString &outStr);
bool GetAttachmentContentID(int index,CkString &outStrContentID);
bool GetAttachmentContentType(int index,CkString &outStrContentType);
bool GetAttachmentData(int index,CkByteData &outData);
bool GetAttachmentFilename(int index,CkString &outStrFilename);
bool GetAttachmentHeader(int index,const wchar_t *w1,CkString &outFieldValue);
int GetAttachmentSize(int index);
bool GetAttachmentString(int index,const wchar_t *w1,CkString &outStr);
bool GetAttachmentStringCrLf(int index,const wchar_t *w1,CkString &outStrData);
bool GetBcc(int index,CkString &outStr);
bool GetBccAddr(int index,CkString &outStr);
bool GetBccName(int index,CkString &outStr);
bool GetCC(int index,CkString &outStr);
bool GetCcAddr(int index,CkString &outStr);
bool GetCcName(int index,CkString &outStr);
bool GetDeliveryStatusInfo(const wchar_t *w1,CkString &outFieldValue);
CkStringArrayW *GetDsnFinalRecipients(void);
CkDateTimeW *GetDt(void);
CkCertW *GetEncryptCert(void);
CkCertW *GetEncryptedByCert(void);
bool GetFileContent(const wchar_t *w1,CkByteData &outData);
bool GetHeaderField(const wchar_t *w1,CkString &outStrFieldData);
bool GetHeaderFieldName(int index,CkString &outStrFieldName);
bool GetHeaderFieldValue(int index,CkString &outStrFieldValue);
bool GetHtmlBody(CkString &outStrBody);
int GetImapUid(void);
void GetLinkedDomains(CkStringArrayW &sa);
bool GetMbHeaderField(const wchar_t *w1,CkByteData &outData);
bool GetMbHeaderField2(const wchar_t *w1,const wchar_t *w2,CkByteData &outData);
bool GetMbHtmlBody(const wchar_t *w1,CkByteData &outData);
bool GetMbPlainTextBody(const wchar_t *w1,CkByteData &outData);
bool GetMime(CkString &outStrMime);
bool GetMimeBinary(CkByteData &outBytes);
CkMimeW *GetMimeObject(void);
bool GetPlainTextBody(CkString &outStrBody);
bool GetRelatedContentID(int index,CkString &outStrContentID);
bool GetRelatedContentLocation(int index,CkString &outStr);
bool GetRelatedContentType(int index,CkString &outStrContentType);
bool GetRelatedData(int index,CkByteData &outBuffer);
bool GetRelatedFilename(int index,CkString &outStrFilename);
bool GetRelatedString(int index,const wchar_t *w1,CkString &outStrData);
bool GetRelatedStringCrLf(int index,const wchar_t *w1,CkString &outStr);
bool GetReplacePattern(int index,CkString &outStrPattern);
bool GetReplaceString(int index,CkString &outStr);
bool GetReplaceString2(const wchar_t *w1,CkString &outStr);
bool GetReport(int index,CkString &outStr);
CkCertW *GetSignedByCert(void);
CkCertW *GetSigningCert(void);
bool GetTo(int index,CkString &outStr);
bool GetToAddr(int index,CkString &outStr);
bool GetToName(int index,CkString &outStr);
bool GetXml(CkString &outStrXml);
bool HasHeaderMatching(const wchar_t *w1,const wchar_t *w2,bool caseInsensitive);
bool HasHtmlBody(void);
bool HasPlainTextBody(void);
bool IsMultipartReport(void);
bool LoadEml(const wchar_t *w1);
bool LoadXml(const wchar_t *w1);
bool LoadXmlString(const wchar_t *w1);
bool QEncodeBytes(const unsigned char *pByteData,unsigned long szByteData,const wchar_t *w1,CkString &outEncodedStr);
bool QEncodeString(const wchar_t *w1,const wchar_t *w2,CkString &outEncodedStr);
void RemoveAttachedMessage(int index);
void RemoveAttachedMessages(void);
void RemoveAttachmentPaths(void);
void RemoveHeaderField(const wchar_t *w1);
void RemoveHtmlAlternative(void);
void RemovePlainTextAlternative(void);
bool SaveAllAttachments(const wchar_t *w1);
bool SaveAttachedFile(int index,const wchar_t *w1);
bool SaveEml(const wchar_t *w1);
bool SaveLastError(const wchar_t *w1);
bool SaveRelatedItem(int index,const wchar_t *w1);
bool SaveXml(const wchar_t *w1);
bool SetAttachmentCharset(int index,const wchar_t *w1);
bool SetAttachmentDisposition(int index,const wchar_t *w1);
bool SetAttachmentFilename(int index,const wchar_t *w1);
#if defined(CK_CSP_INCLUDED)
bool SetCSP(const CkCspW &csp);
#endif
bool SetDecryptCert2(const CkCertW &cert,CkPrivateKeyW &key);
bool SetDt(CkDateTimeW &dt);
bool SetEncryptCert(const CkCertW &cert);
bool SetFromMimeBytes(const CkByteData &mimeBytes);
bool SetFromMimeBytes2(const CkByteData &mimeBytes,const wchar_t *w1);
bool SetFromMimeObject(CkMimeW &mime);
bool SetFromMimeText(const wchar_t *w1);
bool SetFromXmlText(const wchar_t *w1);
void SetHtmlBody(const wchar_t *w1);
bool SetMbHtmlBody(const wchar_t *w1,const unsigned char *pByteData,unsigned long szByteData);
bool SetMbPlainTextBody(const wchar_t *w1,const unsigned char *pByteData,unsigned long szByteData);
bool SetRelatedFilename(int index,const wchar_t *w1);
bool SetReplacePattern(const wchar_t *w1,const wchar_t *w2);
bool SetSigningCert(const CkCertW &cert);
bool SetSigningCert2(const CkCertW &cert,CkPrivateKeyW &key);
void SetTextBody(const wchar_t *w1,const wchar_t *w2);
bool UidlEquals(const CkEmailW &e);
void UnSpamify(void);
bool UnpackHtml(const wchar_t *w1,const wchar_t *w2,const wchar_t *w3);
bool UnzipAttachments(void);
bool ZipAttachments(const wchar_t *w1);
const wchar_t *addFileAttachment(const wchar_t *w1);
const wchar_t *addRelatedData(const wchar_t *w1,const CkByteData &inData);
#if !defined(CHILKAT_MONO)
const wchar_t *addRelatedDataP(const wchar_t *w1,const unsigned char *pByteData,unsigned long szByteData);
#endif
const wchar_t *addRelatedFile(const wchar_t *w1);
const wchar_t *addRelatedString(const wchar_t *w1,const wchar_t *w2,const wchar_t *w3);
const wchar_t *altHeaderField(int index,const wchar_t *w1);
const wchar_t *alternativeBody(int index);
const wchar_t *alternativeBodyByContentType(const wchar_t *w1);
const wchar_t *alternativeContentType(int index);
const wchar_t *attachedMessageFilename(int index);
const wchar_t *attachmentContentID(int index);
const wchar_t *attachmentContentType(int index);
const wchar_t *attachmentFilename(int index);
const wchar_t *attachmentHeader(int index,const wchar_t *w1);
const wchar_t *attachmentString(int index,const wchar_t *w1);
const wchar_t *attachmentStringCrLf(int index,const wchar_t *w1);
const wchar_t *bEncodeBytes(const unsigned char *pByteData,unsigned long szByteData,const wchar_t *w1);
const wchar_t *bEncodeString(const wchar_t *w1,const wchar_t *w2);
const wchar_t *bcc(int index);
const wchar_t *bccAddr(int index);
const wchar_t *bccName(int index);
const wchar_t *body(void);
const wchar_t *bounceAddress(void);
const wchar_t *cC(int index);
const wchar_t *ccAddr(int index);
const wchar_t *ccName(int index);
const wchar_t *charset(void);
const wchar_t *ck_from(void);
const wchar_t *computeGlobalKey(const wchar_t *w1,bool bFold);
const wchar_t *createTempMht(const wchar_t *w1);
const wchar_t *debugLogFilePath(void);
const wchar_t *deliveryStatusInfo(const wchar_t *w1);
const wchar_t *emailDateStr(void);
const wchar_t *encryptedBy(void);
const wchar_t *fileDistList(void);
const wchar_t *fromAddress(void);
const wchar_t *fromName(void);
const wchar_t *generateFilename(void);
const wchar_t *getAltHeaderField(int index,const wchar_t *w1);
const wchar_t *getAlternativeBody(int index);
const wchar_t *getAlternativeBodyByContentType(const wchar_t *w1);
const wchar_t *getAlternativeContentType(int index);
const wchar_t *getAttachedMessageFilename(int index);
const wchar_t *getAttachmentContentID(int index);
const wchar_t *getAttachmentContentType(int index);
const wchar_t *getAttachmentFilename(int index);
const wchar_t *getAttachmentHeader(int index,const wchar_t *w1);
const wchar_t *getAttachmentString(int index,const wchar_t *w1);
const wchar_t *getAttachmentStringCrLf(int index,const wchar_t *w1);
const wchar_t *getBcc(int index);
const wchar_t *getBccAddr(int index);
const wchar_t *getBccName(int index);
const wchar_t *getCC(int index);
const wchar_t *getCcAddr(int index);
const wchar_t *getCcName(int index);
const wchar_t *getDeliveryStatusInfo(const wchar_t *w1);
const wchar_t *getHeaderField(const wchar_t *w1);
const wchar_t *getHeaderFieldName(int index);
const wchar_t *getHeaderFieldValue(int index);
const wchar_t *getHtmlBody(void);
const wchar_t *getMime(void);
const wchar_t *getPlainTextBody(void);
const wchar_t *getRelatedContentID(int index);
const wchar_t *getRelatedContentLocation(int index);
const wchar_t *getRelatedContentType(int index);
const wchar_t *getRelatedFilename(int index);
const wchar_t *getRelatedString(int index,const wchar_t *w1);
const wchar_t *getRelatedStringCrLf(int index,const wchar_t *w1);
const wchar_t *getReplacePattern(int index);
const wchar_t *getReplaceString(int index);
const wchar_t *getReplaceString2(const wchar_t *w1);
const wchar_t *getReport(int index);
const wchar_t *getTo(int index);
const wchar_t *getToAddr(int index);
const wchar_t *getToName(int index);
const wchar_t *getXml(void);
const wchar_t *header(void);
const wchar_t *headerField(const wchar_t *w1);
const wchar_t *headerFieldName(int index);
const wchar_t *headerFieldValue(int index);
const wchar_t *htmlBody(void);
const wchar_t *language(void);
const wchar_t *lastErrorHtml(void);
const wchar_t *lastErrorText(void);
const wchar_t *lastErrorXml(void);
const wchar_t *localDateStr(void);
const wchar_t *mailer(void);
const wchar_t *mime(void);
const wchar_t *pkcs7CryptAlg(void);
const wchar_t *plainTextBody(void);
const wchar_t *preferredCharset(void);
const wchar_t *qEncodeBytes(const unsigned char *pByteData,unsigned long szByteData,const wchar_t *w1);
const wchar_t *qEncodeString(const wchar_t *w1,const wchar_t *w2);
const wchar_t *relatedContentID(int index);
const wchar_t *relatedContentLocation(int index);
const wchar_t *relatedContentType(int index);
const wchar_t *relatedFilename(int index);
const wchar_t *relatedString(int index,const wchar_t *w1);
const wchar_t *relatedStringCrLf(int index,const wchar_t *w1);
const wchar_t *replacePattern(int index);
const wchar_t *replaceString(int index);
const wchar_t *replaceString2(const wchar_t *w1);
const wchar_t *replyTo(void);
const wchar_t *report(int index);
const wchar_t *signedBy(void);
const wchar_t *signingHashAlg(void);
const wchar_t *subject(void);
const wchar_t *to(int index);
const wchar_t *toAddr(int index);
const wchar_t *toName(int index);
const wchar_t *uidl(void);
const wchar_t *version(void);
const wchar_t *xml(void);

};
#ifndef __sun__
#pragma pack (pop)
#endif

#endif
