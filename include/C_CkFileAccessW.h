// This is a generated source file for Chilkat version 9.4.1.35
#ifndef _C_CkFileAccess_W_H
#define _C_CkFileAccess_W_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkFileAccessW CkFileAccessW_Create(void);
HCkFileAccessW CkFileAccessW_Create2(BOOL bForDso);
void CkFileAccessW_Dispose(HCkFileAccessW handle);
void CkFileAccessW_getCurrentDir(HCkFileAccessW cHandle, HCkStringW retval);
void CkFileAccessW_getDebugLogFilePath(HCkFileAccessW cHandle, HCkStringW retval);
void CkFileAccessW_putDebugLogFilePath(HCkFileAccessW cHandle, const wchar_t *newVal);
BOOL CkFileAccessW_getEndOfFile(HCkFileAccessW cHandle);
int CkFileAccessW_getFileOpenError(HCkFileAccessW cHandle);
void CkFileAccessW_getFileOpenErrorMsg(HCkFileAccessW cHandle, HCkStringW retval);
void CkFileAccessW_getLastErrorHtml(HCkFileAccessW cHandle, HCkStringW retval);
void CkFileAccessW_getLastErrorText(HCkFileAccessW cHandle, HCkStringW retval);
void CkFileAccessW_getLastErrorXml(HCkFileAccessW cHandle, HCkStringW retval);
BOOL CkFileAccessW_getVerboseLogging(HCkFileAccessW cHandle);
void CkFileAccessW_putVerboseLogging(HCkFileAccessW cHandle, BOOL newVal);
void CkFileAccessW_getVersion(HCkFileAccessW cHandle, HCkStringW retval);
BOOL CkFileAccessW_AppendAnsi(HCkFileAccessW cHandle, const wchar_t *text);
BOOL CkFileAccessW_AppendText(HCkFileAccessW cHandle, const wchar_t *text, const wchar_t *charset);
BOOL CkFileAccessW_AppendUnicodeBOM(HCkFileAccessW cHandle);
BOOL CkFileAccessW_AppendUtf8BOM(HCkFileAccessW cHandle);
BOOL CkFileAccessW_DirAutoCreate(HCkFileAccessW cHandle, const wchar_t *path);
BOOL CkFileAccessW_DirCreate(HCkFileAccessW cHandle, const wchar_t *path);
BOOL CkFileAccessW_DirDelete(HCkFileAccessW cHandle, const wchar_t *path);
BOOL CkFileAccessW_DirEnsureExists(HCkFileAccessW cHandle, const wchar_t *filePath);
void CkFileAccessW_FileClose(HCkFileAccessW cHandle);
BOOL CkFileAccessW_FileContentsEqual(HCkFileAccessW cHandle, const wchar_t *path1, const wchar_t *path2);
BOOL CkFileAccessW_FileCopy(HCkFileAccessW cHandle, const wchar_t *existingPath, const wchar_t *newPath, BOOL failIfExists);
BOOL CkFileAccessW_FileDelete(HCkFileAccessW cHandle, const wchar_t *path);
BOOL CkFileAccessW_FileExists(HCkFileAccessW cHandle, const wchar_t *path);
BOOL CkFileAccessW_FileOpen(HCkFileAccessW cHandle, const wchar_t *path, unsigned long accessMode, unsigned long shareMode, unsigned long createDisp, unsigned long attr);
BOOL CkFileAccessW_FileRead(HCkFileAccessW cHandle, int numBytes, HCkByteDataW outBytes);
BOOL CkFileAccessW_FileRename(HCkFileAccessW cHandle, const wchar_t *existingPath, const wchar_t *newPath);
BOOL CkFileAccessW_FileSeek(HCkFileAccessW cHandle, int offset, int origin);
int CkFileAccessW_FileSize(HCkFileAccessW cHandle, const wchar_t *path);
BOOL CkFileAccessW_FileWrite(HCkFileAccessW cHandle, HCkByteDataW data);
BOOL CkFileAccessW_GetTempFilename(HCkFileAccessW cHandle, const wchar_t *dirName, const wchar_t *prefix, HCkStringW outStr);
BOOL CkFileAccessW_OpenForAppend(HCkFileAccessW cHandle, const wchar_t *filePath);
BOOL CkFileAccessW_OpenForRead(HCkFileAccessW cHandle, const wchar_t *filePath);
BOOL CkFileAccessW_OpenForReadWrite(HCkFileAccessW cHandle, const wchar_t *filePath);
BOOL CkFileAccessW_OpenForWrite(HCkFileAccessW cHandle, const wchar_t *filePath);
BOOL CkFileAccessW_ReadBinaryToEncoded(HCkFileAccessW cHandle, const wchar_t *path, const wchar_t *encoding, HCkStringW outStr);
BOOL CkFileAccessW_ReadEntireFile(HCkFileAccessW cHandle, const wchar_t *path, HCkByteDataW outBytes);
BOOL CkFileAccessW_ReadEntireTextFile(HCkFileAccessW cHandle, const wchar_t *path, const wchar_t *charset, HCkStringW outStrFileContents);
BOOL CkFileAccessW_ReassembleFile(HCkFileAccessW cHandle, const wchar_t *partsDirPath, const wchar_t *partPrefix, const wchar_t *partExtension, const wchar_t *reassembledFilename);
int CkFileAccessW_ReplaceStrings(HCkFileAccessW cHandle, const wchar_t *path, const wchar_t *charset, const wchar_t *existingString, const wchar_t *replacementString);
BOOL CkFileAccessW_SaveLastError(HCkFileAccessW cHandle, const wchar_t *path);
BOOL CkFileAccessW_SetCurrentDir(HCkFileAccessW cHandle, const wchar_t *path);
BOOL CkFileAccessW_SetFileTimes(HCkFileAccessW cHandle, const wchar_t *path, HCkDateTimeW create, HCkDateTimeW lastAccess, HCkDateTimeW lastModified);
BOOL CkFileAccessW_SetLastModified(HCkFileAccessW cHandle, const wchar_t *path, HCkDateTimeW lastModified);
BOOL CkFileAccessW_SplitFile(HCkFileAccessW cHandle, const wchar_t *fileToSplit, const wchar_t *partPrefix, const wchar_t *partExtension, int partSize, const wchar_t *destDir);
BOOL CkFileAccessW_TreeDelete(HCkFileAccessW cHandle, const wchar_t *path);
BOOL CkFileAccessW_WriteEntireFile(HCkFileAccessW cHandle, const wchar_t *path, HCkByteDataW fileData);
BOOL CkFileAccessW_WriteEntireTextFile(HCkFileAccessW cHandle, const wchar_t *path, const wchar_t *fileData, const wchar_t *charset, BOOL includePreamble);
const wchar_t *CkFileAccessW__currentDir(HCkFileAccessW cHandle);
const wchar_t *CkFileAccessW__debugLogFilePath(HCkFileAccessW cHandle);
const wchar_t *CkFileAccessW__fileOpenErrorMsg(HCkFileAccessW cHandle);
const wchar_t *CkFileAccessW__getTempFilename(HCkFileAccessW cHandle, const wchar_t *dirName, const wchar_t *prefix);
const wchar_t *CkFileAccessW__lastErrorHtml(HCkFileAccessW cHandle);
const wchar_t *CkFileAccessW__lastErrorText(HCkFileAccessW cHandle);
const wchar_t *CkFileAccessW__lastErrorXml(HCkFileAccessW cHandle);
const wchar_t *CkFileAccessW__readBinaryToEncoded(HCkFileAccessW cHandle, const wchar_t *path, const wchar_t *encoding);
const wchar_t *CkFileAccessW__readEntireTextFile(HCkFileAccessW cHandle, const wchar_t *path, const wchar_t *charset);
const wchar_t *CkFileAccessW__tempFilename(HCkFileAccessW cHandle, const wchar_t *dirName, const wchar_t *prefix);
const wchar_t *CkFileAccessW__version(HCkFileAccessW cHandle);
#endif
