// CkBounce.h: interface for the CkBounce class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkBounce_H
#define _CkBounce_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkEmail;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkBounce
class CkBounce  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkBounce(const CkBounce &);
	CkBounce &operator=(const CkBounce &);

    public:
	CkBounce(void);
	virtual ~CkBounce(void);

	static CkBounce *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_BounceAddress(CkString &str);
	const char *bounceAddress(void);

	void get_BounceData(CkString &str);
	const char *bounceData(void);

	int get_BounceType(void);



	// ----------------------
	// Methods
	// ----------------------
	bool ExamineEmail(const CkEmail &email);

	bool ExamineEml(const char *emlPath);

	bool ExamineMime(const char *mimeString);

	bool UnlockComponent(const char *unlockCode);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
