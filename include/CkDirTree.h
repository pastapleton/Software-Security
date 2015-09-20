// CkDirTree.h: interface for the CkDirTree class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkDirTree_H
#define _CkDirTree_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"




#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkDirTree
class CkDirTree  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkDirTree(const CkDirTree &);
	CkDirTree &operator=(const CkDirTree &);

    public:
	CkDirTree(void);
	virtual ~CkDirTree(void);

	static CkDirTree *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_BaseDir(CkString &str);
	const char *baseDir(void);
	void put_BaseDir(const char *newVal);

	bool get_DoneIterating(void);

	int get_FileSize32(void);

	__int64 get_FileSize64(void);

	void get_FullPath(CkString &str);
	const char *fullPath(void);

	void get_FullUncPath(CkString &str);
	const char *fullUncPath(void);

	bool get_IsDirectory(void);

	bool get_Recurse(void);
	void put_Recurse(bool newVal);

	void get_RelativePath(CkString &str);
	const char *relativePath(void);



	// ----------------------
	// Methods
	// ----------------------
	bool AdvancePosition(void);

	bool BeginIterate(void);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
