// CkCsp.h: interface for the CkCsp class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkCsp_H
#define _CkCsp_H
	
#include "chilkatDefs.h"
#if defined(CK_WINDOWS)
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkStringArray;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkCsp
class CkCsp  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkCsp(const CkCsp &);
	CkCsp &operator=(const CkCsp &);

    public:
	CkCsp(void);
	virtual ~CkCsp(void);

	static CkCsp *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_EncryptAlgorithm(CkString &str);
	const char *encryptAlgorithm(void);

	int get_EncryptAlgorithmID(void);

	int get_EncryptNumBits(void);

	void get_HashAlgorithm(CkString &str);
	const char *hashAlgorithm(void);

	int get_HashAlgorithmID(void);

	int get_HashNumBits(void);

	void get_KeyContainerName(CkString &str);
	const char *keyContainerName(void);
	void put_KeyContainerName(const char *newVal);

	bool get_MachineKeyset(void);
	void put_MachineKeyset(bool newVal);

	int get_NumEncryptAlgorithms(void);

	int get_NumHashAlgorithms(void);

	int get_NumKeyContainers(void);

	int get_NumKeyExchangeAlgorithms(void);

	int get_NumSignatureAlgorithms(void);

	void get_ProviderName(CkString &str);
	const char *providerName(void);
	void put_ProviderName(const char *newVal);

	int get_ProviderType(void);



	// ----------------------
	// Methods
	// ----------------------
	CkStringArray *GetKeyContainerNames(void);

	bool HasEncryptAlgorithm(const char *name, int numBits);

	bool HasHashAlgorithm(const char *name, int numBits);

	bool Initialize(void);

	bool NthEncryptionAlgorithm(int index, CkString &outName);
	const char *nthEncryptionAlgorithm(int index);

	int NthEncryptionNumBits(int index);

	bool NthHashAlgorithmName(int index, CkString &outName);
	const char *nthHashAlgorithmName(int index);

	int NthHashNumBits(int index);

	bool NthKeyContainerName(int index, CkString &outName);
	const char *nthKeyContainerName(int index);

	bool NthKeyExchangeAlgorithm(int index, CkString &outName);
	const char *nthKeyExchangeAlgorithm(int index);

	int NthKeyExchangeNumBits(int index);

	bool NthSignatureAlgorithm(int index, CkString &outName);
	const char *nthSignatureAlgorithm(int index);

	int NthSignatureNumBits(int index);

	int SetEncryptAlgorithm(const char *name);

	int SetHashAlgorithm(const char *name);

	bool SetProviderMicrosoftBase(void);

	bool SetProviderMicrosoftEnhanced(void);

	bool SetProviderMicrosoftRsaAes(void);

	bool SetProviderMicrosoftStrong(void);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif

#endif
	
#endif
