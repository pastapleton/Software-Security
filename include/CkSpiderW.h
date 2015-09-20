#ifndef _CkSpiderW_H
#define _CkSpiderW_H
// This header is generated.
#include "chilkatDefs.h"

#pragma once

#include "CkWideCharBase.h"
#include "CkString.h"
#include "CkSpider.h"

class CkSpiderProgress;



#ifndef __sun__
#pragma pack (push, 8) 
#endif


class CkSpiderW : public CkWideCharBase
{
    private:
	CkSpider *m_impl;
		void *m_dsoProgress;


        // Disallow assignment or copying this object.
	CkSpiderW(const CkSpiderW &) { }
	CkSpiderW &operator=(const CkSpiderW &) { return *this; }


    public:
	CkSpiderW();
	CkSpiderW(CkSpider *p, bool bForDso);
	CkSpiderW(bool bForDso);
	virtual ~CkSpiderW();
	CkSpider *getMbPtr(void) { return m_impl; }
	CkSpider &getMbRef(void) { return *m_impl; }
	const CkSpider *getMbConstPtr(void) const { return m_impl; }
	const CkSpider &getMbConstRef(void) const { return *m_impl; }
	void dispose(void) { if (m_impl) m_impl->dispose();  }

	CkSpiderProgress *get_EventCallbackObjectA(void) const;
	void put_EventCallbackObjectA(CkSpiderProgress *progress);

bool get_AvoidHttps(void);
void put_AvoidHttps(bool propVal);
void get_CacheDir(CkString &propVal);
void put_CacheDir(const wchar_t *w1);
bool get_ChopAtQuery(void);
void put_ChopAtQuery(bool propVal);
int get_ConnectTimeout(void);
void put_ConnectTimeout(int propVal);
void get_DebugLogFilePath(CkString &propVal);
void put_DebugLogFilePath(const wchar_t *w1);
void get_Domain(CkString &propVal);
bool get_FetchFromCache(void);
void put_FetchFromCache(bool propVal);
int get_HeartbeatMs(void);
void put_HeartbeatMs(int propVal);
void LastErrorHtml(CkString &propVal);
void LastErrorText(CkString &propVal);
void LastErrorXml(CkString &propVal);
bool get_LastFromCache(void);
void get_LastHtml(CkString &propVal);
void get_LastHtmlDescription(CkString &propVal);
void get_LastHtmlKeywords(CkString &propVal);
void get_LastHtmlTitle(CkString &propVal);
void get_LastModDate(SYSTEMTIME &propVal);
void get_LastModDateStr(CkString &propVal);
void get_LastUrl(CkString &propVal);
int get_MaxResponseSize(void);
void put_MaxResponseSize(int propVal);
int get_MaxUrlLen(void);
void put_MaxUrlLen(int propVal);
int get_NumAvoidPatterns(void);
int get_NumFailed(void);
int get_NumOutboundLinks(void);
int get_NumSpidered(void);
int get_NumUnspidered(void);
void get_ProxyDomain(CkString &propVal);
void put_ProxyDomain(const wchar_t *w1);
void get_ProxyLogin(CkString &propVal);
void put_ProxyLogin(const wchar_t *w1);
void get_ProxyPassword(CkString &propVal);
void put_ProxyPassword(const wchar_t *w1);
int get_ProxyPort(void);
void put_ProxyPort(int propVal);
int get_ReadTimeout(void);
void put_ReadTimeout(int propVal);
bool get_UpdateCache(void);
void put_UpdateCache(bool propVal);
void get_UserAgent(CkString &propVal);
void put_UserAgent(const wchar_t *w1);
bool get_VerboseLogging(void);
void put_VerboseLogging(bool propVal);
void get_Version(CkString &propVal);
int get_WindDownCount(void);
void put_WindDownCount(int propVal);
void AddAvoidOutboundLinkPattern(const wchar_t *w1);
void AddAvoidPattern(const wchar_t *w1);
void AddMustMatchPattern(const wchar_t *w1);
void AddUnspidered(const wchar_t *w1);
bool CanonicalizeUrl(const wchar_t *w1,CkString &outStr);
void ClearFailedUrls(void);
void ClearOutboundLinks(void);
void ClearSpideredUrls(void);
bool CrawlNext(void);
bool FetchRobotsText(CkString &outStr);
bool GetAvoidPattern(int index,CkString &outStr);
bool GetBaseDomain(const wchar_t *w1,CkString &outStr);
bool GetFailedUrl(int index,CkString &outStr);
bool GetOutboundLink(int index,CkString &outStr);
bool GetSpideredUrl(int index,CkString &outStr);
bool GetUnspideredUrl(int index,CkString &outStr);
bool GetUrlDomain(const wchar_t *w1,CkString &outStr);
void Initialize(const wchar_t *w1);
bool RecrawlLast(void);
bool SaveLastError(const wchar_t *w1);
void SkipUnspidered(int index);
void SleepMs(int millisec);
const wchar_t *avoidPattern(int index);
const wchar_t *baseDomain(const wchar_t *w1);
const wchar_t *cacheDir(void);
const wchar_t *canonicalizeUrl(const wchar_t *w1);
const wchar_t *debugLogFilePath(void);
const wchar_t *domain(void);
const wchar_t *failedUrl(int index);
const wchar_t *fetchRobotsText(void);
const wchar_t *getAvoidPattern(int index);
const wchar_t *getBaseDomain(const wchar_t *w1);
const wchar_t *getFailedUrl(int index);
const wchar_t *getOutboundLink(int index);
const wchar_t *getSpideredUrl(int index);
const wchar_t *getUnspideredUrl(int index);
const wchar_t *getUrlDomain(const wchar_t *w1);
const wchar_t *lastErrorHtml(void);
const wchar_t *lastErrorText(void);
const wchar_t *lastErrorXml(void);
const wchar_t *lastHtml(void);
const wchar_t *lastHtmlDescription(void);
const wchar_t *lastHtmlKeywords(void);
const wchar_t *lastHtmlTitle(void);
const wchar_t *lastModDateStr(void);
const wchar_t *lastUrl(void);
const wchar_t *outboundLink(int index);
const wchar_t *proxyDomain(void);
const wchar_t *proxyLogin(void);
const wchar_t *proxyPassword(void);
const wchar_t *spideredUrl(int index);
const wchar_t *unspideredUrl(int index);
const wchar_t *urlDomain(const wchar_t *w1);
const wchar_t *userAgent(void);
const wchar_t *version(void);

};
#ifndef __sun__
#pragma pack (pop)
#endif

#endif
