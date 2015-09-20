// CkSshTunnel.h: interface for the CkSshTunnel class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkSshTunnel_H
#define _CkSshTunnel_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkSshKey;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkSshTunnel
class CkSshTunnel  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkSshTunnel(const CkSshTunnel &);
	CkSshTunnel &operator=(const CkSshTunnel &);

    public:
	CkSshTunnel(void);
	virtual ~CkSshTunnel(void);

	static CkSshTunnel *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_AcceptThreadSessionLogPath(CkString &str);
	const char *acceptThreadSessionLogPath(void);
	void put_AcceptThreadSessionLogPath(const char *newVal);

	void get_ConnectLog(CkString &str);
	const char *connectLog(void);
	void put_ConnectLog(const char *newVal);

	int get_ConnectTimeoutMs(void);
	void put_ConnectTimeoutMs(int newVal);

	void get_DestHostname(CkString &str);
	const char *destHostname(void);
	void put_DestHostname(const char *newVal);

	int get_DestPort(void);
	void put_DestPort(int newVal);

	void get_HttpProxyAuthMethod(CkString &str);
	const char *httpProxyAuthMethod(void);
	void put_HttpProxyAuthMethod(const char *newVal);

	void get_HttpProxyDomain(CkString &str);
	const char *httpProxyDomain(void);
	void put_HttpProxyDomain(const char *newVal);

	void get_HttpProxyHostname(CkString &str);
	const char *httpProxyHostname(void);
	void put_HttpProxyHostname(const char *newVal);

	void get_HttpProxyPassword(CkString &str);
	const char *httpProxyPassword(void);
	void put_HttpProxyPassword(const char *newVal);

	int get_HttpProxyPort(void);
	void put_HttpProxyPort(int newVal);

	void get_HttpProxyUsername(CkString &str);
	const char *httpProxyUsername(void);
	void put_HttpProxyUsername(const char *newVal);

	int get_IdleTimeoutMs(void);
	void put_IdleTimeoutMs(int newVal);

	bool get_IsAccepting(void);

	bool get_KeepConnectLog(void);
	void put_KeepConnectLog(bool newVal);

	void get_ListenBindIpAddress(CkString &str);
	const char *listenBindIpAddress(void);
	void put_ListenBindIpAddress(const char *newVal);

	int get_ListenPort(void);

	int get_MaxPacketSize(void);
	void put_MaxPacketSize(int newVal);

	void get_OutboundBindIpAddress(CkString &str);
	const char *outboundBindIpAddress(void);
	void put_OutboundBindIpAddress(const char *newVal);

	int get_OutboundBindPort(void);
	void put_OutboundBindPort(int newVal);

	int get_SoRcvBuf(void);
	void put_SoRcvBuf(int newVal);

	int get_SoSndBuf(void);
	void put_SoSndBuf(int newVal);

	void get_SocksHostname(CkString &str);
	const char *socksHostname(void);
	void put_SocksHostname(const char *newVal);

	void get_SocksPassword(CkString &str);
	const char *socksPassword(void);
	void put_SocksPassword(const char *newVal);

	int get_SocksPort(void);
	void put_SocksPort(int newVal);

	void get_SocksUsername(CkString &str);
	const char *socksUsername(void);
	void put_SocksUsername(const char *newVal);

	int get_SocksVersion(void);
	void put_SocksVersion(int newVal);

	void get_SshHostname(CkString &str);
	const char *sshHostname(void);
	void put_SshHostname(const char *newVal);

	void get_SshLogin(CkString &str);
	const char *sshLogin(void);
	void put_SshLogin(const char *newVal);

	void get_SshPassword(CkString &str);
	const char *sshPassword(void);
	void put_SshPassword(const char *newVal);

	int get_SshPort(void);
	void put_SshPort(int newVal);

	bool get_TcpNoDelay(void);
	void put_TcpNoDelay(bool newVal);

	void get_TunnelErrors(CkString &str);
	const char *tunnelErrors(void);

	void get_TunnelThreadSessionLogPath(CkString &str);
	const char *tunnelThreadSessionLogPath(void);
	void put_TunnelThreadSessionLogPath(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	bool BeginAccepting(int listenPort);

	void ClearTunnelErrors(void);

	bool GetTunnelsXml(CkString &outStr);
	const char *getTunnelsXml(void);
	const char *tunnelsXml(void);

	bool SetSshAuthenticationKey(CkSshKey &key);

	bool StopAccepting(void);

	bool StopAllTunnels(int maxWaitMs);

	bool UnlockComponent(const char *unlockCode);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
