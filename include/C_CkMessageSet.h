// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkMessageSet_H
#define _C_CkMessageSet_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkMessageSet CkMessageSet_Create(void);
void CkMessageSet_Dispose(HCkMessageSet handle);
int CkMessageSet_getCount(HCkMessageSet cHandle);
void CkMessageSet_getDebugLogFilePath(HCkMessageSet cHandle, HCkString retval);
void CkMessageSet_putDebugLogFilePath(HCkMessageSet cHandle, const char *newVal);
BOOL CkMessageSet_getHasUids(HCkMessageSet cHandle);
void CkMessageSet_putHasUids(HCkMessageSet cHandle, BOOL newVal);
void CkMessageSet_getLastErrorHtml(HCkMessageSet cHandle, HCkString retval);
void CkMessageSet_getLastErrorText(HCkMessageSet cHandle, HCkString retval);
void CkMessageSet_getLastErrorXml(HCkMessageSet cHandle, HCkString retval);
BOOL CkMessageSet_getUtf8(HCkMessageSet cHandle);
void CkMessageSet_putUtf8(HCkMessageSet cHandle, BOOL newVal);
BOOL CkMessageSet_getVerboseLogging(HCkMessageSet cHandle);
void CkMessageSet_putVerboseLogging(HCkMessageSet cHandle, BOOL newVal);
void CkMessageSet_getVersion(HCkMessageSet cHandle, HCkString retval);
BOOL CkMessageSet_ContainsId(HCkMessageSet cHandle, int id);
BOOL CkMessageSet_FromCompactString(HCkMessageSet cHandle, const char *str);
int CkMessageSet_GetId(HCkMessageSet cHandle, int index);
void CkMessageSet_InsertId(HCkMessageSet cHandle, int id);
void CkMessageSet_RemoveId(HCkMessageSet cHandle, int id);
BOOL CkMessageSet_SaveLastError(HCkMessageSet cHandle, const char *path);
BOOL CkMessageSet_ToCompactString(HCkMessageSet cHandle, HCkString outStr);
BOOL CkMessageSet_ToString(HCkMessageSet cHandle, HCkString outStr);
const char *CkMessageSet_debugLogFilePath(HCkMessageSet cHandle);
const char *CkMessageSet_lastErrorHtml(HCkMessageSet cHandle);
const char *CkMessageSet_lastErrorText(HCkMessageSet cHandle);
const char *CkMessageSet_lastErrorXml(HCkMessageSet cHandle);
const char *CkMessageSet_toCompactString(HCkMessageSet cHandle);
const char *CkMessageSet_toString(HCkMessageSet cHandle);
const char *CkMessageSet_version(HCkMessageSet cHandle);
#endif
