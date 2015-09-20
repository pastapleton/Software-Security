// This is a generated source file for Chilkat version 9.4.1.35
#ifndef _C_CkFileAccess_H
#define _C_CkFileAccess_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkFileAccess CkFileAccess_Create(void);
void CkFileAccess_Dispose(HCkFileAccess handle);
void CkFileAccess_getCurrentDir(HCkFileAccess cHandle, HCkString retval);
void CkFileAccess_getDebugLogFilePath(HCkFileAccess cHandle, HCkString retval);
void CkFileAccess_putDebugLogFilePath(HCkFileAccess cHandle, const char *newVal);
BOOL CkFileAccess_getEndOfFile(HCkFileAccess cHandle);
int CkFileAccess_getFileOpenError(HCkFileAccess cHandle);
void CkFileAccess_getFileOpenErrorMsg(HCkFileAccess cHandle, HCkString retval);
void CkFileAccess_getLastErrorHtml(HCkFileAccess cHandle, HCkString retval);
void CkFileAccess_getLastErrorText(HCkFileAccess cHandle, HCkString retval);
void CkFileAccess_getLastErrorXml(HCkFileAccess cHandle, HCkString retval);
BOOL CkFileAccess_getUtf8(HCkFileAccess cHandle);
void CkFileAccess_putUtf8(HCkFileAccess cHandle, BOOL newVal);
BOOL CkFileAccess_getVerboseLogging(HCkFileAccess cHandle);
void CkFileAccess_putVerboseLogging(HCkFileAccess cHandle, BOOL newVal);
void CkFileAccess_getVersion(HCkFileAccess cHandle, HCkString retval);
BOOL CkFileAccess_AppendAnsi(HCkFileAccess cHandle, const char *text);
BOOL CkFileAccess_AppendText(HCkFileAccess cHandle, const char *text, const char *charset);
BOOL CkFileAccess_AppendUnicodeBOM(HCkFileAccess cHandle);
BOOL CkFileAccess_AppendUtf8BOM(HCkFileAccess cHandle);
BOOL CkFileAccess_DirAutoCreate(HCkFileAccess cHandle, const char *path);
BOOL CkFileAccess_DirCreate(HCkFileAccess cHandle, const char *path);
BOOL CkFileAccess_DirDelete(HCkFileAccess cHandle, const char *path);
BOOL CkFileAccess_DirEnsureExists(HCkFileAccess cHandle, const char *filePath);
void CkFileAccess_FileClose(HCkFileAccess cHandle);
BOOL CkFileAccess_FileContentsEqual(HCkFileAccess cHandle, const char *path1, const char *path2);
BOOL CkFileAccess_FileCopy(HCkFileAccess cHandle, const char *existingPath, const char *newPath, BOOL failIfExists);
BOOL CkFileAccess_FileDelete(HCkFileAccess cHandle, const char *path);
BOOL CkFileAccess_FileExists(HCkFileAccess cHandle, const char *path);
BOOL CkFileAccess_FileOpen(HCkFileAccess cHandle, const char *path, unsigned long accessMode, unsigned long shareMode, unsigned long createDisp, unsigned long attr);
BOOL CkFileAccess_FileRead(HCkFileAccess cHandle, int numBytes, HCkByteData outBytes);
BOOL CkFileAccess_FileRename(HCkFileAccess cHandle, const char *existingPath, const char *newPath);
BOOL CkFileAccess_FileSeek(HCkFileAccess cHandle, int offset, int origin);
int CkFileAccess_FileSize(HCkFileAccess cHandle, const char *path);
BOOL CkFileAccess_FileWrite(HCkFileAccess cHandle, HCkByteData data);
BOOL CkFileAccess_GetTempFilename(HCkFileAccess cHandle, const char *dirName, const char *prefix, HCkString outStr);
BOOL CkFileAccess_OpenForAppend(HCkFileAccess cHandle, const char *filePath);
BOOL CkFileAccess_OpenForRead(HCkFileAccess cHandle, const char *filePath);
BOOL CkFileAccess_OpenForReadWrite(HCkFileAccess cHandle, const char *filePath);
BOOL CkFileAccess_OpenForWrite(HCkFileAccess cHandle, const char *filePath);
BOOL CkFileAccess_ReadBinaryToEncoded(HCkFileAccess cHandle, const char *path, const char *encoding, HCkString outStr);
BOOL CkFileAccess_ReadEntireFile(HCkFileAccess cHandle, const char *path, HCkByteData outBytes);
BOOL CkFileAccess_ReadEntireTextFile(HCkFileAccess cHandle, const char *path, const char *charset, HCkString outStrFileContents);
BOOL CkFileAccess_ReassembleFile(HCkFileAccess cHandle, const char *partsDirPath, const char *partPrefix, const char *partExtension, const char *reassembledFilename);
int CkFileAccess_ReplaceStrings(HCkFileAccess cHandle, const char *path, const char *charset, const char *existingString, const char *replacementString);
BOOL CkFileAccess_SaveLastError(HCkFileAccess cHandle, const char *path);
BOOL CkFileAccess_SetCurrentDir(HCkFileAccess cHandle, const char *path);
BOOL CkFileAccess_SetFileTimes(HCkFileAccess cHandle, const char *path, HCkDateTime create, HCkDateTime lastAccess, HCkDateTime lastModified);
BOOL CkFileAccess_SetLastModified(HCkFileAccess cHandle, const char *path, HCkDateTime lastModified);
BOOL CkFileAccess_SplitFile(HCkFileAccess cHandle, const char *fileToSplit, const char *partPrefix, const char *partExtension, int partSize, const char *destDir);
BOOL CkFileAccess_TreeDelete(HCkFileAccess cHandle, const char *path);
BOOL CkFileAccess_WriteEntireFile(HCkFileAccess cHandle, const char *path, HCkByteData fileData);
BOOL CkFileAccess_WriteEntireTextFile(HCkFileAccess cHandle, const char *path, const char *fileData, const char *charset, BOOL includePreamble);
const char *CkFileAccess_currentDir(HCkFileAccess cHandle);
const char *CkFileAccess_debugLogFilePath(HCkFileAccess cHandle);
const char *CkFileAccess_fileOpenErrorMsg(HCkFileAccess cHandle);
const char *CkFileAccess_getTempFilename(HCkFileAccess cHandle, const char *dirName, const char *prefix);
const char *CkFileAccess_lastErrorHtml(HCkFileAccess cHandle);
const char *CkFileAccess_lastErrorText(HCkFileAccess cHandle);
const char *CkFileAccess_lastErrorXml(HCkFileAccess cHandle);
const char *CkFileAccess_readBinaryToEncoded(HCkFileAccess cHandle, const char *path, const char *encoding);
const char *CkFileAccess_readEntireTextFile(HCkFileAccess cHandle, const char *path, const char *charset);
const char *CkFileAccess_tempFilename(HCkFileAccess cHandle, const char *dirName, const char *prefix);
const char *CkFileAccess_version(HCkFileAccess cHandle);
#endif
