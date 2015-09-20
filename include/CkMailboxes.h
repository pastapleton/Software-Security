// CkMailboxes.h: interface for the CkMailboxes class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkMailboxes_H
#define _CkMailboxes_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"




#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkMailboxes
class CkMailboxes  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkMailboxes(const CkMailboxes &);
	CkMailboxes &operator=(const CkMailboxes &);

    public:
	CkMailboxes(void);
	virtual ~CkMailboxes(void);

	static CkMailboxes *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	int get_Count(void);



	// ----------------------
	// Methods
	// ----------------------
	bool GetName(int index, CkString &outStrName);
	const char *getName(int index);
	const char *name(int index);

	bool HasInferiors(int index);

	bool IsMarked(int index);

	bool IsSelectable(int index);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
