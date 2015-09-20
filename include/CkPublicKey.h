// CkPublicKey.h: interface for the CkPublicKey class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkPublicKey_H
#define _CkPublicKey_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkPublicKey
class CkPublicKey  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkPublicKey(const CkPublicKey &);
	CkPublicKey &operator=(const CkPublicKey &);

    public:
	CkPublicKey(void);
	virtual ~CkPublicKey(void);

	static CkPublicKey *createNew(void);
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
	bool GetOpenSslDer(CkByteData &outData);

	bool GetOpenSslPem(CkString &outStr);
	const char *getOpenSslPem(void);
	const char *openSslPem(void);

	bool GetRsaDer(CkByteData &outData);

	bool GetXml(CkString &outStr);
	const char *getXml(void);
	const char *xml(void);

	bool LoadOpenSslDer(const CkByteData &data);

	bool LoadOpenSslDerFile(const char *path);

	bool LoadOpenSslPem(const char *str);

	bool LoadOpenSslPemFile(const char *path);

	bool LoadPkcs1Pem(const char *str);

	bool LoadRsaDer(const CkByteData &data);

	bool LoadRsaDerFile(const char *path);

	bool LoadXml(const char *xml);

	bool LoadXmlFile(const char *path);

	bool SaveOpenSslDerFile(const char *path);

	bool SaveOpenSslPemFile(const char *path);

	bool SaveRsaDerFile(const char *path);

	bool SaveXmlFile(const char *path);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
