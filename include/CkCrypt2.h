// CkCrypt2.h: interface for the CkCrypt2 class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkCrypt2_H
#define _CkCrypt2_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkCert;
class CkCsp;
class CkPrivateKey;
class CkCrypt2Progress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkCrypt2
class CkCrypt2  : public CkMultiByteBase
{
    private:
	CkCrypt2Progress *m_callback;

	// Don't allow assignment or copying these objects.
	CkCrypt2(const CkCrypt2 &);
	CkCrypt2 &operator=(const CkCrypt2 &);

    public:
	CkCrypt2(void);
	virtual ~CkCrypt2(void);

	static CkCrypt2 *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkCrypt2Progress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkCrypt2Progress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	int get_BlockSize(void);

	bool get_CadesEnabled(void);
	void put_CadesEnabled(bool newVal);

	void get_CadesSigPolicyHash(CkString &str);
	const char *cadesSigPolicyHash(void);
	void put_CadesSigPolicyHash(const char *newVal);

	void get_CadesSigPolicyId(CkString &str);
	const char *cadesSigPolicyId(void);
	void put_CadesSigPolicyId(const char *newVal);

	void get_CadesSigPolicyUri(CkString &str);
	const char *cadesSigPolicyUri(void);
	void put_CadesSigPolicyUri(const char *newVal);

	void get_Charset(CkString &str);
	const char *charset(void);
	void put_Charset(const char *newVal);

	void get_CipherMode(CkString &str);
	const char *cipherMode(void);
	void put_CipherMode(const char *newVal);

	void get_CompressionAlgorithm(CkString &str);
	const char *compressionAlgorithm(void);
	void put_CompressionAlgorithm(const char *newVal);

	void get_CryptAlgorithm(CkString &str);
	const char *cryptAlgorithm(void);
	void put_CryptAlgorithm(const char *newVal);

	void get_EncodingMode(CkString &str);
	const char *encodingMode(void);
	void put_EncodingMode(const char *newVal);

	bool get_FirstChunk(void);
	void put_FirstChunk(bool newVal);

	void get_HashAlgorithm(CkString &str);
	const char *hashAlgorithm(void);
	void put_HashAlgorithm(const char *newVal);

	int get_HavalRounds(void);
	void put_HavalRounds(int newVal);

	int get_HeartbeatMs(void);
	void put_HeartbeatMs(int newVal);

	void get_IV(CkByteData &outBytes);
	void put_IV(const CkByteData &inBytes);

	bool get_IncludeCertChain(void);
	void put_IncludeCertChain(bool newVal);

	int get_IterationCount(void);
	void put_IterationCount(int newVal);

	int get_KeyLength(void);
	void put_KeyLength(int newVal);

	bool get_LastChunk(void);
	void put_LastChunk(bool newVal);

	int get_NumSignerCerts(void);

	int get_PaddingScheme(void);
	void put_PaddingScheme(int newVal);

	void get_PbesAlgorithm(CkString &str);
	const char *pbesAlgorithm(void);
	void put_PbesAlgorithm(const char *newVal);

	void get_PbesPassword(CkString &str);
	const char *pbesPassword(void);
	void put_PbesPassword(const char *newVal);

	void get_Pkcs7CryptAlg(CkString &str);
	const char *pkcs7CryptAlg(void);
	void put_Pkcs7CryptAlg(const char *newVal);

	int get_Rc2EffectiveKeyLength(void);
	void put_Rc2EffectiveKeyLength(int newVal);

	void get_Salt(CkByteData &outBytes);
	void put_Salt(const CkByteData &inBytes);

	void get_SecretKey(CkByteData &outBytes);
	void put_SecretKey(const CkByteData &inBytes);

	void get_UuFilename(CkString &str);
	const char *uuFilename(void);
	void put_UuFilename(const char *newVal);

	void get_UuMode(CkString &str);
	const char *uuMode(void);
	void put_UuMode(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	void AddEncryptCert(CkCert &cert);

	bool AddPfxSourceData(const CkByteData &pfxData, const char *password);

	bool AddPfxSourceFile(const char *pfxFilePath, const char *password);

	bool ByteSwap4321(const CkByteData &data, CkByteData &outBytes);

	bool BytesToString(const CkByteData &inData, const char *charset, CkString &outStr);
	const char *bytesToString(const CkByteData &inData, const char *charset);

	// eventCallbacks
	bool CkDecryptFile(const char *srcFile, const char *destFile);

	// eventCallbacks
	bool CkEncryptFile(const char *srcFile, const char *destFile);

	void ClearEncryptCerts(void);

	bool CompressBytes(const CkByteData &bData, CkByteData &outData);

	bool CompressBytesENC(const CkByteData &bData, CkString &outStr);
	const char *compressBytesENC(const CkByteData &bData);

	bool CompressString(const char *str, CkByteData &outData);

	bool CompressStringENC(const char *str, CkString &outStr);
	const char *compressStringENC(const char *str);

	bool CreateDetachedSignature(const char *inFile, const char *sigFile);

	bool CreateP7M(const char *inPath, const char *p7mPath);

	bool CreateP7S(const char *inPath, const char *p7sPath);

	bool Decode(const char *str, const char *encoding, CkByteData &outData);

	bool DecodeString(const char *inStr, const char *charset, const char *encoding, CkString &outStr);
	const char *decodeString(const char *inStr, const char *charset, const char *encoding);

	bool DecryptBytes(const CkByteData &bData, CkByteData &outData);

	bool DecryptBytesENC(const char *str, CkByteData &outData);

	bool DecryptEncoded(const char *str, CkString &outStr);
	const char *decryptEncoded(const char *str);

	bool DecryptString(const CkByteData &bData, CkString &outStr);
	const char *decryptString(const CkByteData &bData);

	bool DecryptStringENC(const char *str, CkString &outStr);
	const char *decryptStringENC(const char *str);

	bool Encode(const CkByteData &bData, const char *encoding, CkString &outStr);
	const char *encode(const CkByteData &bData, const char *encoding);

	bool EncodeBytes(const void *pByteData, unsigned long szByteData, const char *encoding, CkString &outStr);
	const char *encodeBytes(const void *pByteData, unsigned long szByteData, const char *encoding);

	bool EncodeString(const char *inStr, const char *charset, const char *encoding, CkString &outStr);
	const char *encodeString(const char *inStr, const char *charset, const char *encoding);

	bool EncryptBytes(const CkByteData &bData, CkByteData &outData);

	bool EncryptBytesENC(const CkByteData &bData, CkString &outStr);
	const char *encryptBytesENC(const CkByteData &bData);

	bool EncryptEncoded(const char *str, CkString &outStr);
	const char *encryptEncoded(const char *str);

	bool EncryptString(const char *str, CkByteData &outData);

	bool EncryptStringENC(const char *str, CkString &outStr);
	const char *encryptStringENC(const char *str);

	bool GenEncodedSecretKey(const char *password, const char *encoding, CkString &outStr);
	const char *genEncodedSecretKey(const char *password, const char *encoding);

	bool GenRandomBytesENC(int numBytes, CkString &outStr);
	const char *genRandomBytesENC(int numBytes);

	bool GenerateSecretKey(const char *password, CkByteData &outData);

	bool GetEncodedIV(const char *encoding, CkString &outIV);
	const char *getEncodedIV(const char *encoding);
	const char *encodedIV(const char *encoding);

	bool GetEncodedKey(const char *encoding, CkString &outKey);
	const char *getEncodedKey(const char *encoding);
	const char *encodedKey(const char *encoding);

	bool GetEncodedSalt(const char *encoding, CkString &outStr);
	const char *getEncodedSalt(const char *encoding);
	const char *encodedSalt(const char *encoding);

	CkCert *GetLastCert(void);

	bool GetSignatureSigningTime(int index, SYSTEMTIME &outSysTime);

	bool GetSignatureSigningTimeStr(int index, CkString &outStr);
	const char *getSignatureSigningTimeStr(int index);
	const char *signatureSigningTimeStr(int index);

	CkCert *GetSignerCert(int index);

	bool HasSignatureSigningTime(int index);

	bool HashBeginBytes(const CkByteData &data);

	bool HashBeginString(const char *strData);

	bool HashBytes(const CkByteData &bData, CkByteData &outData);

	bool HashBytesENC(const CkByteData &bData, CkString &outStr);
	const char *hashBytesENC(const CkByteData &bData);

	// eventCallbacks
	bool HashFile(const char *path, CkByteData &outData);

	// eventCallbacks
	bool HashFileENC(const char *path, CkString &outStr);
	const char *hashFileENC(const char *path);

	bool HashFinal(CkByteData &outBytes);

	bool HashFinalENC(CkString &outStr);
	const char *hashFinalENC(void);

	bool HashMoreBytes(const CkByteData &data);

	bool HashMoreString(const char *strData);

	bool HashString(const char *str, CkByteData &outData);

	bool HashStringENC(const char *str, CkString &outStr);
	const char *hashStringENC(const char *str);

	bool HmacBytes(const CkByteData &inBytes, CkByteData &outHmac);

	bool HmacBytesENC(const CkByteData &inBytes, CkString &outEncodedHmac);
	const char *hmacBytesENC(const CkByteData &inBytes);

	bool HmacString(const char *inText, CkByteData &outHmac);

	bool HmacStringENC(const char *inText, CkString &outEncodedHmac);
	const char *hmacStringENC(const char *inText);

	bool InflateBytes(const CkByteData &bData, CkByteData &outData);

	bool InflateBytesENC(const char *str, CkByteData &outData);

	bool InflateString(const CkByteData &bData, CkString &outStr);
	const char *inflateString(const CkByteData &bData);

	bool InflateStringENC(const char *str, CkString &outStr);
	const char *inflateStringENC(const char *str);

	bool IsUnlocked(void);

	bool MySqlAesDecrypt(const char *strEncrypted, const char *strKey, CkString &outStr);
	const char *mySqlAesDecrypt(const char *strEncrypted, const char *strKey);

	bool MySqlAesEncrypt(const char *strData, const char *strKey, CkString &outStr);
	const char *mySqlAesEncrypt(const char *strData, const char *strKey);

	bool OpaqueSignBytes(const CkByteData &bData, CkByteData &outData);

	bool OpaqueSignBytesENC(const CkByteData &bData, CkString &outStr);
	const char *opaqueSignBytesENC(const CkByteData &bData);

	bool OpaqueSignString(const char *str, CkByteData &outData);

	bool OpaqueSignStringENC(const char *str, CkString &outStr);
	const char *opaqueSignStringENC(const char *str);

	bool OpaqueVerifyBytes(const CkByteData &p7s, CkByteData &outOriginal);

	bool OpaqueVerifyBytesENC(const char *p7s, CkByteData &outOriginal);

	bool OpaqueVerifyString(const CkByteData &p7s, CkString &outOriginal);
	const char *opaqueVerifyString(const CkByteData &p7s);

	bool OpaqueVerifyStringENC(const char *p7s, CkString &outOriginal);
	const char *opaqueVerifyStringENC(const char *p7s);

	bool Pbkdf1(const char *password, const char *charset, const char *hashAlg, const char *salt, int iterationCount, int outputKeyBitLen, const char *encoding, CkString &outStr);
	const char *pbkdf1(const char *password, const char *charset, const char *hashAlg, const char *salt, int iterationCount, int outputKeyBitLen, const char *encoding);

	bool Pbkdf2(const char *password, const char *charset, const char *hashAlg, const char *salt, int iterationCount, int outputKeyBitLen, const char *encoding, CkString &outStr);
	const char *pbkdf2(const char *password, const char *charset, const char *hashAlg, const char *salt, int iterationCount, int outputKeyBitLen, const char *encoding);

	void RandomizeIV(void);

	void RandomizeKey(void);

	bool ReEncode(const char *data, const char *fromEncoding, const char *toEncoding, CkString &outStr);
	const char *reEncode(const char *data, const char *fromEncoding, const char *toEncoding);

	bool ReadFile(const char *path, CkByteData &outBytes);

#if defined(CK_CSP_INCLUDED)
	bool SetCSP(const CkCsp &csp);
#endif

	bool SetDecryptCert(CkCert &cert);

	bool SetDecryptCert2(const CkCert &cert, CkPrivateKey &key);

	void SetEncodedIV(const char *ivStr, const char *encoding);

	void SetEncodedKey(const char *keyStr, const char *encoding);

	void SetEncodedSalt(const char *saltStr, const char *encoding);

	bool SetEncryptCert(const CkCert &cert);

	void SetHmacKeyBytes(const CkByteData &keyBytes);

	void SetHmacKeyEncoded(const char *key, const char *encoding);

	void SetHmacKeyString(const char *key);

	void SetIV(const unsigned char *pByteData, unsigned long szByteData);

	void SetSecretKey(const unsigned char *pByteData, unsigned long szByteData);

	void SetSecretKeyViaPassword(const char *password);

	bool SetSigningCert(const CkCert &cert);

	bool SetSigningCert2(const CkCert &cert, CkPrivateKey &key);

	bool SetVerifyCert(const CkCert &cert);

	bool SignBytes(const CkByteData &bData, CkByteData &outData);

	bool SignBytesENC(const CkByteData &bData, CkString &outStr);
	const char *signBytesENC(const CkByteData &bData);

	bool SignString(const char *str, CkByteData &outData);

	bool SignStringENC(const char *str, CkString &outStr);
	const char *signStringENC(const char *str);

	bool StringToBytes(const char *inStr, const char *charset, CkByteData &outBytes);

	bool TrimEndingWith(const char *inStr, const char *ending, CkString &outStr);
	const char *trimEndingWith(const char *inStr, const char *ending);

	bool UnlockComponent(const char *unlockCode);

	bool VerifyBytes(const CkByteData &bData1, const CkByteData &sigData);

	bool VerifyBytesENC(const CkByteData &bData, const char *encodedSig);

	bool VerifyDetachedSignature(const char *inFile, const char *sigFile);

	bool VerifyP7M(const char *p7mPath, const char *destPath);

	bool VerifyP7S(const char *inPath, const char *p7sPath);

	bool VerifyString(const char *str, const CkByteData &sigData);

	bool VerifyStringENC(const char *str, const char *encodedSig);

	bool WriteFile(const char *path, const CkByteData &fileData);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
