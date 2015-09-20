#ifndef _CkMailboxesW_H
#define _CkMailboxesW_H
// This header is generated.
#include "chilkatDefs.h"

#pragma once

#include "CkWideCharBase.h"
#include "CkString.h"
#include "CkMailboxes.h"




#ifndef __sun__
#pragma pack (push, 8) 
#endif


class CkMailboxesW : public CkWideCharBase
{
    private:
	CkMailboxes *m_impl;
	

        // Disallow assignment or copying this object.
	CkMailboxesW(const CkMailboxesW &) { }
	CkMailboxesW &operator=(const CkMailboxesW &) { return *this; }


    public:
	CkMailboxesW();
	CkMailboxesW(CkMailboxes *p, bool bForDso);
	CkMailboxesW(bool bForDso);
	virtual ~CkMailboxesW();
	CkMailboxes *getMbPtr(void) { return m_impl; }
	CkMailboxes &getMbRef(void) { return *m_impl; }
	const CkMailboxes *getMbConstPtr(void) const { return m_impl; }
	const CkMailboxes &getMbConstRef(void) const { return *m_impl; }
	void dispose(void) { if (m_impl) m_impl->dispose();  }

int get_Count(void);
void get_DebugLogFilePath(CkString &propVal);
void put_DebugLogFilePath(const wchar_t *w1);
void LastErrorHtml(CkString &propVal);
void LastErrorText(CkString &propVal);
void LastErrorXml(CkString &propVal);
bool get_VerboseLogging(void);
void put_VerboseLogging(bool propVal);
void get_Version(CkString &propVal);
bool GetName(int index,CkString &outStrName);
bool HasInferiors(int index);
bool IsMarked(int index);
bool IsSelectable(int index);
bool SaveLastError(const wchar_t *w1);
const wchar_t *debugLogFilePath(void);
const wchar_t *getName(int index);
const wchar_t *lastErrorHtml(void);
const wchar_t *lastErrorText(void);
const wchar_t *lastErrorXml(void);
const wchar_t *name(int index);
const wchar_t *version(void);

};
#ifndef __sun__
#pragma pack (pop)
#endif

#endif
