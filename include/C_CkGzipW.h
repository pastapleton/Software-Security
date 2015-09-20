// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkGzip_W_H
#define _C_CkGzip_W_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkGzipW CkGzipW_Create(void);
HCkGzipW CkGzipW_Create2(BOOL bForDso);
void CkGzipW_Dispose(HCkGzipW handle);
void CkGzipW_getComment(HCkGzipW cHandle, HCkStringW retval);
void CkGzipW_putComment(HCkGzipW cHandle, const wchar_t *newVal);
void CkGzipW_getDebugLogFilePath(HCkGzipW cHandle, HCkStringW retval);
void CkGzipW_putDebugLogFilePath(HCkGzipW cHandle, const wchar_t *newVal);
void CkGzipW_getExtraData(HCkGzipW cHandle, HCkByteDataW retval);
void CkGzipW_putExtraData(HCkGzipW cHandle, HCkByteDataW  newVal);
void CkGzipW_getFilename(HCkGzipW cHandle, HCkStringW retval);
void CkGzipW_putFilename(HCkGzipW cHandle, const wchar_t *newVal);
int CkGzipW_getHeartbeatMs(HCkGzipW cHandle);
void CkGzipW_putHeartbeatMs(HCkGzipW cHandle, int newVal);
void CkGzipW_getLastErrorHtml(HCkGzipW cHandle, HCkStringW retval);
void CkGzipW_getLastErrorText(HCkGzipW cHandle, HCkStringW retval);
void CkGzipW_getLastErrorXml(HCkGzipW cHandle, HCkStringW retval);
void CkGzipW_getLastMod(HCkGzipW cHandle, SYSTEMTIME *retval);
void CkGzipW_putLastMod(HCkGzipW cHandle, SYSTEMTIME *newVal);
void CkGzipW_getLastModStr(HCkGzipW cHandle, HCkStringW retval);
void CkGzipW_putLastModStr(HCkGzipW cHandle, const wchar_t *newVal);
BOOL CkGzipW_getUseCurrentDate(HCkGzipW cHandle);
void CkGzipW_putUseCurrentDate(HCkGzipW cHandle, BOOL newVal);
BOOL CkGzipW_getVerboseLogging(HCkGzipW cHandle);
void CkGzipW_putVerboseLogging(HCkGzipW cHandle, BOOL newVal);
void CkGzipW_getVersion(HCkGzipW cHandle, HCkStringW retval);
BOOL CkGzipW_CompressFile(HCkGzipW cHandle, const wchar_t *srcPath, const wchar_t *destPath);
BOOL CkGzipW_CompressFile2(HCkGzipW cHandle, const wchar_t *srcPath, const wchar_t *embeddedFilename, const wchar_t *destPath);
BOOL CkGzipW_CompressFileToMem(HCkGzipW cHandle, const wchar_t *srcPath, HCkByteDataW outData);
BOOL CkGzipW_CompressMemToFile(HCkGzipW cHandle, HCkByteDataW db, const wchar_t *destPath);
BOOL CkGzipW_CompressMemory(HCkGzipW cHandle, HCkByteDataW dbIn, HCkByteDataW outData);
BOOL CkGzipW_CompressString(HCkGzipW cHandle, const wchar_t *inStr, const wchar_t *destCharset, HCkByteDataW outBytes);
BOOL CkGzipW_CompressStringENC(HCkGzipW cHandle, const wchar_t *strIn, const wchar_t *charset, const wchar_t *encoding, HCkStringW outStr);
BOOL CkGzipW_CompressStringToFile(HCkGzipW cHandle, const wchar_t *inStr, const wchar_t *destCharset, const wchar_t *destPath);
BOOL CkGzipW_Decode(HCkGzipW cHandle, const wchar_t *str, const wchar_t *encoding, HCkByteDataW outBytes);
BOOL CkGzipW_DeflateStringENC(HCkGzipW cHandle, const wchar_t *str, const wchar_t *charset, const wchar_t *encoding, HCkStringW outStr);
BOOL CkGzipW_Encode(HCkGzipW cHandle, HCkByteDataW byteData, const wchar_t *encoding, HCkStringW outStr);
BOOL CkGzipW_ExamineFile(HCkGzipW cHandle, const wchar_t *inGzPath);
BOOL CkGzipW_ExamineMemory(HCkGzipW cHandle, HCkByteDataW inGzData);
HCkDateTimeW CkGzipW_GetDt(HCkGzipW cHandle);
BOOL CkGzipW_InflateStringENC(HCkGzipW cHandle, const wchar_t *str, const wchar_t *charset, const wchar_t *encoding, HCkStringW outStr);
BOOL CkGzipW_IsUnlocked(HCkGzipW cHandle);
BOOL CkGzipW_ReadFile(HCkGzipW cHandle, const wchar_t *path, HCkByteDataW outBytes);
BOOL CkGzipW_SaveLastError(HCkGzipW cHandle, const wchar_t *path);
BOOL CkGzipW_SetDt(HCkGzipW cHandle, HCkDateTimeW dt);
BOOL CkGzipW_UnTarGz(HCkGzipW cHandle, const wchar_t *gzPath, const wchar_t *destDir, BOOL bNoAbsolute);
BOOL CkGzipW_UncompressFile(HCkGzipW cHandle, const wchar_t *srcPath, const wchar_t *destPath);
BOOL CkGzipW_UncompressFileToMem(HCkGzipW cHandle, const wchar_t *srcPath, HCkByteDataW outData);
BOOL CkGzipW_UncompressFileToString(HCkGzipW cHandle, const wchar_t *srcPath, const wchar_t *inCharset, HCkStringW outStr);
BOOL CkGzipW_UncompressMemToFile(HCkGzipW cHandle, HCkByteDataW db, const wchar_t *destPath);
BOOL CkGzipW_UncompressMemory(HCkGzipW cHandle, HCkByteDataW dbIn, HCkByteDataW outData);
BOOL CkGzipW_UncompressString(HCkGzipW cHandle, HCkByteDataW inData, const wchar_t *inCharset, HCkStringW outStr);
BOOL CkGzipW_UncompressStringENC(HCkGzipW cHandle, const wchar_t *strIn, const wchar_t *charset, const wchar_t *encoding, HCkStringW outStr);
BOOL CkGzipW_UnlockComponent(HCkGzipW cHandle, const wchar_t *unlockCode);
BOOL CkGzipW_WriteFile(HCkGzipW cHandle, const wchar_t *path, HCkByteDataW binaryData);
BOOL CkGzipW_XfdlToXml(HCkGzipW cHandle, const wchar_t *xfdl, HCkStringW outStr);
const wchar_t *CkGzipW__comment(HCkGzipW cHandle);
const wchar_t *CkGzipW__compressStringENC(HCkGzipW cHandle, const wchar_t *strIn, const wchar_t *charset, const wchar_t *encoding);
const wchar_t *CkGzipW__debugLogFilePath(HCkGzipW cHandle);
const wchar_t *CkGzipW__deflateStringENC(HCkGzipW cHandle, const wchar_t *str, const wchar_t *charset, const wchar_t *encoding);
const wchar_t *CkGzipW__encode(HCkGzipW cHandle, HCkByteDataW byteData, const wchar_t *encoding);
const wchar_t *CkGzipW__filename(HCkGzipW cHandle);
const wchar_t *CkGzipW__inflateStringENC(HCkGzipW cHandle, const wchar_t *str, const wchar_t *charset, const wchar_t *encoding);
const wchar_t *CkGzipW__lastErrorHtml(HCkGzipW cHandle);
const wchar_t *CkGzipW__lastErrorText(HCkGzipW cHandle);
const wchar_t *CkGzipW__lastErrorXml(HCkGzipW cHandle);
const wchar_t *CkGzipW__lastModStr(HCkGzipW cHandle);
const wchar_t *CkGzipW__uncompressFileToString(HCkGzipW cHandle, const wchar_t *srcPath, const wchar_t *inCharset);
const wchar_t *CkGzipW__uncompressString(HCkGzipW cHandle, HCkByteDataW inData, const wchar_t *inCharset);
const wchar_t *CkGzipW__uncompressStringENC(HCkGzipW cHandle, const wchar_t *strIn, const wchar_t *charset, const wchar_t *encoding);
const wchar_t *CkGzipW__version(HCkGzipW cHandle);
const wchar_t *CkGzipW__xfdlToXml(HCkGzipW cHandle, const wchar_t *xfdl);
#endif
