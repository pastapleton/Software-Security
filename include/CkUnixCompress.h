// CkUnixCompress.h: interface for the CkUnixCompress class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkUnixCompress_H
#define _CkUnixCompress_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkUnixCompress
class CkUnixCompress  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkUnixCompress(const CkUnixCompress &);
	CkUnixCompress &operator=(const CkUnixCompress &);

    public:
	CkUnixCompress(void);
	virtual ~CkUnixCompress(void);

	static CkUnixCompress *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------


	// ----------------------
	// Methods
	// ----------------------
	bool CompressFile(const char *srcPath, const char *destPath);

	bool CompressFileToMem(const char *srcPath, CkByteData &outData);

	bool CompressMemToFile(const CkByteData &db, const char *destPath);

	bool CompressMemory(const CkByteData &dbIn, CkByteData &outData);

	bool CompressString(const char *inStr, const char *charset, CkByteData &outBytes);

	bool CompressStringToFile(const char *inStr, const char *charset, const char *destPath);

	bool IsUnlocked(void);

	bool UnTarZ(const char *zPath, const char *destDir, bool bNoAbsolute);

	bool UncompressFile(const char *srcPath, const char *destPath);

	bool UncompressFileToMem(const char *srcPath, CkByteData &outData);

	bool UncompressFileToString(const char *srcPath, const char *inCharset, CkString &outStr);
	const char *uncompressFileToString(const char *srcPath, const char *inCharset);

	bool UncompressMemToFile(const CkByteData &db, const char *destPath);

	bool UncompressMemory(const CkByteData &dbIn, CkByteData &outData);

	bool UncompressString(const CkByteData &inData, const char *inCharset, CkString &outStr);
	const char *uncompressString(const CkByteData &inData, const char *inCharset);

	bool UnlockComponent(const char *unlockCode);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
