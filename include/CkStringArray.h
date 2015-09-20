// CkStringArray.h: interface for the CkStringArray class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkStringArray_H
#define _CkStringArray_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"




#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkStringArray
class CkStringArray  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkStringArray(const CkStringArray &);
	CkStringArray &operator=(const CkStringArray &);

    public:
	CkStringArray(void);
	virtual ~CkStringArray(void);

	static CkStringArray *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	int get_Count(void);

	bool get_Crlf(void);
	void put_Crlf(bool newVal);

	bool get_Trim(void);
	void put_Trim(bool newVal);

	bool get_Unique(void);
	void put_Unique(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	bool Append(const char *str);

	bool AppendSerialized(const char *encodedStr);

	void Clear(void);

	bool Contains(const char *str);

	int Find(const char *str, int firstIndex);

	int FindFirstMatch(const char *str, int firstIndex);

	bool GetString(int index, CkString &outStr);
	const char *getString(int index);
	const char *string(int index);

	int GetStringLen(int index);

	void InsertAt(int index, const char *str);

	bool LastString(CkString &outStr);
	const char *lastString(void);

	bool LoadFromFile(const char *path);

	bool LoadFromFile2(const char *path, const char *charset);

	void LoadFromText(const char *str);

	bool Pop(CkString &outStr);
	const char *pop(void);

	void Prepend(const char *str);

	void Remove(const char *str);

	bool RemoveAt(int index);

	bool SaveNthToFile(int index, const char *path);

	bool SaveToFile(const char *path);

	bool SaveToFile2(const char *path, const char *charset);

	bool SaveToText(CkString &outStr);
	const char *saveToText(void);

	bool Serialize(CkString &outStr);
	const char *serialize(void);

	void Sort(bool ascending);

	void SplitAndAppend(const char *str, const char *boundary);

	bool StrAt(int index, CkString &outStr);
	const char *strAt(int index);

	void Subtract(CkStringArray &sa);

	void Union(CkStringArray &sa);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
