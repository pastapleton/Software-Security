// CkKeyContainer.h: interface for the CkKeyContainer class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkKeyContainer_H
#define _CkKeyContainer_H
	
#include "chilkatDefs.h"
#if defined(CK_WINDOWS)
#include "CkString.h"
#include "CkMultiByteBase.h"

class CkPrivateKey;
class CkPublicKey;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkKeyContainer
class CkKeyContainer  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkKeyContainer(const CkKeyContainer &);
	CkKeyContainer &operator=(const CkKeyContainer &);

    public:
	CkKeyContainer(void);
	virtual ~CkKeyContainer(void);

	static CkKeyContainer *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
#if defined(CK_CRYPTOAPI_INCLUDED)
	void get_ContainerName(CkString &str);
	const char *containerName(void);
#endif

#if defined(CK_CRYPTOAPI_INCLUDED)
	bool get_IsMachineKeyset(void);
#endif

#if defined(CK_CRYPTOAPI_INCLUDED)
	bool get_IsOpen(void);
#endif



	// ----------------------
	// Methods
	// ----------------------
#if defined(CK_CRYPTOAPI_INCLUDED)
	void CloseContainer(void);
#endif

#if defined(CK_CRYPTOAPI_INCLUDED)
	bool CreateContainer(const char *name, bool machineKeyset);
#endif

#if defined(CK_CRYPTOAPI_INCLUDED)
	bool DeleteContainer(void);
#endif

#if defined(CK_CRYPTOAPI_INCLUDED)
	bool FetchContainerNames(bool bMachineKeyset);
#endif

#if defined(CK_CRYPTOAPI_INCLUDED)
	bool GenerateKeyPair(bool bKeyExchangePair, int keyLengthInBits);
#endif

#if defined(CK_CRYPTOAPI_INCLUDED)
	bool GenerateUuid(CkString &outGuid);
	const char *generateUuid(void);
#endif

#if defined(CK_CRYPTOAPI_INCLUDED)
	bool GetNthContainerName(bool bMachineKeyset, int index, CkString &outName);
	const char *getNthContainerName(bool bMachineKeyset, int index);
	const char *nthContainerName(bool bMachineKeyset, int index);
#endif

#if defined(CK_CRYPTOAPI_INCLUDED)
	int GetNumContainers(bool bMachineKeyset);
#endif

#if defined(CK_CRYPTOAPI_INCLUDED)
	CkPrivateKey *GetPrivateKey(bool bKeyExchangePair);
#endif

#if defined(CK_CRYPTOAPI_INCLUDED)
	CkPublicKey *GetPublicKey(bool bKeyExchangePair);
#endif

#if defined(CK_CRYPTOAPI_INCLUDED)
	bool ImportPrivateKey(CkPrivateKey &key, bool bKeyExchangePair);
#endif

#if defined(CK_CRYPTOAPI_INCLUDED)
	bool ImportPublicKey(CkPublicKey &key, bool bKeyExchangePair);
#endif

#if defined(CK_CRYPTOAPI_INCLUDED)
	bool OpenContainer(const char *name, bool needPrivateKeyAccess, bool machineKeyset);
#endif





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif

#endif
	
#endif
