// CkMailMan.h: interface for the CkMailMan class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkMailMan_H
#define _CkMailMan_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkEmailBundle;
class CkEmail;
class CkStringArray;
class CkCert;
class CkCsp;
class CkPrivateKey;
class CkSshKey;
class CkMailProgress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkMailMan
class CkMailMan  : public CkMultiByteBase
{
    private:
	CkMailProgress *m_callback;

	// Don't allow assignment or copying these objects.
	CkMailMan(const CkMailMan &);
	CkMailMan &operator=(const CkMailMan &);

    public:
	CkMailMan(void);
	virtual ~CkMailMan(void);

	static CkMailMan *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkMailProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkMailProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	bool get_AllOrNone(void);
	void put_AllOrNone(bool newVal);

	bool get_AutoFix(void);
	void put_AutoFix(bool newVal);

	bool get_AutoGenMessageId(void);
	void put_AutoGenMessageId(bool newVal);

	bool get_AutoSmtpRset(void);
	void put_AutoSmtpRset(bool newVal);

	void get_ClientIpAddress(CkString &str);
	const char *clientIpAddress(void);
	void put_ClientIpAddress(const char *newVal);

	int get_ConnectTimeout(void);
	void put_ConnectTimeout(int newVal);

	void get_DsnEnvid(CkString &str);
	const char *dsnEnvid(void);
	void put_DsnEnvid(const char *newVal);

	void get_DsnNotify(CkString &str);
	const char *dsnNotify(void);
	void put_DsnNotify(const char *newVal);

	void get_DsnRet(CkString &str);
	const char *dsnRet(void);
	void put_DsnRet(const char *newVal);

	bool get_EmbedCertChain(void);
	void put_EmbedCertChain(bool newVal);

	void get_Filter(CkString &str);
	const char *filter(void);
	void put_Filter(const char *newVal);

	int get_HeartbeatMs(void);
	void put_HeartbeatMs(int newVal);

	void get_HeloHostname(CkString &str);
	const char *heloHostname(void);
	void put_HeloHostname(const char *newVal);

	void get_HttpProxyAuthMethod(CkString &str);
	const char *httpProxyAuthMethod(void);
	void put_HttpProxyAuthMethod(const char *newVal);

	void get_HttpProxyDomain(CkString &str);
	const char *httpProxyDomain(void);
	void put_HttpProxyDomain(const char *newVal);

	void get_HttpProxyHostname(CkString &str);
	const char *httpProxyHostname(void);
	void put_HttpProxyHostname(const char *newVal);

	void get_HttpProxyPassword(CkString &str);
	const char *httpProxyPassword(void);
	void put_HttpProxyPassword(const char *newVal);

	int get_HttpProxyPort(void);
	void put_HttpProxyPort(int newVal);

	void get_HttpProxyUsername(CkString &str);
	const char *httpProxyUsername(void);
	void put_HttpProxyUsername(const char *newVal);

	bool get_ImmediateDelete(void);
	void put_ImmediateDelete(bool newVal);

	bool get_IncludeRootCert(void);
	void put_IncludeRootCert(bool newVal);

	bool get_IsSmtpConnected(void);

	void get_LastSendQFilename(CkString &str);
	const char *lastSendQFilename(void);

	int get_LastSmtpStatus(void);

	void get_LogMailReceivedFilename(CkString &str);
	const char *logMailReceivedFilename(void);
	void put_LogMailReceivedFilename(const char *newVal);

	void get_LogMailSentFilename(CkString &str);
	const char *logMailSentFilename(void);
	void put_LogMailSentFilename(const char *newVal);

	void get_MailHost(CkString &str);
	const char *mailHost(void);
	void put_MailHost(const char *newVal);

	int get_MailPort(void);
	void put_MailPort(int newVal);

	int get_MaxCount(void);
	void put_MaxCount(int newVal);

	bool get_OpaqueSigning(void);
	void put_OpaqueSigning(bool newVal);

	bool get_Pop3SPA(void);
	void put_Pop3SPA(bool newVal);

	int get_Pop3SessionId(void);

	void get_Pop3SessionLog(CkString &str);
	const char *pop3SessionLog(void);

	bool get_Pop3SslServerCertVerified(void);

	bool get_Pop3Stls(void);
	void put_Pop3Stls(bool newVal);

	void get_PopPassword(CkString &str);
	const char *popPassword(void);
	void put_PopPassword(const char *newVal);

	void get_PopPasswordBase64(CkString &str);
	const char *popPasswordBase64(void);
	void put_PopPasswordBase64(const char *newVal);

	bool get_PopSsl(void);
	void put_PopSsl(bool newVal);

	void get_PopUsername(CkString &str);
	const char *popUsername(void);
	void put_PopUsername(const char *newVal);

	int get_ReadTimeout(void);
	void put_ReadTimeout(int newVal);

	bool get_RequireSslCertVerify(void);
	void put_RequireSslCertVerify(bool newVal);

	bool get_ResetDateOnLoad(void);
	void put_ResetDateOnLoad(bool newVal);

	int get_SendBufferSize(void);
	void put_SendBufferSize(int newVal);

	bool get_SendIndividual(void);
	void put_SendIndividual(bool newVal);

	int get_SizeLimit(void);
	void put_SizeLimit(int newVal);

	void get_SmtpAuthMethod(CkString &str);
	const char *smtpAuthMethod(void);
	void put_SmtpAuthMethod(const char *newVal);

	void get_SmtpHost(CkString &str);
	const char *smtpHost(void);
	void put_SmtpHost(const char *newVal);

	void get_SmtpLoginDomain(CkString &str);
	const char *smtpLoginDomain(void);
	void put_SmtpLoginDomain(const char *newVal);

	void get_SmtpPassword(CkString &str);
	const char *smtpPassword(void);
	void put_SmtpPassword(const char *newVal);

	int get_SmtpPort(void);
	void put_SmtpPort(int newVal);

	void get_SmtpSessionLog(CkString &str);
	const char *smtpSessionLog(void);

	bool get_SmtpSsl(void);
	void put_SmtpSsl(bool newVal);

	bool get_SmtpSslServerCertVerified(void);

	void get_SmtpUsername(CkString &str);
	const char *smtpUsername(void);
	void put_SmtpUsername(const char *newVal);

	int get_SoRcvBuf(void);
	void put_SoRcvBuf(int newVal);

	int get_SoSndBuf(void);
	void put_SoSndBuf(int newVal);

	void get_SocksHostname(CkString &str);
	const char *socksHostname(void);
	void put_SocksHostname(const char *newVal);

	void get_SocksPassword(CkString &str);
	const char *socksPassword(void);
	void put_SocksPassword(const char *newVal);

	int get_SocksPort(void);
	void put_SocksPort(int newVal);

	void get_SocksUsername(CkString &str);
	const char *socksUsername(void);
	void put_SocksUsername(const char *newVal);

	int get_SocksVersion(void);
	void put_SocksVersion(int newVal);

	bool get_StartTLS(void);
	void put_StartTLS(bool newVal);

	bool get_UseApop(void);
	void put_UseApop(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	bool AddPfxSourceData(const CkByteData &pfxData, const char *password);

	bool AddPfxSourceFile(const char *pfxFilePath, const char *password);

	// eventCallbacks
	int CheckMail(void);

	void ClearBadEmailAddresses(void);

	void ClearPop3SessionLog(void);

	void ClearSmtpSessionLog(void);

	// eventCallbacks
	bool CloseSmtpConnection(void);

	// eventCallbacks
	CkEmailBundle *CopyMail(void);

	// eventCallbacks
	bool DeleteBundle(const CkEmailBundle &bundle);

	// eventCallbacks
	bool DeleteByMsgnum(int msgnum);

	// eventCallbacks
	bool DeleteByUidl(const char *uidl);

	// eventCallbacks
	bool DeleteEmail(const CkEmail &email);

	// eventCallbacks
	bool DeleteMultiple(const CkStringArray &uidlArray);

	// eventCallbacks
	CkEmail *FetchByMsgnum(int msgnum);

	// eventCallbacks
	CkEmail *FetchEmail(const char *uidl);

	// eventCallbacks
	bool FetchMime(const char *uidl, CkByteData &outData);

	// eventCallbacks
	bool FetchMimeByMsgnum(int msgnum, CkByteData &outBytes);

	// eventCallbacks
	CkEmailBundle *FetchMultiple(const CkStringArray &uidlArray);

	// eventCallbacks
	CkEmailBundle *FetchMultipleHeaders(const CkStringArray &uidlArray, int numBodyLines);

	// eventCallbacks
	CkStringArray *FetchMultipleMime(const CkStringArray &uidlArray);

	// eventCallbacks
	CkEmail *FetchSingleHeader(int numBodyLines, int msgNum);

	// eventCallbacks
	CkEmail *FetchSingleHeaderByUidl(int numBodyLines, const char *uidl);

	// eventCallbacks
	CkEmailBundle *GetAllHeaders(int numBodyLines);

	CkStringArray *GetBadEmailAddrs(void);

	// eventCallbacks
	CkEmail *GetFullEmail(const CkEmail &email);

	// eventCallbacks
	CkEmailBundle *GetHeaders(int numBodyLines, int fromIndex, int toIndex);

	// eventCallbacks
	int GetMailboxCount(void);

	// eventCallbacks
	bool GetMailboxInfoXml(CkString &outXml);
	const char *getMailboxInfoXml(void);
	const char *mailboxInfoXml(void);

	// eventCallbacks
	unsigned long GetMailboxSize(void);

	CkCert *GetPop3SslServerCert(void);

	CkStringArray *GetSentToEmailAddrs(void);

	// eventCallbacks
	int GetSizeByUidl(const char *uidl);

	CkCert *GetSmtpSslServerCert(void);

	// eventCallbacks
	CkStringArray *GetUidls(void);

	// eventCallbacks
	bool IsSmtpDsnCapable(void);

	bool IsUnlocked(void);

	CkEmail *LoadEml(const char *emlPath);

	CkEmailBundle *LoadMbx(const char *mbxPath);

	CkEmail *LoadMime(const char *mimeText);

	CkEmail *LoadXmlEmail(const char *folderPath);

	CkEmail *LoadXmlEmailString(const char *xmlString);

	CkEmailBundle *LoadXmlFile(const char *folderPath);

	CkEmailBundle *LoadXmlString(const char *xmlString);

#if defined(CK_MX_INCLUDED)
	bool MxLookup(const char *emailAddr, CkString &outStrHostname);
	const char *mxLookup(const char *emailAddr);
#endif

#if defined(CK_MX_INCLUDED)
	CkStringArray *MxLookupAll(const char *emailAddress);
#endif

	// eventCallbacks
	bool OpenSmtpConnection(void);

	// eventCallbacks
	bool Pop3BeginSession(void);

	// eventCallbacks
	bool Pop3EndSession(void);

	// eventCallbacks
	bool Pop3EndSessionNoQuit(void);

	// eventCallbacks
	bool Pop3Noop(void);

	// eventCallbacks
	bool Pop3Reset(void);

	// eventCallbacks
	bool Pop3SendRawCommand(const char *command, const char *charset, CkString &outStr);
	const char *pop3SendRawCommand(const char *command, const char *charset);

	// eventCallbacks
	bool QuickSend(const char *fromAddr, const char *toAddrs, const char *subject, const char *body, const char *smtpServer);

	bool RenderToMime(const CkEmail &email, CkString &outStr);
	const char *renderToMime(const CkEmail &email);

	bool RenderToMimeBytes(CkEmail &email, CkByteData &outBytes);

	// eventCallbacks
	bool SendBundle(const CkEmailBundle &bundle);

	// eventCallbacks
	bool SendEmail(const CkEmail &email);

	// eventCallbacks
	bool SendMime(const char *from, const char *recipients, const char *mimeMsg);

	// eventCallbacks
	bool SendMimeBytes(const char *from, const char *recipients, const CkByteData &mimeData);

#if defined(CK_SMTPQ_INCLUDED)
	bool SendMimeBytesQ(const char *from, const char *recipients, const CkByteData &mimeData);
#endif

#if defined(CK_SMTPQ_INCLUDED)
	bool SendMimeQ(const char *from, const char *recipients, const char *mimeMsg);
#endif

	// eventCallbacks
	bool SendMimeToList(const char *from, const char *distListFile, const char *mimeText);

#if defined(CK_SMTPQ_INCLUDED)
	bool SendQ(const CkEmail &email);
#endif

#if defined(CK_SMTPQ_INCLUDED)
	bool SendQ2(const CkEmail &email, const char *queueDir);
#endif

	// eventCallbacks
	bool SendToDistributionList(CkEmail &email, CkStringArray &sa);

#if defined(CK_CSP_INCLUDED)
	bool SetCSP(CkCsp &csp);
#endif

	bool SetDecryptCert2(const CkCert &cert, CkPrivateKey &key);

	bool SetSslClientCert(CkCert &cert);

	bool SetSslClientCertPem(const char *pemDataOrPath, const char *pemPassword);

	bool SetSslClientCertPfx(const char *pfxPath, const char *pfxPassword);

	// eventCallbacks
	bool SmtpNoop(void);

	// eventCallbacks
	bool SmtpReset(void);

	// eventCallbacks
	bool SmtpSendRawCommand(const char *command, const char *charset, bool bEncodeBase64, CkString &outStr);
	const char *smtpSendRawCommand(const char *command, const char *charset, bool bEncodeBase64);

	// eventCallbacks
	bool SshAuthenticatePk(bool bSmtp, const char *sshLogin, CkSshKey &privateKey);

	// eventCallbacks
	bool SshAuthenticatePw(bool bSmtp, const char *sshLogin, const char *sshPassword);

	// eventCallbacks
	bool SshCloseTunnel(bool bSmtp);

	// eventCallbacks
	bool SshTunnel(bool bSmtp, const char *sshServerHostname, int sshServerPort);

	// eventCallbacks
	CkEmailBundle *TransferMail(void);

	// eventCallbacks
	CkStringArray *TransferMultipleMime(const CkStringArray &uidlArray);

	bool UnlockComponent(const char *code);

	// eventCallbacks
	bool VerifyPopConnection(void);

	// eventCallbacks
	bool VerifyPopLogin(void);

	// eventCallbacks
	bool VerifyRecips(const CkEmail &email, CkStringArray &saBadAddrs);

	// eventCallbacks
	bool VerifySmtpConnection(void);

	// eventCallbacks
	bool VerifySmtpLogin(void);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
