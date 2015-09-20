#ifndef _CkBz2W_H
#define _CkBz2W_H
// This header is generated.
#include "chilkatDefs.h"

#pragma once

#include "CkWideCharBase.h"
#include "CkString.h"
#include "CkBz2.h"

class CkBz2Progress;



#ifndef __sun__
#pragma pack (push, 8) 
#endif


class CkBz2W : public CkWideCharBase
{
    private:
	CkBz2 *m_impl;
		void *m_dsoProgress;


        // Disallow assignment or copying this object.
	CkBz2W(const CkBz2W &) { }
	CkBz2W &operator=(const CkBz2W &) { return *this; }


    public:
	CkBz2W();
	CkBz2W(CkBz2 *p, bool bForDso);
	CkBz2W(bool bForDso);
	virtual ~CkBz2W();
	CkBz2 *getMbPtr(void) { return m_impl; }
	CkBz2 &getMbRef(void) { return *m_impl; }
	const CkBz2 *getMbConstPtr(void) const { return m_impl; }
	const CkBz2 &getMbConstRef(void) const { return *m_impl; }
	void dispose(void) { if (m_impl) m_impl->dispose();  }

	CkBz2Progress *get_EventCallbackObjectA(void) const;
	void put_EventCallbackObjectA(CkBz2Progress *progress);

void get_DebugLogFilePath(CkString &propVal);
void put_DebugLogFilePath(const wchar_t *w1);
int get_HeartbeatMs(void);
void put_HeartbeatMs(int propVal);
void LastErrorHtml(CkString &propVal);
void LastErrorText(CkString &propVal);
void LastErrorXml(CkString &propVal);
bool get_VerboseLogging(void);
void put_VerboseLogging(bool propVal);
void get_Version(CkString &propVal);
bool CompressFile(const wchar_t *w1,const wchar_t *w2);
bool CompressFileToMem(const wchar_t *w1,CkByteData &outBytes);
bool CompressMemToFile(const CkByteData &inData,const wchar_t *w1);
bool CompressMemory(const CkByteData &inData,CkByteData &outBytes);
bool SaveLastError(const wchar_t *w1);
bool UncompressFile(const wchar_t *w1,const wchar_t *w2);
bool UncompressFileToMem(const wchar_t *w1,CkByteData &outBytes);
bool UncompressMemToFile(const CkByteData &inData,const wchar_t *w1);
bool UncompressMemory(const CkByteData &inData,CkByteData &outBytes);
bool UnlockComponent(const wchar_t *w1);
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
