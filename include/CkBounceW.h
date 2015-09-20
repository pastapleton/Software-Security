#ifndef _CkBounceW_H
#define _CkBounceW_H
// This header is generated.
#include "chilkatDefs.h"

#pragma once

#include "CkWideCharBase.h"
#include "CkString.h"
#include "CkBounce.h"

class CkEmailW;



#ifndef __sun__
#pragma pack (push, 8) 
#endif


class CkBounceW : public CkWideCharBase
{
    private:
	CkBounce *m_impl;
	

        // Disallow assignment or copying this object.
	CkBounceW(const CkBounceW &) { }
	CkBounceW &operator=(const CkBounceW &) { return *this; }


    public:
	CkBounceW();
	CkBounceW(CkBounce *p, bool bForDso);
	CkBounceW(bool bForDso);
	virtual ~CkBounceW();
	CkBounce *getMbPtr(void) { return m_impl; }
	CkBounce &getMbRef(void) { return *m_impl; }
	const CkBounce *getMbConstPtr(void) const { return m_impl; }
	const CkBounce &getMbConstRef(void) const { return *m_impl; }
	void dispose(void) { if (m_impl) m_impl->dispose();  }

void get_BounceAddress(CkString &propVal);
void get_BounceData(CkString &propVal);
int get_BounceType(void);
void get_DebugLogFilePath(CkString &propVal);
void put_DebugLogFilePath(const wchar_t *w1);
void LastErrorHtml(CkString &propVal);
void LastErrorText(CkString &propVal);
void LastErrorXml(CkString &propVal);
bool get_VerboseLogging(void);
void put_VerboseLogging(bool propVal);
void get_Version(CkString &propVal);
bool ExamineEmail(const CkEmailW &email);
bool ExamineEml(const wchar_t *w1);
bool ExamineMime(const wchar_t *w1);
bool SaveLastError(const wchar_t *w1);
bool UnlockComponent(const wchar_t *w1);
const wchar_t *bounceAddress(void);
const wchar_t *bounceData(void);
const wchar_t *debugLogFilePath(void);
const wchar_t *lastErrorHtml(void);
const wchar_t *lastErrorText(void);
const wchar_t *lastErrorXml(void);
const wchar_t *version(void);

};
#ifndef __sun__
#pragma pack (pop)
#endif

#endif
