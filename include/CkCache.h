// CkCache.h: interface for the CkCache class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkCache_H
#define _CkCache_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkDateTime;
class CkByteData;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkCache
class CkCache  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkCache(const CkCache &);
	CkCache &operator=(const CkCache &);

    public:
	CkCache(void);
	virtual ~CkCache(void);

	static CkCache *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_LastEtagFetched(CkString &str);
	const char *lastEtagFetched(void);

	void get_LastExpirationFetched(SYSTEMTIME &outSysTime);

	void get_LastExpirationFetchedStr(CkString &str);
	const char *lastExpirationFetchedStr(void);

	bool get_LastHitExpired(void);

	void get_LastKeyFetched(CkString &str);
	const char *lastKeyFetched(void);

	int get_Level(void);
	void put_Level(int newVal);

	int get_NumRoots(void);



	// ----------------------
	// Methods
	// ----------------------
	void AddRoot(const char *path);

	int DeleteAll(void);

	int DeleteAllExpired(void);

	bool DeleteFromCache(const char *key);

	int DeleteOlder(SYSTEMTIME &dt);

	int DeleteOlderDt(CkDateTime &dt);

	int DeleteOlderStr(const char *dateTimeStr);

	bool FetchFromCache(const char *key, CkByteData &outBytes);

	bool FetchText(const char *key, CkString &outStr);
	const char *fetchText(const char *key);

	bool GetEtag(const char *key, CkString &outStr);
	const char *getEtag(const char *key);
	const char *etag(const char *key);

	bool GetExpiration(const char *key, SYSTEMTIME &outSysTime);

	CkDateTime *GetExpirationDt(const char *key);

	bool GetExpirationStr(const char *url, CkString &outStr);
	const char *getExpirationStr(const char *url);
	const char *expirationStr(const char *url);

	bool GetFilename(const char *key, CkString &outStr);
	const char *getFilename(const char *key);
	const char *filename(const char *key);

	bool GetRoot(int index, CkString &outStr);
	const char *getRoot(int index);
	const char *root(int index);

	bool IsCached(const char *key);

	bool SaveText(const char *key, SYSTEMTIME &expire, const char *eTag, const char *strData);

	bool SaveTextDt(const char *key, CkDateTime &expire, const char *eTag, const char *strData);

	bool SaveTextNoExpire(const char *key, const char *eTag, const char *strData);

	bool SaveTextStr(const char *key, const char *expireDateTimeStr, const char *eTag, const char *strData);

	bool SaveToCache(const char *key, SYSTEMTIME &expire, const char *eTag, const CkByteData &data);

	bool SaveToCacheDt(const char *key, CkDateTime &expire, const char *eTag, const CkByteData &data);

	bool SaveToCacheNoExpire(const char *key, const char *eTag, const CkByteData &data);

	bool SaveToCacheStr(const char *url, const char *expireDateTimeStr, const char *eTag, const CkByteData &data);

	bool UpdateExpiration(const char *key, SYSTEMTIME &dt);

	bool UpdateExpirationDt(const char *key, CkDateTime &dt);

	bool UpdateExpirationStr(const char *url, const char *dateTimeStr);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
