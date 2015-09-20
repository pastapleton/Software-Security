#ifndef _CkEmailBundleW_H
#define _CkEmailBundleW_H
// This header is generated.
#include "chilkatDefs.h"

#pragma once

#include "CkWideCharBase.h"
#include "CkString.h"
#include "CkEmailBundle.h"

class CkEmailW;
class CkStringArrayW;



#ifndef __sun__
#pragma pack (push, 8) 
#endif


class CkEmailBundleW : public CkWideCharBase
{
    private:
	CkEmailBundle *m_impl;
	

        // Disallow assignment or copying this object.
	CkEmailBundleW(const CkEmailBundleW &) { }
	CkEmailBundleW &operator=(const CkEmailBundleW &) { return *this; }


    public:
	CkEmailBundleW();
	CkEmailBundleW(CkEmailBundle *p, bool bForDso);
	CkEmailBundleW(bool bForDso);
	virtual ~CkEmailBundleW();
	CkEmailBundle *getMbPtr(void) { return m_impl; }
	CkEmailBundle &getMbRef(void) { return *m_impl; }
	const CkEmailBundle *getMbConstPtr(void) const { return m_impl; }
	const CkEmailBundle &getMbConstRef(void) const { return *m_impl; }
	void dispose(void) { if (m_impl) m_impl->dispose();  }

void get_DebugLogFilePath(CkString &propVal);
void put_DebugLogFilePath(const wchar_t *w1);
void LastErrorHtml(CkString &propVal);
void LastErrorText(CkString &propVal);
void LastErrorXml(CkString &propVal);
int get_MessageCount(void);
bool get_VerboseLogging(void);
void put_VerboseLogging(bool propVal);
void get_Version(CkString &propVal);
bool AddEmail(const CkEmailW &email);
CkEmailW *FindByHeader(const wchar_t *w1,const wchar_t *w2);
CkEmailW *GetEmail(int index);
CkStringArrayW *GetUidls(void);
bool GetXml(CkString &outXml);
bool LoadXml(const wchar_t *w1);
bool LoadXmlString(const wchar_t *w1);
bool RemoveEmail(const CkEmailW &email);
bool RemoveEmailByIndex(int index);
bool SaveLastError(const wchar_t *w1);
bool SaveXml(const wchar_t *w1);
void SortByDate(bool ascending);
void SortByRecipient(bool ascending);
void SortBySender(bool ascending);
void SortBySubject(bool ascending);
const wchar_t *debugLogFilePath(void);
const wchar_t *getXml(void);
const wchar_t *lastErrorHtml(void);
const wchar_t *lastErrorText(void);
const wchar_t *lastErrorXml(void);
const wchar_t *version(void);
const wchar_t *xml(void);

};
#ifndef __sun__
#pragma pack (pop)
#endif

#endif
