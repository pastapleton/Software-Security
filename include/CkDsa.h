// CkDsa.h: interface for the CkDsa class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkDsa_H
#define _CkDsa_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkDsa
class CkDsa  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkDsa(const CkDsa &);
	CkDsa &operator=(const CkDsa &);

    public:
	CkDsa(void);
	virtual ~CkDsa(void);

	static CkDsa *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	int get_GroupSize(void);
	void put_GroupSize(int newVal);

	void get_Hash(CkByteData &outBytes);
	void put_Hash(const CkByteData &inBytes);

	void get_HexG(CkString &str);
	const char *hexG(void);

	void get_HexP(CkString &str);
	const char *hexP(void);

	void get_HexQ(CkString &str);
	const char *hexQ(void);

	void get_HexX(CkString &str);
	const char *hexX(void);

	void get_HexY(CkString &str);
	const char *hexY(void);

	void get_Signature(CkByteData &outBytes);
	void put_Signature(const CkByteData &inBytes);



	// ----------------------
	// Methods
	// ----------------------
	bool FromDer(const CkByteData &derData);

	bool FromDerFile(const char *path);

	bool FromEncryptedPem(const char *password, const char *pemData);

	bool FromPem(const char *pemData);

	bool FromPublicDer(const CkByteData &derData);

	bool FromPublicDerFile(const char *path);

	bool FromPublicPem(const char *pemData);

	bool FromXml(const char *xmlKey);

	bool GenKey(int numBits);

	bool GenKeyFromParamsDer(const CkByteData &derBytes);

	bool GenKeyFromParamsDerFile(const char *path);

	bool GenKeyFromParamsPem(const char *pem);

	bool GenKeyFromParamsPemFile(const char *path);

	bool GetEncodedHash(const char *encoding, CkString &outStr);
	const char *getEncodedHash(const char *encoding);
	const char *encodedHash(const char *encoding);

	bool GetEncodedSignature(const char *encoding, CkString &outStr);
	const char *getEncodedSignature(const char *encoding);
	const char *encodedSignature(const char *encoding);

	bool LoadText(const char *path, CkString &outStr);
	const char *loadText(const char *path);

	bool SaveText(const char *strToSave, const char *path);

	bool SetEncodedHash(const char *encoding, const char *encodedHash);

	bool SetEncodedSignature(const char *encoding, const char *encodedSig);

	bool SetEncodedSignatureRS(const char *encoding, const char *encodedR, const char *encodedS);

	bool SetKeyExplicit(int groupSizeInBytes, const char *pHex, const char *qHex, const char *gHex, const char *xHex);

	bool SetPubKeyExplicit(int groupSizeInBytes, const char *pHex, const char *qHex, const char *gHex, const char *yHex);

	bool SignHash(void);

	bool ToDer(CkByteData &outBytes);

	bool ToDerFile(const char *path);

	bool ToEncryptedPem(const char *password, CkString &outStr);
	const char *toEncryptedPem(const char *password);

	bool ToPem(CkString &outStr);
	const char *toPem(void);

	bool ToPublicDer(CkByteData &outBytes);

	bool ToPublicDerFile(const char *path);

	bool ToPublicPem(CkString &outStr);
	const char *toPublicPem(void);

	bool ToXml(bool bPublicOnly, CkString &outStr);
	const char *toXml(bool bPublicOnly);

	bool UnlockComponent(const char *unlockCode);

	bool Verify(void);

	bool VerifyKey(void);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
