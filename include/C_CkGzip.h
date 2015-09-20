// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkGzip_H
#define _C_CkGzip_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkGzip CkGzip_Create(void);
void CkGzip_Dispose(HCkGzip handle);
void CkGzip_getComment(HCkGzip cHandle, HCkString retval);
void CkGzip_putComment(HCkGzip cHandle, const char *newVal);
void CkGzip_getDebugLogFilePath(HCkGzip cHandle, HCkString retval);
void CkGzip_putDebugLogFilePath(HCkGzip cHandle, const char *newVal);
void CkGzip_getExtraData(HCkGzip cHandle, HCkByteData retval);
void CkGzip_putExtraData(HCkGzip cHandle, HCkByteData  newVal);
void CkGzip_getFilename(HCkGzip cHandle, HCkString retval);
void CkGzip_putFilename(HCkGzip cHandle, const char *newVal);
int CkGzip_getHeartbeatMs(HCkGzip cHandle);
void CkGzip_putHeartbeatMs(HCkGzip cHandle, int newVal);
void CkGzip_getLastErrorHtml(HCkGzip cHandle, HCkString retval);
void CkGzip_getLastErrorText(HCkGzip cHandle, HCkString retval);
void CkGzip_getLastErrorXml(HCkGzip cHandle, HCkString retval);
void CkGzip_getLastMod(HCkGzip cHandle, SYSTEMTIME *retval);
void CkGzip_putLastMod(HCkGzip cHandle, SYSTEMTIME *newVal);
void CkGzip_getLastModStr(HCkGzip cHandle, HCkString retval);
void CkGzip_putLastModStr(HCkGzip cHandle, const char *newVal);
BOOL CkGzip_getUseCurrentDate(HCkGzip cHandle);
void CkGzip_putUseCurrentDate(HCkGzip cHandle, BOOL newVal);
BOOL CkGzip_getUtf8(HCkGzip cHandle);
void CkGzip_putUtf8(HCkGzip cHandle, BOOL newVal);
BOOL CkGzip_getVerboseLogging(HCkGzip cHandle);
void CkGzip_putVerboseLogging(HCkGzip cHandle, BOOL newVal);
void CkGzip_getVersion(HCkGzip cHandle, HCkString retval);
BOOL CkGzip_CompressFile(HCkGzip cHandle, const char *srcPath, const char *destPath);
BOOL CkGzip_CompressFile2(HCkGzip cHandle, const char *srcPath, const char *embeddedFilename, const char *destPath);
BOOL CkGzip_CompressFileToMem(HCkGzip cHandle, const char *srcPath, HCkByteData outData);
BOOL CkGzip_CompressMemToFile(HCkGzip cHandle, HCkByteData db, const char *destPath);
BOOL CkGzip_CompressMemory(HCkGzip cHandle, HCkByteData dbIn, HCkByteData outData);
BOOL CkGzip_CompressString(HCkGzip cHandle, const char *inStr, const char *destCharset, HCkByteData outBytes);
BOOL CkGzip_CompressStringENC(HCkGzip cHandle, const char *strIn, const char *charset, const char *encoding, HCkString outStr);
BOOL CkGzip_CompressStringToFile(HCkGzip cHandle, const char *inStr, const char *destCharset, const char *destPath);
BOOL CkGzip_Decode(HCkGzip cHandle, const char *str, const char *encoding, HCkByteData outBytes);
BOOL CkGzip_DeflateStringENC(HCkGzip cHandle, const char *str, const char *charset, const char *encoding, HCkString outStr);
BOOL CkGzip_Encode(HCkGzip cHandle, HCkByteData byteData, const char *encoding, HCkString outStr);
BOOL CkGzip_ExamineFile(HCkGzip cHandle, const char *inGzPath);
BOOL CkGzip_ExamineMemory(HCkGzip cHandle, HCkByteData inGzData);
HCkDateTime CkGzip_GetDt(HCkGzip cHandle);
BOOL CkGzip_InflateStringENC(HCkGzip cHandle, const char *str, const char *charset, const char *encoding, HCkString outStr);
BOOL CkGzip_IsUnlocked(HCkGzip cHandle);
BOOL CkGzip_ReadFile(HCkGzip cHandle, const char *path, HCkByteData outBytes);
BOOL CkGzip_SaveLastError(HCkGzip cHandle, const char *path);
BOOL CkGzip_SetDt(HCkGzip cHandle, HCkDateTime dt);
BOOL CkGzip_UnTarGz(HCkGzip cHandle, const char *gzPath, const char *destDir, BOOL bNoAbsolute);
BOOL CkGzip_UncompressFile(HCkGzip cHandle, const char *srcPath, const char *destPath);
BOOL CkGzip_UncompressFileToMem(HCkGzip cHandle, const char *srcPath, HCkByteData outData);
BOOL CkGzip_UncompressFileToString(HCkGzip cHandle, const char *srcPath, const char *inCharset, HCkString outStr);
BOOL CkGzip_UncompressMemToFile(HCkGzip cHandle, HCkByteData db, const char *destPath);
BOOL CkGzip_UncompressMemory(HCkGzip cHandle, HCkByteData dbIn, HCkByteData outData);
BOOL CkGzip_UncompressString(HCkGzip cHandle, HCkByteData inData, const char *inCharset, HCkString outStr);
BOOL CkGzip_UncompressStringENC(HCkGzip cHandle, const char *strIn, const char *charset, const char *encoding, HCkString outStr);
BOOL CkGzip_UnlockComponent(HCkGzip cHandle, const char *unlockCode);
BOOL CkGzip_WriteFile(HCkGzip cHandle, const char *path, HCkByteData binaryData);
BOOL CkGzip_XfdlToXml(HCkGzip cHandle, const char *xfdl, HCkString outStr);
const char *CkGzip_comment(HCkGzip cHandle);
const char *CkGzip_compressStringENC(HCkGzip cHandle, const char *strIn, const char *charset, const char *encoding);
const char *CkGzip_debugLogFilePath(HCkGzip cHandle);
const char *CkGzip_deflateStringENC(HCkGzip cHandle, const char *str, const char *charset, const char *encoding);
const char *CkGzip_encode(HCkGzip cHandle, HCkByteData byteData, const char *encoding);
const char *CkGzip_filename(HCkGzip cHandle);
const char *CkGzip_inflateStringENC(HCkGzip cHandle, const char *str, const char *charset, const char *encoding);
const char *CkGzip_lastErrorHtml(HCkGzip cHandle);
const char *CkGzip_lastErrorText(HCkGzip cHandle);
const char *CkGzip_lastErrorXml(HCkGzip cHandle);
const char *CkGzip_lastModStr(HCkGzip cHandle);
const char *CkGzip_uncompressFileToString(HCkGzip cHandle, const char *srcPath, const char *inCharset);
const char *CkGzip_uncompressString(HCkGzip cHandle, HCkByteData inData, const char *inCharset);
const char *CkGzip_uncompressStringENC(HCkGzip cHandle, const char *strIn, const char *charset, const char *encoding);
const char *CkGzip_version(HCkGzip cHandle);
const char *CkGzip_xfdlToXml(HCkGzip cHandle, const char *xfdl);
#endif
