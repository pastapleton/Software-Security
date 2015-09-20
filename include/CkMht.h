// CkMht.h: interface for the CkMht class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkMht_H
#define _CkMht_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkEmail;
class CkMime;
class CkMhtProgress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkMht
class CkMht  : public CkMultiByteBase
{
    private:
	CkMhtProgress *m_callback;

	// Don't allow assignment or copying these objects.
	CkMht(const CkMht &);
	CkMht &operator=(const CkMht &);

    public:
	CkMht(void);
	virtual ~CkMht(void);

	static CkMht *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkMhtProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkMhtProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_BaseUrl(CkString &str);
	const char *baseUrl(void);
	void put_BaseUrl(const char *newVal);

	int get_ConnectTimeout(void);
	void put_ConnectTimeout(int newVal);

	void get_DebugHtmlAfter(CkString &str);
	const char *debugHtmlAfter(void);
	void put_DebugHtmlAfter(const char *newVal);

	void get_DebugHtmlBefore(CkString &str);
	const char *debugHtmlBefore(void);
	void put_DebugHtmlBefore(const char *newVal);

	bool get_DebugTagCleaning(void);
	void put_DebugTagCleaning(bool newVal);

	bool get_EmbedImages(void);
	void put_EmbedImages(bool newVal);

	bool get_EmbedLocalOnly(void);
	void put_EmbedLocalOnly(bool newVal);

	bool get_FetchFromCache(void);
	void put_FetchFromCache(bool newVal);

	int get_HeartbeatMs(void);
	void put_HeartbeatMs(int newVal);

	bool get_IgnoreMustRevalidate(void);
	void put_IgnoreMustRevalidate(bool newVal);

	bool get_IgnoreNoCache(void);
	void put_IgnoreNoCache(bool newVal);

	bool get_NoScripts(void);
	void put_NoScripts(bool newVal);

	bool get_NtlmAuth(void);
	void put_NtlmAuth(bool newVal);

	int get_NumCacheLevels(void);
	void put_NumCacheLevels(int newVal);

	int get_NumCacheRoots(void);

	bool get_PreferMHTScripts(void);
	void put_PreferMHTScripts(bool newVal);

	void get_Proxy(CkString &str);
	const char *proxy(void);
	void put_Proxy(const char *newVal);

	void get_ProxyLogin(CkString &str);
	const char *proxyLogin(void);
	void put_ProxyLogin(const char *newVal);

	void get_ProxyPassword(CkString &str);
	const char *proxyPassword(void);
	void put_ProxyPassword(const char *newVal);

	int get_ReadTimeout(void);
	void put_ReadTimeout(int newVal);

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

	bool get_UnpackUseRelPaths(void);
	void put_UnpackUseRelPaths(bool newVal);

	bool get_UpdateCache(void);
	void put_UpdateCache(bool newVal);

	bool get_UseCids(void);
	void put_UseCids(bool newVal);

	bool get_UseFilename(void);
	void put_UseFilename(bool newVal);

	bool get_UseIEProxy(void);
	void put_UseIEProxy(bool newVal);

	bool get_UseInline(void);
	void put_UseInline(bool newVal);

	void get_WebSiteLogin(CkString &str);
	const char *webSiteLogin(void);
	void put_WebSiteLogin(const char *newVal);

	void get_WebSiteLoginDomain(CkString &str);
	const char *webSiteLoginDomain(void);
	void put_WebSiteLoginDomain(const char *newVal);

	void get_WebSitePassword(CkString &str);
	const char *webSitePassword(void);
	void put_WebSitePassword(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	void AddCacheRoot(const char *dir);

	void AddCustomHeader(const char *name, const char *value);

	void AddExternalStyleSheet(const char *url);

	void ClearCustomHeaders(void);

	void ExcludeImagesMatching(const char *pattern);

	// eventCallbacks
	bool GetAndSaveEML(const char *url, const char *emlPath);

	// eventCallbacks
	bool GetAndSaveMHT(const char *url, const char *mhtPath);

	// eventCallbacks
	bool GetAndZipEML(const char *url, const char *zipEntryFilename, const char *zipPath);

	// eventCallbacks
	bool GetAndZipMHT(const char *url, const char *zipEntryFilename, const char *zipPath);

	bool GetCacheRoot(int index, CkString &outStr);
	const char *getCacheRoot(int index);
	const char *cacheRoot(int index);

	// eventCallbacks
	bool GetEML(const char *url, CkString &outStr);
	const char *getEML(const char *url);
	const char *eML(const char *url);

	// eventCallbacks
	CkEmail *GetEmail(const char *url);

	// eventCallbacks
	bool GetMHT(const char *url, CkString &outStr);
	const char *getMHT(const char *url);
	const char *mHT(const char *url);

	// eventCallbacks
	CkMime *GetMime(const char *url);

	// eventCallbacks
	bool HtmlToEML(const char *htmlText, CkString &outStr);
	const char *htmlToEML(const char *htmlText);

	// eventCallbacks
	bool HtmlToEMLFile(const char *html, const char *emlPath);

	// eventCallbacks
	CkEmail *HtmlToEmail(const char *htmlText);

	// eventCallbacks
	bool HtmlToMHT(const char *htmlText, CkString &outStr);
	const char *htmlToMHT(const char *htmlText);

	// eventCallbacks
	bool HtmlToMHTFile(const char *html, const char *mhtPath);

	bool IsUnlocked(void);

	void RemoveCustomHeader(const char *name);

	void RestoreDefaults(void);

	bool UnlockComponent(const char *unlockCode);

	bool UnpackMHT(const char *mhtPath, const char *unpackDir, const char *htmlFilename, const char *partsSubDir);

	bool UnpackMHTString(const char *mhtContents, const char *unpackDir, const char *htmlFilename, const char *partsSubDir);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
