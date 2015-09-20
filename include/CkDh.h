// CkDh.h: interface for the CkDh class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkDh_H
#define _CkDh_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"




#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkDh
class CkDh  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkDh(const CkDh &);
	CkDh &operator=(const CkDh &);

    public:
	CkDh(void);
	virtual ~CkDh(void);

	static CkDh *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	int get_G(void);

	void get_P(CkString &str);
	const char *p(void);



	// ----------------------
	// Methods
	// ----------------------
	bool CreateE(int numBits, CkString &outStr);
	const char *createE(int numBits);

	bool FindK(const char *e, CkString &outStr);
	const char *findK(const char *e);

	bool GenPG(int numBits, int g);

	bool SetPG(const char *p, int g);

	bool UnlockComponent(const char *unlockCode);

	void UseKnownPrime(int index);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
