// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkZipEntry_W_H
#define _C_CkZipEntry_W_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkZipEntryW CkZipEntryW_Create(void);
HCkZipEntryW CkZipEntryW_Create2(BOOL bForDso);
void CkZipEntryW_Dispose(HCkZipEntryW handle);
void CkZipEntryW_getComment(HCkZipEntryW cHandle, HCkStringW retval);
void CkZipEntryW_putComment(HCkZipEntryW cHandle, const wchar_t *newVal);
unsigned long CkZipEntryW_getCompressedLength(HCkZipEntryW cHandle);
__int64 CkZipEntryW_getCompressedLength64(HCkZipEntryW cHandle);
void CkZipEntryW_getCompressedLengthStr(HCkZipEntryW cHandle, HCkStringW retval);
int CkZipEntryW_getCompressionLevel(HCkZipEntryW cHandle);
void CkZipEntryW_putCompressionLevel(HCkZipEntryW cHandle, int newVal);
int CkZipEntryW_getCompressionMethod(HCkZipEntryW cHandle);
void CkZipEntryW_putCompressionMethod(HCkZipEntryW cHandle, int newVal);
int CkZipEntryW_getCrc(HCkZipEntryW cHandle);
void CkZipEntryW_getDebugLogFilePath(HCkZipEntryW cHandle, HCkStringW retval);
void CkZipEntryW_putDebugLogFilePath(HCkZipEntryW cHandle, const wchar_t *newVal);
int CkZipEntryW_getEntryID(HCkZipEntryW cHandle);
int CkZipEntryW_getEntryType(HCkZipEntryW cHandle);
void CkZipEntryW_getFileDateTime(HCkZipEntryW cHandle, SYSTEMTIME *retval);
void CkZipEntryW_putFileDateTime(HCkZipEntryW cHandle, SYSTEMTIME *newVal);
void CkZipEntryW_getFileDateTimeStr(HCkZipEntryW cHandle, HCkStringW retval);
void CkZipEntryW_putFileDateTimeStr(HCkZipEntryW cHandle, const wchar_t *newVal);
void CkZipEntryW_getFileName(HCkZipEntryW cHandle, HCkStringW retval);
void CkZipEntryW_putFileName(HCkZipEntryW cHandle, const wchar_t *newVal);
int CkZipEntryW_getHeartbeatMs(HCkZipEntryW cHandle);
void CkZipEntryW_putHeartbeatMs(HCkZipEntryW cHandle, int newVal);
BOOL CkZipEntryW_getIsDirectory(HCkZipEntryW cHandle);
void CkZipEntryW_getLastErrorHtml(HCkZipEntryW cHandle, HCkStringW retval);
void CkZipEntryW_getLastErrorText(HCkZipEntryW cHandle, HCkStringW retval);
void CkZipEntryW_getLastErrorXml(HCkZipEntryW cHandle, HCkStringW retval);
BOOL CkZipEntryW_getTextFlag(HCkZipEntryW cHandle);
void CkZipEntryW_putTextFlag(HCkZipEntryW cHandle, BOOL newVal);
unsigned long CkZipEntryW_getUncompressedLength(HCkZipEntryW cHandle);
__int64 CkZipEntryW_getUncompressedLength64(HCkZipEntryW cHandle);
void CkZipEntryW_getUncompressedLengthStr(HCkZipEntryW cHandle, HCkStringW retval);
BOOL CkZipEntryW_getVerboseLogging(HCkZipEntryW cHandle);
void CkZipEntryW_putVerboseLogging(HCkZipEntryW cHandle, BOOL newVal);
void CkZipEntryW_getVersion(HCkZipEntryW cHandle, HCkStringW retval);
BOOL CkZipEntryW_AppendData(HCkZipEntryW cHandle, HCkByteDataW bdata);
BOOL CkZipEntryW_AppendString(HCkZipEntryW cHandle, const wchar_t *inStr, const wchar_t *charset);
BOOL CkZipEntryW_Copy(HCkZipEntryW cHandle, HCkByteDataW outData);
BOOL CkZipEntryW_CopyToBase64(HCkZipEntryW cHandle, HCkStringW outStr);
BOOL CkZipEntryW_CopyToHex(HCkZipEntryW cHandle, HCkStringW outStr);
BOOL CkZipEntryW_Extract(HCkZipEntryW cHandle, const wchar_t *dirPath);
BOOL CkZipEntryW_ExtractInto(HCkZipEntryW cHandle, const wchar_t *dirPath);
HCkDateTimeW CkZipEntryW_GetDt(HCkZipEntryW cHandle);
BOOL CkZipEntryW_Inflate(HCkZipEntryW cHandle, HCkByteDataW outData);
HCkZipEntryW CkZipEntryW_NextEntry(HCkZipEntryW cHandle);
BOOL CkZipEntryW_ReplaceData(HCkZipEntryW cHandle, HCkByteDataW bdata);
BOOL CkZipEntryW_ReplaceString(HCkZipEntryW cHandle, const wchar_t *inStr, const wchar_t *charset);
BOOL CkZipEntryW_SaveLastError(HCkZipEntryW cHandle, const wchar_t *path);
void CkZipEntryW_SetDt(HCkZipEntryW cHandle, HCkDateTimeW dt);
BOOL CkZipEntryW_UnzipToString(HCkZipEntryW cHandle, int lineEndingBehavior, const wchar_t *srcCharset, HCkStringW outStr);
const wchar_t *CkZipEntryW__comment(HCkZipEntryW cHandle);
const wchar_t *CkZipEntryW__compressedLengthStr(HCkZipEntryW cHandle);
const wchar_t *CkZipEntryW__copyToBase64(HCkZipEntryW cHandle);
const wchar_t *CkZipEntryW__copyToHex(HCkZipEntryW cHandle);
const wchar_t *CkZipEntryW__debugLogFilePath(HCkZipEntryW cHandle);
const wchar_t *CkZipEntryW__fileDateTimeStr(HCkZipEntryW cHandle);
const wchar_t *CkZipEntryW__fileName(HCkZipEntryW cHandle);
const wchar_t *CkZipEntryW__lastErrorHtml(HCkZipEntryW cHandle);
const wchar_t *CkZipEntryW__lastErrorText(HCkZipEntryW cHandle);
const wchar_t *CkZipEntryW__lastErrorXml(HCkZipEntryW cHandle);
const wchar_t *CkZipEntryW__uncompressedLengthStr(HCkZipEntryW cHandle);
const wchar_t *CkZipEntryW__unzipToString(HCkZipEntryW cHandle, int lineEndingBehavior, const wchar_t *srcCharset);
const wchar_t *CkZipEntryW__version(HCkZipEntryW cHandle);
#endif
