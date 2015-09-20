#ifndef _CkSFtpDirW_H
#define _CkSFtpDirW_H
// This header is generated.
#include "chilkatDefs.h"

#pragma once

#include "CkWideCharBase.h"
#include "CkString.h"
#include "CkSFtpDir.h"

class CkSFtpFileW;



#ifndef __sun__
#pragma pack (push, 8) 
#endif


class CkSFtpDirW : public CkWideCharBase
{
    private:
	CkSFtpDir *m_impl;
	

        // Disallow assignment or copying this object.
	CkSFtpDirW(const CkSFtpDirW &) { }
	CkSFtpDirW &operator=(const CkSFtpDirW &) { return *this; }


    public:
	CkSFtpDirW();
	CkSFtpDirW(CkSFtpDir *p, bool bForDso);
	CkSFtpDirW(bool bForDso);
	virtual ~CkSFtpDirW();
	CkSFtpDir *getMbPtr(void) { return m_impl; }
	CkSFtpDir &getMbRef(void) { return *m_impl; }
	const CkSFtpDir *getMbConstPtr(void) const { return m_impl; }
	const CkSFtpDir &getMbConstRef(void) const { return *m_impl; }
	void dispose(void) { if (m_impl) m_impl->dispose();  }

void get_DebugLogFilePath(CkString &propVal);
void put_DebugLogFilePath(const wchar_t *w1);
void LastErrorHtml(CkString &propVal);
void LastErrorText(CkString &propVal);
void LastErrorXml(CkString &propVal);
int get_NumFilesAndDirs(void);
void get_OriginalPath(CkString &propVal);
bool get_VerboseLogging(void);
void put_VerboseLogging(bool propVal);
void get_Version(CkString &propVal);
CkSFtpFileW *GetFileObject(int index);
bool GetFilename(int index,CkString &outStr);
bool SaveLastError(const wchar_t *w1);
const wchar_t *debugLogFilePath(void);
const wchar_t *filename(int index);
const wchar_t *getFilename(int index);
const wchar_t *lastErrorHtml(void);
const wchar_t *lastErrorText(void);
const wchar_t *lastErrorXml(void);
const wchar_t *originalPath(void);
const wchar_t *version(void);

};
#ifndef __sun__
#pragma pack (pop)
#endif

#endif
