// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkNtlm_H
#define _C_CkNtlm_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkNtlm CkNtlm_Create(void);
void CkNtlm_Dispose(HCkNtlm handle);
void CkNtlm_getClientChallenge(HCkNtlm cHandle, HCkString retval);
void CkNtlm_putClientChallenge(HCkNtlm cHandle, const char *newVal);
void CkNtlm_getDebugLogFilePath(HCkNtlm cHandle, HCkString retval);
void CkNtlm_putDebugLogFilePath(HCkNtlm cHandle, const char *newVal);
void CkNtlm_getDnsComputerName(HCkNtlm cHandle, HCkString retval);
void CkNtlm_putDnsComputerName(HCkNtlm cHandle, const char *newVal);
void CkNtlm_getDnsDomainName(HCkNtlm cHandle, HCkString retval);
void CkNtlm_putDnsDomainName(HCkNtlm cHandle, const char *newVal);
void CkNtlm_getDomain(HCkNtlm cHandle, HCkString retval);
void CkNtlm_putDomain(HCkNtlm cHandle, const char *newVal);
void CkNtlm_getEncodingMode(HCkNtlm cHandle, HCkString retval);
void CkNtlm_putEncodingMode(HCkNtlm cHandle, const char *newVal);
void CkNtlm_getFlags(HCkNtlm cHandle, HCkString retval);
void CkNtlm_putFlags(HCkNtlm cHandle, const char *newVal);
void CkNtlm_getLastErrorHtml(HCkNtlm cHandle, HCkString retval);
void CkNtlm_getLastErrorText(HCkNtlm cHandle, HCkString retval);
void CkNtlm_getLastErrorXml(HCkNtlm cHandle, HCkString retval);
void CkNtlm_getNetBiosComputerName(HCkNtlm cHandle, HCkString retval);
void CkNtlm_putNetBiosComputerName(HCkNtlm cHandle, const char *newVal);
void CkNtlm_getNetBiosDomainName(HCkNtlm cHandle, HCkString retval);
void CkNtlm_putNetBiosDomainName(HCkNtlm cHandle, const char *newVal);
int CkNtlm_getNtlmVersion(HCkNtlm cHandle);
void CkNtlm_putNtlmVersion(HCkNtlm cHandle, int newVal);
int CkNtlm_getOemCodePage(HCkNtlm cHandle);
void CkNtlm_putOemCodePage(HCkNtlm cHandle, int newVal);
void CkNtlm_getPassword(HCkNtlm cHandle, HCkString retval);
void CkNtlm_putPassword(HCkNtlm cHandle, const char *newVal);
void CkNtlm_getServerChallenge(HCkNtlm cHandle, HCkString retval);
void CkNtlm_putServerChallenge(HCkNtlm cHandle, const char *newVal);
void CkNtlm_getTargetName(HCkNtlm cHandle, HCkString retval);
void CkNtlm_putTargetName(HCkNtlm cHandle, const char *newVal);
void CkNtlm_getUserName(HCkNtlm cHandle, HCkString retval);
void CkNtlm_putUserName(HCkNtlm cHandle, const char *newVal);
BOOL CkNtlm_getUtf8(HCkNtlm cHandle);
void CkNtlm_putUtf8(HCkNtlm cHandle, BOOL newVal);
BOOL CkNtlm_getVerboseLogging(HCkNtlm cHandle);
void CkNtlm_putVerboseLogging(HCkNtlm cHandle, BOOL newVal);
void CkNtlm_getVersion(HCkNtlm cHandle, HCkString retval);
void CkNtlm_getWorkstation(HCkNtlm cHandle, HCkString retval);
void CkNtlm_putWorkstation(HCkNtlm cHandle, const char *newVal);
BOOL CkNtlm_CompareType3(HCkNtlm cHandle, const char *msg1, const char *msg2);
BOOL CkNtlm_GenType1(HCkNtlm cHandle, HCkString outStr);
BOOL CkNtlm_GenType2(HCkNtlm cHandle, const char *type1Msg, HCkString outStr);
BOOL CkNtlm_GenType3(HCkNtlm cHandle, const char *type2Msg, HCkString outStr);
BOOL CkNtlm_LoadType3(HCkNtlm cHandle, const char *type3Msg);
BOOL CkNtlm_ParseType1(HCkNtlm cHandle, const char *type1Msg, HCkString outStr);
BOOL CkNtlm_ParseType2(HCkNtlm cHandle, const char *type2Msg, HCkString outStr);
BOOL CkNtlm_ParseType3(HCkNtlm cHandle, const char *type3Msg, HCkString outStr);
BOOL CkNtlm_SaveLastError(HCkNtlm cHandle, const char *path);
BOOL CkNtlm_SetFlag(HCkNtlm cHandle, const char *flagLetter, BOOL on);
BOOL CkNtlm_UnlockComponent(HCkNtlm cHandle, const char *unlockCode);
const char *CkNtlm_clientChallenge(HCkNtlm cHandle);
const char *CkNtlm_debugLogFilePath(HCkNtlm cHandle);
const char *CkNtlm_dnsComputerName(HCkNtlm cHandle);
const char *CkNtlm_dnsDomainName(HCkNtlm cHandle);
const char *CkNtlm_domain(HCkNtlm cHandle);
const char *CkNtlm_encodingMode(HCkNtlm cHandle);
const char *CkNtlm_flags(HCkNtlm cHandle);
const char *CkNtlm_genType1(HCkNtlm cHandle);
const char *CkNtlm_genType2(HCkNtlm cHandle, const char *type1Msg);
const char *CkNtlm_genType3(HCkNtlm cHandle, const char *type2Msg);
const char *CkNtlm_lastErrorHtml(HCkNtlm cHandle);
const char *CkNtlm_lastErrorText(HCkNtlm cHandle);
const char *CkNtlm_lastErrorXml(HCkNtlm cHandle);
const char *CkNtlm_netBiosComputerName(HCkNtlm cHandle);
const char *CkNtlm_netBiosDomainName(HCkNtlm cHandle);
const char *CkNtlm_parseType1(HCkNtlm cHandle, const char *type1Msg);
const char *CkNtlm_parseType2(HCkNtlm cHandle, const char *type2Msg);
const char *CkNtlm_parseType3(HCkNtlm cHandle, const char *type3Msg);
const char *CkNtlm_password(HCkNtlm cHandle);
const char *CkNtlm_serverChallenge(HCkNtlm cHandle);
const char *CkNtlm_targetName(HCkNtlm cHandle);
const char *CkNtlm_userName(HCkNtlm cHandle);
const char *CkNtlm_version(HCkNtlm cHandle);
const char *CkNtlm_workstation(HCkNtlm cHandle);
#endif
