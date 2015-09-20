// CkSocksProxy.h: interface for the CkSocksProxy class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkSocksProxy_H
#define _CkSocksProxy_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkSocksProxyProgress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkSocksProxy
class CkSocksProxy  : public CkMultiByteBase
{
    private:
	CkSocksProxyProgress *m_callback;

	// Don't allow assignment or copying these objects.
	CkSocksProxy(const CkSocksProxy &);
	CkSocksProxy &operator=(const CkSocksProxy &);

    public:
	CkSocksProxy(void);
	virtual ~CkSocksProxy(void);

	static CkSocksProxy *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkSocksProxyProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkSocksProxyProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	bool get_AllowUnauthenticatedSocks5(void);
	void put_AllowUnauthenticatedSocks5(bool newVal);

	bool get_AuthenticatedSocks5(void);

	void get_ClientIp(CkString &str);
	const char *clientIp(void);

	int get_ClientPort(void);

	bool get_ConnectionPending(void);

	void get_ListenBindIpAddress(CkString &str);
	const char *listenBindIpAddress(void);
	void put_ListenBindIpAddress(const char *newVal);

	void get_Login(CkString &str);
	const char *login(void);

	void get_OutboundBindIpAddress(CkString &str);
	const char *outboundBindIpAddress(void);
	void put_OutboundBindIpAddress(const char *newVal);

	int get_OutboundBindPort(void);
	void put_OutboundBindPort(int newVal);

	void get_Password(CkString &str);
	const char *password(void);

	void get_ServerIp(CkString &str);
	const char *serverIp(void);

	int get_ServerPort(void);

	int get_SocksVersion(void);



	// ----------------------
	// Methods
	// ----------------------
	// eventCallbacks
	bool AllowConnection(void);

	bool GetTunnelsXml(CkString &outStr);
	const char *getTunnelsXml(void);
	const char *tunnelsXml(void);

	bool Initialize(int port);

	// eventCallbacks
	bool ProceedSocks5(void);

	// eventCallbacks
	bool RejectConnection(void);

	bool StopAllTunnels(int maxWaitMs);

	bool UnlockComponent(const char *unlockCode);

	// eventCallbacks
	bool WaitForConnection(int maxWaitMs);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
