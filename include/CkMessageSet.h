// CkMessageSet.h: interface for the CkMessageSet class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkMessageSet_H
#define _CkMessageSet_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"




#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkMessageSet
class CkMessageSet  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkMessageSet(const CkMessageSet &);
	CkMessageSet &operator=(const CkMessageSet &);

    public:
	CkMessageSet(void);
	virtual ~CkMessageSet(void);

	static CkMessageSet *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	int get_Count(void);

	bool get_HasUids(void);
	void put_HasUids(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	bool ContainsId(int id);

	bool FromCompactString(const char *str);

	int GetId(int index);

	void InsertId(int id);

	void RemoveId(int id);

	bool ToCompactString(CkString &outStr);
	const char *toCompactString(void);

	bool ToString(CkString &outStr);
	const char *toString(void);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
