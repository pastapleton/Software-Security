// CkSsh.h: interface for the CkSsh class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkSsh_H
#define _CkSsh_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkSshKey;
class CkStringArray;
class CkByteData;
class CkSshProgress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkSsh
class CkSsh  : public CkMultiByteBase
{
    private:
	CkSshProgress *m_callback;

	// Don't allow assignment or copying these objects.
	CkSsh(const CkSsh &);
	CkSsh &operator=(const CkSsh &);

    public:
	CkSsh(void);
	virtual ~CkSsh(void);

	static CkSsh *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkSshProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkSshProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	int get_ChannelOpenFailCode(void);

	void get_ChannelOpenFailReason(CkString &str);
	const char *channelOpenFailReason(void);

	void get_ClientIdentifier(CkString &str);
	const char *clientIdentifier(void);
	void put_ClientIdentifier(const char *newVal);

	void get_ClientIpAddress(CkString &str);
	const char *clientIpAddress(void);
	void put_ClientIpAddress(const char *newVal);

	int get_ConnectTimeoutMs(void);
	void put_ConnectTimeoutMs(int newVal);

	int get_DisconnectCode(void);

	void get_DisconnectReason(CkString &str);
	const char *disconnectReason(void);

	void get_ForceCipher(CkString &str);
	const char *forceCipher(void);
	void put_ForceCipher(const char *newVal);

	int get_HeartbeatMs(void);
	void put_HeartbeatMs(int newVal);

	void get_HostKeyAlg(CkString &str);
	const char *hostKeyAlg(void);
	void put_HostKeyAlg(const char *newVal);

	void get_HostKeyFingerprint(CkString &str);
	const char *hostKeyFingerprint(void);

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

	bool get_IsConnected(void);

	bool get_KeepSessionLog(void);
	void put_KeepSessionLog(bool newVal);

	int get_MaxPacketSize(void);
	void put_MaxPacketSize(int newVal);

	int get_NumOpenChannels(void);

	bool get_PasswordChangeRequested(void);

	int get_ReadTimeoutMs(void);
	void put_ReadTimeoutMs(int newVal);

	void get_SessionLog(CkString &str);
	const char *sessionLog(void);

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

	bool get_StderrToStdout(void);
	void put_StderrToStdout(bool newVal);

	bool get_TcpNoDelay(void);
	void put_TcpNoDelay(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// eventCallbacks
	bool AuthenticatePk(const char *username, CkSshKey &privateKey);

	// eventCallbacks
	bool AuthenticatePw(const char *login, const char *password);

	// eventCallbacks
	bool AuthenticatePwPk(const char *username, const char *password, CkSshKey &privateKey);

	bool ChannelIsOpen(int channelNum);

	// eventCallbacks
	int ChannelPoll(int channelNum, int pollTimeoutMs);

	// eventCallbacks
	int ChannelRead(int channelNum);

	// eventCallbacks
	int ChannelReadAndPoll(int channelNum, int pollTimeoutMs);

	// eventCallbacks
	int ChannelReadAndPoll2(int channelNum, int pollTimeoutMs, int maxNumBytes);

	// eventCallbacks
	bool ChannelReceiveToClose(int channelNum);

	// eventCallbacks
	bool ChannelReceiveUntilMatch(int channelNum, const char *matchPattern, const char *charset, bool caseSensitive);

	// eventCallbacks
	bool ChannelReceiveUntilMatchN(int channelNum, CkStringArray &matchPatterns, const char *charset, bool caseSensitive);

	bool ChannelReceivedClose(int channelNum);

	bool ChannelReceivedEof(int channelNum);

	bool ChannelReceivedExitStatus(int channelNum);

	// eventCallbacks
	bool ChannelSendClose(int channelNum);

	// eventCallbacks
	bool ChannelSendData(int channelNum, const CkByteData &data);

	// eventCallbacks
	bool ChannelSendEof(int channelNum);

	// eventCallbacks
	bool ChannelSendString(int channelNum, const char *strData, const char *charset);

	void ClearTtyModes(void);

	// eventCallbacks
	bool Connect(const char *hostname, int port);

	void Disconnect(void);

	int GetChannelExitStatus(int channelNum);

	int GetChannelNumber(int index);

	bool GetChannelType(int index, CkString &outStr);
	const char *getChannelType(int index);
	const char *channelType(int index);

	bool GetReceivedData(int channelNum, CkByteData &outBytes);

	bool GetReceivedDataN(int channelNum, int numBytes, CkByteData &outBytes);

	int GetReceivedNumBytes(int channelNum);

	bool GetReceivedStderr(int channelNum, CkByteData &outBytes);

	bool GetReceivedText(int channelNum, const char *charset, CkString &outStr);
	const char *getReceivedText(int channelNum, const char *charset);
	const char *receivedText(int channelNum, const char *charset);

	bool GetReceivedTextS(int channelNum, const char *substr, const char *charset, CkString &outStr);
	const char *getReceivedTextS(int channelNum, const char *substr, const char *charset);
	const char *receivedTextS(int channelNum, const char *substr, const char *charset);

	// eventCallbacks
	int OpenCustomChannel(const char *channelType);

	// eventCallbacks
	int OpenDirectTcpIpChannel(const char *hostname, int port);

	// eventCallbacks
	int OpenSessionChannel(void);

	bool PeekReceivedText(int channelNum, const char *charset, CkString &outStr);
	const char *peekReceivedText(int channelNum, const char *charset);

	// eventCallbacks
	bool ReKey(void);

	// eventCallbacks
	bool SendIgnore(void);

	// eventCallbacks
	bool SendReqExec(int channelNum, const char *command);

	// eventCallbacks
	bool SendReqPty(int channelNum, const char *xTermEnvVar, int widthInChars, int heightInRows, int pixWidth, int pixHeight);

	// eventCallbacks
	bool SendReqSetEnv(int channelNum, const char *name, const char *value);

	// eventCallbacks
	bool SendReqShell(int channelNum);

	// eventCallbacks
	bool SendReqSignal(int channelNum, const char *signalName);

	// eventCallbacks
	bool SendReqSubsystem(int channelNum, const char *subsystemName);

	// eventCallbacks
	bool SendReqWindowChange(int channelNum, int widthInChars, int heightInRows, int pixWidth, int pixHeight);

	// eventCallbacks
	bool SendReqX11Forwarding(int channelNum, bool singleConnection, const char *authProt, const char *authCookie, int screenNum);

	// eventCallbacks
	bool SendReqXonXoff(int channelNum, bool clientCanDo);

	bool SetTtyMode(const char *name, int value);

	bool UnlockComponent(const char *unlockCode);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
