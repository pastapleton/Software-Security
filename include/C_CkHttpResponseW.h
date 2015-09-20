// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkHttpResponse_W_H
#define _C_CkHttpResponse_W_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkHttpResponseW CkHttpResponseW_Create(void);
HCkHttpResponseW CkHttpResponseW_Create2(BOOL bForDso);
void CkHttpResponseW_Dispose(HCkHttpResponseW handle);
void CkHttpResponseW_getBody(HCkHttpResponseW cHandle, HCkByteDataW retval);
void CkHttpResponseW_getBodyQP(HCkHttpResponseW cHandle, HCkStringW retval);
void CkHttpResponseW_getBodyStr(HCkHttpResponseW cHandle, HCkStringW retval);
void CkHttpResponseW_getCharset(HCkHttpResponseW cHandle, HCkStringW retval);
unsigned long CkHttpResponseW_getContentLength(HCkHttpResponseW cHandle);
__int64 CkHttpResponseW_getContentLength64(HCkHttpResponseW cHandle);
void CkHttpResponseW_getDate(HCkHttpResponseW cHandle, SYSTEMTIME *retval);
void CkHttpResponseW_getDateStr(HCkHttpResponseW cHandle, HCkStringW retval);
void CkHttpResponseW_getDebugLogFilePath(HCkHttpResponseW cHandle, HCkStringW retval);
void CkHttpResponseW_putDebugLogFilePath(HCkHttpResponseW cHandle, const wchar_t *newVal);
void CkHttpResponseW_getDomain(HCkHttpResponseW cHandle, HCkStringW retval);
void CkHttpResponseW_getFullMime(HCkHttpResponseW cHandle, HCkStringW retval);
void CkHttpResponseW_getHeader(HCkHttpResponseW cHandle, HCkStringW retval);
void CkHttpResponseW_getLastErrorHtml(HCkHttpResponseW cHandle, HCkStringW retval);
void CkHttpResponseW_getLastErrorText(HCkHttpResponseW cHandle, HCkStringW retval);
void CkHttpResponseW_getLastErrorXml(HCkHttpResponseW cHandle, HCkStringW retval);
int CkHttpResponseW_getNumCookies(HCkHttpResponseW cHandle);
int CkHttpResponseW_getNumHeaderFields(HCkHttpResponseW cHandle);
int CkHttpResponseW_getStatusCode(HCkHttpResponseW cHandle);
void CkHttpResponseW_getStatusLine(HCkHttpResponseW cHandle, HCkStringW retval);
BOOL CkHttpResponseW_getVerboseLogging(HCkHttpResponseW cHandle);
void CkHttpResponseW_putVerboseLogging(HCkHttpResponseW cHandle, BOOL newVal);
void CkHttpResponseW_getVersion(HCkHttpResponseW cHandle, HCkStringW retval);
BOOL CkHttpResponseW_GetCookieDomain(HCkHttpResponseW cHandle, int index, HCkStringW outStr);
BOOL CkHttpResponseW_GetCookieExpires(HCkHttpResponseW cHandle, int index, SYSTEMTIME *outSysTime);
BOOL CkHttpResponseW_GetCookieExpiresStr(HCkHttpResponseW cHandle, int index, HCkStringW outStr);
BOOL CkHttpResponseW_GetCookieName(HCkHttpResponseW cHandle, int index, HCkStringW outStr);
BOOL CkHttpResponseW_GetCookiePath(HCkHttpResponseW cHandle, int index, HCkStringW outStr);
BOOL CkHttpResponseW_GetCookieValue(HCkHttpResponseW cHandle, int index, HCkStringW outStr);
BOOL CkHttpResponseW_GetHeaderField(HCkHttpResponseW cHandle, const wchar_t *fieldName, HCkStringW outStr);
BOOL CkHttpResponseW_GetHeaderFieldAttr(HCkHttpResponseW cHandle, const wchar_t *fieldName, const wchar_t *attrName, HCkStringW outStr);
BOOL CkHttpResponseW_GetHeaderName(HCkHttpResponseW cHandle, int index, HCkStringW outStr);
BOOL CkHttpResponseW_GetHeaderValue(HCkHttpResponseW cHandle, int index, HCkStringW outStr);
BOOL CkHttpResponseW_SaveBodyBinary(HCkHttpResponseW cHandle, const wchar_t *path);
BOOL CkHttpResponseW_SaveBodyText(HCkHttpResponseW cHandle, BOOL bCrlf, const wchar_t *path);
BOOL CkHttpResponseW_SaveLastError(HCkHttpResponseW cHandle, const wchar_t *path);
BOOL CkHttpResponseW_UrlEncParamValue(HCkHttpResponseW cHandle, const wchar_t *encodedParams, const wchar_t *paramName, HCkStringW outStr);
const wchar_t *CkHttpResponseW__bodyQP(HCkHttpResponseW cHandle);
const wchar_t *CkHttpResponseW__bodyStr(HCkHttpResponseW cHandle);
const wchar_t *CkHttpResponseW__charset(HCkHttpResponseW cHandle);
const wchar_t *CkHttpResponseW__cookieDomain(HCkHttpResponseW cHandle, int index);
const wchar_t *CkHttpResponseW__cookieExpiresStr(HCkHttpResponseW cHandle, int index);
const wchar_t *CkHttpResponseW__cookieName(HCkHttpResponseW cHandle, int index);
const wchar_t *CkHttpResponseW__cookiePath(HCkHttpResponseW cHandle, int index);
const wchar_t *CkHttpResponseW__cookieValue(HCkHttpResponseW cHandle, int index);
const wchar_t *CkHttpResponseW__dateStr(HCkHttpResponseW cHandle);
const wchar_t *CkHttpResponseW__debugLogFilePath(HCkHttpResponseW cHandle);
const wchar_t *CkHttpResponseW__domain(HCkHttpResponseW cHandle);
const wchar_t *CkHttpResponseW__fullMime(HCkHttpResponseW cHandle);
const wchar_t *CkHttpResponseW__getCookieDomain(HCkHttpResponseW cHandle, int index);
const wchar_t *CkHttpResponseW__getCookieExpiresStr(HCkHttpResponseW cHandle, int index);
const wchar_t *CkHttpResponseW__getCookieName(HCkHttpResponseW cHandle, int index);
const wchar_t *CkHttpResponseW__getCookiePath(HCkHttpResponseW cHandle, int index);
const wchar_t *CkHttpResponseW__getCookieValue(HCkHttpResponseW cHandle, int index);
const wchar_t *CkHttpResponseW__getHeaderField(HCkHttpResponseW cHandle, const wchar_t *fieldName);
const wchar_t *CkHttpResponseW__getHeaderFieldAttr(HCkHttpResponseW cHandle, const wchar_t *fieldName, const wchar_t *attrName);
const wchar_t *CkHttpResponseW__getHeaderName(HCkHttpResponseW cHandle, int index);
const wchar_t *CkHttpResponseW__getHeaderValue(HCkHttpResponseW cHandle, int index);
const wchar_t *CkHttpResponseW__header(HCkHttpResponseW cHandle);
const wchar_t *CkHttpResponseW__headerField(HCkHttpResponseW cHandle, const wchar_t *fieldName);
const wchar_t *CkHttpResponseW__headerFieldAttr(HCkHttpResponseW cHandle, const wchar_t *fieldName, const wchar_t *attrName);
const wchar_t *CkHttpResponseW__headerName(HCkHttpResponseW cHandle, int index);
const wchar_t *CkHttpResponseW__headerValue(HCkHttpResponseW cHandle, int index);
const wchar_t *CkHttpResponseW__lastErrorHtml(HCkHttpResponseW cHandle);
const wchar_t *CkHttpResponseW__lastErrorText(HCkHttpResponseW cHandle);
const wchar_t *CkHttpResponseW__lastErrorXml(HCkHttpResponseW cHandle);
const wchar_t *CkHttpResponseW__statusLine(HCkHttpResponseW cHandle);
const wchar_t *CkHttpResponseW__urlEncParamValue(HCkHttpResponseW cHandle, const wchar_t *encodedParams, const wchar_t *paramName);
const wchar_t *CkHttpResponseW__version(HCkHttpResponseW cHandle);
#endif
