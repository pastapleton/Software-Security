// CkZip.h: interface for the CkZip class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkZip_H
#define _CkZip_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkZipEntry;
class CkByteData;
class CkStringArray;
class CkZipProgress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkZip
class CkZip  : public CkMultiByteBase
{
    private:
	CkZipProgress *m_callback;

	// Don't allow assignment or copying these objects.
	CkZip(const CkZip &);
	CkZip &operator=(const CkZip &);

    public:
	CkZip(void);
	virtual ~CkZip(void);

	static CkZip *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkZipProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkZipProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_AppendFromDir(CkString &str);
	const char *appendFromDir(void);
	void put_AppendFromDir(const char *newVal);

#if defined(CK_SFX_INCLUDED)
	void get_AutoRun(CkString &str);
	const char *autoRun(void);
	void put_AutoRun(const char *newVal);
#endif

#if defined(CK_SFX_INCLUDED)
	void get_AutoRunParams(CkString &str);
	const char *autoRunParams(void);
	void put_AutoRunParams(const char *newVal);
#endif

#if defined(CK_SFX_INCLUDED)
	bool get_AutoTemp(void);
	void put_AutoTemp(bool newVal);
#endif

	bool get_CaseSensitive(void);
	void put_CaseSensitive(bool newVal);

	bool get_ClearArchiveAttribute(void);
	void put_ClearArchiveAttribute(bool newVal);

	bool get_ClearReadOnlyAttr(void);
	void put_ClearReadOnlyAttr(bool newVal);

	void get_Comment(CkString &str);
	const char *comment(void);
	void put_Comment(const char *newVal);

	void get_DecryptPassword(CkString &str);
	const char *decryptPassword(void);
	void put_DecryptPassword(const char *newVal);

	bool get_DiscardPaths(void);
	void put_DiscardPaths(bool newVal);

	int get_EncryptKeyLength(void);
	void put_EncryptKeyLength(int newVal);

	void get_EncryptPassword(CkString &str);
	const char *encryptPassword(void);
	void put_EncryptPassword(const char *newVal);

	int get_Encryption(void);
	void put_Encryption(int newVal);

#if defined(CK_SFX_INCLUDED)
	void get_ExeDefaultDir(CkString &str);
	const char *exeDefaultDir(void);
	void put_ExeDefaultDir(const char *newVal);
#endif

#if defined(CK_SFX_INCLUDED)
	bool get_ExeFinishNotifier(void);
	void put_ExeFinishNotifier(bool newVal);
#endif

#if defined(CK_SFX_INCLUDED)
	void get_ExeIconFile(CkString &str);
	const char *exeIconFile(void);
	void put_ExeIconFile(const char *newVal);
#endif

#if defined(CK_SFX_INCLUDED)
	bool get_ExeNoInterface(void);
	void put_ExeNoInterface(bool newVal);
#endif

#if defined(CK_SFX_INCLUDED)
	bool get_ExeSilentProgress(void);
	void put_ExeSilentProgress(bool newVal);
#endif

#if defined(CK_SFX_INCLUDED)
	void get_ExeTitle(CkString &str);
	const char *exeTitle(void);
	void put_ExeTitle(const char *newVal);
#endif

#if defined(CK_SFX_INCLUDED)
	void get_ExeUnzipCaption(CkString &str);
	const char *exeUnzipCaption(void);
	void put_ExeUnzipCaption(const char *newVal);
#endif

#if defined(CK_SFX_INCLUDED)
	void get_ExeUnzipDir(CkString &str);
	const char *exeUnzipDir(void);
	void put_ExeUnzipDir(const char *newVal);
#endif

#if defined(CK_SFX_INCLUDED)
	bool get_ExeWaitForSetup(void);
	void put_ExeWaitForSetup(bool newVal);
#endif

#if defined(CK_SFX_INCLUDED)
	void get_ExeXmlConfig(CkString &str);
	const char *exeXmlConfig(void);
	void put_ExeXmlConfig(const char *newVal);
#endif

	int get_FileCount(void);

	void get_FileName(CkString &str);
	const char *fileName(void);
	void put_FileName(const char *newVal);

	bool get_HasZipFormatErrors(void);

	int get_HeartbeatMs(void);
	void put_HeartbeatMs(int newVal);

	bool get_IgnoreAccessDenied(void);
	void put_IgnoreAccessDenied(bool newVal);

	int get_NumEntries(void);

	int get_OemCodePage(void);
	void put_OemCodePage(int newVal);

	bool get_OverwriteExisting(void);
	void put_OverwriteExisting(bool newVal);

	bool get_PasswordProtect(void);
	void put_PasswordProtect(bool newVal);

	void get_PathPrefix(CkString &str);
	const char *pathPrefix(void);
	void put_PathPrefix(const char *newVal);

	void get_Proxy(CkString &str);
	const char *proxy(void);
	void put_Proxy(const char *newVal);

	void get_TempDir(CkString &str);
	const char *tempDir(void);
	void put_TempDir(const char *newVal);

	bool get_TextFlag(void);
	void put_TextFlag(bool newVal);

	bool get_Zipx(void);
	void put_Zipx(bool newVal);

	void get_ZipxDefaultAlg(CkString &str);
	const char *zipxDefaultAlg(void);
	void put_ZipxDefaultAlg(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
#if defined(CK_SFX_INCLUDED)
	bool AddEmbedded(const char *exePath, const char *resourceName, const char *zipFilename);
#endif

	void AddNoCompressExtension(const char *fileExtension);

	CkZipEntry *AppendBase64(const char *pathInZip, const char *data);

	CkZipEntry *AppendCompressed(const char *pathInZip, const CkByteData &data);

	CkZipEntry *AppendData(const char *pathInZip, const CkByteData &data);

#if !defined(CHILKAT_MONO)
	CkZipEntry *AppendData2(const char *pathInZip, const unsigned char *pByteData, unsigned long szByteData);
#endif

	// eventCallbacks
	bool AppendFiles(const char *filePattern, bool recurse);

	// eventCallbacks
	bool AppendFilesEx(const char *filePattern, bool recurse, bool saveExtraPath, bool archiveOnly, bool includeHidden, bool includeSystem);

	CkZipEntry *AppendHex(const char *pathInZip, const char *data);

	// eventCallbacks
	bool AppendMultiple(CkStringArray &fileSpecs, bool recurse);

	CkZipEntry *AppendNew(const char *pathInZip);

	CkZipEntry *AppendNewDir(const char *pathInZip);

	// eventCallbacks
	bool AppendOneFileOrDir(const char *path, bool saveExtraPath);

	CkZipEntry *AppendString(const char *pathInZip, const char *str);

	CkZipEntry *AppendString2(const char *pathInZip, const char *str, const char *charset);

	bool AppendZip(const char *zipPath);

	void CloseZip(void);

	bool DeleteEntry(CkZipEntry &entry);

	void ExcludeDir(const char *dirName);

	// eventCallbacks
	bool Extract(const char *dirPath);

	// eventCallbacks
	bool ExtractInto(const char *dirPath);

	// eventCallbacks
	bool ExtractMatching(const char *dirPath, const char *pattern);

	// eventCallbacks
	bool ExtractNewer(const char *dirPath);

	// eventCallbacks
	bool ExtractOne(CkZipEntry &entry, const char *dirPath);

	CkZipEntry *FirstEntry(void);

	CkZipEntry *FirstMatchingEntry(const char *pattern);

	bool GetDirectoryAsXML(CkString &outXml);
	const char *getDirectoryAsXML(void);
	const char *directoryAsXML(void);

	CkZipEntry *GetEntryByID(int entryID);

	CkZipEntry *GetEntryByIndex(int index);

	CkZipEntry *GetEntryByName(const char *entryName);

	CkStringArray *GetExclusions(void);

#if defined(CK_SFX_INCLUDED)
	bool GetExeConfigParam(const char *name, CkString &outStr);
	const char *getExeConfigParam(const char *name);
	const char *exeConfigParam(const char *name);
#endif

	CkZipEntry *InsertNew(const char *pathInZip, int beforeIndex);

	bool IsNoCompressExtension(const char *fileExtension);

	bool IsPasswordProtected(const char *zipPath);

	bool IsUnlocked(void);

	bool NewZip(const char *zipPath);

#if defined(CK_SFX_INCLUDED)
	bool OpenEmbedded(const char *exePath, const char *resourceName);
#endif

	bool OpenFromByteData(const CkByteData &byteData);

	bool OpenFromMemory(const unsigned char *pByteData, unsigned long szByteData);

	// eventCallbacks
	bool OpenFromWeb(const char *url);

#if defined(CK_SFX_INCLUDED)
	bool OpenMyEmbedded(const char *resourceName);
#endif

	// eventCallbacks
	bool OpenZip(const char *zipPath);

	// eventCallbacks
	bool QuickAppend(const char *zipPath);

#if defined(CK_SFX_INCLUDED)
	bool RemoveEmbedded(const char *exePath, const char *resourceName);
#endif

	void RemoveNoCompressExtension(const char *fileExtension);

#if defined(CK_SFX_INCLUDED)
	bool ReplaceEmbedded(const char *exePath, const char *resourceName, const char *zipFilename);
#endif

	void SetCompressionLevel(int level);

	void SetExclusions(const CkStringArray &excludePatterns);

#if defined(CK_SFX_INCLUDED)
	void SetExeConfigParam(const char *name, const char *value);
#endif

	void SetPassword(const char *password);

	bool UnlockComponent(const char *regCode);

	// eventCallbacks
	int Unzip(const char *dirPath);

	// eventCallbacks
	int UnzipInto(const char *dirPath);

	// eventCallbacks
	int UnzipMatching(const char *dirPath, const char *pattern, bool verbose);

	// eventCallbacks
	int UnzipMatchingInto(const char *dirPath, const char *pattern, bool verbose);

	// eventCallbacks
	int UnzipNewer(const char *dirPath);

	bool VerifyPassword(void);

#if defined(CK_SFX_INCLUDED)
	// eventCallbacks
	bool WriteExe(const char *path);
#endif

#if defined(CK_SFX_INCLUDED)
	// eventCallbacks
	bool WriteExe2(const char *exePath, const char *destExePath, bool bAesEncrypt, int keyLength, const char *password);
#endif

#if defined(CK_SFX_INCLUDED)
	// eventCallbacks
	bool WriteExeToMemory(CkByteData &outBytes);
#endif

	// eventCallbacks
	bool WriteToMemory(CkByteData &outData);

	// eventCallbacks
	bool WriteZip(void);

	// eventCallbacks
	bool WriteZipAndClose(void);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
