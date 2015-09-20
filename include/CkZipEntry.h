// CkZipEntry.h: interface for the CkZipEntry class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkZipEntry_H
#define _CkZipEntry_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkDateTime;
class CkZipEntryProgress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkZipEntry
class CkZipEntry  : public CkMultiByteBase
{
    private:
	CkZipEntryProgress *m_callback;

	// Don't allow assignment or copying these objects.
	CkZipEntry(const CkZipEntry &);
	CkZipEntry &operator=(const CkZipEntry &);

    public:
	CkZipEntry(void);
	virtual ~CkZipEntry(void);

	static CkZipEntry *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkZipEntryProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkZipEntryProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_Comment(CkString &str);
	const char *comment(void);
	void put_Comment(const char *newVal);

	unsigned long get_CompressedLength(void);

	__int64 get_CompressedLength64(void);

	void get_CompressedLengthStr(CkString &str);
	const char *compressedLengthStr(void);

	int get_CompressionLevel(void);
	void put_CompressionLevel(int newVal);

	int get_CompressionMethod(void);
	void put_CompressionMethod(int newVal);

	int get_Crc(void);

	int get_EntryID(void);

	int get_EntryType(void);

	void get_FileDateTime(SYSTEMTIME &outSysTime);
	void put_FileDateTime(const SYSTEMTIME &sysTime);

	void get_FileDateTimeStr(CkString &str);
	const char *fileDateTimeStr(void);
	void put_FileDateTimeStr(const char *newVal);

	void get_FileName(CkString &str);
	const char *fileName(void);
	void put_FileName(const char *newVal);

	int get_HeartbeatMs(void);
	void put_HeartbeatMs(int newVal);

	bool get_IsDirectory(void);

	bool get_TextFlag(void);
	void put_TextFlag(bool newVal);

	unsigned long get_UncompressedLength(void);

	__int64 get_UncompressedLength64(void);

	void get_UncompressedLengthStr(CkString &str);
	const char *uncompressedLengthStr(void);



	// ----------------------
	// Methods
	// ----------------------
	bool AppendData(const CkByteData &bdata);

	bool AppendString(const char *inStr, const char *charset);

	bool Copy(CkByteData &outData);

	bool CopyToBase64(CkString &outStr);
	const char *copyToBase64(void);

	bool CopyToHex(CkString &outStr);
	const char *copyToHex(void);

	// eventCallbacks
	bool Extract(const char *dirPath);

	// eventCallbacks
	bool ExtractInto(const char *dirPath);

	CkDateTime *GetDt(void);

	// eventCallbacks
	bool Inflate(CkByteData &outData);

	CkZipEntry *NextEntry(void);

	bool ReplaceData(const CkByteData &bdata);

	bool ReplaceString(const char *inStr, const char *charset);

	void SetDt(CkDateTime &dt);

	// eventCallbacks
	bool UnzipToString(int lineEndingBehavior, const char *srcCharset, CkString &outStr);
	const char *unzipToString(int lineEndingBehavior, const char *srcCharset);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
