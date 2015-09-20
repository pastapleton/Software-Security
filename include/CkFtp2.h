// CkFtp2.h: interface for the CkFtp2 class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkFtp2_H
#define _CkFtp2_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkDateTime;
class CkCert;
class CkFtpProgress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkFtp2
class CkFtp2  : public CkMultiByteBase
{
    private:
	CkFtpProgress *m_callback;

	// Don't allow assignment or copying these objects.
	CkFtp2(const CkFtp2 &);
	CkFtp2 &operator=(const CkFtp2 &);

    public:
	CkFtp2(void);
	virtual ~CkFtp2(void);

	static CkFtp2 *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkFtpProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkFtpProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_Account(CkString &str);
	const char *account(void);
	void put_Account(const char *newVal);

	int get_ActivePortRangeEnd(void);
	void put_ActivePortRangeEnd(int newVal);

	int get_ActivePortRangeStart(void);
	void put_ActivePortRangeStart(int newVal);

	unsigned long get_AllocateSize(void);
	void put_AllocateSize(unsigned long newVal);

	unsigned long get_AsyncBytesReceived(void);

	__int64 get_AsyncBytesReceived64(void);

	void get_AsyncBytesReceivedStr(CkString &str);
	const char *asyncBytesReceivedStr(void);

	unsigned long get_AsyncBytesSent(void);

	__int64 get_AsyncBytesSent64(void);

	void get_AsyncBytesSentStr(CkString &str);
	const char *asyncBytesSentStr(void);

	bool get_AsyncFinished(void);

	void get_AsyncLog(CkString &str);
	const char *asyncLog(void);

	bool get_AsyncSuccess(void);

	bool get_AuthSsl(void);
	void put_AuthSsl(bool newVal);

	bool get_AuthTls(void);
	void put_AuthTls(bool newVal);

	bool get_AutoFeat(void);
	void put_AutoFeat(bool newVal);

	bool get_AutoFix(void);
	void put_AutoFix(bool newVal);

	bool get_AutoGetSizeForProgress(void);
	void put_AutoGetSizeForProgress(bool newVal);

	bool get_AutoSyst(void);
	void put_AutoSyst(bool newVal);

	bool get_AutoXcrc(void);
	void put_AutoXcrc(bool newVal);

	int get_BandwidthThrottleDown(void);
	void put_BandwidthThrottleDown(int newVal);

	int get_BandwidthThrottleUp(void);
	void put_BandwidthThrottleUp(int newVal);

	void get_ClientIpAddress(CkString &str);
	const char *clientIpAddress(void);
	void put_ClientIpAddress(const char *newVal);

	int get_ConnectFailReason(void);

	int get_ConnectTimeout(void);
	void put_ConnectTimeout(int newVal);

	bool get_ConnectVerified(void);

	int get_CrlfMode(void);
	void put_CrlfMode(int newVal);

	void get_DirListingCharset(CkString &str);
	const char *dirListingCharset(void);
	void put_DirListingCharset(const char *newVal);

	int get_DownloadRate(void);

	void get_ForcePortIpAddress(CkString &str);
	const char *forcePortIpAddress(void);
	void put_ForcePortIpAddress(const char *newVal);

	void get_Greeting(CkString &str);
	const char *greeting(void);

	bool get_HasModeZ(void);

	int get_HeartbeatMs(void);
	void put_HeartbeatMs(int newVal);

	void get_Hostname(CkString &str);
	const char *hostname(void);
	void put_Hostname(const char *newVal);

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

	int get_IdleTimeoutMs(void);
	void put_IdleTimeoutMs(int newVal);

	// eventCallbacks
	bool get_IsConnected(void);

	bool get_KeepSessionLog(void);
	void put_KeepSessionLog(bool newVal);

	void get_LastReply(CkString &str);
	const char *lastReply(void);

	void get_ListPattern(CkString &str);
	const char *listPattern(void);
	void put_ListPattern(const char *newVal);

	bool get_LoginVerified(void);

	// eventCallbacks
	int get_NumFilesAndDirs(void);

	bool get_PartialTransfer(void);

	bool get_Passive(void);
	void put_Passive(bool newVal);

	bool get_PassiveUseHostAddr(void);
	void put_PassiveUseHostAddr(bool newVal);

	void get_Password(CkString &str);
	const char *password(void);
	void put_Password(const char *newVal);

	int get_Port(void);
	void put_Port(int newVal);

	bool get_PreferNlst(void);
	void put_PreferNlst(bool newVal);

	int get_ProgressMonSize(void);
	void put_ProgressMonSize(int newVal);

	__int64 get_ProgressMonSize64(void);
	void put_ProgressMonSize64(__int64 newVal);

	void get_ProxyHostname(CkString &str);
	const char *proxyHostname(void);
	void put_ProxyHostname(const char *newVal);

	int get_ProxyMethod(void);
	void put_ProxyMethod(int newVal);

	void get_ProxyPassword(CkString &str);
	const char *proxyPassword(void);
	void put_ProxyPassword(const char *newVal);

	int get_ProxyPort(void);
	void put_ProxyPort(int newVal);

	void get_ProxyUsername(CkString &str);
	const char *proxyUsername(void);
	void put_ProxyUsername(const char *newVal);

	int get_ReadTimeout(void);
	void put_ReadTimeout(int newVal);

	bool get_RequireSslCertVerify(void);
	void put_RequireSslCertVerify(bool newVal);

	bool get_RestartNext(void);
	void put_RestartNext(bool newVal);

	int get_SendBufferSize(void);
	void put_SendBufferSize(int newVal);

	void get_SessionLog(CkString &str);
	const char *sessionLog(void);

	bool get_SkipFinalReply(void);
	void put_SkipFinalReply(bool newVal);

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

	void get_SyncPreview(CkString &str);
	const char *syncPreview(void);

	int get_UploadRate(void);

	bool get_UseEpsv(void);
	void put_UseEpsv(bool newVal);

	void get_Username(CkString &str);
	const char *username(void);
	void put_Username(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// eventCallbacks
	bool AppendFile(const char *localPath, const char *remoteFilename);

	// eventCallbacks
	bool AppendFileFromBinaryData(const char *remoteFilename, const CkByteData &binaryData);

	// eventCallbacks
	bool AppendFileFromTextData(const char *remoteFilename, const char *textData, const char *charset);

	void AsyncAbort(void);

	bool AsyncAppendFileStart(const char *localPath, const char *remoteFilename);

	bool AsyncGetFileStart(const char *remoteFilename, const char *localFilename);

	bool AsyncPutFileStart(const char *localPath, const char *remoteFilename);

	// eventCallbacks
	bool ChangeRemoteDir(const char *relativeDirPath);

	// eventCallbacks
	bool ClearControlChannel(void);

	void ClearDirCache(void);

	void ClearSessionLog(void);

	// eventCallbacks
	bool Connect(void);

	// eventCallbacks
	bool ConnectOnly(void);

	// eventCallbacks
	bool ConvertToTls(void);

	// eventCallbacks
	bool CreatePlan(const char *localDir, CkString &outStr);
	const char *createPlan(const char *localDir);

	// eventCallbacks
	bool CreateRemoteDir(const char *dir);

	// eventCallbacks
	int DeleteMatching(const char *remotePattern);

	// eventCallbacks
	bool DeleteRemoteFile(const char *filename);

	// eventCallbacks
	bool DeleteTree(void);

	int DetermineProxyMethod(void);

	bool DetermineSettings(CkString &outXmlReport);
	const char *determineSettings(void);

	// eventCallbacks
	bool DirTreeXml(CkString &outStrXml);
	const char *dirTreeXml(void);

	// eventCallbacks
	bool Disconnect(void);

	// eventCallbacks
	bool DownloadTree(const char *localRoot);

	// eventCallbacks
	bool Feat(CkString &outStr);
	const char *feat(void);

	// eventCallbacks
	CkDateTime *GetCreateDt(int index);

	// eventCallbacks
	CkDateTime *GetCreateDtByName(const char *filename);

	// eventCallbacks
	bool GetCreateFTime(int index, FILETIME &outFileTime);

	// eventCallbacks
	bool GetCreateTime(int index, SYSTEMTIME &outSysTime);

	// eventCallbacks
	bool GetCreateTimeByName(const char *filename, SYSTEMTIME &outSysTime);

	// eventCallbacks
	bool GetCreateTimeByNameStr(const char *filename, CkString &outStr);
	const char *getCreateTimeByNameStr(const char *filename);
	const char *createTimeByNameStr(const char *filename);

	// eventCallbacks
	bool GetCreateTimeStr(int index, CkString &outStr);
	const char *getCreateTimeStr(int index);
	const char *createTimeStr(int index);

	// eventCallbacks
	bool GetCurrentRemoteDir(CkString &outStr);
	const char *getCurrentRemoteDir(void);
	const char *currentRemoteDir(void);

	// eventCallbacks
	bool GetFile(const char *remoteFilename, const char *localPath);

	// eventCallbacks
	bool GetFilename(int index, CkString &outStr);
	const char *getFilename(int index);
	const char *filename(int index);

	// eventCallbacks
	bool GetIsDirectory(int index);

	// eventCallbacks
	bool GetIsSymbolicLink(int index);

	// eventCallbacks
	CkDateTime *GetLastAccessDt(int index);

	// eventCallbacks
	CkDateTime *GetLastAccessDtByName(const char *filename);

	// eventCallbacks
	bool GetLastAccessFTime(int index, FILETIME &outFileTime);

	// eventCallbacks
	bool GetLastAccessTime(int index, SYSTEMTIME &outSysTime);

	// eventCallbacks
	bool GetLastAccessTimeByName(const char *filename, SYSTEMTIME &outSysTime);

	// eventCallbacks
	bool GetLastAccessTimeByNameStr(const char *filename, CkString &outStr);
	const char *getLastAccessTimeByNameStr(const char *filename);
	const char *lastAccessTimeByNameStr(const char *filename);

	// eventCallbacks
	bool GetLastAccessTimeStr(int index, CkString &outStr);
	const char *getLastAccessTimeStr(int index);
	const char *lastAccessTimeStr(int index);

	// eventCallbacks
	CkDateTime *GetLastModDt(int index);

	// eventCallbacks
	CkDateTime *GetLastModDtByName(const char *filename);

	// eventCallbacks
	bool GetLastModifiedFTime(int index, FILETIME &outFileTime);

	// eventCallbacks
	bool GetLastModifiedTime(int index, SYSTEMTIME &outSysTime);

	// eventCallbacks
	bool GetLastModifiedTimeByName(const char *filename, SYSTEMTIME &outSysTime);

	// eventCallbacks
	bool GetLastModifiedTimeByNameStr(const char *filename, CkString &outStr);
	const char *getLastModifiedTimeByNameStr(const char *filename);
	const char *lastModifiedTimeByNameStr(const char *filename);

	// eventCallbacks
	bool GetLastModifiedTimeStr(int index, CkString &outStr);
	const char *getLastModifiedTimeStr(int index);
	const char *lastModifiedTimeStr(int index);

	// eventCallbacks
	bool GetRemoteFileBinaryData(const char *remoteFilename, CkByteData &outData);

	// eventCallbacks
	bool GetRemoteFileTextC(const char *remoteFilename, const char *charset, CkString &outStr);
	const char *getRemoteFileTextC(const char *remoteFilename, const char *charset);
	const char *remoteFileTextC(const char *remoteFilename, const char *charset);

	// eventCallbacks
	bool GetRemoteFileTextData(const char *remoteFilename, CkString &outStr);
	const char *getRemoteFileTextData(const char *remoteFilename);
	const char *remoteFileTextData(const char *remoteFilename);

	// eventCallbacks
	int GetSize(int index);

	// eventCallbacks
	__int64 GetSize64(int index);

	// eventCallbacks
	int GetSizeByName(const char *filname);

	// eventCallbacks
	__int64 GetSizeByName64(const char *filename);

	// eventCallbacks
	bool GetSizeStr(int index, CkString &outStr);
	const char *getSizeStr(int index);
	const char *sizeStr(int index);

	// eventCallbacks
	bool GetSizeStrByName(const char *filename, CkString &outStr);
	const char *getSizeStrByName(const char *filename);
	const char *sizeStrByName(const char *filename);

	CkCert *GetSslServerCert(void);

	// eventCallbacks
	bool GetTextDirListing(const char *pattern, CkString &outStrRawListing);
	const char *getTextDirListing(const char *pattern);
	const char *textDirListing(const char *pattern);

	// eventCallbacks
	bool GetXmlDirListing(const char *pattern, CkString &outStrXmlListing);
	const char *getXmlDirListing(const char *pattern);
	const char *xmlDirListing(const char *pattern);

	bool IsUnlocked(void);

	// eventCallbacks
	bool LoginAfterConnectOnly(void);

	// eventCallbacks
	int MGetFiles(const char *remotePattern, const char *localDir);

	// eventCallbacks
	int MPutFiles(const char *pattern);

	// eventCallbacks
	bool NlstXml(const char *pattern, CkString &outStr);
	const char *nlstXml(const char *pattern);

	// eventCallbacks
	bool Noop(void);

	// eventCallbacks
	bool PutFile(const char *localPath, const char *remoteFilename);

	// eventCallbacks
	bool PutFileFromBinaryData(const char *remoteFilename, const CkByteData &binaryData);

	// eventCallbacks
	bool PutFileFromTextData(const char *remoteFilename, const char *textData, const char *charset);

	// eventCallbacks
	bool PutPlan(const char *planUtf8, const char *planLogFilePath);

	// eventCallbacks
	bool PutTree(const char *localDir);

	// eventCallbacks
	bool Quote(const char *cmd);

	// eventCallbacks
	bool RemoveRemoteDir(const char *dir);

	// eventCallbacks
	bool RenameRemoteFile(const char *existingFilename, const char *newFilename);

	// eventCallbacks
	bool SendCommand(const char *cmd, CkString &outReply);
	const char *sendCommand(const char *cmd);

	// eventCallbacks
	bool SetModeZ(void);

	void SetOldestDate(SYSTEMTIME &oldestDateTime);

	void SetOldestDateStr(const char *oldestDateTimeStr);

	// eventCallbacks
	bool SetRemoteFileDateTime(SYSTEMTIME &dateTime, const char *remoteFilename);

	// eventCallbacks
	bool SetRemoteFileDateTimeStr(const char *dateTimeStr, const char *remoteFilename);

	// eventCallbacks
	bool SetRemoteFileDt(CkDateTime &dt, const char *remoteFilename);

	void SetSslCertRequirement(const char *name, const char *value);

	bool SetSslClientCert(CkCert &cert);

	bool SetSslClientCertPem(const char *pemDataOrFilename, const char *pemPassword);

	bool SetSslClientCertPfx(const char *pfxPath, const char *pfxPassword);

	// eventCallbacks
	bool SetTypeAscii(void);

	// eventCallbacks
	bool SetTypeBinary(void);

	// eventCallbacks
	bool Site(const char *parms);

	void SleepMs(int millisec);

	// eventCallbacks
	bool Stat(CkString &outStr);
	const char *ck_stat(void);

	// eventCallbacks
	bool SyncDeleteRemote(const char *localRoot);

	// eventCallbacks
	bool SyncLocalDir(const char *localRoot, int mode);

	// eventCallbacks
	bool SyncLocalTree(const char *localRoot, int mode);

	// eventCallbacks
	bool SyncRemoteTree(const char *localRoot, int mode);

	// eventCallbacks
	bool SyncRemoteTree2(const char *localRoot, int mode, bool bDescend, bool bPreviewOnly);

	// eventCallbacks
	bool Syst(CkString &outStr);
	const char *syst(void);

	bool UnlockComponent(const char *code);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
