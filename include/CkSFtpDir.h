// CkSFtpDir.h: interface for the CkSFtpDir class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkSFtpDir_H
#define _CkSFtpDir_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkSFtpFile;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkSFtpDir
class CkSFtpDir  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkSFtpDir(const CkSFtpDir &);
	CkSFtpDir &operator=(const CkSFtpDir &);

    public:
	CkSFtpDir(void);
	virtual ~CkSFtpDir(void);

	static CkSFtpDir *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	int get_NumFilesAndDirs(void);

	void get_OriginalPath(CkString &str);
	const char *originalPath(void);



	// ----------------------
	// Methods
	// ----------------------
	CkSFtpFile *GetFileObject(int index);

	bool GetFilename(int index, CkString &outStr);
	const char *getFilename(int index);
	const char *filename(int index);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
