// This is a generated source file for Chilkat version 9.4.1.34
#if defined(WIN32) || defined(WINCE)

#ifndef _C_CkKeyContainer_W_H
#define _C_CkKeyContainer_W_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkKeyContainerW CkKeyContainerW_Create(void);
HCkKeyContainerW CkKeyContainerW_Create2(BOOL bForDso);
void CkKeyContainerW_Dispose(HCkKeyContainerW handle);
#if defined(CK_CRYPTOAPI_INCLUDED)
void CkKeyContainerW_getContainerName(HCkKeyContainerW cHandle, HCkStringW retval);
#endif
void CkKeyContainerW_getDebugLogFilePath(HCkKeyContainerW cHandle, HCkStringW retval);
void CkKeyContainerW_putDebugLogFilePath(HCkKeyContainerW cHandle, const wchar_t *newVal);
#if defined(CK_CRYPTOAPI_INCLUDED)
BOOL CkKeyContainerW_getIsMachineKeyset(HCkKeyContainerW cHandle);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
BOOL CkKeyContainerW_getIsOpen(HCkKeyContainerW cHandle);
#endif
void CkKeyContainerW_getLastErrorHtml(HCkKeyContainerW cHandle, HCkStringW retval);
void CkKeyContainerW_getLastErrorText(HCkKeyContainerW cHandle, HCkStringW retval);
void CkKeyContainerW_getLastErrorXml(HCkKeyContainerW cHandle, HCkStringW retval);
BOOL CkKeyContainerW_getVerboseLogging(HCkKeyContainerW cHandle);
void CkKeyContainerW_putVerboseLogging(HCkKeyContainerW cHandle, BOOL newVal);
void CkKeyContainerW_getVersion(HCkKeyContainerW cHandle, HCkStringW retval);
#if defined(CK_CRYPTOAPI_INCLUDED)
void CkKeyContainerW_CloseContainer(HCkKeyContainerW cHandle);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
BOOL CkKeyContainerW_CreateContainer(HCkKeyContainerW cHandle, const wchar_t *name, BOOL machineKeyset);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
BOOL CkKeyContainerW_DeleteContainer(HCkKeyContainerW cHandle);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
BOOL CkKeyContainerW_FetchContainerNames(HCkKeyContainerW cHandle, BOOL bMachineKeyset);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
BOOL CkKeyContainerW_GenerateKeyPair(HCkKeyContainerW cHandle, BOOL bKeyExchangePair, int keyLengthInBits);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
BOOL CkKeyContainerW_GenerateUuid(HCkKeyContainerW cHandle, HCkStringW outGuid);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
BOOL CkKeyContainerW_GetNthContainerName(HCkKeyContainerW cHandle, BOOL bMachineKeyset, int index, HCkStringW outName);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
int CkKeyContainerW_GetNumContainers(HCkKeyContainerW cHandle, BOOL bMachineKeyset);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
HCkPrivateKeyW CkKeyContainerW_GetPrivateKey(HCkKeyContainerW cHandle, BOOL bKeyExchangePair);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
HCkPublicKeyW CkKeyContainerW_GetPublicKey(HCkKeyContainerW cHandle, BOOL bKeyExchangePair);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
BOOL CkKeyContainerW_ImportPrivateKey(HCkKeyContainerW cHandle, HCkPrivateKeyW key, BOOL bKeyExchangePair);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
BOOL CkKeyContainerW_ImportPublicKey(HCkKeyContainerW cHandle, HCkPublicKeyW key, BOOL bKeyExchangePair);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
BOOL CkKeyContainerW_OpenContainer(HCkKeyContainerW cHandle, const wchar_t *name, BOOL needPrivateKeyAccess, BOOL machineKeyset);
#endif
BOOL CkKeyContainerW_SaveLastError(HCkKeyContainerW cHandle, const wchar_t *path);
#if defined(CK_CRYPTOAPI_INCLUDED)
const wchar_t *CkKeyContainerW__containerName(HCkKeyContainerW cHandle);
#endif
const wchar_t *CkKeyContainerW__debugLogFilePath(HCkKeyContainerW cHandle);
#if defined(CK_CRYPTOAPI_INCLUDED)
const wchar_t *CkKeyContainerW__generateUuid(HCkKeyContainerW cHandle);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
const wchar_t *CkKeyContainerW__getNthContainerName(HCkKeyContainerW cHandle, BOOL bMachineKeyset, int index);
#endif
const wchar_t *CkKeyContainerW__lastErrorHtml(HCkKeyContainerW cHandle);
const wchar_t *CkKeyContainerW__lastErrorText(HCkKeyContainerW cHandle);
const wchar_t *CkKeyContainerW__lastErrorXml(HCkKeyContainerW cHandle);
#if defined(CK_CRYPTOAPI_INCLUDED)
const wchar_t *CkKeyContainerW__nthContainerName(HCkKeyContainerW cHandle, BOOL bMachineKeyset, int index);
#endif
const wchar_t *CkKeyContainerW__version(HCkKeyContainerW cHandle);
#endif

#endif // WIN32 (entire file)
