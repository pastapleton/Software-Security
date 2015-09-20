// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkCache_H
#define _C_CkCache_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkCache CkCache_Create(void);
void CkCache_Dispose(HCkCache handle);
void CkCache_getDebugLogFilePath(HCkCache cHandle, HCkString retval);
void CkCache_putDebugLogFilePath(HCkCache cHandle, const char *newVal);
void CkCache_getLastErrorHtml(HCkCache cHandle, HCkString retval);
void CkCache_getLastErrorText(HCkCache cHandle, HCkString retval);
void CkCache_getLastErrorXml(HCkCache cHandle, HCkString retval);
void CkCache_getLastEtagFetched(HCkCache cHandle, HCkString retval);
void CkCache_getLastExpirationFetched(HCkCache cHandle, SYSTEMTIME *retval);
void CkCache_getLastExpirationFetchedStr(HCkCache cHandle, HCkString retval);
BOOL CkCache_getLastHitExpired(HCkCache cHandle);
void CkCache_getLastKeyFetched(HCkCache cHandle, HCkString retval);
int CkCache_getLevel(HCkCache cHandle);
void CkCache_putLevel(HCkCache cHandle, int newVal);
int CkCache_getNumRoots(HCkCache cHandle);
BOOL CkCache_getUtf8(HCkCache cHandle);
void CkCache_putUtf8(HCkCache cHandle, BOOL newVal);
BOOL CkCache_getVerboseLogging(HCkCache cHandle);
void CkCache_putVerboseLogging(HCkCache cHandle, BOOL newVal);
void CkCache_getVersion(HCkCache cHandle, HCkString retval);
void CkCache_AddRoot(HCkCache cHandle, const char *path);
int CkCache_DeleteAll(HCkCache cHandle);
int CkCache_DeleteAllExpired(HCkCache cHandle);
BOOL CkCache_DeleteFromCache(HCkCache cHandle, const char *key);
int CkCache_DeleteOlder(HCkCache cHandle, SYSTEMTIME *dt);
int CkCache_DeleteOlderDt(HCkCache cHandle, HCkDateTime dt);
int CkCache_DeleteOlderStr(HCkCache cHandle, const char *dateTimeStr);
BOOL CkCache_FetchFromCache(HCkCache cHandle, const char *key, HCkByteData outBytes);
BOOL CkCache_FetchText(HCkCache cHandle, const char *key, HCkString outStr);
BOOL CkCache_GetEtag(HCkCache cHandle, const char *key, HCkString outStr);
BOOL CkCache_GetExpiration(HCkCache cHandle, const char *key, SYSTEMTIME *outSysTime);
HCkDateTime CkCache_GetExpirationDt(HCkCache cHandle, const char *key);
BOOL CkCache_GetExpirationStr(HCkCache cHandle, const char *url, HCkString outStr);
BOOL CkCache_GetFilename(HCkCache cHandle, const char *key, HCkString outStr);
BOOL CkCache_GetRoot(HCkCache cHandle, int index, HCkString outStr);
BOOL CkCache_IsCached(HCkCache cHandle, const char *key);
BOOL CkCache_SaveLastError(HCkCache cHandle, const char *path);
BOOL CkCache_SaveText(HCkCache cHandle, const char *key, SYSTEMTIME *expire, const char *eTag, const char *strData);
BOOL CkCache_SaveTextDt(HCkCache cHandle, const char *key, HCkDateTime expire, const char *eTag, const char *strData);
BOOL CkCache_SaveTextNoExpire(HCkCache cHandle, const char *key, const char *eTag, const char *strData);
BOOL CkCache_SaveTextStr(HCkCache cHandle, const char *key, const char *expireDateTimeStr, const char *eTag, const char *strData);
BOOL CkCache_SaveToCache(HCkCache cHandle, const char *key, SYSTEMTIME *expire, const char *eTag, HCkByteData data);
BOOL CkCache_SaveToCacheDt(HCkCache cHandle, const char *key, HCkDateTime expire, const char *eTag, HCkByteData data);
BOOL CkCache_SaveToCacheNoExpire(HCkCache cHandle, const char *key, const char *eTag, HCkByteData data);
BOOL CkCache_SaveToCacheStr(HCkCache cHandle, const char *url, const char *expireDateTimeStr, const char *eTag, HCkByteData data);
BOOL CkCache_UpdateExpiration(HCkCache cHandle, const char *key, SYSTEMTIME *dt);
BOOL CkCache_UpdateExpirationDt(HCkCache cHandle, const char *key, HCkDateTime dt);
BOOL CkCache_UpdateExpirationStr(HCkCache cHandle, const char *url, const char *dateTimeStr);
const char *CkCache_debugLogFilePath(HCkCache cHandle);
const char *CkCache_etag(HCkCache cHandle, const char *key);
const char *CkCache_expirationStr(HCkCache cHandle, const char *url);
const char *CkCache_fetchText(HCkCache cHandle, const char *key);
const char *CkCache_filename(HCkCache cHandle, const char *key);
const char *CkCache_getEtag(HCkCache cHandle, const char *key);
const char *CkCache_getExpirationStr(HCkCache cHandle, const char *url);
const char *CkCache_getFilename(HCkCache cHandle, const char *key);
const char *CkCache_getRoot(HCkCache cHandle, int index);
const char *CkCache_lastErrorHtml(HCkCache cHandle);
const char *CkCache_lastErrorText(HCkCache cHandle);
const char *CkCache_lastErrorXml(HCkCache cHandle);
const char *CkCache_lastEtagFetched(HCkCache cHandle);
const char *CkCache_lastExpirationFetchedStr(HCkCache cHandle);
const char *CkCache_lastKeyFetched(HCkCache cHandle);
const char *CkCache_root(HCkCache cHandle, int index);
const char *CkCache_version(HCkCache cHandle);
#endif
