// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkMessageSet_W_H
#define _C_CkMessageSet_W_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkMessageSetW CkMessageSetW_Create(void);
HCkMessageSetW CkMessageSetW_Create2(BOOL bForDso);
void CkMessageSetW_Dispose(HCkMessageSetW handle);
int CkMessageSetW_getCount(HCkMessageSetW cHandle);
void CkMessageSetW_getDebugLogFilePath(HCkMessageSetW cHandle, HCkStringW retval);
void CkMessageSetW_putDebugLogFilePath(HCkMessageSetW cHandle, const wchar_t *newVal);
BOOL CkMessageSetW_getHasUids(HCkMessageSetW cHandle);
void CkMessageSetW_putHasUids(HCkMessageSetW cHandle, BOOL newVal);
void CkMessageSetW_getLastErrorHtml(HCkMessageSetW cHandle, HCkStringW retval);
void CkMessageSetW_getLastErrorText(HCkMessageSetW cHandle, HCkStringW retval);
void CkMessageSetW_getLastErrorXml(HCkMessageSetW cHandle, HCkStringW retval);
BOOL CkMessageSetW_getVerboseLogging(HCkMessageSetW cHandle);
void CkMessageSetW_putVerboseLogging(HCkMessageSetW cHandle, BOOL newVal);
void CkMessageSetW_getVersion(HCkMessageSetW cHandle, HCkStringW retval);
BOOL CkMessageSetW_ContainsId(HCkMessageSetW cHandle, int id);
BOOL CkMessageSetW_FromCompactString(HCkMessageSetW cHandle, const wchar_t *str);
int CkMessageSetW_GetId(HCkMessageSetW cHandle, int index);
void CkMessageSetW_InsertId(HCkMessageSetW cHandle, int id);
void CkMessageSetW_RemoveId(HCkMessageSetW cHandle, int id);
BOOL CkMessageSetW_SaveLastError(HCkMessageSetW cHandle, const wchar_t *path);
BOOL CkMessageSetW_ToCompactString(HCkMessageSetW cHandle, HCkStringW outStr);
BOOL CkMessageSetW_ToString(HCkMessageSetW cHandle, HCkStringW outStr);
const wchar_t *CkMessageSetW__debugLogFilePath(HCkMessageSetW cHandle);
const wchar_t *CkMessageSetW__lastErrorHtml(HCkMessageSetW cHandle);
const wchar_t *CkMessageSetW__lastErrorText(HCkMessageSetW cHandle);
const wchar_t *CkMessageSetW__lastErrorXml(HCkMessageSetW cHandle);
const wchar_t *CkMessageSetW__toCompactString(HCkMessageSetW cHandle);
const wchar_t *CkMessageSetW__toString(HCkMessageSetW cHandle);
const wchar_t *CkMessageSetW__version(HCkMessageSetW cHandle);
#endif
