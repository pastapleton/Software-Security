// CkBz2.h: interface for the CkBz2 class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkBz2_H
#define _CkBz2_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkBz2Progress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkBz2
class CkBz2  : public CkMultiByteBase
{
    private:
	CkBz2Progress *m_callback;

	// Don't allow assignment or copying these objects.
	CkBz2(const CkBz2 &);
	CkBz2 &operator=(const CkBz2 &);

    public:
	CkBz2(void);
	virtual ~CkBz2(void);

	static CkBz2 *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkBz2Progress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkBz2Progress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	int get_HeartbeatMs(void);
	void put_HeartbeatMs(int newVal);



	// ----------------------
	// Methods
	// ----------------------
	// eventCallbacks
	bool CompressFile(const char *inPath, const char *toPath);

	// eventCallbacks
	bool CompressFileToMem(const char *inPath, CkByteData &outBytes);

	// eventCallbacks
	bool CompressMemToFile(const CkByteData &inData, const char *toPath);

	// eventCallbacks
	bool CompressMemory(const CkByteData &inData, CkByteData &outBytes);

	// eventCallbacks
	bool UncompressFile(const char *inPath, const char *toPath);

	// eventCallbacks
	bool UncompressFileToMem(const char *inPath, CkByteData &outBytes);

	// eventCallbacks
	bool UncompressMemToFile(const CkByteData &inData, const char *toPath);

	// eventCallbacks
	bool UncompressMemory(const CkByteData &inData, CkByteData &outBytes);

	bool UnlockComponent(const char *unlockCode);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
