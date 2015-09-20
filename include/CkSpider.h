// CkSpider.h: interface for the CkSpider class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkSpider_H
#define _CkSpider_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkSpiderProgress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkSpider
class CkSpider  : public CkMultiByteBase
{
    private:
	CkSpiderProgress *m_callback;

	// Don't allow assignment or copying these objects.
	CkSpider(const CkSpider &);
	CkSpider &operator=(const CkSpider &);

    public:
	CkSpider(void);
	virtual ~CkSpider(void);

	static CkSpider *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkSpiderProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkSpiderProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	bool get_AvoidHttps(void);
	void put_AvoidHttps(bool newVal);

	void get_CacheDir(CkString &str);
	const char *cacheDir(void);
	void put_CacheDir(const char *newVal);

	bool get_ChopAtQuery(void);
	void put_ChopAtQuery(bool newVal);

	int get_ConnectTimeout(void);
	void put_ConnectTimeout(int newVal);

	void get_Domain(CkString &str);
	const char *domain(void);

	bool get_FetchFromCache(void);
	void put_FetchFromCache(bool newVal);

	int get_HeartbeatMs(void);
	void put_HeartbeatMs(int newVal);

	bool get_LastFromCache(void);

	void get_LastHtml(CkString &str);
	const char *lastHtml(void);

	void get_LastHtmlDescription(CkString &str);
	const char *lastHtmlDescription(void);

	void get_LastHtmlKeywords(CkString &str);
	const char *lastHtmlKeywords(void);

	void get_LastHtmlTitle(CkString &str);
	const char *lastHtmlTitle(void);

	void get_LastModDate(SYSTEMTIME &outSysTime);

	void get_LastModDateStr(CkString &str);
	const char *lastModDateStr(void);

	void get_LastUrl(CkString &str);
	const char *lastUrl(void);

	int get_MaxResponseSize(void);
	void put_MaxResponseSize(int newVal);

	int get_MaxUrlLen(void);
	void put_MaxUrlLen(int newVal);

	int get_NumAvoidPatterns(void);

	int get_NumFailed(void);

	int get_NumOutboundLinks(void);

	int get_NumSpidered(void);

	int get_NumUnspidered(void);

	void get_ProxyDomain(CkString &str);
	const char *proxyDomain(void);
	void put_ProxyDomain(const char *newVal);

	void get_ProxyLogin(CkString &str);
	const char *proxyLogin(void);
	void put_ProxyLogin(const char *newVal);

	void get_ProxyPassword(CkString &str);
	const char *proxyPassword(void);
	void put_ProxyPassword(const char *newVal);

	int get_ProxyPort(void);
	void put_ProxyPort(int newVal);

	int get_ReadTimeout(void);
	void put_ReadTimeout(int newVal);

	bool get_UpdateCache(void);
	void put_UpdateCache(bool newVal);

	void get_UserAgent(CkString &str);
	const char *userAgent(void);
	void put_UserAgent(const char *newVal);

	int get_WindDownCount(void);
	void put_WindDownCount(int newVal);



	// ----------------------
	// Methods
	// ----------------------
	void AddAvoidOutboundLinkPattern(const char *pattern);

	void AddAvoidPattern(const char *pattern);

	void AddMustMatchPattern(const char *pattern);

	void AddUnspidered(const char *url);

	bool CanonicalizeUrl(const char *url, CkString &outStr);
	const char *canonicalizeUrl(const char *url);

	void ClearFailedUrls(void);

	void ClearOutboundLinks(void);

	void ClearSpideredUrls(void);

	// eventCallbacks
	bool CrawlNext(void);

	// eventCallbacks
	bool FetchRobotsText(CkString &outStr);
	const char *fetchRobotsText(void);

	bool GetAvoidPattern(int index, CkString &outStr);
	const char *getAvoidPattern(int index);
	const char *avoidPattern(int index);

	bool GetBaseDomain(const char *domain, CkString &outStr);
	const char *getBaseDomain(const char *domain);
	const char *baseDomain(const char *domain);

	bool GetFailedUrl(int index, CkString &outStr);
	const char *getFailedUrl(int index);
	const char *failedUrl(int index);

	bool GetOutboundLink(int index, CkString &outStr);
	const char *getOutboundLink(int index);
	const char *outboundLink(int index);

	bool GetSpideredUrl(int index, CkString &outStr);
	const char *getSpideredUrl(int index);
	const char *spideredUrl(int index);

	bool GetUnspideredUrl(int index, CkString &outStr);
	const char *getUnspideredUrl(int index);
	const char *unspideredUrl(int index);

	bool GetUrlDomain(const char *url, CkString &outStr);
	const char *getUrlDomain(const char *url);
	const char *urlDomain(const char *url);

	void Initialize(const char *domain);

	// eventCallbacks
	bool RecrawlLast(void);

	void SkipUnspidered(int index);

	void SleepMs(int millisec);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
