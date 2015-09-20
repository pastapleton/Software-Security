// CkGzip.h: interface for the CkGzip class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkGzip_H
#define _CkGzip_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkDateTime;
class CkGzipProgress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkGzip
class CkGzip  : public CkMultiByteBase
{
    private:
	CkGzipProgress *m_callback;

	// Don't allow assignment or copying these objects.
	CkGzip(const CkGzip &);
	CkGzip &operator=(const CkGzip &);

    public:
	CkGzip(void);
	virtual ~CkGzip(void);

	static CkGzip *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkGzipProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkGzipProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_Comment(CkString &str);
	const char *comment(void);
	void put_Comment(const char *newVal);

	void get_ExtraData(CkByteData &outBytes);
	void put_ExtraData(const CkByteData &inBytes);

	void get_Filename(CkString &str);
	const char *filename(void);
	void put_Filename(const char *newVal);

	int get_HeartbeatMs(void);
	void put_HeartbeatMs(int newVal);

	void get_LastMod(SYSTEMTIME &outSysTime);
	void put_LastMod(const SYSTEMTIME &sysTime);

	void get_LastModStr(CkString &str);
	const char *lastModStr(void);
	void put_LastModStr(const char *newVal);

	bool get_UseCurrentDate(void);
	void put_UseCurrentDate(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// eventCallbacks
	bool CompressFile(const char *srcPath, const char *destPath);

	// eventCallbacks
	bool CompressFile2(const char *srcPath, const char *embeddedFilename, const char *destPath);

	// eventCallbacks
	bool CompressFileToMem(const char *srcPath, CkByteData &outData);

	// eventCallbacks
	bool CompressMemToFile(const CkByteData &db, const char *destPath);

	// eventCallbacks
	bool CompressMemory(const CkByteData &dbIn, CkByteData &outData);

	// eventCallbacks
	bool CompressString(const char *inStr, const char *destCharset, CkByteData &outBytes);

	bool CompressStringENC(const char *strIn, const char *charset, const char *encoding, CkString &outStr);
	const char *compressStringENC(const char *strIn, const char *charset, const char *encoding);

	// eventCallbacks
	bool CompressStringToFile(const char *inStr, const char *destCharset, const char *destPath);

	bool Decode(const char *str, const char *encoding, CkByteData &outBytes);

	bool DeflateStringENC(const char *str, const char *charset, const char *encoding, CkString &outStr);
	const char *deflateStringENC(const char *str, const char *charset, const char *encoding);

	bool Encode(const CkByteData &byteData, const char *encoding, CkString &outStr);
	const char *encode(const CkByteData &byteData, const char *encoding);

	bool ExamineFile(const char *inGzPath);

	bool ExamineMemory(const CkByteData &inGzData);

	CkDateTime *GetDt(void);

	bool InflateStringENC(const char *str, const char *charset, const char *encoding, CkString &outStr);
	const char *inflateStringENC(const char *str, const char *charset, const char *encoding);

	bool IsUnlocked(void);

	bool ReadFile(const char *path, CkByteData &outBytes);

	bool SetDt(CkDateTime &dt);

	// eventCallbacks
	bool UnTarGz(const char *gzPath, const char *destDir, bool bNoAbsolute);

	// eventCallbacks
	bool UncompressFile(const char *srcPath, const char *destPath);

	// eventCallbacks
	bool UncompressFileToMem(const char *srcPath, CkByteData &outData);

	// eventCallbacks
	bool UncompressFileToString(const char *srcPath, const char *inCharset, CkString &outStr);
	const char *uncompressFileToString(const char *srcPath, const char *inCharset);

	// eventCallbacks
	bool UncompressMemToFile(const CkByteData &db, const char *destPath);

	// eventCallbacks
	bool UncompressMemory(const CkByteData &dbIn, CkByteData &outData);

	// eventCallbacks
	bool UncompressString(const CkByteData &inData, const char *inCharset, CkString &outStr);
	const char *uncompressString(const CkByteData &inData, const char *inCharset);

	bool UncompressStringENC(const char *strIn, const char *charset, const char *encoding, CkString &outStr);
	const char *uncompressStringENC(const char *strIn, const char *charset, const char *encoding);

	bool UnlockComponent(const char *unlockCode);

	bool WriteFile(const char *path, const CkByteData &binaryData);

	bool XfdlToXml(const char *xfdl, CkString &outStr);
	const char *xfdlToXml(const char *xfdl);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
