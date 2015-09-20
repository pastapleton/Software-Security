#ifndef _CkZipEntryW_H
#define _CkZipEntryW_H
// This header is generated.
#include "chilkatDefs.h"

#pragma once

#include "CkWideCharBase.h"
#include "CkString.h"
#include "CkZipEntry.h"

class CkDateTimeW;
class CkZipEntryProgress;



#ifndef __sun__
#pragma pack (push, 8) 
#endif


class CkZipEntryW : public CkWideCharBase
{
    private:
	CkZipEntry *m_impl;
		void *m_dsoProgress;


        // Disallow assignment or copying this object.
	CkZipEntryW(const CkZipEntryW &) { }
	CkZipEntryW &operator=(const CkZipEntryW &) { return *this; }


    public:
	CkZipEntryW();
	CkZipEntryW(CkZipEntry *p, bool bForDso);
	CkZipEntryW(bool bForDso);
	virtual ~CkZipEntryW();
	CkZipEntry *getMbPtr(void) { return m_impl; }
	CkZipEntry &getMbRef(void) { return *m_impl; }
	const CkZipEntry *getMbConstPtr(void) const { return m_impl; }
	const CkZipEntry &getMbConstRef(void) const { return *m_impl; }
	void dispose(void) { if (m_impl) m_impl->dispose();  }

	CkZipEntryProgress *get_EventCallbackObjectA(void) const;
	void put_EventCallbackObjectA(CkZipEntryProgress *progress);

void get_Comment(CkString &propVal);
void put_Comment(const wchar_t *w1);
unsigned long get_CompressedLength(void);
__int64 get_CompressedLength64(void);
void get_CompressedLengthStr(CkString &propVal);
int get_CompressionLevel(void);
void put_CompressionLevel(int propVal);
int get_CompressionMethod(void);
void put_CompressionMethod(int propVal);
int get_Crc(void);
void get_DebugLogFilePath(CkString &propVal);
void put_DebugLogFilePath(const wchar_t *w1);
int get_EntryID(void);
int get_EntryType(void);
void get_FileDateTime(SYSTEMTIME &propVal);
void put_FileDateTime(SYSTEMTIME & propVal);
void get_FileDateTimeStr(CkString &propVal);
void put_FileDateTimeStr(const wchar_t *w1);
void get_FileName(CkString &propVal);
void put_FileName(const wchar_t *w1);
int get_HeartbeatMs(void);
void put_HeartbeatMs(int propVal);
bool get_IsDirectory(void);
void LastErrorHtml(CkString &propVal);
void LastErrorText(CkString &propVal);
void LastErrorXml(CkString &propVal);
bool get_TextFlag(void);
void put_TextFlag(bool propVal);
unsigned long get_UncompressedLength(void);
__int64 get_UncompressedLength64(void);
void get_UncompressedLengthStr(CkString &propVal);
bool get_VerboseLogging(void);
void put_VerboseLogging(bool propVal);
void get_Version(CkString &propVal);
bool AppendData(const CkByteData &bdata);
bool AppendString(const wchar_t *w1,const wchar_t *w2);
bool Copy(CkByteData &outData);
bool CopyToBase64(CkString &outStr);
bool CopyToHex(CkString &outStr);
bool Extract(const wchar_t *w1);
bool ExtractInto(const wchar_t *w1);
CkDateTimeW *GetDt(void);
bool Inflate(CkByteData &outData);
CkZipEntryW *NextEntry(void);
bool ReplaceData(const CkByteData &bdata);
bool ReplaceString(const wchar_t *w1,const wchar_t *w2);
bool SaveLastError(const wchar_t *w1);
void SetDt(CkDateTimeW &dt);
bool UnzipToString(int lineEndingBehavior,const wchar_t *w1,CkString &outStr);
const wchar_t *comment(void);
const wchar_t *compressedLengthStr(void);
const wchar_t *copyToBase64(void);
const wchar_t *copyToHex(void);
const wchar_t *debugLogFilePath(void);
const wchar_t *fileDateTimeStr(void);
const wchar_t *fileName(void);
const wchar_t *lastErrorHtml(void);
const wchar_t *lastErrorText(void);
const wchar_t *lastErrorXml(void);
const wchar_t *uncompressedLengthStr(void);
const wchar_t *unzipToString(int lineEndingBehavior,const wchar_t *w1);
const wchar_t *version(void);

};
#ifndef __sun__
#pragma pack (pop)
#endif

#endif
