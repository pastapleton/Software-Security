#ifndef _CkCsvW_H
#define _CkCsvW_H
// This header is generated.
#include "chilkatDefs.h"

#pragma once

#include "CkWideCharBase.h"
#include "CkString.h"
#include "CkCsv.h"




#ifndef __sun__
#pragma pack (push, 8) 
#endif


class CkCsvW : public CkWideCharBase
{
    private:
	CkCsv *m_impl;
	

        // Disallow assignment or copying this object.
	CkCsvW(const CkCsvW &) { }
	CkCsvW &operator=(const CkCsvW &) { return *this; }


    public:
	CkCsvW();
	CkCsvW(CkCsv *p, bool bForDso);
	CkCsvW(bool bForDso);
	virtual ~CkCsvW();
	CkCsv *getMbPtr(void) { return m_impl; }
	CkCsv &getMbRef(void) { return *m_impl; }
	const CkCsv *getMbConstPtr(void) const { return m_impl; }
	const CkCsv &getMbConstRef(void) const { return *m_impl; }
	void dispose(void) { if (m_impl) m_impl->dispose();  }

bool get_AutoTrim(void);
void put_AutoTrim(bool propVal);
bool get_Crlf(void);
void put_Crlf(bool propVal);
void get_DebugLogFilePath(CkString &propVal);
void put_DebugLogFilePath(const wchar_t *w1);
void get_Delimiter(CkString &propVal);
void put_Delimiter(const wchar_t *w1);
bool get_HasColumnNames(void);
void put_HasColumnNames(bool propVal);
void LastErrorHtml(CkString &propVal);
void LastErrorText(CkString &propVal);
void LastErrorXml(CkString &propVal);
int get_NumColumns(void);
int get_NumRows(void);
bool get_VerboseLogging(void);
void put_VerboseLogging(bool propVal);
void get_Version(CkString &propVal);
bool DeleteColumn(int index);
bool DeleteColumnByName(const wchar_t *w1);
bool DeleteRow(int index);
bool GetCell(int row,int col,CkString &outStr);
bool GetCellByName(int row,const wchar_t *w1,CkString &outStr);
bool GetColumnName(int index,CkString &outStr);
int GetIndex(const wchar_t *w1);
int GetNumCols(int row);
bool LoadFile(const wchar_t *w1);
bool LoadFile2(const wchar_t *w1,const wchar_t *w2);
bool LoadFromString(const wchar_t *w1);
bool RowMatches(int row,const wchar_t *w1,bool bCaseSensitive);
bool SaveFile(const wchar_t *w1);
bool SaveFile2(const wchar_t *w1,const wchar_t *w2);
bool SaveLastError(const wchar_t *w1);
bool SaveToString(CkString &outStr);
bool SetCell(int row,int col,const wchar_t *w1);
bool SetCellByName(int row,const wchar_t *w1,const wchar_t *w2);
bool SetColumnName(int index,const wchar_t *w1);
bool SortByColumn(const wchar_t *w1,bool bAscending,bool bCaseSensitive);
const wchar_t *cell(int row,int col);
const wchar_t *cellByName(int row,const wchar_t *w1);
const wchar_t *columnName(int index);
const wchar_t *debugLogFilePath(void);
const wchar_t *delimiter(void);
const wchar_t *getCell(int row,int col);
const wchar_t *getCellByName(int row,const wchar_t *w1);
const wchar_t *getColumnName(int index);
const wchar_t *lastErrorHtml(void);
const wchar_t *lastErrorText(void);
const wchar_t *lastErrorXml(void);
const wchar_t *saveToString(void);
const wchar_t *version(void);

};
#ifndef __sun__
#pragma pack (pop)
#endif

#endif
