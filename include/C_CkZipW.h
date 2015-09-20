// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkZip_W_H
#define _C_CkZip_W_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkZipW CkZipW_Create(void);
HCkZipW CkZipW_Create2(BOOL bForDso);
void CkZipW_Dispose(HCkZipW handle);
void CkZipW_getAppendFromDir(HCkZipW cHandle, HCkStringW retval);
void CkZipW_putAppendFromDir(HCkZipW cHandle, const wchar_t *newVal);
#if defined(CK_SFX_INCLUDED)
void CkZipW_getAutoRun(HCkZipW cHandle, HCkStringW retval);
#endif
#if defined(CK_SFX_INCLUDED)
void CkZipW_putAutoRun(HCkZipW cHandle, const wchar_t *newVal);
#endif
#if defined(CK_SFX_INCLUDED)
void CkZipW_getAutoRunParams(HCkZipW cHandle, HCkStringW retval);
#endif
#if defined(CK_SFX_INCLUDED)
void CkZipW_putAutoRunParams(HCkZipW cHandle, const wchar_t *newVal);
#endif
#if defined(CK_SFX_INCLUDED)
BOOL CkZipW_getAutoTemp(HCkZipW cHandle);
#endif
#if defined(CK_SFX_INCLUDED)
void CkZipW_putAutoTemp(HCkZipW cHandle, BOOL newVal);
#endif
BOOL CkZipW_getCaseSensitive(HCkZipW cHandle);
void CkZipW_putCaseSensitive(HCkZipW cHandle, BOOL newVal);
BOOL CkZipW_getClearArchiveAttribute(HCkZipW cHandle);
void CkZipW_putClearArchiveAttribute(HCkZipW cHandle, BOOL newVal);
BOOL CkZipW_getClearReadOnlyAttr(HCkZipW cHandle);
void CkZipW_putClearReadOnlyAttr(HCkZipW cHandle, BOOL newVal);
void CkZipW_getComment(HCkZipW cHandle, HCkStringW retval);
void CkZipW_putComment(HCkZipW cHandle, const wchar_t *newVal);
void CkZipW_getDebugLogFilePath(HCkZipW cHandle, HCkStringW retval);
void CkZipW_putDebugLogFilePath(HCkZipW cHandle, const wchar_t *newVal);
void CkZipW_getDecryptPassword(HCkZipW cHandle, HCkStringW retval);
void CkZipW_putDecryptPassword(HCkZipW cHandle, const wchar_t *newVal);
BOOL CkZipW_getDiscardPaths(HCkZipW cHandle);
void CkZipW_putDiscardPaths(HCkZipW cHandle, BOOL newVal);
int CkZipW_getEncryptKeyLength(HCkZipW cHandle);
void CkZipW_putEncryptKeyLength(HCkZipW cHandle, int newVal);
void CkZipW_getEncryptPassword(HCkZipW cHandle, HCkStringW retval);
void CkZipW_putEncryptPassword(HCkZipW cHandle, const wchar_t *newVal);
int CkZipW_getEncryption(HCkZipW cHandle);
void CkZipW_putEncryption(HCkZipW cHandle, int newVal);
#if defined(CK_SFX_INCLUDED)
void CkZipW_getExeDefaultDir(HCkZipW cHandle, HCkStringW retval);
#endif
#if defined(CK_SFX_INCLUDED)
void CkZipW_putExeDefaultDir(HCkZipW cHandle, const wchar_t *newVal);
#endif
#if defined(CK_SFX_INCLUDED)
BOOL CkZipW_getExeFinishNotifier(HCkZipW cHandle);
#endif
#if defined(CK_SFX_INCLUDED)
void CkZipW_putExeFinishNotifier(HCkZipW cHandle, BOOL newVal);
#endif
#if defined(CK_SFX_INCLUDED)
void CkZipW_getExeIconFile(HCkZipW cHandle, HCkStringW retval);
#endif
#if defined(CK_SFX_INCLUDED)
void CkZipW_putExeIconFile(HCkZipW cHandle, const wchar_t *newVal);
#endif
#if defined(CK_SFX_INCLUDED)
BOOL CkZipW_getExeNoInterface(HCkZipW cHandle);
#endif
#if defined(CK_SFX_INCLUDED)
void CkZipW_putExeNoInterface(HCkZipW cHandle, BOOL newVal);
#endif
#if defined(CK_SFX_INCLUDED)
BOOL CkZipW_getExeSilentProgress(HCkZipW cHandle);
#endif
#if defined(CK_SFX_INCLUDED)
void CkZipW_putExeSilentProgress(HCkZipW cHandle, BOOL newVal);
#endif
#if defined(CK_SFX_INCLUDED)
void CkZipW_getExeTitle(HCkZipW cHandle, HCkStringW retval);
#endif
#if defined(CK_SFX_INCLUDED)
void CkZipW_putExeTitle(HCkZipW cHandle, const wchar_t *newVal);
#endif
#if defined(CK_SFX_INCLUDED)
void CkZipW_getExeUnzipCaption(HCkZipW cHandle, HCkStringW retval);
#endif
#if defined(CK_SFX_INCLUDED)
void CkZipW_putExeUnzipCaption(HCkZipW cHandle, const wchar_t *newVal);
#endif
#if defined(CK_SFX_INCLUDED)
void CkZipW_getExeUnzipDir(HCkZipW cHandle, HCkStringW retval);
#endif
#if defined(CK_SFX_INCLUDED)
void CkZipW_putExeUnzipDir(HCkZipW cHandle, const wchar_t *newVal);
#endif
#if defined(CK_SFX_INCLUDED)
BOOL CkZipW_getExeWaitForSetup(HCkZipW cHandle);
#endif
#if defined(CK_SFX_INCLUDED)
void CkZipW_putExeWaitForSetup(HCkZipW cHandle, BOOL newVal);
#endif
#if defined(CK_SFX_INCLUDED)
void CkZipW_getExeXmlConfig(HCkZipW cHandle, HCkStringW retval);
#endif
#if defined(CK_SFX_INCLUDED)
void CkZipW_putExeXmlConfig(HCkZipW cHandle, const wchar_t *newVal);
#endif
int CkZipW_getFileCount(HCkZipW cHandle);
void CkZipW_getFileName(HCkZipW cHandle, HCkStringW retval);
void CkZipW_putFileName(HCkZipW cHandle, const wchar_t *newVal);
BOOL CkZipW_getHasZipFormatErrors(HCkZipW cHandle);
int CkZipW_getHeartbeatMs(HCkZipW cHandle);
void CkZipW_putHeartbeatMs(HCkZipW cHandle, int newVal);
BOOL CkZipW_getIgnoreAccessDenied(HCkZipW cHandle);
void CkZipW_putIgnoreAccessDenied(HCkZipW cHandle, BOOL newVal);
void CkZipW_getLastErrorHtml(HCkZipW cHandle, HCkStringW retval);
void CkZipW_getLastErrorText(HCkZipW cHandle, HCkStringW retval);
void CkZipW_getLastErrorXml(HCkZipW cHandle, HCkStringW retval);
int CkZipW_getNumEntries(HCkZipW cHandle);
int CkZipW_getOemCodePage(HCkZipW cHandle);
void CkZipW_putOemCodePage(HCkZipW cHandle, int newVal);
BOOL CkZipW_getOverwriteExisting(HCkZipW cHandle);
void CkZipW_putOverwriteExisting(HCkZipW cHandle, BOOL newVal);
BOOL CkZipW_getPasswordProtect(HCkZipW cHandle);
void CkZipW_putPasswordProtect(HCkZipW cHandle, BOOL newVal);
void CkZipW_getPathPrefix(HCkZipW cHandle, HCkStringW retval);
void CkZipW_putPathPrefix(HCkZipW cHandle, const wchar_t *newVal);
void CkZipW_getProxy(HCkZipW cHandle, HCkStringW retval);
void CkZipW_putProxy(HCkZipW cHandle, const wchar_t *newVal);
void CkZipW_getTempDir(HCkZipW cHandle, HCkStringW retval);
void CkZipW_putTempDir(HCkZipW cHandle, const wchar_t *newVal);
BOOL CkZipW_getTextFlag(HCkZipW cHandle);
void CkZipW_putTextFlag(HCkZipW cHandle, BOOL newVal);
BOOL CkZipW_getVerboseLogging(HCkZipW cHandle);
void CkZipW_putVerboseLogging(HCkZipW cHandle, BOOL newVal);
void CkZipW_getVersion(HCkZipW cHandle, HCkStringW retval);
BOOL CkZipW_getZipx(HCkZipW cHandle);
void CkZipW_putZipx(HCkZipW cHandle, BOOL newVal);
void CkZipW_getZipxDefaultAlg(HCkZipW cHandle, HCkStringW retval);
void CkZipW_putZipxDefaultAlg(HCkZipW cHandle, const wchar_t *newVal);
#if defined(CK_SFX_INCLUDED)
BOOL CkZipW_AddEmbedded(HCkZipW cHandle, const wchar_t *exePath, const wchar_t *resourceName, const wchar_t *zipFilename);
#endif
void CkZipW_AddNoCompressExtension(HCkZipW cHandle, const wchar_t *fileExtension);
HCkZipEntryW CkZipW_AppendBase64(HCkZipW cHandle, const wchar_t *pathInZip, const wchar_t *data);
HCkZipEntryW CkZipW_AppendCompressed(HCkZipW cHandle, const wchar_t *pathInZip, HCkByteDataW data);
HCkZipEntryW CkZipW_AppendData(HCkZipW cHandle, const wchar_t *pathInZip, HCkByteDataW data);
#if !defined(CHILKAT_MONO)
HCkZipEntryW CkZipW_AppendData2(HCkZipW cHandle, const wchar_t *pathInZip, const unsigned char *pByteData, unsigned long szByteData);
#endif
BOOL CkZipW_AppendFiles(HCkZipW cHandle, const wchar_t *filePattern, BOOL recurse);
BOOL CkZipW_AppendFilesEx(HCkZipW cHandle, const wchar_t *filePattern, BOOL recurse, BOOL saveExtraPath, BOOL archiveOnly, BOOL includeHidden, BOOL includeSystem);
HCkZipEntryW CkZipW_AppendHex(HCkZipW cHandle, const wchar_t *pathInZip, const wchar_t *data);
BOOL CkZipW_AppendMultiple(HCkZipW cHandle, HCkStringArrayW fileSpecs, BOOL recurse);
HCkZipEntryW CkZipW_AppendNew(HCkZipW cHandle, const wchar_t *pathInZip);
HCkZipEntryW CkZipW_AppendNewDir(HCkZipW cHandle, const wchar_t *pathInZip);
BOOL CkZipW_AppendOneFileOrDir(HCkZipW cHandle, const wchar_t *path, BOOL saveExtraPath);
HCkZipEntryW CkZipW_AppendString(HCkZipW cHandle, const wchar_t *pathInZip, const wchar_t *str);
HCkZipEntryW CkZipW_AppendString2(HCkZipW cHandle, const wchar_t *pathInZip, const wchar_t *str, const wchar_t *charset);
BOOL CkZipW_AppendZip(HCkZipW cHandle, const wchar_t *zipPath);
void CkZipW_CloseZip(HCkZipW cHandle);
BOOL CkZipW_DeleteEntry(HCkZipW cHandle, HCkZipEntryW entry);
void CkZipW_ExcludeDir(HCkZipW cHandle, const wchar_t *dirName);
BOOL CkZipW_Extract(HCkZipW cHandle, const wchar_t *dirPath);
BOOL CkZipW_ExtractInto(HCkZipW cHandle, const wchar_t *dirPath);
BOOL CkZipW_ExtractMatching(HCkZipW cHandle, const wchar_t *dirPath, const wchar_t *pattern);
BOOL CkZipW_ExtractNewer(HCkZipW cHandle, const wchar_t *dirPath);
BOOL CkZipW_ExtractOne(HCkZipW cHandle, HCkZipEntryW entry, const wchar_t *dirPath);
HCkZipEntryW CkZipW_FirstEntry(HCkZipW cHandle);
HCkZipEntryW CkZipW_FirstMatchingEntry(HCkZipW cHandle, const wchar_t *pattern);
BOOL CkZipW_GetDirectoryAsXML(HCkZipW cHandle, HCkStringW outXml);
HCkZipEntryW CkZipW_GetEntryByID(HCkZipW cHandle, int entryID);
HCkZipEntryW CkZipW_GetEntryByIndex(HCkZipW cHandle, int index);
HCkZipEntryW CkZipW_GetEntryByName(HCkZipW cHandle, const wchar_t *entryName);
HCkStringArrayW CkZipW_GetExclusions(HCkZipW cHandle);
#if defined(CK_SFX_INCLUDED)
BOOL CkZipW_GetExeConfigParam(HCkZipW cHandle, const wchar_t *name, HCkStringW outStr);
#endif
HCkZipEntryW CkZipW_InsertNew(HCkZipW cHandle, const wchar_t *pathInZip, int beforeIndex);
BOOL CkZipW_IsNoCompressExtension(HCkZipW cHandle, const wchar_t *fileExtension);
BOOL CkZipW_IsPasswordProtected(HCkZipW cHandle, const wchar_t *zipPath);
BOOL CkZipW_IsUnlocked(HCkZipW cHandle);
BOOL CkZipW_NewZip(HCkZipW cHandle, const wchar_t *zipPath);
#if defined(CK_SFX_INCLUDED)
BOOL CkZipW_OpenEmbedded(HCkZipW cHandle, const wchar_t *exePath, const wchar_t *resourceName);
#endif
BOOL CkZipW_OpenFromByteData(HCkZipW cHandle, HCkByteDataW byteData);
BOOL CkZipW_OpenFromMemory(HCkZipW cHandle, const unsigned char *pByteData, unsigned long szByteData);
BOOL CkZipW_OpenFromWeb(HCkZipW cHandle, const wchar_t *url);
#if defined(CK_SFX_INCLUDED)
BOOL CkZipW_OpenMyEmbedded(HCkZipW cHandle, const wchar_t *resourceName);
#endif
BOOL CkZipW_OpenZip(HCkZipW cHandle, const wchar_t *zipPath);
BOOL CkZipW_QuickAppend(HCkZipW cHandle, const wchar_t *zipPath);
#if defined(CK_SFX_INCLUDED)
BOOL CkZipW_RemoveEmbedded(HCkZipW cHandle, const wchar_t *exePath, const wchar_t *resourceName);
#endif
void CkZipW_RemoveNoCompressExtension(HCkZipW cHandle, const wchar_t *fileExtension);
#if defined(CK_SFX_INCLUDED)
BOOL CkZipW_ReplaceEmbedded(HCkZipW cHandle, const wchar_t *exePath, const wchar_t *resourceName, const wchar_t *zipFilename);
#endif
BOOL CkZipW_SaveLastError(HCkZipW cHandle, const wchar_t *path);
void CkZipW_SetCompressionLevel(HCkZipW cHandle, int level);
void CkZipW_SetExclusions(HCkZipW cHandle, HCkStringArrayW excludePatterns);
#if defined(CK_SFX_INCLUDED)
void CkZipW_SetExeConfigParam(HCkZipW cHandle, const wchar_t *name, const wchar_t *value);
#endif
void CkZipW_SetPassword(HCkZipW cHandle, const wchar_t *password);
BOOL CkZipW_UnlockComponent(HCkZipW cHandle, const wchar_t *regCode);
int CkZipW_Unzip(HCkZipW cHandle, const wchar_t *dirPath);
int CkZipW_UnzipInto(HCkZipW cHandle, const wchar_t *dirPath);
int CkZipW_UnzipMatching(HCkZipW cHandle, const wchar_t *dirPath, const wchar_t *pattern, BOOL verbose);
int CkZipW_UnzipMatchingInto(HCkZipW cHandle, const wchar_t *dirPath, const wchar_t *pattern, BOOL verbose);
int CkZipW_UnzipNewer(HCkZipW cHandle, const wchar_t *dirPath);
BOOL CkZipW_VerifyPassword(HCkZipW cHandle);
#if defined(CK_SFX_INCLUDED)
BOOL CkZipW_WriteExe(HCkZipW cHandle, const wchar_t *path);
#endif
#if defined(CK_SFX_INCLUDED)
BOOL CkZipW_WriteExe2(HCkZipW cHandle, const wchar_t *exePath, const wchar_t *destExePath, BOOL bAesEncrypt, int keyLength, const wchar_t *password);
#endif
#if defined(CK_SFX_INCLUDED)
BOOL CkZipW_WriteExeToMemory(HCkZipW cHandle, HCkByteDataW outBytes);
#endif
BOOL CkZipW_WriteToMemory(HCkZipW cHandle, HCkByteDataW outData);
BOOL CkZipW_WriteZip(HCkZipW cHandle);
BOOL CkZipW_WriteZipAndClose(HCkZipW cHandle);
const wchar_t *CkZipW__appendFromDir(HCkZipW cHandle);
#if defined(CK_SFX_INCLUDED)
const wchar_t *CkZipW__autoRun(HCkZipW cHandle);
#endif
#if defined(CK_SFX_INCLUDED)
const wchar_t *CkZipW__autoRunParams(HCkZipW cHandle);
#endif
const wchar_t *CkZipW__comment(HCkZipW cHandle);
const wchar_t *CkZipW__debugLogFilePath(HCkZipW cHandle);
const wchar_t *CkZipW__decryptPassword(HCkZipW cHandle);
const wchar_t *CkZipW__directoryAsXML(HCkZipW cHandle);
const wchar_t *CkZipW__encryptPassword(HCkZipW cHandle);
#if defined(CK_SFX_INCLUDED)
const wchar_t *CkZipW__exeConfigParam(HCkZipW cHandle, const wchar_t *name);
#endif
#if defined(CK_SFX_INCLUDED)
const wchar_t *CkZipW__exeDefaultDir(HCkZipW cHandle);
#endif
#if defined(CK_SFX_INCLUDED)
const wchar_t *CkZipW__exeIconFile(HCkZipW cHandle);
#endif
#if defined(CK_SFX_INCLUDED)
const wchar_t *CkZipW__exeTitle(HCkZipW cHandle);
#endif
#if defined(CK_SFX_INCLUDED)
const wchar_t *CkZipW__exeUnzipCaption(HCkZipW cHandle);
#endif
#if defined(CK_SFX_INCLUDED)
const wchar_t *CkZipW__exeUnzipDir(HCkZipW cHandle);
#endif
#if defined(CK_SFX_INCLUDED)
const wchar_t *CkZipW__exeXmlConfig(HCkZipW cHandle);
#endif
const wchar_t *CkZipW__fileName(HCkZipW cHandle);
const wchar_t *CkZipW__getDirectoryAsXML(HCkZipW cHandle);
#if defined(CK_SFX_INCLUDED)
const wchar_t *CkZipW__getExeConfigParam(HCkZipW cHandle, const wchar_t *name);
#endif
const wchar_t *CkZipW__lastErrorHtml(HCkZipW cHandle);
const wchar_t *CkZipW__lastErrorText(HCkZipW cHandle);
const wchar_t *CkZipW__lastErrorXml(HCkZipW cHandle);
const wchar_t *CkZipW__pathPrefix(HCkZipW cHandle);
const wchar_t *CkZipW__proxy(HCkZipW cHandle);
const wchar_t *CkZipW__tempDir(HCkZipW cHandle);
const wchar_t *CkZipW__version(HCkZipW cHandle);
const wchar_t *CkZipW__zipxDefaultAlg(HCkZipW cHandle);
#endif
