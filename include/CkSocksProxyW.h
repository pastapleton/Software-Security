#ifndef _CkSocksProxyW_H
#define _CkSocksProxyW_H
// This header is generated.
#include "chilkatDefs.h"

#pragma once

#include "CkWideCharBase.h"
#include "CkString.h"
#include "CkSocksProxy.h"

class CkSocksProxyProgress;



#ifndef __sun__
#pragma pack (push, 8) 
#endif


class CkSocksProxyW : public CkWideCharBase
{
    private:
	CkSocksProxy *m_impl;
		void *m_dsoProgress;


        // Disallow assignment or copying this object.
	CkSocksProxyW(const CkSocksProxyW &) { }
	CkSocksProxyW &operator=(const CkSocksProxyW &) { return *this; }


    public:
	CkSocksProxyW();
	CkSocksProxyW(CkSocksProxy *p, bool bForDso);
	CkSocksProxyW(bool bForDso);
	virtual ~CkSocksProxyW();
	CkSocksProxy *getMbPtr(void) { return m_impl; }
	CkSocksProxy &getMbRef(void) { return *m_impl; }
	const CkSocksProxy *getMbConstPtr(void) const { return m_impl; }
	const CkSocksProxy &getMbConstRef(void) const { return *m_impl; }
	void dispose(void) { if (m_impl) m_impl->dispose();  }

	CkSocksProxyProgress *get_EventCallbackObjectA(void) const;
	void put_EventCallbackObjectA(CkSocksProxyProgress *progress);

bool get_AllowUnauthenticatedSocks5(void);
void put_AllowUnauthenticatedSocks5(bool propVal);
bool get_AuthenticatedSocks5(void);
void get_ClientIp(CkString &propVal);
int get_ClientPort(void);
bool get_ConnectionPending(void);
void get_DebugLogFilePath(CkString &propVal);
void put_DebugLogFilePath(const wchar_t *w1);
void LastErrorHtml(CkString &propVal);
void LastErrorText(CkString &propVal);
void LastErrorXml(CkString &propVal);
void get_ListenBindIpAddress(CkString &propVal);
void put_ListenBindIpAddress(const wchar_t *w1);
void get_Login(CkString &propVal);
void get_OutboundBindIpAddress(CkString &propVal);
void put_OutboundBindIpAddress(const wchar_t *w1);
int get_OutboundBindPort(void);
void put_OutboundBindPort(int propVal);
void get_Password(CkString &propVal);
void get_ServerIp(CkString &propVal);
int get_ServerPort(void);
int get_SocksVersion(void);
bool get_VerboseLogging(void);
void put_VerboseLogging(bool propVal);
void get_Version(CkString &propVal);
bool AllowConnection(void);
bool GetTunnelsXml(CkString &outStr);
bool Initialize(int port);
bool ProceedSocks5(void);
bool RejectConnection(void);
bool SaveLastError(const wchar_t *w1);
bool StopAllTunnels(int maxWaitMs);
bool UnlockComponent(const wchar_t *w1);
bool WaitForConnection(int maxWaitMs);
const wchar_t *clientIp(void);
const wchar_t *debugLogFilePath(void);
const wchar_t *getTunnelsXml(void);
const wchar_t *lastErrorHtml(void);
const wchar_t *lastErrorText(void);
const wchar_t *lastErrorXml(void);
const wchar_t *listenBindIpAddress(void);
const wchar_t *login(void);
const wchar_t *outboundBindIpAddress(void);
const wchar_t *password(void);
const wchar_t *serverIp(void);
const wchar_t *tunnelsXml(void);
const wchar_t *version(void);

};
#ifndef __sun__
#pragma pack (pop)
#endif

#endif
