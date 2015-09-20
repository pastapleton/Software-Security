#ifndef _CkZipW_H
#define _CkZipW_H
// This header is generated.
#include "chilkatDefs.h"

#pragma once

#include "CkWideCharBase.h"
#include "CkString.h"
#include "CkZip.h"

class CkStringArrayW;
class CkZipEntryW;
class CkZipProgress;



#ifndef __sun__
#pragma pack (push, 8) 
#endif


class CkZipW : public CkWideCharBase
{
    private:
	CkZip *m_impl;
		void *m_dsoProgress;


        // Disallow assignment or copying this object.
	CkZipW(const CkZipW &) { }
	CkZipW &operator=(const CkZipW &) { return *this; }


    public:
	CkZipW();
	CkZipW(CkZip *p, bool bForDso);
	CkZipW(bool bForDso);
	virtual ~CkZipW();
	CkZip *getMbPtr(void) { return m_impl; }
	CkZip &getMbRef(void) { return *m_impl; }
	const CkZip *getMbConstPtr(void) const { return m_impl; }
	const CkZip &getMbConstRef(void) const { return *m_impl; }
	void dispose(void) { if (m_impl) m_impl->dispose();  }

	CkZipProgress *get_EventCallbackObjectA(void) const;
	void put_EventCallbackObjectA(CkZipProgress *progress);

void get_AppendFromDir(CkString &propVal);
void put_AppendFromDir(const wchar_t *w1);
#if defined(CK_SFX_INCLUDED)
void get_AutoRun(CkString &propVal);
#endif
#if defined(CK_SFX_INCLUDED)
void put_AutoRun(const wchar_t *w1);
#endif
#if defined(CK_SFX_INCLUDED)
void get_AutoRunParams(CkString &propVal);
#endif
#if defined(CK_SFX_INCLUDED)
void put_AutoRunParams(const wchar_t *w1);
#endif
#if defined(CK_SFX_INCLUDED)
bool get_AutoTemp(void);
#endif
#if defined(CK_SFX_INCLUDED)
void put_AutoTemp(bool propVal);
#endif
bool get_CaseSensitive(void);
void put_CaseSensitive(bool propVal);
bool get_ClearArchiveAttribute(void);
void put_ClearArchiveAttribute(bool propVal);
bool get_ClearReadOnlyAttr(void);
void put_ClearReadOnlyAttr(bool propVal);
void get_Comment(CkString &propVal);
void put_Comment(const wchar_t *w1);
void get_DebugLogFilePath(CkString &propVal);
void put_DebugLogFilePath(const wchar_t *w1);
void get_DecryptPassword(CkString &propVal);
void put_DecryptPassword(const wchar_t *w1);
bool get_DiscardPaths(void);
void put_DiscardPaths(bool propVal);
int get_EncryptKeyLength(void);
void put_EncryptKeyLength(int propVal);
void get_EncryptPassword(CkString &propVal);
void put_EncryptPassword(const wchar_t *w1);
int get_Encryption(void);
void put_Encryption(int propVal);
#if defined(CK_SFX_INCLUDED)
void get_ExeDefaultDir(CkString &propVal);
#endif
#if defined(CK_SFX_INCLUDED)
void put_ExeDefaultDir(const wchar_t *w1);
#endif
#if defined(CK_SFX_INCLUDED)
bool get_ExeFinishNotifier(void);
#endif
#if defined(CK_SFX_INCLUDED)
void put_ExeFinishNotifier(bool propVal);
#endif
#if defined(CK_SFX_INCLUDED)
void get_ExeIconFile(CkString &propVal);
#endif
#if defined(CK_SFX_INCLUDED)
void put_ExeIconFile(const wchar_t *w1);
#endif
#if defined(CK_SFX_INCLUDED)
bool get_ExeNoInterface(void);
#endif
#if defined(CK_SFX_INCLUDED)
void put_ExeNoInterface(bool propVal);
#endif
#if defined(CK_SFX_INCLUDED)
bool get_ExeSilentProgress(void);
#endif
#if defined(CK_SFX_INCLUDED)
void put_ExeSilentProgress(bool propVal);
#endif
#if defined(CK_SFX_INCLUDED)
void get_ExeTitle(CkString &propVal);
#endif
#if defined(CK_SFX_INCLUDED)
void put_ExeTitle(const wchar_t *w1);
#endif
#if defined(CK_SFX_INCLUDED)
void get_ExeUnzipCaption(CkString &propVal);
#endif
#if defined(CK_SFX_INCLUDED)
void put_ExeUnzipCaption(const wchar_t *w1);
#endif
#if defined(CK_SFX_INCLUDED)
void get_ExeUnzipDir(CkString &propVal);
#endif
#if defined(CK_SFX_INCLUDED)
void put_ExeUnzipDir(const wchar_t *w1);
#endif
#if defined(CK_SFX_INCLUDED)
bool get_ExeWaitForSetup(void);
#endif
#if defined(CK_SFX_INCLUDED)
void put_ExeWaitForSetup(bool propVal);
#endif
#if defined(CK_SFX_INCLUDED)
void get_ExeXmlConfig(CkString &propVal);
#endif
#if defined(CK_SFX_INCLUDED)
void put_ExeXmlConfig(const wchar_t *w1);
#endif
int get_FileCount(void);
void get_FileName(CkString &propVal);
void put_FileName(const wchar_t *w1);
bool get_HasZipFormatErrors(void);
int get_HeartbeatMs(void);
void put_HeartbeatMs(int propVal);
bool get_IgnoreAccessDenied(void);
void put_IgnoreAccessDenied(bool propVal);
void LastErrorHtml(CkString &propVal);
void LastErrorText(CkString &propVal);
void LastErrorXml(CkString &propVal);
int get_NumEntries(void);
int get_OemCodePage(void);
void put_OemCodePage(int propVal);
bool get_OverwriteExisting(void);
void put_OverwriteExisting(bool propVal);
bool get_PasswordProtect(void);
void put_PasswordProtect(bool propVal);
void get_PathPrefix(CkString &propVal);
void put_PathPrefix(const wchar_t *w1);
void get_Proxy(CkString &propVal);
void put_Proxy(const wchar_t *w1);
void get_TempDir(CkString &propVal);
void put_TempDir(const wchar_t *w1);
bool get_TextFlag(void);
void put_TextFlag(bool propVal);
bool get_VerboseLogging(void);
void put_VerboseLogging(bool propVal);
void get_Version(CkString &propVal);
bool get_Zipx(void);
void put_Zipx(bool propVal);
void get_ZipxDefaultAlg(CkString &propVal);
void put_ZipxDefaultAlg(const wchar_t *w1);
#if defined(CK_SFX_INCLUDED)
bool AddEmbedded(const wchar_t *w1,const wchar_t *w2,const wchar_t *w3);
#endif
void AddNoCompressExtension(const wchar_t *w1);
CkZipEntryW *AppendBase64(const wchar_t *w1,const wchar_t *w2);
CkZipEntryW *AppendCompressed(const wchar_t *w1,const CkByteData &data);
CkZipEntryW *AppendData(const wchar_t *w1,const CkByteData &data);
#if !defined(CHILKAT_MONO)
CkZipEntryW *AppendData2(const wchar_t *w1,const unsigned char *pByteData,unsigned long szByteData);
#endif
bool AppendFiles(const wchar_t *w1,bool recurse);
bool AppendFilesEx(const wchar_t *w1,bool recurse,bool saveExtraPath,bool archiveOnly,bool includeHidden,bool includeSystem);
CkZipEntryW *AppendHex(const wchar_t *w1,const wchar_t *w2);
bool AppendMultiple(CkStringArrayW &fileSpecs,bool recurse);
CkZipEntryW *AppendNew(const wchar_t *w1);
CkZipEntryW *AppendNewDir(const wchar_t *w1);
bool AppendOneFileOrDir(const wchar_t *w1,bool saveExtraPath);
CkZipEntryW *AppendString(const wchar_t *w1,const wchar_t *w2);
CkZipEntryW *AppendString2(const wchar_t *w1,const wchar_t *w2,const wchar_t *w3);
bool AppendZip(const wchar_t *w1);
void CloseZip(void);
bool DeleteEntry(CkZipEntryW &entry);
void ExcludeDir(const wchar_t *w1);
bool Extract(const wchar_t *w1);
bool ExtractInto(const wchar_t *w1);
bool ExtractMatching(const wchar_t *w1,const wchar_t *w2);
bool ExtractNewer(const wchar_t *w1);
bool ExtractOne(CkZipEntryW &entry,const wchar_t *w1);
CkZipEntryW *FirstEntry(void);
CkZipEntryW *FirstMatchingEntry(const wchar_t *w1);
bool GetDirectoryAsXML(CkString &outXml);
CkZipEntryW *GetEntryByID(int entryID);
CkZipEntryW *GetEntryByIndex(int index);
CkZipEntryW *GetEntryByName(const wchar_t *w1);
CkStringArrayW *GetExclusions(void);
#if defined(CK_SFX_INCLUDED)
bool GetExeConfigParam(const wchar_t *w1,CkString &outStr);
#endif
CkZipEntryW *InsertNew(const wchar_t *w1,int beforeIndex);
bool IsNoCompressExtension(const wchar_t *w1);
bool IsPasswordProtected(const wchar_t *w1);
bool IsUnlocked(void);
bool NewZip(const wchar_t *w1);
#if defined(CK_SFX_INCLUDED)
bool OpenEmbedded(const wchar_t *w1,const wchar_t *w2);
#endif
bool OpenFromByteData(const CkByteData &byteData);
bool OpenFromMemory(const unsigned char *pByteData,unsigned long szByteData);
bool OpenFromWeb(const wchar_t *w1);
#if defined(CK_SFX_INCLUDED)
bool OpenMyEmbedded(const wchar_t *w1);
#endif
bool OpenZip(const wchar_t *w1);
bool QuickAppend(const wchar_t *w1);
#if defined(CK_SFX_INCLUDED)
bool RemoveEmbedded(const wchar_t *w1,const wchar_t *w2);
#endif
void RemoveNoCompressExtension(const wchar_t *w1);
#if defined(CK_SFX_INCLUDED)
bool ReplaceEmbedded(const wchar_t *w1,const wchar_t *w2,const wchar_t *w3);
#endif
bool SaveLastError(const wchar_t *w1);
void SetCompressionLevel(int level);
void SetExclusions(const CkStringArrayW &excludePatterns);
#if defined(CK_SFX_INCLUDED)
void SetExeConfigParam(const wchar_t *w1,const wchar_t *w2);
#endif
void SetPassword(const wchar_t *w1);
bool UnlockComponent(const wchar_t *w1);
int Unzip(const wchar_t *w1);
int UnzipInto(const wchar_t *w1);
int UnzipMatching(const wchar_t *w1,const wchar_t *w2,bool verbose);
int UnzipMatchingInto(const wchar_t *w1,const wchar_t *w2,bool verbose);
int UnzipNewer(const wchar_t *w1);
bool VerifyPassword(void);
#if defined(CK_SFX_INCLUDED)
bool WriteExe(const wchar_t *w1);
#endif
#if defined(CK_SFX_INCLUDED)
bool WriteExe2(const wchar_t *w1,const wchar_t *w2,bool bAesEncrypt,int keyLength,const wchar_t *w3);
#endif
#if defined(CK_SFX_INCLUDED)
bool WriteExeToMemory(CkByteData &outBytes);
#endif
bool WriteToMemory(CkByteData &outData);
bool WriteZip(void);
bool WriteZipAndClose(void);
const wchar_t *appendFromDir(void);
#if defined(CK_SFX_INCLUDED)
const wchar_t *autoRun(void);
#endif
#if defined(CK_SFX_INCLUDED)
const wchar_t *autoRunParams(void);
#endif
const wchar_t *comment(void);
const wchar_t *debugLogFilePath(void);
const wchar_t *decryptPassword(void);
const wchar_t *directoryAsXML(void);
const wchar_t *encryptPassword(void);
#if defined(CK_SFX_INCLUDED)
const wchar_t *exeConfigParam(const wchar_t *w1);
#endif
#if defined(CK_SFX_INCLUDED)
const wchar_t *exeDefaultDir(void);
#endif
#if defined(CK_SFX_INCLUDED)
const wchar_t *exeIconFile(void);
#endif
#if defined(CK_SFX_INCLUDED)
const wchar_t *exeTitle(void);
#endif
#if defined(CK_SFX_INCLUDED)
const wchar_t *exeUnzipCaption(void);
#endif
#if defined(CK_SFX_INCLUDED)
const wchar_t *exeUnzipDir(void);
#endif
#if defined(CK_SFX_INCLUDED)
const wchar_t *exeXmlConfig(void);
#endif
const wchar_t *fileName(void);
const wchar_t *getDirectoryAsXML(void);
#if defined(CK_SFX_INCLUDED)
const wchar_t *getExeConfigParam(const wchar_t *w1);
#endif
const wchar_t *lastErrorHtml(void);
const wchar_t *lastErrorText(void);
const wchar_t *lastErrorXml(void);
const wchar_t *pathPrefix(void);
const wchar_t *proxy(void);
const wchar_t *tempDir(void);
const wchar_t *version(void);
const wchar_t *zipxDefaultAlg(void);

};
#ifndef __sun__
#pragma pack (pop)
#endif

#endif
