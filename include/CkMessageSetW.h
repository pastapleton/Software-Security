#ifndef _CkMessageSetW_H
#define _CkMessageSetW_H
// This header is generated.
#include "chilkatDefs.h"

#pragma once

#include "CkWideCharBase.h"
#include "CkString.h"
#include "CkMessageSet.h"




#ifndef __sun__
#pragma pack (push, 8) 
#endif


class CkMessageSetW : public CkWideCharBase
{
    private:
	CkMessageSet *m_impl;
	

        // Disallow assignment or copying this object.
	CkMessageSetW(const CkMessageSetW &) { }
	CkMessageSetW &operator=(const CkMessageSetW &) { return *this; }


    public:
	CkMessageSetW();
	CkMessageSetW(CkMessageSet *p, bool bForDso);
	CkMessageSetW(bool bForDso);
	virtual ~CkMessageSetW();
	CkMessageSet *getMbPtr(void) { return m_impl; }
	CkMessageSet &getMbRef(void) { return *m_impl; }
	const CkMessageSet *getMbConstPtr(void) const { return m_impl; }
	const CkMessageSet &getMbConstRef(void) const { return *m_impl; }
	void dispose(void) { if (m_impl) m_impl->dispose();  }

int get_Count(void);
void get_DebugLogFilePath(CkString &propVal);
void put_DebugLogFilePath(const wchar_t *w1);
bool get_HasUids(void);
void put_HasUids(bool propVal);
void LastErrorHtml(CkString &propVal);
void LastErrorText(CkString &propVal);
void LastErrorXml(CkString &propVal);
bool get_VerboseLogging(void);
void put_VerboseLogging(bool propVal);
void get_Version(CkString &propVal);
bool ContainsId(int id);
bool FromCompactString(const wchar_t *w1);
int GetId(int index);
void InsertId(int id);
void RemoveId(int id);
bool SaveLastError(const wchar_t *w1);
bool ToCompactString(CkString &outStr);
bool ToString(CkString &outStr);
const wchar_t *debugLogFilePath(void);
const wchar_t *lastErrorHtml(void);
const wchar_t *lastErrorText(void);
const wchar_t *lastErrorXml(void);
const wchar_t *toCompactString(void);
const wchar_t *toString(void);
const wchar_t *version(void);

};
#ifndef __sun__
#pragma pack (pop)
#endif

#endif
