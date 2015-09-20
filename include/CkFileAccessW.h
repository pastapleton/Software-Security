#ifndef _CkFileAccessW_H
#define _CkFileAccessW_H
// This header is generated.
#include "chilkatDefs.h"

#pragma once

#include "CkWideCharBase.h"
#include "CkString.h"
#include "CkFileAccess.h"

class CkDateTimeW;



#ifndef __sun__
#pragma pack (push, 8) 
#endif


class CkFileAccessW : public CkWideCharBase
{
    private:
	CkFileAccess *m_impl;
	

        // Disallow assignment or copying this object.
	CkFileAccessW(const CkFileAccessW &) { }
	CkFileAccessW &operator=(const CkFileAccessW &) { return *this; }


    public:
	CkFileAccessW();
	CkFileAccessW(CkFileAccess *p, bool bForDso);
	CkFileAccessW(bool bForDso);
	virtual ~CkFileAccessW();
	CkFileAccess *getMbPtr(void) { return m_impl; }
	CkFileAccess &getMbRef(void) { return *m_impl; }
	const CkFileAccess *getMbConstPtr(void) const { return m_impl; }
	const CkFileAccess &getMbConstRef(void) const { return *m_impl; }
	void dispose(void) { if (m_impl) m_impl->dispose();  }

void get_CurrentDir(CkString &propVal);
void get_DebugLogFilePath(CkString &propVal);
void put_DebugLogFilePath(const wchar_t *w1);
bool get_EndOfFile(void);
int get_FileOpenError(void);
void get_FileOpenErrorMsg(CkString &propVal);
void LastErrorHtml(CkString &propVal);
void LastErrorText(CkString &propVal);
void LastErrorXml(CkString &propVal);
bool get_VerboseLogging(void);
void put_VerboseLogging(bool propVal);
void get_Version(CkString &propVal);
bool AppendAnsi(const wchar_t *w1);
bool AppendText(const wchar_t *w1,const wchar_t *w2);
bool AppendUnicodeBOM(void);
bool AppendUtf8BOM(void);
bool DirAutoCreate(const wchar_t *w1);
bool DirCreate(const wchar_t *w1);
bool DirDelete(const wchar_t *w1);
bool DirEnsureExists(const wchar_t *w1);
void FileClose(void);
bool FileContentsEqual(const wchar_t *w1,const wchar_t *w2);
bool FileCopy(const wchar_t *w1,const wchar_t *w2,bool failIfExists);
bool FileDelete(const wchar_t *w1);
bool FileExists(const wchar_t *w1);
bool FileOpen(const wchar_t *w1,unsigned long accessMode,unsigned long shareMode,unsigned long createDisp,unsigned long attr);
bool FileRead(int numBytes,CkByteData &outBytes);
bool FileRename(const wchar_t *w1,const wchar_t *w2);
bool FileSeek(int offset,int origin);
int FileSize(const wchar_t *w1);
bool FileWrite(const CkByteData &data);
bool GetTempFilename(const wchar_t *w1,const wchar_t *w2,CkString &outStr);
bool OpenForAppend(const wchar_t *w1);
bool OpenForRead(const wchar_t *w1);
bool OpenForReadWrite(const wchar_t *w1);
bool OpenForWrite(const wchar_t *w1);
bool ReadBinaryToEncoded(const wchar_t *w1,const wchar_t *w2,CkString &outStr);
bool ReadEntireFile(const wchar_t *w1,CkByteData &outBytes);
bool ReadEntireTextFile(const wchar_t *w1,const wchar_t *w2,CkString &outStrFileContents);
bool ReassembleFile(const wchar_t *w1,const wchar_t *w2,const wchar_t *w3,const wchar_t *w4);
int ReplaceStrings(const wchar_t *w1,const wchar_t *w2,const wchar_t *w3,const wchar_t *w4);
bool SaveLastError(const wchar_t *w1);
bool SetCurrentDir(const wchar_t *w1);
bool SetFileTimes(const wchar_t *w1,CkDateTimeW &create,CkDateTimeW &lastAccess,CkDateTimeW &lastModified);
bool SetLastModified(const wchar_t *w1,CkDateTimeW &lastModified);
bool SplitFile(const wchar_t *w1,const wchar_t *w2,const wchar_t *w3,int partSize,const wchar_t *w4);
bool TreeDelete(const wchar_t *w1);
bool WriteEntireFile(const wchar_t *w1,const CkByteData &fileData);
bool WriteEntireTextFile(const wchar_t *w1,const wchar_t *w2,const wchar_t *w3,bool includePreamble);
const wchar_t *currentDir(void);
const wchar_t *debugLogFilePath(void);
const wchar_t *fileOpenErrorMsg(void);
const wchar_t *getTempFilename(const wchar_t *w1,const wchar_t *w2);
const wchar_t *lastErrorHtml(void);
const wchar_t *lastErrorText(void);
const wchar_t *lastErrorXml(void);
const wchar_t *readBinaryToEncoded(const wchar_t *w1,const wchar_t *w2);
const wchar_t *readEntireTextFile(const wchar_t *w1,const wchar_t *w2);
const wchar_t *tempFilename(const wchar_t *w1,const wchar_t *w2);
const wchar_t *version(void);

};
#ifndef __sun__
#pragma pack (pop)
#endif

#endif
