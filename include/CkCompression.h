// CkCompression.h: interface for the CkCompression class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkCompression_H
#define _CkCompression_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkCompressionProgress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkCompression
class CkCompression  : public CkMultiByteBase
{
    private:
	CkCompressionProgress *m_callback;

	// Don't allow assignment or copying these objects.
	CkCompression(const CkCompression &);
	CkCompression &operator=(const CkCompression &);

    public:
	CkCompression(void);
	virtual ~CkCompression(void);

	static CkCompression *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkCompressionProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkCompressionProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_Algorithm(CkString &str);
	const char *algorithm(void);
	void put_Algorithm(const char *newVal);

	void get_Charset(CkString &str);
	const char *charset(void);
	void put_Charset(const char *newVal);

	void get_EncodingMode(CkString &str);
	const char *encodingMode(void);
	void put_EncodingMode(const char *newVal);

	int get_HeartbeatMs(void);
	void put_HeartbeatMs(int newVal);



	// ----------------------
	// Methods
	// ----------------------
	// eventCallbacks
	bool BeginCompressBytes(const CkByteData &bData, CkByteData &outData);

	// eventCallbacks
	bool BeginCompressBytesENC(const CkByteData &bData, CkString &outStr);
	const char *beginCompressBytesENC(const CkByteData &bData);

	// eventCallbacks
	bool BeginCompressString(const char *str, CkByteData &outData);

	// eventCallbacks
	bool BeginCompressStringENC(const char *str, CkString &outStr);
	const char *beginCompressStringENC(const char *str);

	// eventCallbacks
	bool BeginDecompressBytes(const CkByteData &bData, CkByteData &outData);

	// eventCallbacks
	bool BeginDecompressBytesENC(const char *str, CkByteData &outData);

	// eventCallbacks
	bool BeginDecompressString(const CkByteData &bData, CkString &outStr);
	const char *beginDecompressString(const CkByteData &bData);

	// eventCallbacks
	bool BeginDecompressStringENC(const char *str, CkString &outStr);
	const char *beginDecompressStringENC(const char *str);

	// eventCallbacks
	bool CompressBytes(const CkByteData &bData, CkByteData &outData);

	// eventCallbacks
	bool CompressBytesENC(const CkByteData &bData, CkString &outStr);
	const char *compressBytesENC(const CkByteData &bData);

	// eventCallbacks
	bool CompressFile(const char *srcPath, const char *destPath);

	// eventCallbacks
	bool CompressString(const char *str, CkByteData &outData);

	// eventCallbacks
	bool CompressStringENC(const char *str, CkString &outStr);
	const char *compressStringENC(const char *str);

	// eventCallbacks
	bool DecompressBytes(const CkByteData &bData, CkByteData &outData);

	// eventCallbacks
	bool DecompressBytesENC(const char *str, CkByteData &outData);

	// eventCallbacks
	bool DecompressFile(const char *srcPath, const char *destPath);

	// eventCallbacks
	bool DecompressString(const CkByteData &bData, CkString &outStr);
	const char *decompressString(const CkByteData &bData);

	// eventCallbacks
	bool DecompressStringENC(const char *str, CkString &outStr);
	const char *decompressStringENC(const char *str);

	// eventCallbacks
	bool EndCompressBytes(CkByteData &outData);

	// eventCallbacks
	bool EndCompressBytesENC(CkString &outStr);
	const char *endCompressBytesENC(void);

	// eventCallbacks
	bool EndCompressString(CkByteData &outData);

	// eventCallbacks
	bool EndCompressStringENC(CkString &outStr);
	const char *endCompressStringENC(void);

	// eventCallbacks
	bool EndDecompressBytes(CkByteData &outData);

	// eventCallbacks
	bool EndDecompressBytesENC(CkByteData &outData);

	// eventCallbacks
	bool EndDecompressString(CkString &outStr);
	const char *endDecompressString(void);

	// eventCallbacks
	bool EndDecompressStringENC(CkString &outStr);
	const char *endDecompressStringENC(void);

	// eventCallbacks
	bool MoreCompressBytes(const CkByteData &bData, CkByteData &outData);

	// eventCallbacks
	bool MoreCompressBytesENC(const CkByteData &bData, CkString &outStr);
	const char *moreCompressBytesENC(const CkByteData &bData);

	// eventCallbacks
	bool MoreCompressString(const char *str, CkByteData &outData);

	// eventCallbacks
	bool MoreCompressStringENC(const char *str, CkString &outStr);
	const char *moreCompressStringENC(const char *str);

	// eventCallbacks
	bool MoreDecompressBytes(const CkByteData &bData, CkByteData &outData);

	// eventCallbacks
	bool MoreDecompressBytesENC(const char *str, CkByteData &outData);

	// eventCallbacks
	bool MoreDecompressString(const CkByteData &bData, CkString &outStr);
	const char *moreDecompressString(const CkByteData &bData);

	// eventCallbacks
	bool MoreDecompressStringENC(const char *str, CkString &outStr);
	const char *moreDecompressStringENC(const char *str);

	bool UnlockComponent(const char *unlockCode);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
