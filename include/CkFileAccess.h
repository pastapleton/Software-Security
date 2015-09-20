// CkFileAccess.h: interface for the CkFileAccess class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkFileAccess_H
#define _CkFileAccess_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkDateTime;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkFileAccess
class CkFileAccess  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkFileAccess(const CkFileAccess &);
	CkFileAccess &operator=(const CkFileAccess &);

    public:
	CkFileAccess(void);
	virtual ~CkFileAccess(void);

	static CkFileAccess *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_CurrentDir(CkString &str);
	const char *currentDir(void);

	bool get_EndOfFile(void);

	int get_FileOpenError(void);

	void get_FileOpenErrorMsg(CkString &str);
	const char *fileOpenErrorMsg(void);



	// ----------------------
	// Methods
	// ----------------------
	bool AppendAnsi(const char *text);

	bool AppendText(const char *text, const char *charset);

	bool AppendUnicodeBOM(void);

	bool AppendUtf8BOM(void);

	bool DirAutoCreate(const char *path);

	bool DirCreate(const char *path);

	bool DirDelete(const char *path);

	bool DirEnsureExists(const char *filePath);

	void FileClose(void);

	bool FileContentsEqual(const char *path1, const char *path2);

	bool FileCopy(const char *existingPath, const char *newPath, bool failIfExists);

	bool FileDelete(const char *path);

	bool FileExists(const char *path);

	bool FileOpen(const char *path, unsigned long accessMode, unsigned long shareMode, unsigned long createDisp, unsigned long attr);

	bool FileRead(int numBytes, CkByteData &outBytes);

	bool FileRename(const char *existingPath, const char *newPath);

	bool FileSeek(int offset, int origin);

	int FileSize(const char *path);

	bool FileWrite(const CkByteData &data);

	bool GetTempFilename(const char *dirName, const char *prefix, CkString &outStr);
	const char *getTempFilename(const char *dirName, const char *prefix);
	const char *tempFilename(const char *dirName, const char *prefix);

	bool OpenForAppend(const char *filePath);

	bool OpenForRead(const char *filePath);

	bool OpenForReadWrite(const char *filePath);

	bool OpenForWrite(const char *filePath);

	bool ReadBinaryToEncoded(const char *path, const char *encoding, CkString &outStr);
	const char *readBinaryToEncoded(const char *path, const char *encoding);

	bool ReadEntireFile(const char *path, CkByteData &outBytes);

	bool ReadEntireTextFile(const char *path, const char *charset, CkString &outStrFileContents);
	const char *readEntireTextFile(const char *path, const char *charset);

	bool ReassembleFile(const char *partsDirPath, const char *partPrefix, const char *partExtension, const char *reassembledFilename);

	int ReplaceStrings(const char *path, const char *charset, const char *existingString, const char *replacementString);

	bool SetCurrentDir(const char *path);

	bool SetFileTimes(const char *path, CkDateTime &create, CkDateTime &lastAccess, CkDateTime &lastModified);

	bool SetLastModified(const char *path, CkDateTime &lastModified);

	bool SplitFile(const char *fileToSplit, const char *partPrefix, const char *partExtension, int partSize, const char *destDir);

	bool TreeDelete(const char *path);

	bool WriteEntireFile(const char *path, const CkByteData &fileData);

	bool WriteEntireTextFile(const char *path, const char *fileData, const char *charset, bool includePreamble);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
