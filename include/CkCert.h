// CkCert.h: interface for the CkCert class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkCert_H
#define _CkCert_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkPrivateKey;
class CkPublicKey;
class CkDateTime;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkCert
class CkCert  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkCert(const CkCert &);
	CkCert &operator=(const CkCert &);

    public:
	CkCert(void);
	virtual ~CkCert(void);

	static CkCert *createNew(void);
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

	int get_CertVersion(void);

	void get_CspName(CkString &str);
	const char *cspName(void);

	bool get_Expired(void);

	bool get_ForClientAuthentication(void);

	bool get_ForCodeSigning(void);

	bool get_ForSecureEmail(void);

	bool get_ForServerAuthentication(void);

	bool get_ForTimeStamping(void);

	bool get_HasKeyContainer(void);

	unsigned long get_IntendedKeyUsage(void);

	bool get_IsRoot(void);

	void get_IssuerC(CkString &str);
	const char *issuerC(void);

	void get_IssuerCN(CkString &str);
	const char *issuerCN(void);

	void get_IssuerDN(CkString &str);
	const char *issuerDN(void);

	void get_IssuerE(CkString &str);
	const char *issuerE(void);

	void get_IssuerL(CkString &str);
	const char *issuerL(void);

	void get_IssuerO(CkString &str);
	const char *issuerO(void);

	void get_IssuerOU(CkString &str);
	const char *issuerOU(void);

	void get_IssuerS(CkString &str);
	const char *issuerS(void);

	void get_KeyContainerName(CkString &str);
	const char *keyContainerName(void);

	bool get_MachineKeyset(void);

	void get_OcspUrl(CkString &str);
	const char *ocspUrl(void);

	bool get_PrivateKeyExportable(void);

	bool get_Revoked(void);

	void get_Rfc822Name(CkString &str);
	const char *rfc822Name(void);

	bool get_SelfSigned(void);

	void get_SerialNumber(CkString &str);
	const char *serialNumber(void);

	void get_Sha1Thumbprint(CkString &str);
	const char *sha1Thumbprint(void);

	bool get_SignatureVerified(void);

	bool get_Silent(void);

	void get_SubjectC(CkString &str);
	const char *subjectC(void);

	void get_SubjectCN(CkString &str);
	const char *subjectCN(void);

	void get_SubjectDN(CkString &str);
	const char *subjectDN(void);

	void get_SubjectE(CkString &str);
	const char *subjectE(void);

	void get_SubjectL(CkString &str);
	const char *subjectL(void);

	void get_SubjectO(CkString &str);
	const char *subjectO(void);

	void get_SubjectOU(CkString &str);
	const char *subjectOU(void);

	void get_SubjectS(CkString &str);
	const char *subjectS(void);

	bool get_TrustedRoot(void);

	void get_ValidFrom(SYSTEMTIME &outSysTime);

	void get_ValidFromStr(CkString &str);
	const char *validFromStr(void);

	void get_ValidTo(SYSTEMTIME &outSysTime);

	void get_ValidToStr(CkString &str);
	const char *validToStr(void);



	// ----------------------
	// Methods
	// ----------------------
	int CheckRevoked(void);

	bool ExportCertDer(CkByteData &outData);

	bool ExportCertDerFile(const char *path);

	bool ExportCertPem(CkString &outStr);
	const char *exportCertPem(void);

	bool ExportCertPemFile(const char *path);

	bool ExportCertXml(CkString &outStr);
	const char *exportCertXml(void);

	CkPrivateKey *ExportPrivateKey(void);

	CkPublicKey *ExportPublicKey(void);

	bool ExportToPfxFile(const char *pfxPath, const char *password, bool bIncludeChain);

	CkCert *FindIssuer(void);

	bool GetEncoded(CkString &outStr);
	const char *getEncoded(void);
	const char *encoded(void);

	bool GetPrivateKeyPem(CkString &outStr);
	const char *getPrivateKeyPem(void);
	const char *privateKeyPem(void);

	CkDateTime *GetValidFromDt(void);

	CkDateTime *GetValidToDt(void);

	bool HasPrivateKey(void);

#if defined(CK_CRYPTOAPI_INCLUDED)
	bool LinkPrivateKey(const char *keyContainerName, bool bMachineKeyset, bool bForSigning);
#endif

	bool LoadByCommonName(const char *cn);

	bool LoadByEmailAddress(const char *emailAddress);

	bool LoadByIssuerAndSerialNumber(const char *issuerCN, const char *serialNum);

	bool LoadFromBase64(const char *encodedCert);

	bool LoadFromBinary(const CkByteData &data);

#if !defined(CHILKAT_MONO)
	bool LoadFromBinary2(const unsigned char *pByteData, unsigned long szByteData);
#endif

	bool LoadFromFile(const char *path);

	bool LoadPfxData(const CkByteData &pfxData, const char *password);

#if !defined(CHILKAT_MONO)
	bool LoadPfxData2(const unsigned char *pByteData, unsigned long szByteData, const char *password);
#endif

	bool LoadPfxFile(const char *path, const char *password);

	bool PemFileToDerFile(const char *fromPath, const char *toPath);

	bool SaveToFile(const char *path);

	bool SetFromEncoded(const char *encodedCert);

	bool SetPrivateKey(CkPrivateKey &privKey);

	bool SetPrivateKeyPem(const char *privKeyPem);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
