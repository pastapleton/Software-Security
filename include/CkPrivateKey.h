// CkPrivateKey.h: interface for the CkPrivateKey class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkPrivateKey_H
#define _CkPrivateKey_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkPrivateKey
class CkPrivateKey  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkPrivateKey(const CkPrivateKey &);
	CkPrivateKey &operator=(const CkPrivateKey &);

    public:
	CkPrivateKey(void);
	virtual ~CkPrivateKey(void);

	static CkPrivateKey *createNew(void);
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
	bool GetPkcs8(CkByteData &outData);

	bool GetPkcs8Encrypted(const char *password, CkByteData &outBytes);

	bool GetPkcs8EncryptedPem(const char *password, CkString &outStr);
	const char *getPkcs8EncryptedPem(const char *password);
	const char *pkcs8EncryptedPem(const char *password);

	bool GetPkcs8Pem(CkString &outStr);
	const char *getPkcs8Pem(void);
	const char *pkcs8Pem(void);

	bool GetRsaDer(CkByteData &outData);

	bool GetRsaPem(CkString &outStr);
	const char *getRsaPem(void);
	const char *rsaPem(void);

	bool GetXml(CkString &outStr);
	const char *getXml(void);
	const char *xml(void);

	bool LoadEncryptedPem(const char *pemStr, const char *password);

	bool LoadEncryptedPemFile(const char *path, const char *password);

	bool LoadPem(const char *str);

	bool LoadPemFile(const char *path);

	bool LoadPkcs8(const CkByteData &data);

	bool LoadPkcs8Encrypted(const CkByteData &data, const char *password);

	bool LoadPkcs8EncryptedFile(const char *path, const char *password);

	bool LoadPkcs8File(const char *path);

#if defined(CK_CRYPTOAPI_INCLUDED)
	bool LoadPvk(const CkByteData &data, const char *password);
#endif

#if defined(CK_CRYPTOAPI_INCLUDED)
	bool LoadPvkFile(const char *path, const char *password);
#endif

	bool LoadRsaDer(const CkByteData &data);

	bool LoadRsaDerFile(const char *path);

	bool LoadXml(const char *xml);

	bool LoadXmlFile(const char *path);

	bool SavePkcs8EncryptedFile(const char *password, const char *path);

	bool SavePkcs8EncryptedPemFile(const char *password, const char *path);

	bool SavePkcs8File(const char *path);

	bool SavePkcs8PemFile(const char *path);

	bool SaveRsaDerFile(const char *path);

	bool SaveRsaPemFile(const char *path);

	bool SaveXmlFile(const char *path);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
