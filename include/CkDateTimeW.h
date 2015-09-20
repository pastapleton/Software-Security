#ifndef _CkDateTimeW_H
#define _CkDateTimeW_H
// This header is generated.
#include "chilkatDefs.h"

#pragma once

#include "CkWideCharBase.h"
#include "CkString.h"
#include "CkDateTime.h"




#ifndef __sun__
#pragma pack (push, 8) 
#endif


class CkDateTimeW : public CkWideCharBase
{
    private:
	CkDateTime *m_impl;
	

        // Disallow assignment or copying this object.
	CkDateTimeW(const CkDateTimeW &) { }
	CkDateTimeW &operator=(const CkDateTimeW &) { return *this; }


    public:
	CkDateTimeW();
	CkDateTimeW(CkDateTime *p, bool bForDso);
	CkDateTimeW(bool bForDso);
	virtual ~CkDateTimeW();
	CkDateTime *getMbPtr(void) { return m_impl; }
	CkDateTime &getMbRef(void) { return *m_impl; }
	const CkDateTime *getMbConstPtr(void) const { return m_impl; }
	const CkDateTime &getMbConstRef(void) const { return *m_impl; }
	void dispose(void) { if (m_impl) m_impl->dispose();  }

void get_DebugLogFilePath(CkString &propVal);
void put_DebugLogFilePath(const wchar_t *w1);
int get_IsDst(void);
void LastErrorHtml(CkString &propVal);
void LastErrorText(CkString &propVal);
void LastErrorXml(CkString &propVal);
int get_UtcOffset(void);
bool get_VerboseLogging(void);
void put_VerboseLogging(bool propVal);
void get_Version(CkString &propVal);
bool AddDays(int numDays);
void DeSerialize(const wchar_t *w1);
__int64 GetAsDateTimeTicks(bool bLocal);
#if !defined(CK_USE_UINT_T)
unsigned long GetAsDosDate(bool bLocal);
#endif
#if defined(CK_USE_UINT_T)
uint32_t GetAsDosDate(bool bLocal);
#endif
void GetAsFileTime(bool bLocal,FILETIME &fTime);
double GetAsOleDate(bool bLocal);
bool GetAsRfc822(bool bLocal,CkString &outStr);
void GetAsSystemTime(bool bLocal,SYSTEMTIME &outSysTime);
void GetAsTmStruct(bool bLocal,struct tm &tmbuf);
time_t GetAsUnixTime(bool bLocal);
__int64 GetAsUnixTime64(bool bLocal);
double GetAsUnixTimeDbl(bool bLocal);
#if !defined(CK_USE_UINT_T)
unsigned short GetDosDateHigh(bool bLocal);
#endif
#if defined(CK_USE_UINT_T)
uint16_t GetDosDateHigh(bool bLocal);
#endif
#if !defined(CK_USE_UINT_T)
unsigned short GetDosDateLow(bool bLocal);
#endif
#if defined(CK_USE_UINT_T)
uint16_t GetDosDateLow(bool bLocal);
#endif
bool SaveLastError(const wchar_t *w1);
bool Serialize(CkString &outStr);
void SetFromCurrentSystemTime(void);
void SetFromDateTimeTicks(bool bLocal,__int64 n);
#if !defined(CK_USE_UINT_T)
void SetFromDosDate(bool bLocal,unsigned long t);
#endif
#if defined(CK_USE_UINT_T)
void SetFromDosDate(bool bLocal,uint32_t t);
#endif
#if !defined(CK_USE_UINT_T)
void SetFromDosDate2(bool bLocal,unsigned short d,unsigned short t);
#endif
#if defined(CK_USE_UINT_T)
void SetFromDosDate2(bool bLocal,uint16_t d,uint16_t t);
#endif
void SetFromFileTime(bool bLocal,FILETIME &fTime);
void SetFromOleDate(bool bLocal,double dt);
bool SetFromRfc822(const wchar_t *w1);
void SetFromSystemTime(bool bLocal,SYSTEMTIME &sysTime);
void SetFromTmStruct(bool bLocal,struct tm &tmbuf);
void SetFromUnixTime(bool bLocal,time_t t);
void SetFromUnixTime64(bool bLocal,__int64 t);
void SetFromUnixTimeDbl(bool bLocal,double t);
const wchar_t *debugLogFilePath(void);
const wchar_t *getAsRfc822(bool bLocal);
const wchar_t *lastErrorHtml(void);
const wchar_t *lastErrorText(void);
const wchar_t *lastErrorXml(void);
const wchar_t *serialize(void);
const wchar_t *version(void);

};
#ifndef __sun__
#pragma pack (pop)
#endif

#endif
