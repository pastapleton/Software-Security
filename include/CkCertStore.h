// CkCertStore.h: interface for the CkCertStore class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkCertStore_H
#define _CkCertStore_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkCert;
class CkByteData;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkCertStore
class CkCertStore  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkCertStore(const CkCertStore &);
	CkCertStore &operator=(const CkCertStore &);

    public:
	CkCertStore(void);
	virtual ~CkCertStore(void);

	static CkCertStore *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	bool get_AvoidWindowsPkAccess(void);
	void put_AvoidWindowsPkAccess(bool newVal);

	int get_NumCertificates(void);

#if defined(CK_WINCERTSTORE_INCLUDED)
	int get_NumEmailCerts(void);
#endif



	// ----------------------
	// Methods
	// ----------------------
#if defined(CK_WINCERTSTORE_INCLUDED)
	bool AddCertificate(const CkCert &cert);
#endif

#if defined(CK_WINCERTSTORE_INCLUDED)
	bool CreateFileStore(const char *path);
#endif

#if defined(CK_WINCERTSTORE_INCLUDED)
	bool CreateMemoryStore(void);
#endif

#if defined(CK_WINCERTSTORE_INCLUDED)
	bool CreateRegistryStore(const char *regRoot, const char *regPath);
#endif

	CkCert *FindCertByRfc822Name(const char *name);

	CkCert *FindCertBySerial(const char *serialNumber);

	CkCert *FindCertBySha1Thumbprint(const char *str);

	CkCert *FindCertBySubject(const char *subject);

	CkCert *FindCertBySubjectCN(const char *commonName);

	CkCert *FindCertBySubjectE(const char *emailAddress);

	CkCert *FindCertBySubjectO(const char *organization);

	CkCert *FindCertForEmail(const char *emailAddress);

	CkCert *GetCertificate(int index);

#if defined(CK_WINCERTSTORE_INCLUDED)
	CkCert *GetEmailCert(int index);
#endif

	bool LoadPemFile(const char *pemPath);

	bool LoadPemStr(const char *pemString);

	bool LoadPfxData(const CkByteData &pfxData, const char *password);

#if !defined(CHILKAT_MONO)
	bool LoadPfxData2(const unsigned char *pByteData, unsigned long szByteData, const char *password);
#endif

	bool LoadPfxFile(const char *path, const char *password);

#if defined(CK_WINCERTSTORE_INCLUDED)
	bool OpenCurrentUserStore(bool readOnly);
#endif

#if defined(CK_WINCERTSTORE_INCLUDED)
	bool OpenFileStore(const char *path, bool readOnly);
#endif

#if defined(CK_WINCERTSTORE_INCLUDED)
	bool OpenLocalSystemStore(bool readOnly);
#endif

#if defined(CK_WINCERTSTORE_INCLUDED)
	bool OpenRegistryStore(const char *regRoot, const char *regPath, bool readOnly);
#endif

#if defined(CK_WINCERTSTORE_INCLUDED)
	bool RemoveCertificate(const CkCert &cert);
#endif





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
