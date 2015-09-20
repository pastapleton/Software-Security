// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkRss_W_H
#define _C_CkRss_W_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkRssW CkRssW_Create(void);
HCkRssW CkRssW_Create2(BOOL bForDso);
void CkRssW_Dispose(HCkRssW handle);
void CkRssW_getDebugLogFilePath(HCkRssW cHandle, HCkStringW retval);
void CkRssW_putDebugLogFilePath(HCkRssW cHandle, const wchar_t *newVal);
void CkRssW_getLastErrorHtml(HCkRssW cHandle, HCkStringW retval);
void CkRssW_getLastErrorText(HCkRssW cHandle, HCkStringW retval);
void CkRssW_getLastErrorXml(HCkRssW cHandle, HCkStringW retval);
int CkRssW_getNumChannels(HCkRssW cHandle);
int CkRssW_getNumItems(HCkRssW cHandle);
BOOL CkRssW_getVerboseLogging(HCkRssW cHandle);
void CkRssW_putVerboseLogging(HCkRssW cHandle, BOOL newVal);
void CkRssW_getVersion(HCkRssW cHandle, HCkStringW retval);
HCkRssW CkRssW_AddNewChannel(HCkRssW cHandle);
HCkRssW CkRssW_AddNewImage(HCkRssW cHandle);
HCkRssW CkRssW_AddNewItem(HCkRssW cHandle);
BOOL CkRssW_DownloadRss(HCkRssW cHandle, const wchar_t *url);
BOOL CkRssW_GetAttr(HCkRssW cHandle, const wchar_t *tag, const wchar_t *attrName, HCkStringW outStr);
HCkRssW CkRssW_GetChannel(HCkRssW cHandle, int index);
int CkRssW_GetCount(HCkRssW cHandle, const wchar_t *tag);
BOOL CkRssW_GetDate(HCkRssW cHandle, const wchar_t *tag, SYSTEMTIME *outSysTime);
BOOL CkRssW_GetDateStr(HCkRssW cHandle, const wchar_t *tag, HCkStringW outStr);
HCkRssW CkRssW_GetImage(HCkRssW cHandle);
int CkRssW_GetInt(HCkRssW cHandle, const wchar_t *tag);
HCkRssW CkRssW_GetItem(HCkRssW cHandle, int index);
BOOL CkRssW_GetString(HCkRssW cHandle, const wchar_t *tag, HCkStringW outStr);
BOOL CkRssW_LoadRssFile(HCkRssW cHandle, const wchar_t *path);
BOOL CkRssW_LoadRssString(HCkRssW cHandle, const wchar_t *rssString);
BOOL CkRssW_MGetAttr(HCkRssW cHandle, const wchar_t *tag, int index, const wchar_t *attrName, HCkStringW outStr);
BOOL CkRssW_MGetString(HCkRssW cHandle, const wchar_t *tag, int index, HCkStringW outStr);
BOOL CkRssW_MSetAttr(HCkRssW cHandle, const wchar_t *tag, int index, const wchar_t *attrName, const wchar_t *value);
BOOL CkRssW_MSetString(HCkRssW cHandle, const wchar_t *tag, int index, const wchar_t *value);
void CkRssW_NewRss(HCkRssW cHandle);
void CkRssW_Remove(HCkRssW cHandle, const wchar_t *tag);
BOOL CkRssW_SaveLastError(HCkRssW cHandle, const wchar_t *path);
void CkRssW_SetAttr(HCkRssW cHandle, const wchar_t *tag, const wchar_t *attrName, const wchar_t *value);
void CkRssW_SetDate(HCkRssW cHandle, const wchar_t *tag, SYSTEMTIME *dateTime);
void CkRssW_SetDateNow(HCkRssW cHandle, const wchar_t *tag);
void CkRssW_SetDateStr(HCkRssW cHandle, const wchar_t *tag, const wchar_t *dateTimeStr);
void CkRssW_SetInt(HCkRssW cHandle, const wchar_t *tag, int value);
void CkRssW_SetString(HCkRssW cHandle, const wchar_t *tag, const wchar_t *value);
BOOL CkRssW_ToXmlString(HCkRssW cHandle, HCkStringW outStr);
const wchar_t *CkRssW__attr(HCkRssW cHandle, const wchar_t *tag, const wchar_t *attrName);
const wchar_t *CkRssW__dateStr(HCkRssW cHandle, const wchar_t *tag);
const wchar_t *CkRssW__debugLogFilePath(HCkRssW cHandle);
const wchar_t *CkRssW__getAttr(HCkRssW cHandle, const wchar_t *tag, const wchar_t *attrName);
const wchar_t *CkRssW__getDateStr(HCkRssW cHandle, const wchar_t *tag);
const wchar_t *CkRssW__getString(HCkRssW cHandle, const wchar_t *tag);
const wchar_t *CkRssW__lastErrorHtml(HCkRssW cHandle);
const wchar_t *CkRssW__lastErrorText(HCkRssW cHandle);
const wchar_t *CkRssW__lastErrorXml(HCkRssW cHandle);
const wchar_t *CkRssW__mGetAttr(HCkRssW cHandle, const wchar_t *tag, int index, const wchar_t *attrName);
const wchar_t *CkRssW__mGetString(HCkRssW cHandle, const wchar_t *tag, int index);
const wchar_t *CkRssW__string(HCkRssW cHandle, const wchar_t *tag);
const wchar_t *CkRssW__toXmlString(HCkRssW cHandle);
const wchar_t *CkRssW__version(HCkRssW cHandle);
#endif
