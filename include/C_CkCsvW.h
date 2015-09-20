// This is a generated source file for Chilkat version 9.4.1.35
#ifndef _C_CkCsv_W_H
#define _C_CkCsv_W_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkCsvW CkCsvW_Create(void);
HCkCsvW CkCsvW_Create2(BOOL bForDso);
void CkCsvW_Dispose(HCkCsvW handle);
BOOL CkCsvW_getAutoTrim(HCkCsvW cHandle);
void CkCsvW_putAutoTrim(HCkCsvW cHandle, BOOL newVal);
BOOL CkCsvW_getCrlf(HCkCsvW cHandle);
void CkCsvW_putCrlf(HCkCsvW cHandle, BOOL newVal);
void CkCsvW_getDebugLogFilePath(HCkCsvW cHandle, HCkStringW retval);
void CkCsvW_putDebugLogFilePath(HCkCsvW cHandle, const wchar_t *newVal);
void CkCsvW_getDelimiter(HCkCsvW cHandle, HCkStringW retval);
void CkCsvW_putDelimiter(HCkCsvW cHandle, const wchar_t *newVal);
BOOL CkCsvW_getHasColumnNames(HCkCsvW cHandle);
void CkCsvW_putHasColumnNames(HCkCsvW cHandle, BOOL newVal);
void CkCsvW_getLastErrorHtml(HCkCsvW cHandle, HCkStringW retval);
void CkCsvW_getLastErrorText(HCkCsvW cHandle, HCkStringW retval);
void CkCsvW_getLastErrorXml(HCkCsvW cHandle, HCkStringW retval);
int CkCsvW_getNumColumns(HCkCsvW cHandle);
int CkCsvW_getNumRows(HCkCsvW cHandle);
BOOL CkCsvW_getVerboseLogging(HCkCsvW cHandle);
void CkCsvW_putVerboseLogging(HCkCsvW cHandle, BOOL newVal);
void CkCsvW_getVersion(HCkCsvW cHandle, HCkStringW retval);
BOOL CkCsvW_DeleteColumn(HCkCsvW cHandle, int index);
BOOL CkCsvW_DeleteColumnByName(HCkCsvW cHandle, const wchar_t *columnName);
BOOL CkCsvW_DeleteRow(HCkCsvW cHandle, int index);
BOOL CkCsvW_GetCell(HCkCsvW cHandle, int row, int col, HCkStringW outStr);
BOOL CkCsvW_GetCellByName(HCkCsvW cHandle, int row, const wchar_t *columnName, HCkStringW outStr);
BOOL CkCsvW_GetColumnName(HCkCsvW cHandle, int index, HCkStringW outStr);
int CkCsvW_GetIndex(HCkCsvW cHandle, const wchar_t *columnName);
int CkCsvW_GetNumCols(HCkCsvW cHandle, int row);
BOOL CkCsvW_LoadFile(HCkCsvW cHandle, const wchar_t *path);
BOOL CkCsvW_LoadFile2(HCkCsvW cHandle, const wchar_t *path, const wchar_t *charset);
BOOL CkCsvW_LoadFromString(HCkCsvW cHandle, const wchar_t *csvData);
BOOL CkCsvW_RowMatches(HCkCsvW cHandle, int row, const wchar_t *matchPattern, BOOL bCaseSensitive);
BOOL CkCsvW_SaveFile(HCkCsvW cHandle, const wchar_t *path);
BOOL CkCsvW_SaveFile2(HCkCsvW cHandle, const wchar_t *path, const wchar_t *charset);
BOOL CkCsvW_SaveLastError(HCkCsvW cHandle, const wchar_t *path);
BOOL CkCsvW_SaveToString(HCkCsvW cHandle, HCkStringW outStr);
BOOL CkCsvW_SetCell(HCkCsvW cHandle, int row, int col, const wchar_t *content);
BOOL CkCsvW_SetCellByName(HCkCsvW cHandle, int row, const wchar_t *columnName, const wchar_t *content);
BOOL CkCsvW_SetColumnName(HCkCsvW cHandle, int index, const wchar_t *columnName);
BOOL CkCsvW_SortByColumn(HCkCsvW cHandle, const wchar_t *columnName, BOOL bAscending, BOOL bCaseSensitive);
const wchar_t *CkCsvW__cell(HCkCsvW cHandle, int row, int col);
const wchar_t *CkCsvW__cellByName(HCkCsvW cHandle, int row, const wchar_t *columnName);
const wchar_t *CkCsvW__columnName(HCkCsvW cHandle, int index);
const wchar_t *CkCsvW__debugLogFilePath(HCkCsvW cHandle);
const wchar_t *CkCsvW__delimiter(HCkCsvW cHandle);
const wchar_t *CkCsvW__getCell(HCkCsvW cHandle, int row, int col);
const wchar_t *CkCsvW__getCellByName(HCkCsvW cHandle, int row, const wchar_t *columnName);
const wchar_t *CkCsvW__getColumnName(HCkCsvW cHandle, int index);
const wchar_t *CkCsvW__lastErrorHtml(HCkCsvW cHandle);
const wchar_t *CkCsvW__lastErrorText(HCkCsvW cHandle);
const wchar_t *CkCsvW__lastErrorXml(HCkCsvW cHandle);
const wchar_t *CkCsvW__saveToString(HCkCsvW cHandle);
const wchar_t *CkCsvW__version(HCkCsvW cHandle);
#endif
