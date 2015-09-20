// CkRsa.h: interface for the CkRsa class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkRsa_H
#define _CkRsa_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkRsa
class CkRsa  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkRsa(const CkRsa &);
	CkRsa &operator=(const CkRsa &);

    public:
	CkRsa(void);
	virtual ~CkRsa(void);

	static CkRsa *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_Charset(CkString &str);
	const char *charset(void);
	void put_Charset(const char *newVal);

	void get_EncodingMode(CkString &str);
	const char *encodingMode(void);
	void put_EncodingMode(const char *newVal);

	bool get_LittleEndian(void);
	void put_LittleEndian(bool newVal);

	bool get_NoUnpad(void);
	void put_NoUnpad(bool newVal);

	int get_NumBits(void);

	bool get_OaepPadding(void);
	void put_OaepPadding(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	bool DecryptBytes(const CkByteData &bData, bool bUsePrivateKey, CkByteData &outData);

	bool DecryptBytesENC(const char *str, bool bUsePrivateKey, CkByteData &outData);

	bool DecryptString(const CkByteData &bData, bool bUsePrivateKey, CkString &outStr);
	const char *decryptString(const CkByteData &bData, bool bUsePrivateKey);

	bool DecryptStringENC(const char *str, bool bUsePrivateKey, CkString &outStr);
	const char *decryptStringENC(const char *str, bool bUsePrivateKey);

	bool EncryptBytes(const CkByteData &bData, bool bUsePrivateKey, CkByteData &outData);

	bool EncryptBytesENC(const CkByteData &bData, bool bUsePrivateKey, CkString &outStr);
	const char *encryptBytesENC(const CkByteData &bData, bool bUsePrivateKey);

	bool EncryptString(const char *str, bool bUsePrivateKey, CkByteData &outData);

	bool EncryptStringENC(const char *str, bool bUsePrivateKey, CkString &outStr);
	const char *encryptStringENC(const char *str, bool bUsePrivateKey);

	bool ExportPrivateKey(CkString &outStr);
	const char *exportPrivateKey(void);

	bool ExportPublicKey(CkString &outStr);
	const char *exportPublicKey(void);

	bool GenerateKey(int numBits);

	bool ImportPrivateKey(const char *strXml);

	bool ImportPublicKey(const char *strXml);

	bool OpenSslSignBytes(const CkByteData &data, CkByteData &outBytes);

	bool OpenSslSignBytesENC(const CkByteData &data, CkString &outStr);
	const char *openSslSignBytesENC(const CkByteData &data);

	bool OpenSslSignString(const char *str, CkByteData &outBytes);

	bool OpenSslSignStringENC(const char *str, CkString &outStr);
	const char *openSslSignStringENC(const char *str);

	bool OpenSslVerifyBytes(const CkByteData &signature, CkByteData &outBytes);

	bool OpenSslVerifyBytesENC(const char *str, CkByteData &outBytes);

	bool OpenSslVerifyString(const CkByteData &data, CkString &outStr);
	const char *openSslVerifyString(const CkByteData &data);

	bool OpenSslVerifyStringENC(const char *str, CkString &outStr);
	const char *openSslVerifyStringENC(const char *str);

	bool SignBytes(const CkByteData &bData, const char *hashAlg, CkByteData &outData);

	bool SignBytesENC(const CkByteData &bData, const char *hashAlg, CkString &outStr);
	const char *signBytesENC(const CkByteData &bData, const char *hashAlg);

	bool SignHash(const CkByteData &hashBytes, const char *hashAlg, CkByteData &outBytes);

	bool SignHashENC(const char *encodedHash, const char *hashAlg, CkString &outStr);
	const char *signHashENC(const char *encodedHash, const char *hashAlg);

	bool SignString(const char *str, const char *hashAlg, CkByteData &outData);

	bool SignStringENC(const char *str, const char *hashAlg, CkString &outStr);
	const char *signStringENC(const char *str, const char *hashAlg);

	bool SnkToXml(const char *snkPath, CkString &outStr);
	const char *snkToXml(const char *snkPath);

	bool UnlockComponent(const char *unlockCode);

	bool VerifyBytes(const CkByteData &bData, const char *hashAlg, const CkByteData &sigData);

	bool VerifyBytesENC(const CkByteData &bData, const char *hashAlg, const char *encodedSig);

	bool VerifyHash(const CkByteData &hashBytes, const char *hashAlg, const CkByteData &sigBytes);

	bool VerifyHashENC(const char *encodedHash, const char *hashAlg, const char *encodedSig);

	bool VerifyPrivateKey(const char *xml);

	bool VerifyString(const char *str, const char *hashAlg, const CkByteData &sigData);

	bool VerifyStringENC(const char *str, const char *hashAlg, const char *sig);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
