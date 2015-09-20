// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkSocket_H
#define _C_CkSocket_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkSocket CkSocket_Create(void);
void CkSocket_Dispose(HCkSocket handle);
BOOL CkSocket_getAsyncAcceptFinished(HCkSocket cHandle);
void CkSocket_getAsyncAcceptLog(HCkSocket cHandle, HCkString retval);
BOOL CkSocket_getAsyncAcceptSuccess(HCkSocket cHandle);
BOOL CkSocket_getAsyncConnectFinished(HCkSocket cHandle);
void CkSocket_getAsyncConnectLog(HCkSocket cHandle, HCkString retval);
BOOL CkSocket_getAsyncConnectSuccess(HCkSocket cHandle);
BOOL CkSocket_getAsyncDnsFinished(HCkSocket cHandle);
void CkSocket_getAsyncDnsLog(HCkSocket cHandle, HCkString retval);
void CkSocket_getAsyncDnsResult(HCkSocket cHandle, HCkString retval);
BOOL CkSocket_getAsyncDnsSuccess(HCkSocket cHandle);
BOOL CkSocket_getAsyncReceiveFinished(HCkSocket cHandle);
void CkSocket_getAsyncReceiveLog(HCkSocket cHandle, HCkString retval);
BOOL CkSocket_getAsyncReceiveSuccess(HCkSocket cHandle);
void CkSocket_getAsyncReceivedBytes(HCkSocket cHandle, HCkByteData retval);
void CkSocket_getAsyncReceivedString(HCkSocket cHandle, HCkString retval);
BOOL CkSocket_getAsyncSendFinished(HCkSocket cHandle);
void CkSocket_getAsyncSendLog(HCkSocket cHandle, HCkString retval);
BOOL CkSocket_getAsyncSendSuccess(HCkSocket cHandle);
BOOL CkSocket_getBigEndian(HCkSocket cHandle);
void CkSocket_putBigEndian(HCkSocket cHandle, BOOL newVal);
void CkSocket_getClientIpAddress(HCkSocket cHandle, HCkString retval);
void CkSocket_putClientIpAddress(HCkSocket cHandle, const char *newVal);
int CkSocket_getClientPort(HCkSocket cHandle);
void CkSocket_putClientPort(HCkSocket cHandle, int newVal);
int CkSocket_getConnectFailReason(HCkSocket cHandle);
int CkSocket_getDebugConnectDelayMs(HCkSocket cHandle);
void CkSocket_putDebugConnectDelayMs(HCkSocket cHandle, int newVal);
int CkSocket_getDebugDnsDelayMs(HCkSocket cHandle);
void CkSocket_putDebugDnsDelayMs(HCkSocket cHandle, int newVal);
void CkSocket_getDebugLogFilePath(HCkSocket cHandle, HCkString retval);
void CkSocket_putDebugLogFilePath(HCkSocket cHandle, const char *newVal);
int CkSocket_getElapsedSeconds(HCkSocket cHandle);
int CkSocket_getHeartbeatMs(HCkSocket cHandle);
void CkSocket_putHeartbeatMs(HCkSocket cHandle, int newVal);
void CkSocket_getHttpProxyAuthMethod(HCkSocket cHandle, HCkString retval);
void CkSocket_putHttpProxyAuthMethod(HCkSocket cHandle, const char *newVal);
void CkSocket_getHttpProxyDomain(HCkSocket cHandle, HCkString retval);
void CkSocket_putHttpProxyDomain(HCkSocket cHandle, const char *newVal);
void CkSocket_getHttpProxyHostname(HCkSocket cHandle, HCkString retval);
void CkSocket_putHttpProxyHostname(HCkSocket cHandle, const char *newVal);
void CkSocket_getHttpProxyPassword(HCkSocket cHandle, HCkString retval);
void CkSocket_putHttpProxyPassword(HCkSocket cHandle, const char *newVal);
int CkSocket_getHttpProxyPort(HCkSocket cHandle);
void CkSocket_putHttpProxyPort(HCkSocket cHandle, int newVal);
void CkSocket_getHttpProxyUsername(HCkSocket cHandle, HCkString retval);
void CkSocket_putHttpProxyUsername(HCkSocket cHandle, const char *newVal);
BOOL CkSocket_getIsConnected(HCkSocket cHandle);
BOOL CkSocket_getKeepSessionLog(HCkSocket cHandle);
void CkSocket_putKeepSessionLog(HCkSocket cHandle, BOOL newVal);
void CkSocket_getLastErrorHtml(HCkSocket cHandle, HCkString retval);
void CkSocket_getLastErrorText(HCkSocket cHandle, HCkString retval);
void CkSocket_getLastErrorXml(HCkSocket cHandle, HCkString retval);
BOOL CkSocket_getLastMethodFailed(HCkSocket cHandle);
BOOL CkSocket_getListenIpv6(HCkSocket cHandle);
void CkSocket_putListenIpv6(HCkSocket cHandle, BOOL newVal);
void CkSocket_getLocalIpAddress(HCkSocket cHandle, HCkString retval);
int CkSocket_getLocalPort(HCkSocket cHandle);
int CkSocket_getMaxReadIdleMs(HCkSocket cHandle);
void CkSocket_putMaxReadIdleMs(HCkSocket cHandle, int newVal);
int CkSocket_getMaxSendIdleMs(HCkSocket cHandle);
void CkSocket_putMaxSendIdleMs(HCkSocket cHandle, int newVal);
void CkSocket_getMyIpAddress(HCkSocket cHandle, HCkString retval);
int CkSocket_getNumReceivedClientCerts(HCkSocket cHandle);
int CkSocket_getNumSocketsInSet(HCkSocket cHandle);
int CkSocket_getNumSslAcceptableClientCAs(HCkSocket cHandle);
int CkSocket_getObjectId(HCkSocket cHandle);
int CkSocket_getReceivePacketSize(HCkSocket cHandle);
void CkSocket_putReceivePacketSize(HCkSocket cHandle, int newVal);
int CkSocket_getReceivedCount(HCkSocket cHandle);
void CkSocket_putReceivedCount(HCkSocket cHandle, int newVal);
void CkSocket_getRemoteIpAddress(HCkSocket cHandle, HCkString retval);
int CkSocket_getRemotePort(HCkSocket cHandle);
int CkSocket_getSelectorIndex(HCkSocket cHandle);
void CkSocket_putSelectorIndex(HCkSocket cHandle, int newVal);
int CkSocket_getSelectorReadIndex(HCkSocket cHandle);
void CkSocket_putSelectorReadIndex(HCkSocket cHandle, int newVal);
int CkSocket_getSelectorWriteIndex(HCkSocket cHandle);
void CkSocket_putSelectorWriteIndex(HCkSocket cHandle, int newVal);
int CkSocket_getSendPacketSize(HCkSocket cHandle);
void CkSocket_putSendPacketSize(HCkSocket cHandle, int newVal);
void CkSocket_getSessionLog(HCkSocket cHandle, HCkString retval);
void CkSocket_getSessionLogEncoding(HCkSocket cHandle, HCkString retval);
void CkSocket_putSessionLogEncoding(HCkSocket cHandle, const char *newVal);
int CkSocket_getSoRcvBuf(HCkSocket cHandle);
void CkSocket_putSoRcvBuf(HCkSocket cHandle, int newVal);
BOOL CkSocket_getSoReuseAddr(HCkSocket cHandle);
void CkSocket_putSoReuseAddr(HCkSocket cHandle, BOOL newVal);
int CkSocket_getSoSndBuf(HCkSocket cHandle);
void CkSocket_putSoSndBuf(HCkSocket cHandle, int newVal);
void CkSocket_getSocksHostname(HCkSocket cHandle, HCkString retval);
void CkSocket_putSocksHostname(HCkSocket cHandle, const char *newVal);
void CkSocket_getSocksPassword(HCkSocket cHandle, HCkString retval);
void CkSocket_putSocksPassword(HCkSocket cHandle, const char *newVal);
int CkSocket_getSocksPort(HCkSocket cHandle);
void CkSocket_putSocksPort(HCkSocket cHandle, int newVal);
void CkSocket_getSocksUsername(HCkSocket cHandle, HCkString retval);
void CkSocket_putSocksUsername(HCkSocket cHandle, const char *newVal);
int CkSocket_getSocksVersion(HCkSocket cHandle);
void CkSocket_putSocksVersion(HCkSocket cHandle, int newVal);
BOOL CkSocket_getSsl(HCkSocket cHandle);
void CkSocket_putSsl(HCkSocket cHandle, BOOL newVal);
void CkSocket_getSslProtocol(HCkSocket cHandle, HCkString retval);
void CkSocket_putSslProtocol(HCkSocket cHandle, const char *newVal);
void CkSocket_getStringCharset(HCkSocket cHandle, HCkString retval);
void CkSocket_putStringCharset(HCkSocket cHandle, const char *newVal);
BOOL CkSocket_getTcpNoDelay(HCkSocket cHandle);
void CkSocket_putTcpNoDelay(HCkSocket cHandle, BOOL newVal);
void CkSocket_getUserData(HCkSocket cHandle, HCkString retval);
void CkSocket_putUserData(HCkSocket cHandle, const char *newVal);
BOOL CkSocket_getUtf8(HCkSocket cHandle);
void CkSocket_putUtf8(HCkSocket cHandle, BOOL newVal);
BOOL CkSocket_getVerboseLogging(HCkSocket cHandle);
void CkSocket_putVerboseLogging(HCkSocket cHandle, BOOL newVal);
void CkSocket_getVersion(HCkSocket cHandle, HCkString retval);
HCkSocket CkSocket_AcceptNextConnection(HCkSocket cHandle, int maxWaitMs);
BOOL CkSocket_AddSslAcceptableClientCaDn(HCkSocket cHandle, const char *certAuthDN);
void CkSocket_AsyncAcceptAbort(HCkSocket cHandle);
HCkSocket CkSocket_AsyncAcceptSocket(HCkSocket cHandle);
BOOL CkSocket_AsyncAcceptStart(HCkSocket cHandle, int maxWaitMs);
void CkSocket_AsyncConnectAbort(HCkSocket cHandle);
BOOL CkSocket_AsyncConnectStart(HCkSocket cHandle, const char *hostname, int port, BOOL ssl, int maxWaitMs);
void CkSocket_AsyncDnsAbort(HCkSocket cHandle);
BOOL CkSocket_AsyncDnsStart(HCkSocket cHandle, const char *hostname, int maxWaitMs);
void CkSocket_AsyncReceiveAbort(HCkSocket cHandle);
BOOL CkSocket_AsyncReceiveBytes(HCkSocket cHandle);
BOOL CkSocket_AsyncReceiveBytesN(HCkSocket cHandle, unsigned long numBytes);
BOOL CkSocket_AsyncReceiveString(HCkSocket cHandle);
BOOL CkSocket_AsyncReceiveToCRLF(HCkSocket cHandle);
BOOL CkSocket_AsyncReceiveUntilMatch(HCkSocket cHandle, const char *matchStr);
void CkSocket_AsyncSendAbort(HCkSocket cHandle);
BOOL CkSocket_AsyncSendByteData(HCkSocket cHandle, HCkByteData data);
BOOL CkSocket_AsyncSendBytes(HCkSocket cHandle, const unsigned char *pByteData, unsigned long szByteData);
BOOL CkSocket_AsyncSendString(HCkSocket cHandle, const char *str);
BOOL CkSocket_BindAndListen(HCkSocket cHandle, int port, int backlog);
BOOL CkSocket_BuildHttpGetRequest(HCkSocket cHandle, const char *url, HCkString outStr);
int CkSocket_CheckWriteable(HCkSocket cHandle, int maxWaitMs);
void CkSocket_ClearSessionLog(HCkSocket cHandle);
HCkSocket CkSocket_CloneSocket(HCkSocket cHandle);
void CkSocket_Close(HCkSocket cHandle, int maxWaitMs);
BOOL CkSocket_Connect(HCkSocket cHandle, const char *hostname, int port, BOOL ssl, int maxWaitMs);
BOOL CkSocket_ConvertFromSsl(HCkSocket cHandle);
BOOL CkSocket_ConvertToSsl(HCkSocket cHandle);
BOOL CkSocket_DnsLookup(HCkSocket cHandle, const char *hostname, int maxWaitMs, HCkString outStr);
HCkCert CkSocket_GetMyCert(HCkSocket cHandle);
HCkCert CkSocket_GetReceivedClientCert(HCkSocket cHandle, int index);
BOOL CkSocket_GetSslAcceptableClientCaDn(HCkSocket cHandle, int index, HCkString outStr);
HCkCert CkSocket_GetSslServerCert(HCkSocket cHandle);
BOOL CkSocket_InitSslServer(HCkSocket cHandle, HCkCert cert);
BOOL CkSocket_IsUnlocked(HCkSocket cHandle);
BOOL CkSocket_PollDataAvailable(HCkSocket cHandle);
BOOL CkSocket_ReceiveBytes(HCkSocket cHandle, HCkByteData outData);
BOOL CkSocket_ReceiveBytesENC(HCkSocket cHandle, const char *encodingAlg, HCkString outStr);
BOOL CkSocket_ReceiveBytesN(HCkSocket cHandle, unsigned long numBytes, HCkByteData outData);
BOOL CkSocket_ReceiveBytesToFile(HCkSocket cHandle, const char *appendPath);
int CkSocket_ReceiveCount(HCkSocket cHandle);
BOOL CkSocket_ReceiveNBytesENC(HCkSocket cHandle, unsigned long numBytes, const char *encodingAlg, HCkString outStr);
BOOL CkSocket_ReceiveString(HCkSocket cHandle, HCkString outStr);
BOOL CkSocket_ReceiveStringMaxN(HCkSocket cHandle, int maxBytes, HCkString outStr);
BOOL CkSocket_ReceiveStringUntilByte(HCkSocket cHandle, int byteValue, HCkString outStr);
BOOL CkSocket_ReceiveToCRLF(HCkSocket cHandle, HCkString outStr);
BOOL CkSocket_ReceiveUntilByte(HCkSocket cHandle, int byteValue, HCkByteData outBytes);
BOOL CkSocket_ReceiveUntilMatch(HCkSocket cHandle, const char *matchStr, HCkString outStr);
BOOL CkSocket_SaveLastError(HCkSocket cHandle, const char *path);
int CkSocket_SelectForReading(HCkSocket cHandle, int timeoutMs);
int CkSocket_SelectForWriting(HCkSocket cHandle, int timeoutMs);
BOOL CkSocket_SendByteData(HCkSocket cHandle, HCkByteData data);
BOOL CkSocket_SendBytes(HCkSocket cHandle, const unsigned char *pByteData, unsigned long szByteData);
BOOL CkSocket_SendBytesENC(HCkSocket cHandle, const char *encodedBytes, const char *encodingAlg);
BOOL CkSocket_SendCount(HCkSocket cHandle, int byteCount);
BOOL CkSocket_SendString(HCkSocket cHandle, const char *str);
BOOL CkSocket_SetSslClientCert(HCkSocket cHandle, HCkCert cert);
BOOL CkSocket_SetSslClientCertPem(HCkSocket cHandle, const char *pemDataOrPath, const char *pemPassword);
BOOL CkSocket_SetSslClientCertPfx(HCkSocket cHandle, const char *pfxPath, const char *pfxPassword);
void CkSocket_SleepMs(HCkSocket cHandle, int millisec);
void CkSocket_StartTiming(HCkSocket cHandle);
BOOL CkSocket_TakeSocket(HCkSocket cHandle, HCkSocket sock);
BOOL CkSocket_UnlockComponent(HCkSocket cHandle, const char *code);
const char *CkSocket_asyncAcceptLog(HCkSocket cHandle);
const char *CkSocket_asyncConnectLog(HCkSocket cHandle);
const char *CkSocket_asyncDnsLog(HCkSocket cHandle);
const char *CkSocket_asyncDnsResult(HCkSocket cHandle);
const char *CkSocket_asyncReceiveLog(HCkSocket cHandle);
const char *CkSocket_asyncReceivedString(HCkSocket cHandle);
const char *CkSocket_asyncSendLog(HCkSocket cHandle);
const char *CkSocket_buildHttpGetRequest(HCkSocket cHandle, const char *url);
const char *CkSocket_clientIpAddress(HCkSocket cHandle);
const char *CkSocket_debugLogFilePath(HCkSocket cHandle);
const char *CkSocket_dnsLookup(HCkSocket cHandle, const char *hostname, int maxWaitMs);
const char *CkSocket_getSslAcceptableClientCaDn(HCkSocket cHandle, int index);
const char *CkSocket_httpProxyAuthMethod(HCkSocket cHandle);
const char *CkSocket_httpProxyDomain(HCkSocket cHandle);
const char *CkSocket_httpProxyHostname(HCkSocket cHandle);
const char *CkSocket_httpProxyPassword(HCkSocket cHandle);
const char *CkSocket_httpProxyUsername(HCkSocket cHandle);
const char *CkSocket_lastErrorHtml(HCkSocket cHandle);
const char *CkSocket_lastErrorText(HCkSocket cHandle);
const char *CkSocket_lastErrorXml(HCkSocket cHandle);
const char *CkSocket_localIpAddress(HCkSocket cHandle);
const char *CkSocket_myIpAddress(HCkSocket cHandle);
const char *CkSocket_receiveBytesENC(HCkSocket cHandle, const char *encodingAlg);
const char *CkSocket_receiveNBytesENC(HCkSocket cHandle, unsigned long numBytes, const char *encodingAlg);
const char *CkSocket_receiveString(HCkSocket cHandle);
const char *CkSocket_receiveStringMaxN(HCkSocket cHandle, int maxBytes);
const char *CkSocket_receiveStringUntilByte(HCkSocket cHandle, int byteValue);
const char *CkSocket_receiveToCRLF(HCkSocket cHandle);
const char *CkSocket_receiveUntilMatch(HCkSocket cHandle, const char *matchStr);
const char *CkSocket_remoteIpAddress(HCkSocket cHandle);
const char *CkSocket_sessionLog(HCkSocket cHandle);
const char *CkSocket_sessionLogEncoding(HCkSocket cHandle);
const char *CkSocket_socksHostname(HCkSocket cHandle);
const char *CkSocket_socksPassword(HCkSocket cHandle);
const char *CkSocket_socksUsername(HCkSocket cHandle);
const char *CkSocket_sslAcceptableClientCaDn(HCkSocket cHandle, int index);
const char *CkSocket_sslProtocol(HCkSocket cHandle);
const char *CkSocket_stringCharset(HCkSocket cHandle);
const char *CkSocket_userData(HCkSocket cHandle);
const char *CkSocket_version(HCkSocket cHandle);
#endif