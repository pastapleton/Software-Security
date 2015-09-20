// CkSshKey.h: interface for the CkSshKey class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkSshKey_H
#define _CkSshKey_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"




#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkSshKey
class CkSshKey  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkSshKey(const CkSshKey &);
	CkSshKey &operator=(const CkSshKey &);

    public:
	CkSshKey(void);
	virtual ~CkSshKey(void);

	static CkSshKey *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_Comment(CkString &str);
	const char *comment(void);
	void put_Comment(const char *newVal);

	bool get_IsDsaKey(void);

	bool get_IsPrivateKey(void);

	bool get_IsRsaKey(void);

	void get_Password(CkString &str);
	const char *password(void);
	void put_Password(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	bool FromOpenSshPrivateKey(const char *keyStr);

	bool FromOpenSshPublicKey(const char *keyStr);

	bool FromPuttyPrivateKey(const char *keyStr);

	bool FromRfc4716PublicKey(const char *keyStr);

	bool FromXml(const char *xmlKey);

	bool GenFingerprint(CkString &outStr);
	const char *genFingerprint(void);

	bool GenerateDsaKey(int numBits);

	bool GenerateRsaKey(int numBits, int exponent);

	bool LoadText(const char *path, CkString &outStr);
	const char *loadText(const char *path);

	bool SaveText(const char *strToSave, const char *path);

	bool ToOpenSshPrivateKey(bool bEncrypt, CkString &outStr);
	const char *toOpenSshPrivateKey(bool bEncrypt);

	bool ToOpenSshPublicKey(CkString &outStr);
	const char *toOpenSshPublicKey(void);

	bool ToPuttyPrivateKey(bool bEncrypt, CkString &outStr);
	const char *toPuttyPrivateKey(bool bEncrypt);

	bool ToRfc4716PublicKey(CkString &outStr);
	const char *toRfc4716PublicKey(void);

	bool ToXml(CkString &outStr);
	const char *toXml(void);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
