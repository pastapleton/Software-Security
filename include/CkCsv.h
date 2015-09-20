// CkCsv.h: interface for the CkCsv class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkCsv_H
#define _CkCsv_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"




#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkCsv
class CkCsv  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkCsv(const CkCsv &);
	CkCsv &operator=(const CkCsv &);

    public:
	CkCsv(void);
	virtual ~CkCsv(void);

	static CkCsv *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	bool get_AutoTrim(void);
	void put_AutoTrim(bool newVal);

	bool get_Crlf(void);
	void put_Crlf(bool newVal);

	void get_Delimiter(CkString &str);
	const char *delimiter(void);
	void put_Delimiter(const char *newVal);

	bool get_HasColumnNames(void);
	void put_HasColumnNames(bool newVal);

	int get_NumColumns(void);

	int get_NumRows(void);



	// ----------------------
	// Methods
	// ----------------------
	bool DeleteColumn(int index);

	bool DeleteColumnByName(const char *columnName);

	bool DeleteRow(int index);

	bool GetCell(int row, int col, CkString &outStr);
	const char *getCell(int row, int col);
	const char *cell(int row, int col);

	bool GetCellByName(int row, const char *columnName, CkString &outStr);
	const char *getCellByName(int row, const char *columnName);
	const char *cellByName(int row, const char *columnName);

	bool GetColumnName(int index, CkString &outStr);
	const char *getColumnName(int index);
	const char *columnName(int index);

	int GetIndex(const char *columnName);

	int GetNumCols(int row);

	bool LoadFile(const char *path);

	bool LoadFile2(const char *path, const char *charset);

	bool LoadFromString(const char *csvData);

	bool RowMatches(int row, const char *matchPattern, bool bCaseSensitive);

	bool SaveFile(const char *path);

	bool SaveFile2(const char *path, const char *charset);

	bool SaveToString(CkString &outStr);
	const char *saveToString(void);

	bool SetCell(int row, int col, const char *content);

	bool SetCellByName(int row, const char *columnName, const char *content);

	bool SetColumnName(int index, const char *columnName);

	bool SortByColumn(const char *columnName, bool bAscending, bool bCaseSensitive);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
