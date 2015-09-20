// CkSocket.h: interface for the CkSocket class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkSocket_H
#define _CkSocket_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkCert;
class CkSocketProgress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkSocket
class CkSocket  : public CkMultiByteBase
{
    private:
	CkSocketProgress *m_callback;

	// Don't allow assignment or copying these objects.
	CkSocket(const CkSocket &);
	CkSocket &operator=(const CkSocket &);

    public:
	CkSocket(void);
	virtual ~CkSocket(void);

	static CkSocket *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkSocketProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkSocketProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	bool get_AsyncAcceptFinished(void);

	void get_AsyncAcceptLog(CkString &str);
	const char *asyncAcceptLog(void);

	bool get_AsyncAcceptSuccess(void);

	bool get_AsyncConnectFinished(void);

	void get_AsyncConnectLog(CkString &str);
	const char *asyncConnectLog(void);

	bool get_AsyncConnectSuccess(void);

	bool get_AsyncDnsFinished(void);

	void get_AsyncDnsLog(CkString &str);
	const char *asyncDnsLog(void);

	void get_AsyncDnsResult(CkString &str);
	const char *asyncDnsResult(void);

	bool get_AsyncDnsSuccess(void);

	bool get_AsyncReceiveFinished(void);

	void get_AsyncReceiveLog(CkString &str);
	const char *asyncReceiveLog(void);

	bool get_AsyncReceiveSuccess(void);

	void get_AsyncReceivedBytes(CkByteData &outBytes);

	void get_AsyncReceivedString(CkString &str);
	const char *asyncReceivedString(void);

	bool get_AsyncSendFinished(void);

	void get_AsyncSendLog(CkString &str);
	const char *asyncSendLog(void);

	bool get_AsyncSendSuccess(void);

	bool get_BigEndian(void);
	void put_BigEndian(bool newVal);

	void get_ClientIpAddress(CkString &str);
	const char *clientIpAddress(void);
	void put_ClientIpAddress(const char *newVal);

	int get_ClientPort(void);
	void put_ClientPort(int newVal);

	int get_ConnectFailReason(void);

	int get_DebugConnectDelayMs(void);
	void put_DebugConnectDelayMs(int newVal);

	int get_DebugDnsDelayMs(void);
	void put_DebugDnsDelayMs(int newVal);

	int get_ElapsedSeconds(void);

	int get_HeartbeatMs(void);
	void put_HeartbeatMs(int newVal);

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

	bool get_IsConnected(void);

	bool get_KeepSessionLog(void);
	void put_KeepSessionLog(bool newVal);

	bool get_LastMethodFailed(void);

	bool get_ListenIpv6(void);
	void put_ListenIpv6(bool newVal);

	void get_LocalIpAddress(CkString &str);
	const char *localIpAddress(void);

	int get_LocalPort(void);

	int get_MaxReadIdleMs(void);
	void put_MaxReadIdleMs(int newVal);

	int get_MaxSendIdleMs(void);
	void put_MaxSendIdleMs(int newVal);

	void get_MyIpAddress(CkString &str);
	const char *myIpAddress(void);

	int get_NumReceivedClientCerts(void);

	int get_NumSocketsInSet(void);

	int get_NumSslAcceptableClientCAs(void);

	int get_ObjectId(void);

	int get_ReceivePacketSize(void);
	void put_ReceivePacketSize(int newVal);

	int get_ReceivedCount(void);
	void put_ReceivedCount(int newVal);

	void get_RemoteIpAddress(CkString &str);
	const char *remoteIpAddress(void);

	int get_RemotePort(void);

	int get_SelectorIndex(void);
	void put_SelectorIndex(int newVal);

	int get_SelectorReadIndex(void);
	void put_SelectorReadIndex(int newVal);

	int get_SelectorWriteIndex(void);
	void put_SelectorWriteIndex(int newVal);

	int get_SendPacketSize(void);
	void put_SendPacketSize(int newVal);

	void get_SessionLog(CkString &str);
	const char *sessionLog(void);

	void get_SessionLogEncoding(CkString &str);
	const char *sessionLogEncoding(void);
	void put_SessionLogEncoding(const char *newVal);

	int get_SoRcvBuf(void);
	void put_SoRcvBuf(int newVal);

	bool get_SoReuseAddr(void);
	void put_SoReuseAddr(bool newVal);

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

	bool get_Ssl(void);
	void put_Ssl(bool newVal);

	void get_SslProtocol(CkString &str);
	const char *sslProtocol(void);
	void put_SslProtocol(const char *newVal);

	void get_StringCharset(CkString &str);
	const char *stringCharset(void);
	void put_StringCharset(const char *newVal);

	bool get_TcpNoDelay(void);
	void put_TcpNoDelay(bool newVal);

	void get_UserData(CkString &str);
	const char *userData(void);
	void put_UserData(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// eventCallbacks
	CkSocket *AcceptNextConnection(int maxWaitMs);

	bool AddSslAcceptableClientCaDn(const char *certAuthDN);

	void AsyncAcceptAbort(void);

	CkSocket *AsyncAcceptSocket(void);

	// eventCallbacks
	bool AsyncAcceptStart(int maxWaitMs);

	void AsyncConnectAbort(void);

	// eventCallbacks
	bool AsyncConnectStart(const char *hostname, int port, bool ssl, int maxWaitMs);

	void AsyncDnsAbort(void);

	// eventCallbacks
	bool AsyncDnsStart(const char *hostname, int maxWaitMs);

	void AsyncReceiveAbort(void);

	// eventCallbacks
	bool AsyncReceiveBytes(void);

	// eventCallbacks
	bool AsyncReceiveBytesN(unsigned long numBytes);

	// eventCallbacks
	bool AsyncReceiveString(void);

	// eventCallbacks
	bool AsyncReceiveToCRLF(void);

	// eventCallbacks
	bool AsyncReceiveUntilMatch(const char *matchStr);

	void AsyncSendAbort(void);

	// eventCallbacks
	bool AsyncSendByteData(const CkByteData &data);

	// eventCallbacks
	bool AsyncSendBytes(const unsigned char *pByteData, unsigned long szByteData);

	// eventCallbacks
	bool AsyncSendString(const char *str);

	bool BindAndListen(int port, int backlog);

	bool BuildHttpGetRequest(const char *url, CkString &outStr);
	const char *buildHttpGetRequest(const char *url);

	// eventCallbacks
	int CheckWriteable(int maxWaitMs);

	void ClearSessionLog(void);

	CkSocket *CloneSocket(void);

	// eventCallbacks
	void Close(int maxWaitMs);

	// eventCallbacks
	bool Connect(const char *hostname, int port, bool ssl, int maxWaitMs);

	// eventCallbacks
	bool ConvertFromSsl(void);

	// eventCallbacks
	bool ConvertToSsl(void);

	// eventCallbacks
	bool DnsLookup(const char *hostname, int maxWaitMs, CkString &outStr);
	const char *dnsLookup(const char *hostname, int maxWaitMs);

	CkCert *GetMyCert(void);

	CkCert *GetReceivedClientCert(int index);

	bool GetSslAcceptableClientCaDn(int index, CkString &outStr);
	const char *getSslAcceptableClientCaDn(int index);
	const char *sslAcceptableClientCaDn(int index);

	CkCert *GetSslServerCert(void);

	bool InitSslServer(CkCert &cert);

	bool IsUnlocked(void);

	bool PollDataAvailable(void);

	// eventCallbacks
	bool ReceiveBytes(CkByteData &outData);

	// eventCallbacks
	bool ReceiveBytesN(unsigned long numBytes, CkByteData &outData);

	// eventCallbacks
	bool ReceiveBytesToFile(const char *appendPath);

	// eventCallbacks
	int ReceiveCount(void);

	// eventCallbacks
	bool ReceiveString(CkString &outStr);
	const char *receiveString(void);

	// eventCallbacks
	bool ReceiveStringMaxN(int maxBytes, CkString &outStr);
	const char *receiveStringMaxN(int maxBytes);

	// eventCallbacks
	bool ReceiveStringUntilByte(int byteValue, CkString &outStr);
	const char *receiveStringUntilByte(int byteValue);

	// eventCallbacks
	bool ReceiveToCRLF(CkString &outStr);
	const char *receiveToCRLF(void);

	// eventCallbacks
	bool ReceiveUntilByte(int byteValue, CkByteData &outBytes);

	// eventCallbacks
	bool ReceiveUntilMatch(const char *matchStr, CkString &outStr);
	const char *receiveUntilMatch(const char *matchStr);

	// eventCallbacks
	int SelectForReading(int timeoutMs);

	// eventCallbacks
	int SelectForWriting(int timeoutMs);

	// eventCallbacks
	bool SendByteData(const CkByteData &data);

	// eventCallbacks
	bool SendBytes(const unsigned char *pByteData, unsigned long szByteData);

	// eventCallbacks
	bool SendBytesENC(const char *encodedBytes, const char *encodingAlg);

	// eventCallbacks
	bool SendCount(int byteCount);

	// eventCallbacks
	bool SendString(const char *str);

	bool SetSslClientCert(CkCert &cert);

	bool SetSslClientCertPem(const char *pemDataOrPath, const char *pemPassword);

	bool SetSslClientCertPfx(const char *pfxPath, const char *pfxPassword);

	void SleepMs(int millisec);

	void StartTiming(void);

	bool TakeSocket(CkSocket &sock);

	bool UnlockComponent(const char *code);

	// eventCallbacks
	bool ReceiveBytesENC(const char *encodingAlg, CkString &outStr);
	const char *receiveBytesENC(const char *encodingAlg);

	// eventCallbacks
	bool ReceiveNBytesENC(unsigned long numBytes, const char *encodingAlg, CkString &outStr);
	const char *receiveNBytesENC(unsigned long numBytes, const char *encodingAlg);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
