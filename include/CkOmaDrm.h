// CkOmaDrm.h: interface for the CkOmaDrm class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkOmaDrm_H
#define _CkOmaDrm_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkOmaDrm
class CkOmaDrm  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkOmaDrm(const CkOmaDrm &);
	CkOmaDrm &operator=(const CkOmaDrm &);

    public:
	CkOmaDrm(void);
	virtual ~CkOmaDrm(void);

	static CkOmaDrm *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_Base64Key(CkString &str);
	const char *base64Key(void);
	void put_Base64Key(const char *newVal);

	void get_ContentType(CkString &str);
	const char *contentType(void);
	void put_ContentType(const char *newVal);

	void get_ContentUri(CkString &str);
	const char *contentUri(void);
	void put_ContentUri(const char *newVal);

	void get_DecryptedData(CkByteData &outBytes);

	int get_DrmContentVersion(void);

	void get_EncryptedData(CkByteData &outBytes);

	void get_Headers(CkString &str);
	const char *headers(void);
	void put_Headers(const char *newVal);

	void get_IV(CkByteData &outBytes);
	void put_IV(const CkByteData &inBytes);



	// ----------------------
	// Methods
	// ----------------------
	bool CreateDcfFile(const char *path);

	bool GetHeaderField(const char *fieldName, CkString &outVal);
	const char *getHeaderField(const char *fieldName);
	const char *headerField(const char *fieldName);

	bool LoadDcfData(const CkByteData &data);

	bool LoadDcfFile(const char *path);

	void LoadUnencryptedData(const CkByteData &data);

	bool LoadUnencryptedFile(const char *path);

	bool SaveDecrypted(const char *path);

	void SetEncodedIV(const char *encodedIv, const char *encoding);

	bool UnlockComponent(const char *unlockCode);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
