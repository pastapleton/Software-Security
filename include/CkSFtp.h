// CkSFtp.h: interface for the CkSFtp class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkSFtp_H
#define _CkSFtp_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkSshKey;
class CkDateTime;
class CkSFtpDir;
class CkSFtpProgress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkSFtp
class CkSFtp  : public CkMultiByteBase
{
    private:
	CkSFtpProgress *m_callback;

	// Don't allow assignment or copying these objects.
	CkSFtp(const CkSFtp &);
	CkSFtp &operator=(const CkSFtp &);

    public:
	CkSFtp(void);
	virtual ~CkSFtp(void);

	static CkSFtp *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkSFtpProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkSFtpProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_AccumulateBuffer(CkByteData &outBytes);

	void get_ClientIdentifier(CkString &str);
	const char *clientIdentifier(void);
	void put_ClientIdentifier(const char *newVal);

	void get_ClientIpAddress(CkString &str);
	const char *clientIpAddress(void);
	void put_ClientIpAddress(const char *newVal);

	int get_ConnectTimeoutMs(void);
	void put_ConnectTimeoutMs(int newVal);

	int get_DisconnectCode(void);

	void get_DisconnectReason(CkString &str);
	const char *disconnectReason(void);

	bool get_EnableCache(void);
	void put_EnableCache(bool newVal);

	void get_FilenameCharset(CkString &str);
	const char *filenameCharset(void);
	void put_FilenameCharset(const char *newVal);

	void get_ForceCipher(CkString &str);
	const char *forceCipher(void);
	void put_ForceCipher(const char *newVal);

	bool get_ForceV3(void);
	void put_ForceV3(bool newVal);

	int get_HeartbeatMs(void);
	void put_HeartbeatMs(int newVal);

	void get_HostKeyAlg(CkString &str);
	const char *hostKeyAlg(void);
	void put_HostKeyAlg(const char *newVal);

	void get_HostKeyFingerprint(CkString &str);
	const char *hostKeyFingerprint(void);

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

	bool get_IncludeDotDirs(void);
	void put_IncludeDotDirs(bool newVal);

	int get_InitializeFailCode(void);

	void get_InitializeFailReason(CkString &str);
	const char *initializeFailReason(void);

	bool get_IsConnected(void);

	bool get_KeepSessionLog(void);
	void put_KeepSessionLog(bool newVal);

	int get_MaxPacketSize(void);
	void put_MaxPacketSize(int newVal);

	bool get_PasswordChangeRequested(void);

	bool get_PreserveDate(void);
	void put_PreserveDate(bool newVal);

	int get_ProtocolVersion(void);

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

	bool get_TcpNoDelay(void);
	void put_TcpNoDelay(bool newVal);

	int get_UploadChunkSize(void);
	void put_UploadChunkSize(int newVal);

	bool get_UtcMode(void);
	void put_UtcMode(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// eventCallbacks
	int AccumulateBytes(const char *sftpHandle, int maxBytes);

	bool Add64(const char *n1, const char *n2, CkString &outStr);
	const char *add64(const char *n1, const char *n2);

	// eventCallbacks
	bool AuthenticatePk(const char *username, CkSshKey &privateKey);

	// eventCallbacks
	bool AuthenticatePw(const char *login, const char *password);

	// eventCallbacks
	bool AuthenticatePwPk(const char *username, const char *password, CkSshKey &privateKey);

	void ClearAccumulateBuffer(void);

	void ClearCache(void);

	void ClearSessionLog(void);

	// eventCallbacks
	bool CloseHandle(const char *sftpHandle);

	// eventCallbacks
	bool Connect(const char *hostname, int port);

	// eventCallbacks
	bool CopyFileAttr(const char *localFilePath, const char *remotePathOrHandle, bool bIsHandle);

	// eventCallbacks
	bool CreateDir(const char *path);

	void Disconnect(void);

	// eventCallbacks
	bool DownloadFile(const char *sftpHandle, const char *toFilePath);

	// eventCallbacks
	bool DownloadFileByName(const char *remoteFilePath, const char *localFilePath);

	bool Eof(const char *sftpHandle);

	// eventCallbacks
	CkDateTime *GetFileCreateDt(const char *filePathOrHandle, bool bFollowLinks, bool bIsHandle);

	// eventCallbacks
	bool GetFileCreateTime(const char *filePathOrHandle, bool bFollowLinks, bool bIsHandle, SYSTEMTIME &outSysTime);

	// eventCallbacks
	bool GetFileCreateTimeStr(const char *pathOrHandle, bool bFollowLinks, bool bIsHandle, CkString &outStr);
	const char *getFileCreateTimeStr(const char *pathOrHandle, bool bFollowLinks, bool bIsHandle);
	const char *fileCreateTimeStr(const char *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// eventCallbacks
	bool GetFileGroup(const char *filePathOrHandle, bool bFollowLinks, bool bIsHandle, CkString &outStr);
	const char *getFileGroup(const char *filePathOrHandle, bool bFollowLinks, bool bIsHandle);
	const char *fileGroup(const char *filePathOrHandle, bool bFollowLinks, bool bIsHandle);

	// eventCallbacks
	bool GetFileLastAccess(const char *filePathOrHandle, bool bFollowLinks, bool bIsHandle, SYSTEMTIME &outSysTime);

	// eventCallbacks
	CkDateTime *GetFileLastAccessDt(const char *filePathOrHandle, bool bFollowLinks, bool bIsHandle);

	// eventCallbacks
	bool GetFileLastAccessStr(const char *pathOrHandle, bool bFollowLinks, bool bIsHandle, CkString &outStr);
	const char *getFileLastAccessStr(const char *pathOrHandle, bool bFollowLinks, bool bIsHandle);
	const char *fileLastAccessStr(const char *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// eventCallbacks
	bool GetFileLastModified(const char *filePathOrHandle, bool bFollowLinks, bool bIsHandle, SYSTEMTIME &outSysTime);

	// eventCallbacks
	CkDateTime *GetFileLastModifiedDt(const char *filePathOrHandle, bool bFollowLinks, bool bIsHandle);

	// eventCallbacks
	bool GetFileLastModifiedStr(const char *pathOrHandle, bool bFollowLinks, bool bIsHandle, CkString &outStr);
	const char *getFileLastModifiedStr(const char *pathOrHandle, bool bFollowLinks, bool bIsHandle);
	const char *fileLastModifiedStr(const char *pathOrHandle, bool bFollowLinks, bool bIsHandle);

	// eventCallbacks
	bool GetFileOwner(const char *filePathOrHandle, bool bFollowLinks, bool bIsHandle, CkString &outStr);
	const char *getFileOwner(const char *filePathOrHandle, bool bFollowLinks, bool bIsHandle);
	const char *fileOwner(const char *filePathOrHandle, bool bFollowLinks, bool bIsHandle);

	// eventCallbacks
	int GetFilePermissions(const char *filePathOrHandle, bool bFollowLinks, bool bIsHandle);

	// eventCallbacks
	int GetFileSize32(const char *filePathOrHandle, bool bFollowLinks, bool bIsHandle);

	// eventCallbacks
	__int64 GetFileSize64(const char *filePathOrHandle, bool bFollowLinks, bool bIsHandle);

	// eventCallbacks
	bool GetFileSizeStr(const char *filePathOrHandle, bool bFollowLinks, bool bIsHandle, CkString &outStr);
	const char *getFileSizeStr(const char *filePathOrHandle, bool bFollowLinks, bool bIsHandle);
	const char *fileSizeStr(const char *filePathOrHandle, bool bFollowLinks, bool bIsHandle);

	// eventCallbacks
	bool InitializeSftp(void);

	bool LastReadFailed(const char *sftpHandle);

	int LastReadNumBytes(const char *sftpHandle);

	// eventCallbacks
	bool OpenDir(const char *path, CkString &outStr);
	const char *openDir(const char *path);

	// eventCallbacks
	bool OpenFile(const char *filePath, const char *access, const char *createDisp, CkString &outStr);
	const char *openFile(const char *filePath, const char *access, const char *createDisp);

	// eventCallbacks
	CkSFtpDir *ReadDir(const char *sftpHandle);

	// eventCallbacks
	bool ReadFileBytes(const char *sftpHandle, int numBytes, CkByteData &outBytes);

	// eventCallbacks
	bool ReadFileBytes32(const char *sftpHandle, int offset, int numBytes, CkByteData &outBytes);

	// eventCallbacks
	bool ReadFileBytes64(const char *sftpHandle, __int64 offset64, int numBytes, CkByteData &outBytes);

	// eventCallbacks
	bool ReadFileBytes64s(const char *sftpHandle, const char *offset64, int numBytes, CkByteData &outBytes);

	// eventCallbacks
	bool ReadFileText(const char *sftpHandle, int numBytes, const char *charset, CkString &outStr);
	const char *readFileText(const char *sftpHandle, int numBytes, const char *charset);

	// eventCallbacks
	bool ReadFileText32(const char *sftpHandle, int offset32, int numBytes, const char *charset, CkString &outStr);
	const char *readFileText32(const char *sftpHandle, int offset32, int numBytes, const char *charset);

	// eventCallbacks
	bool ReadFileText64(const char *sftpHandle, __int64 offset64, int numBytes, const char *charset, CkString &outStr);
	const char *readFileText64(const char *sftpHandle, __int64 offset64, int numBytes, const char *charset);

	// eventCallbacks
	bool ReadFileText64s(const char *sftpHandle, const char *offset64, int numBytes, const char *charset, CkString &outStr);
	const char *readFileText64s(const char *sftpHandle, const char *offset64, int numBytes, const char *charset);

	// eventCallbacks
	bool RealPath(const char *originalPath, const char *composePath, CkString &outStr);
	const char *realPath(const char *originalPath, const char *composePath);

	// eventCallbacks
	bool RemoveDir(const char *path);

	// eventCallbacks
	bool RemoveFile(const char *filePath);

	// eventCallbacks
	bool RenameFileOrDir(const char *oldPath, const char *newPath);

	// eventCallbacks
	bool ResumeDownloadFileByName(const char *remoteFilePath, const char *localFilePath);

	// eventCallbacks
	bool ResumeUploadFileByName(const char *remoteFilePath, const char *localFilePath);

	// eventCallbacks
	bool SetCreateDt(const char *pathOrHandle, bool bIsHandle, CkDateTime &createTime);

	// eventCallbacks
	bool SetCreateTime(const char *pathOrHandle, bool bIsHandle, SYSTEMTIME &createTime);

	// eventCallbacks
	bool SetCreateTimeStr(const char *pathOrHandle, bool bIsHandle, const char *createTimeStr);

	// eventCallbacks
	bool SetLastAccessDt(const char *pathOrHandle, bool bIsHandle, CkDateTime &createTime);

	// eventCallbacks
	bool SetLastAccessTime(const char *pathOrHandle, bool bIsHandle, SYSTEMTIME &lastAccessTime);

	// eventCallbacks
	bool SetLastAccessTimeStr(const char *pathOrHandle, bool bIsHandle, const char *createTimeStr);

	// eventCallbacks
	bool SetLastModifiedDt(const char *pathOrHandle, bool bIsHandle, CkDateTime &createTime);

	// eventCallbacks
	bool SetLastModifiedTime(const char *pathOrHandle, bool bIsHandle, SYSTEMTIME &lastModTime);

	// eventCallbacks
	bool SetLastModifiedTimeStr(const char *pathOrHandle, bool bIsHandle, const char *createTimeStr);

	// eventCallbacks
	bool SetOwnerAndGroup(const char *pathOrHandle, bool bIsHandle, const char *owner, const char *group);

	// eventCallbacks
	bool SetPermissions(const char *pathOrHandle, bool bIsHandle, int perm);

	bool UnlockComponent(const char *unlockCode);

	// eventCallbacks
	bool UploadFile(const char *sftpHandle, const char *fromFilePath);

	// eventCallbacks
	bool UploadFileByName(const char *remoteFilePath, const char *localFilePath);

	// eventCallbacks
	bool WriteFileBytes(const char *sftpHandle, const CkByteData &data);

	// eventCallbacks
	bool WriteFileBytes32(const char *sftpHandle, int offset, const CkByteData &data);

	// eventCallbacks
	bool WriteFileBytes64(const char *sftpHandle, __int64 offset64, const CkByteData &data);

	// eventCallbacks
	bool WriteFileBytes64s(const char *sftpHandle, const char *offset64, const CkByteData &data);

	// eventCallbacks
	bool WriteFileText(const char *sftpHandle, const char *charset, const char *textData);

	// eventCallbacks
	bool WriteFileText32(const char *sftpHandle, int offset32, const char *charset, const char *textData);

	// eventCallbacks
	bool WriteFileText64(const char *sftpHandle, __int64 offset64, const char *charset, const char *textData);

	// eventCallbacks
	bool WriteFileText64s(const char *sftpHandle, const char *offset64, const char *charset, const char *textData);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
