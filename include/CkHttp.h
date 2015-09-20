// CkHttp.h: interface for the CkHttp class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkHttp_H
#define _CkHttp_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkHttpResponse;
class CkCert;
class CkHttpRequest;
class CkHttpProgress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkHttp
class CkHttp  : public CkMultiByteBase
{
    private:
	CkHttpProgress *m_callback;

	// Don't allow assignment or copying these objects.
	CkHttp(const CkHttp &);
	CkHttp &operator=(const CkHttp &);

    public:
	CkHttp(void);
	virtual ~CkHttp(void);

	static CkHttp *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkHttpProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkHttpProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_Accept(CkString &str);
	const char *ck_accept(void);
	void put_Accept(const char *newVal);

	void get_AcceptCharset(CkString &str);
	const char *acceptCharset(void);
	void put_AcceptCharset(const char *newVal);

	void get_AcceptLanguage(CkString &str);
	const char *acceptLanguage(void);
	void put_AcceptLanguage(const char *newVal);

	bool get_AllowGzip(void);
	void put_AllowGzip(bool newVal);

	bool get_AutoAddHostHeader(void);
	void put_AutoAddHostHeader(bool newVal);

	void get_AwsAccessKey(CkString &str);
	const char *awsAccessKey(void);
	void put_AwsAccessKey(const char *newVal);

	void get_AwsSecretKey(CkString &str);
	const char *awsSecretKey(void);
	void put_AwsSecretKey(const char *newVal);

	void get_AwsSubResources(CkString &str);
	const char *awsSubResources(void);
	void put_AwsSubResources(const char *newVal);

	void get_BgLastErrorText(CkString &str);
	const char *bgLastErrorText(void);

	int get_BgPercentDone(void);

	void get_BgResultData(CkByteData &outBytes);

	int get_BgResultInt(void);

	void get_BgResultString(CkString &str);
	const char *bgResultString(void);

	bool get_BgTaskFinished(void);

	bool get_BgTaskRunning(void);

	bool get_BgTaskSuccess(void);

	void get_ClientIpAddress(CkString &str);
	const char *clientIpAddress(void);
	void put_ClientIpAddress(const char *newVal);

	int get_ConnectTimeout(void);
	void put_ConnectTimeout(int newVal);

	void get_Connection(CkString &str);
	const char *connection(void);
	void put_Connection(const char *newVal);

	void get_CookieDir(CkString &str);
	const char *cookieDir(void);
	void put_CookieDir(const char *newVal);

	int get_DefaultFreshPeriod(void);
	void put_DefaultFreshPeriod(int newVal);

	bool get_DigestAuth(void);
	void put_DigestAuth(bool newVal);

	int get_EventLogCount(void);

	bool get_FetchFromCache(void);
	void put_FetchFromCache(bool newVal);

	void get_FinalRedirectUrl(CkString &str);
	const char *finalRedirectUrl(void);

	bool get_FollowRedirects(void);
	void put_FollowRedirects(bool newVal);

	int get_FreshnessAlgorithm(void);
	void put_FreshnessAlgorithm(int newVal);

	int get_HeartbeatMs(void);
	void put_HeartbeatMs(int newVal);

	bool get_IgnoreMustRevalidate(void);
	void put_IgnoreMustRevalidate(bool newVal);

	bool get_IgnoreNoCache(void);
	void put_IgnoreNoCache(bool newVal);

	bool get_KeepEventLog(void);
	void put_KeepEventLog(bool newVal);

	int get_LMFactor(void);
	void put_LMFactor(int newVal);

	void get_LastContentType(CkString &str);
	const char *lastContentType(void);

	void get_LastHeader(CkString &str);
	const char *lastHeader(void);

	void get_LastModDate(CkString &str);
	const char *lastModDate(void);

	void get_LastResponseHeader(CkString &str);
	const char *lastResponseHeader(void);

	int get_LastStatus(void);

	void get_Login(CkString &str);
	const char *login(void);
	void put_Login(const char *newVal);

	void get_LoginDomain(CkString &str);
	const char *loginDomain(void);
	void put_LoginDomain(const char *newVal);

	int get_MaxConnections(void);
	void put_MaxConnections(int newVal);

	int get_MaxFreshPeriod(void);
	void put_MaxFreshPeriod(int newVal);

	unsigned long get_MaxResponseSize(void);
	void put_MaxResponseSize(unsigned long newVal);

	int get_MaxUrlLen(void);
	void put_MaxUrlLen(int newVal);

	bool get_MimicFireFox(void);
	void put_MimicFireFox(bool newVal);

	bool get_MimicIE(void);
	void put_MimicIE(bool newVal);

	int get_MinFreshPeriod(void);
	void put_MinFreshPeriod(int newVal);

	bool get_NegotiateAuth(void);
	void put_NegotiateAuth(bool newVal);

	bool get_NtlmAuth(void);
	void put_NtlmAuth(bool newVal);

	int get_NumCacheLevels(void);
	void put_NumCacheLevels(int newVal);

	int get_NumCacheRoots(void);

	bool get_OAuth1(void);
	void put_OAuth1(bool newVal);

	void get_OAuthConsumerKey(CkString &str);
	const char *oAuthConsumerKey(void);
	void put_OAuthConsumerKey(const char *newVal);

	void get_OAuthConsumerSecret(CkString &str);
	const char *oAuthConsumerSecret(void);
	void put_OAuthConsumerSecret(const char *newVal);

	void get_OAuthRealm(CkString &str);
	const char *oAuthRealm(void);
	void put_OAuthRealm(const char *newVal);

	void get_OAuthSigMethod(CkString &str);
	const char *oAuthSigMethod(void);
	void put_OAuthSigMethod(const char *newVal);

	void get_OAuthToken(CkString &str);
	const char *oAuthToken(void);
	void put_OAuthToken(const char *newVal);

	void get_OAuthTokenSecret(CkString &str);
	const char *oAuthTokenSecret(void);
	void put_OAuthTokenSecret(const char *newVal);

	void get_OAuthVerifier(CkString &str);
	const char *oAuthVerifier(void);
	void put_OAuthVerifier(const char *newVal);

	void get_Password(CkString &str);
	const char *password(void);
	void put_Password(const char *newVal);

	void get_ProxyAuthMethod(CkString &str);
	const char *proxyAuthMethod(void);
	void put_ProxyAuthMethod(const char *newVal);

	void get_ProxyDomain(CkString &str);
	const char *proxyDomain(void);
	void put_ProxyDomain(const char *newVal);

	void get_ProxyLogin(CkString &str);
	const char *proxyLogin(void);
	void put_ProxyLogin(const char *newVal);

	void get_ProxyLoginDomain(CkString &str);
	const char *proxyLoginDomain(void);
	void put_ProxyLoginDomain(const char *newVal);

	void get_ProxyPassword(CkString &str);
	const char *proxyPassword(void);
	void put_ProxyPassword(const char *newVal);

	int get_ProxyPort(void);
	void put_ProxyPort(int newVal);

	int get_ReadTimeout(void);
	void put_ReadTimeout(int newVal);

	void get_RedirectVerb(CkString &str);
	const char *redirectVerb(void);
	void put_RedirectVerb(const char *newVal);

	void get_Referer(CkString &str);
	const char *referer(void);
	void put_Referer(const char *newVal);

	void get_RequiredContentType(CkString &str);
	const char *requiredContentType(void);
	void put_RequiredContentType(const char *newVal);

	bool get_S3Ssl(void);
	void put_S3Ssl(bool newVal);

	bool get_SaveCookies(void);
	void put_SaveCookies(bool newVal);

	int get_SendBufferSize(void);
	void put_SendBufferSize(int newVal);

	bool get_SendCookies(void);
	void put_SendCookies(bool newVal);

	void get_SessionLogFilename(CkString &str);
	const char *sessionLogFilename(void);
	void put_SessionLogFilename(const char *newVal);

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

	void get_SslProtocol(CkString &str);
	const char *sslProtocol(void);
	void put_SslProtocol(const char *newVal);

	bool get_UpdateCache(void);
	void put_UpdateCache(bool newVal);

	bool get_UseBgThread(void);
	void put_UseBgThread(bool newVal);

	bool get_UseIEProxy(void);
	void put_UseIEProxy(bool newVal);

	void get_UserAgent(CkString &str);
	const char *userAgent(void);
	void put_UserAgent(const char *newVal);

	bool get_WasRedirected(void);



	// ----------------------
	// Methods
	// ----------------------
	void AddCacheRoot(const char *dir);

	bool AddQuickHeader(const char *name, const char *value);

	CkHttpResponse *BgResponseObject(void);

	void BgTaskAbort(void);

	void ClearBgEventLog(void);

	void ClearInMemoryCookies(void);

	bool CloseAllConnections(void);

	// eventCallbacks
	bool Download(const char *url, const char *saveToPath);

	// eventCallbacks
	bool DownloadAppend(const char *url, const char *appendToPath);

	// eventCallbacks
	bool DownloadHash(const char *url, const char *hashAlgorithm, const char *encoding, CkString &outStr);
	const char *downloadHash(const char *url, const char *hashAlgorithm, const char *encoding);

	bool EventLogName(int index, CkString &outStr);
	const char *eventLogName(int index);

	bool EventLogValue(int index, CkString &outStr);
	const char *eventLogValue(int index);

	bool ExtractMetaRefreshUrl(const char *html, CkString &outStr);
	const char *extractMetaRefreshUrl(const char *html);

	bool GenTimeStamp(CkString &outStr);
	const char *genTimeStamp(void);

	bool GetCacheRoot(int index, CkString &outStr);
	const char *getCacheRoot(int index);
	const char *cacheRoot(int index);

	bool GetCookieXml(const char *domain, CkString &outStr);
	const char *getCookieXml(const char *domain);
	const char *cookieXml(const char *domain);

	bool GetDomain(const char *url, CkString &outStr);
	const char *getDomain(const char *url);
	const char *domain(const char *url);

	// eventCallbacks
	CkHttpResponse *GetHead(const char *url);

	bool GetRequestHeader(const char *name, CkString &outStr);
	const char *getRequestHeader(const char *name);
	const char *requestHeader(const char *name);

	// eventCallbacks
	CkCert *GetServerSslCert(const char *domain, int port);

	bool GetUrlPath(const char *url, CkString &outStr);
	const char *getUrlPath(const char *url);
	const char *urlPath(const char *url);

	bool HasRequestHeader(const char *name);

	bool IsUnlocked(void);

	// eventCallbacks
	bool PostBinary(const char *url, const CkByteData &byteData, const char *contentType, bool md5, bool gzip, CkString &outStr);
	const char *postBinary(const char *url, const CkByteData &byteData, const char *contentType, bool md5, bool gzip);

	// eventCallbacks
	CkHttpResponse *PostJson(const char *url, const char *jsonText);

	// eventCallbacks
	CkHttpResponse *PostJson2(const char *url, const char *contentType, const char *jsonText);

	// eventCallbacks
	CkHttpResponse *PostMime(const char *url, const char *mime);

	// eventCallbacks
	CkHttpResponse *PostUrlEncoded(const char *url, CkHttpRequest &req);

	// eventCallbacks
	CkHttpResponse *PostXml(const char *url, const char *xmlDoc, const char *charset);

	// eventCallbacks
	bool PutBinary(const char *url, const CkByteData &byteData, const char *contentType, bool md5, bool gzip, CkString &outStr);
	const char *putBinary(const char *url, const CkByteData &byteData, const char *contentType, bool md5, bool gzip);

	// eventCallbacks
	bool PutText(const char *url, const char *textData, const char *charset, const char *contentType, bool md5, bool gzip, CkString &outStr);
	const char *putText(const char *url, const char *textData, const char *charset, const char *contentType, bool md5, bool gzip);

	// eventCallbacks
	bool QuickDeleteStr(const char *url, CkString &outStr);
	const char *quickDeleteStr(const char *url);

	// eventCallbacks
	bool QuickGet(const char *url, CkByteData &outData);

	// eventCallbacks
	CkHttpResponse *QuickGetObj(const char *url);

	// eventCallbacks
	bool QuickGetStr(const char *url, CkString &outStr);
	const char *quickGetStr(const char *url);

	// eventCallbacks
	bool QuickPutStr(const char *url, CkString &outStr);
	const char *quickPutStr(const char *url);

	bool RemoveQuickHeader(const char *name);

	void RemoveRequestHeader(const char *name);

	bool RenderGet(const char *url, CkString &outStr);
	const char *renderGet(const char *url);

	// eventCallbacks
	bool ResumeDownload(const char *url, const char *appendToPath);

	// eventCallbacks
	bool S3_CreateBucket(const char *bucketName);

	// eventCallbacks
	bool S3_DeleteBucket(const char *bucketName);

	// eventCallbacks
	bool S3_DeleteObject(const char *bucketName, const char *objectName);

	// eventCallbacks
	bool S3_DownloadBytes(const char *bucketName, const char *objectName, CkByteData &outBytes);

	// eventCallbacks
	bool S3_DownloadFile(const char *bucketName, const char *objectName, const char *localFilePath);

	// eventCallbacks
	bool S3_DownloadString(const char *bucketName, const char *objectName, const char *charset, CkString &outStr);
	const char *s3_DownloadString(const char *bucketName, const char *objectName, const char *charset);

	// eventCallbacks
	bool S3_ListBucketObjects(const char *bucketName, CkString &outStr);
	const char *s3_ListBucketObjects(const char *bucketName);

	// eventCallbacks
	bool S3_ListBuckets(CkString &outStr);
	const char *s3_ListBuckets(void);

	// eventCallbacks
	bool S3_UploadBytes(const CkByteData &objectContent, const char *contentType, const char *bucketName, const char *objectName);

	// eventCallbacks
	bool S3_UploadFile(const char *localFilePath, const char *contentType, const char *bucketName, const char *ObjectName);

	// eventCallbacks
	bool S3_UploadString(const char *objectContent, const char *charset, const char *contentType, const char *bucketName, const char *ObjectName);

	bool SetCookieXml(const char *domain, const char *cookieXml);

	void SetRequestHeader(const char *name, const char *value);

	bool SetSslClientCert(CkCert &cert);

	bool SetSslClientCertPem(const char *pemDataOrPath, const char *pemPassword);

	bool SetSslClientCertPfx(const char *pfxPath, const char *pfxPassword);

	void SleepMs(int millisec);

	// eventCallbacks
	CkHttpResponse *SynchronousRequest(const char *domain, int port, bool ssl, const CkHttpRequest &req);

	bool UnlockComponent(const char *unlockCode);

	bool UrlDecode(const char *str, CkString &outStr);
	const char *urlDecode(const char *str);

	bool UrlEncode(const char *str, CkString &outStr);
	const char *urlEncode(const char *str);

	// eventCallbacks
	bool XmlRpc(const char *urlEndpoint, const char *xmlIn, CkString &outStr);
	const char *xmlRpc(const char *urlEndpoint, const char *xmlIn);

	// eventCallbacks
	bool XmlRpcPut(const char *urlEndpoint, const char *xmlIn, CkString &outStr);
	const char *xmlRpcPut(const char *urlEndpoint, const char *xmlIn);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
