// CkSFtpFile.h: interface for the CkSFtpFile class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkSFtpFile_H
#define _CkSFtpFile_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkDateTime;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkSFtpFile
class CkSFtpFile  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkSFtpFile(const CkSFtpFile &);
	CkSFtpFile &operator=(const CkSFtpFile &);

    public:
	CkSFtpFile(void);
	virtual ~CkSFtpFile(void);

	static CkSFtpFile *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_CreateTime(SYSTEMTIME &outSysTime);

	void get_CreateTimeStr(CkString &str);
	const char *createTimeStr(void);

	void get_FileType(CkString &str);
	const char *fileType(void);

	void get_Filename(CkString &str);
	const char *filename(void);

	int get_Gid(void);

	void get_Group(CkString &str);
	const char *group(void);

	bool get_IsAppendOnly(void);

	bool get_IsArchive(void);

	bool get_IsCaseInsensitive(void);

	bool get_IsCompressed(void);

	bool get_IsDirectory(void);

	bool get_IsEncrypted(void);

	bool get_IsHidden(void);

	bool get_IsImmutable(void);

	bool get_IsReadOnly(void);

	bool get_IsRegular(void);

	bool get_IsSparse(void);

	bool get_IsSymLink(void);

	bool get_IsSync(void);

	bool get_IsSystem(void);

	void get_LastAccessTime(SYSTEMTIME &outSysTime);

	void get_LastAccessTimeStr(CkString &str);
	const char *lastAccessTimeStr(void);

	void get_LastModifiedTime(SYSTEMTIME &outSysTime);

	void get_LastModifiedTimeStr(CkString &str);
	const char *lastModifiedTimeStr(void);

	void get_Owner(CkString &str);
	const char *owner(void);

	int get_Permissions(void);

	int get_Size32(void);

	__int64 get_Size64(void);

	void get_SizeStr(CkString &str);
	const char *sizeStr(void);

	int get_Uid(void);



	// ----------------------
	// Methods
	// ----------------------
	CkDateTime *GetCreateDt(void);

	CkDateTime *GetLastAccessDt(void);

	CkDateTime *GetLastModifiedDt(void);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
