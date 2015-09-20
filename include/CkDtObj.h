// CkDtObj.h: interface for the CkDtObj class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkDtObj_H
#define _CkDtObj_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"




#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkDtObj
class CkDtObj  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkDtObj(const CkDtObj &);
	CkDtObj &operator=(const CkDtObj &);

    public:
	CkDtObj(void);
	virtual ~CkDtObj(void);

	static CkDtObj *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	int get_Day(void);
	void put_Day(int newVal);

	int get_Hour(void);
	void put_Hour(int newVal);

	int get_Minute(void);
	void put_Minute(int newVal);

	int get_Month(void);
	void put_Month(int newVal);

	int get_Second(void);
	void put_Second(int newVal);

	int get_StructTmMonth(void);
	void put_StructTmMonth(int newVal);

	int get_StructTmYear(void);
	void put_StructTmYear(int newVal);

	bool get_Utc(void);
	void put_Utc(bool newVal);

	int get_Year(void);
	void put_Year(int newVal);



	// ----------------------
	// Methods
	// ----------------------
	void DeSerialize(const char *serializedDtObj);

	bool Serialize(CkString &outStr);
	const char *serialize(void);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
