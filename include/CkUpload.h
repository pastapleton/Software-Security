// CkUpload.h: interface for the CkUpload class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkUpload_H
#define _CkUpload_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkUpload
class CkUpload  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkUpload(const CkUpload &);
	CkUpload &operator=(const CkUpload &);

    public:
	CkUpload(void);
	virtual ~CkUpload(void);

	static CkUpload *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	int get_ChunkSize(void);
	void put_ChunkSize(int newVal);

	int get_HeartbeatMs(void);
	void put_HeartbeatMs(int newVal);

	void get_Hostname(CkString &str);
	const char *hostname(void);
	void put_Hostname(const char *newVal);

	int get_IdleTimeoutMs(void);
	void put_IdleTimeoutMs(int newVal);

	void get_Login(CkString &str);
	const char *login(void);
	void put_Login(const char *newVal);

	unsigned long get_NumBytesSent(void);

	void get_Password(CkString &str);
	const char *password(void);
	void put_Password(const char *newVal);

	void get_Path(CkString &str);
	const char *path(void);
	void put_Path(const char *newVal);

	unsigned long get_PercentUploaded(void);

	int get_Port(void);
	void put_Port(int newVal);

	void get_ProxyDomain(CkString &str);
	const char *proxyDomain(void);
	void put_ProxyDomain(const char *newVal);

	void get_ProxyLogin(CkString &str);
	const char *proxyLogin(void);
	void put_ProxyLogin(const char *newVal);

	void get_ProxyPassword(CkString &str);
	const char *proxyPassword(void);
	void put_ProxyPassword(const char *newVal);

	int get_ProxyPort(void);
	void put_ProxyPort(int newVal);

	void get_ResponseBody(CkByteData &outBytes);

	void get_ResponseHeader(CkString &str);
	const char *responseHeader(void);

	int get_ResponseStatus(void);

	bool get_Ssl(void);
	void put_Ssl(bool newVal);

	unsigned long get_TotalUploadSize(void);

	bool get_UploadInProgress(void);

	bool get_UploadSuccess(void);



	// ----------------------
	// Methods
	// ----------------------
#ifndef SINGLE_THREADED
	void AbortUpload(void);
#endif

	void AddCustomHeader(const char *name, const char *value);

	void AddFileReference(const char *name, const char *path);

	void AddParam(const char *name, const char *value);

#ifndef SINGLE_THREADED
	bool BeginUpload(void);
#endif

	bool BlockingUpload(void);

	void ClearFileReferences(void);

	void ClearParams(void);

	void SleepMs(int millisec);

	bool UploadToMemory(CkByteData &outData);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
