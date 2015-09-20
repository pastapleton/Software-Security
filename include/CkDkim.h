// CkDkim.h: interface for the CkDkim class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkDkim_H
#define _CkDkim_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkDkimProgress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkDkim
class CkDkim  : public CkMultiByteBase
{
    private:
	CkDkimProgress *m_callback;

	// Don't allow assignment or copying these objects.
	CkDkim(const CkDkim &);
	CkDkim &operator=(const CkDkim &);

    public:
	CkDkim(void);
	virtual ~CkDkim(void);

	static CkDkim *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkDkimProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkDkimProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_DkimAlg(CkString &str);
	const char *dkimAlg(void);
	void put_DkimAlg(const char *newVal);

	int get_DkimBodyLengthCount(void);
	void put_DkimBodyLengthCount(int newVal);

	void get_DkimCanon(CkString &str);
	const char *dkimCanon(void);
	void put_DkimCanon(const char *newVal);

	void get_DkimDomain(CkString &str);
	const char *dkimDomain(void);
	void put_DkimDomain(const char *newVal);

	void get_DkimHeaders(CkString &str);
	const char *dkimHeaders(void);
	void put_DkimHeaders(const char *newVal);

	void get_DkimSelector(CkString &str);
	const char *dkimSelector(void);
	void put_DkimSelector(const char *newVal);

	void get_DomainKeyAlg(CkString &str);
	const char *domainKeyAlg(void);
	void put_DomainKeyAlg(const char *newVal);

	void get_DomainKeyCanon(CkString &str);
	const char *domainKeyCanon(void);
	void put_DomainKeyCanon(const char *newVal);

	void get_DomainKeyDomain(CkString &str);
	const char *domainKeyDomain(void);
	void put_DomainKeyDomain(const char *newVal);

	void get_DomainKeyHeaders(CkString &str);
	const char *domainKeyHeaders(void);
	void put_DomainKeyHeaders(const char *newVal);

	void get_DomainKeySelector(CkString &str);
	const char *domainKeySelector(void);
	void put_DomainKeySelector(const char *newVal);

	int get_HeartbeatMs(void);
	void put_HeartbeatMs(int newVal);



	// ----------------------
	// Methods
	// ----------------------
	bool AddDkimSignature(const CkByteData &mimeIn, CkByteData &outBytes);

	bool AddDomainKeySignature(const CkByteData &mimeIn, CkByteData &outBytes);

	bool LoadDkimPk(const char *privateKey, const char *optionalPassword);

	bool LoadDkimPkBytes(const CkByteData &privateKeyDer, const char *optionalPassword);

	bool LoadDkimPkFile(const char *privateKeyFilepath, const char *optionalPassword);

	bool LoadDomainKeyPk(const char *privateKey, const char *optionalPassword);

	bool LoadDomainKeyPkBytes(const CkByteData &privateKeyDer, const char *optionalPassword);

	bool LoadDomainKeyPkFile(const char *privateKeyFilepath, const char *optionalPassword);

	bool LoadPublicKey(const char *selector, const char *domain, const char *publicKey);

	bool LoadPublicKeyFile(const char *selector, const char *domain, const char *publicKeyFilepath);

	int NumDkimSignatures(const CkByteData &mimeData);

	int NumDomainKeySignatures(const CkByteData &mimeData);

	// eventCallbacks
	bool PrefetchPublicKey(const char *selector, const char *domain);

	bool UnlockComponent(const char *unlockCode);

	// eventCallbacks
	bool VerifyDkimSignature(int sigIdx, const CkByteData &mimeData);

	// eventCallbacks
	bool VerifyDomainKeySignature(int sigIdx, const CkByteData &mimeData);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
