// CkImap.h: interface for the CkImap class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkImap_H
#define _CkImap_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkEmail;
class CkMessageSet;
class CkEmailBundle;
class CkStringArray;
class CkCert;
class CkMailboxes;
class CkCsp;
class CkPrivateKey;
class CkSshKey;
class CkImapProgress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkImap
class CkImap  : public CkMultiByteBase
{
    private:
	CkImapProgress *m_callback;

	// Don't allow assignment or copying these objects.
	CkImap(const CkImap &);
	CkImap &operator=(const CkImap &);

    public:
	CkImap(void);
	virtual ~CkImap(void);

	static CkImap *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkImapProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkImapProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	bool get_AppendSeen(void);
	void put_AppendSeen(bool newVal);

	int get_AppendUid(void);

	void get_AuthMethod(CkString &str);
	const char *authMethod(void);
	void put_AuthMethod(const char *newVal);

	void get_AuthzId(CkString &str);
	const char *authzId(void);
	void put_AuthzId(const char *newVal);

	bool get_AutoDownloadAttachments(void);
	void put_AutoDownloadAttachments(bool newVal);

	bool get_AutoFix(void);
	void put_AutoFix(bool newVal);

	void get_ClientIpAddress(CkString &str);
	const char *clientIpAddress(void);
	void put_ClientIpAddress(const char *newVal);

	int get_ConnectTimeout(void);
	void put_ConnectTimeout(int newVal);

	void get_ConnectedToHost(CkString &str);
	const char *connectedToHost(void);

	void get_Domain(CkString &str);
	const char *domain(void);
	void put_Domain(const char *newVal);

	int get_HeartbeatMs(void);
	void put_HeartbeatMs(int newVal);

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

	bool get_KeepSessionLog(void);
	void put_KeepSessionLog(bool newVal);

	void get_LastAppendedMime(CkString &str);
	const char *lastAppendedMime(void);

	void get_LastCommand(CkString &str);
	const char *lastCommand(void);

	void get_LastIntermediateResponse(CkString &str);
	const char *lastIntermediateResponse(void);

	void get_LastResponse(CkString &str);
	const char *lastResponse(void);

	void get_LoggedInUser(CkString &str);
	const char *loggedInUser(void);

	int get_NumMessages(void);

	bool get_PeekMode(void);
	void put_PeekMode(bool newVal);

	int get_Port(void);
	void put_Port(int newVal);

	int get_ReadTimeout(void);
	void put_ReadTimeout(int newVal);

	void get_SearchCharset(CkString &str);
	const char *searchCharset(void);
	void put_SearchCharset(const char *newVal);

	void get_SelectedMailbox(CkString &str);
	const char *selectedMailbox(void);

	int get_SendBufferSize(void);
	void put_SendBufferSize(int newVal);

	char get_SeparatorChar(void);
	void put_SeparatorChar(char newVal);

	void get_SessionLog(CkString &str);
	const char *sessionLog(void);

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

	bool get_Ssl(void);
	void put_Ssl(bool newVal);

	void get_SslProtocol(CkString &str);
	const char *sslProtocol(void);
	void put_SslProtocol(const char *newVal);

	bool get_SslServerCertVerified(void);

	bool get_StartTls(void);
	void put_StartTls(bool newVal);

	int get_UidNext(void);

	int get_UidValidity(void);



	// ----------------------
	// Methods
	// ----------------------
	bool AddPfxSourceData(const CkByteData &pfxData, const char *password);

	bool AddPfxSourceFile(const char *pfxFilePath, const char *password);

	// eventCallbacks
	bool AppendMail(const char *mailbox, const CkEmail &email);

	// eventCallbacks
	bool AppendMime(const char *mailbox, const char *mimeText);

	// eventCallbacks
	bool AppendMimeWithDate(const char *mailbox, const char *mimeText, SYSTEMTIME &internalDate);

	// eventCallbacks
	bool AppendMimeWithDateStr(const char *mailbox, const char *mimeText, const char *internalDateStr);

	// eventCallbacks
	bool AppendMimeWithFlags(const char *mailbox, const char *mimeText, bool seen, bool flagged, bool answered, bool draft);

	// eventCallbacks
	CkMessageSet *CheckForNewEmail(void);

	void ClearSessionLog(void);

	// eventCallbacks
	bool CloseMailbox(const char *mailbox);

	// eventCallbacks
	bool Connect(const char *hostname);

	// eventCallbacks
	bool Copy(int msgId, bool bUid, const char *copyToMailbox);

	// eventCallbacks
	bool CopyMultiple(CkMessageSet &messageSet, const char *copyToMailbox);

	// eventCallbacks
	bool CopySequence(int startSeqNum, int count, const char *copyToMailbox);

	// eventCallbacks
	bool CreateMailbox(const char *mailbox);

	// eventCallbacks
	bool DeleteMailbox(const char *mailbox);

	// eventCallbacks
	bool Disconnect(void);

	// eventCallbacks
	bool ExamineMailbox(const char *mailbox);

	// eventCallbacks
	bool Expunge(void);

	// eventCallbacks
	bool ExpungeAndClose(void);

	// eventCallbacks
	bool FetchAttachment(CkEmail &email, int attachIndex, const char *saveToPath);

	// eventCallbacks
	bool FetchAttachmentBytes(CkEmail &email, int attachIndex, CkByteData &outBytes);

	// eventCallbacks
	bool FetchAttachmentString(CkEmail &email, int attachIndex, const char *charset, CkString &outStr);
	const char *fetchAttachmentString(CkEmail &email, int attachIndex, const char *charset);

	// eventCallbacks
	CkEmailBundle *FetchBundle(const CkMessageSet &messageSet);

	// eventCallbacks
	CkStringArray *FetchBundleAsMime(const CkMessageSet &messageSet);

	// eventCallbacks
	CkEmailBundle *FetchChunk(int startSeqNum, int count, CkMessageSet &failedSet, CkMessageSet &fetchedSet);

	// eventCallbacks
	bool FetchFlags(int msgId, bool bUid, CkString &outStrFlags);
	const char *fetchFlags(int msgId, bool bUid);

	// eventCallbacks
	CkEmailBundle *FetchHeaders(const CkMessageSet &messageSet);

	// eventCallbacks
	CkEmailBundle *FetchSequence(int startSeqNum, int numMessages);

	// eventCallbacks
	CkStringArray *FetchSequenceAsMime(int startSeqNum, int count);

	// eventCallbacks
	CkEmailBundle *FetchSequenceHeaders(int startSeqNum, int numMessages);

	// eventCallbacks
	CkEmail *FetchSingle(int msgId, bool bUid);

	// eventCallbacks
	bool FetchSingleAsMime(int msgId, bool bUid, CkString &outStrMime);
	const char *fetchSingleAsMime(int msgId, bool bUid);

	// eventCallbacks
	CkEmail *FetchSingleHeader(int msgId, bool bUid);

	// eventCallbacks
	bool FetchSingleHeaderAsMime(int msgId, bool bUID, CkString &outStr);
	const char *fetchSingleHeaderAsMime(int msgId, bool bUID);

	// eventCallbacks
	CkMessageSet *GetAllUids(void);

	bool GetMailAttachFilename(const CkEmail &email, int attachIndex, CkString &outStrFilename);
	const char *getMailAttachFilename(const CkEmail &email, int attachIndex);
	const char *mailAttachFilename(const CkEmail &email, int attachIndex);

	int GetMailAttachSize(const CkEmail &email, int attachIndex);

	// eventCallbacks
	int GetMailFlag(const CkEmail &email, const char *flagName);

	int GetMailNumAttach(const CkEmail &email);

	int GetMailSize(const CkEmail &email);

	CkCert *GetSslServerCert(void);

	bool IsConnected(void);

	bool IsLoggedIn(void);

	bool IsUnlocked(void);

	// eventCallbacks
	CkMailboxes *ListMailboxes(const char *reference, const char *wildcardedMailbox);

	// eventCallbacks
	CkMailboxes *ListSubscribed(const char *reference, const char *wildcardedMailbox);

	// eventCallbacks
	bool Login(const char *login, const char *password);

	// eventCallbacks
	bool Logout(void);

	// eventCallbacks
	bool Noop(void);

	// eventCallbacks
	bool RefetchMailFlags(CkEmail &emailInOut);

	// eventCallbacks
	bool RenameMailbox(const char *fromMailbox, const char *toMailbox);

	// eventCallbacks
	CkMessageSet *Search(const char *criteria, bool bUid);

	// eventCallbacks
	bool SelectMailbox(const char *mailbox);

	// eventCallbacks
	bool SendRawCommand(const char *rawCommand, CkString &outRawResponse);
	const char *sendRawCommand(const char *rawCommand);

	// eventCallbacks
	bool SendRawCommandB(const char *cmd, CkByteData &outBytes);

	// eventCallbacks
	bool SendRawCommandC(const CkByteData &cmd, CkByteData &outBytes);

#if defined(CK_CSP_INCLUDED)
	bool SetCSP(CkCsp &csp);
#endif

	bool SetDecryptCert2(const CkCert &cert, CkPrivateKey &key);

	// eventCallbacks
	bool SetFlag(int msgId, bool bUid, const char *flagName, int value);

	// eventCallbacks
	bool SetFlags(const CkMessageSet &messageSet, const char *flagName, int value);

	// eventCallbacks
	bool SetMailFlag(const CkEmail &email, const char *flagName, int value);

	bool SetSslClientCert(CkCert &cert);

	bool SetSslClientCertPem(const char *pemDataOrPath, const char *pemPassword);

	bool SetSslClientCertPfx(const char *pfxPath, const char *pfxPassword);

	// eventCallbacks
	bool SshAuthenticatePk(const char *sshLogin, CkSshKey &privateKey);

	// eventCallbacks
	bool SshAuthenticatePw(const char *sshLogin, const char *sshPassword);

	// eventCallbacks
	bool SshTunnel(const char *sshServerHostname, int sshServerPort);

	// eventCallbacks
	bool StoreFlags(int msgId, bool bUid, const char *flagName, int value);

	// eventCallbacks
	bool Subscribe(const char *mailbox);

	bool UnlockComponent(const char *unlockCode);

	// eventCallbacks
	bool Unsubscribe(const char *mailbox);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
