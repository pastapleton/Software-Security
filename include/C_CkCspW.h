// This is a generated source file for Chilkat version 9.4.1.34
#if defined(WIN32) || defined(WINCE)

#ifndef _C_CkCsp_W_H
#define _C_CkCsp_W_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkCspW CkCspW_Create(void);
HCkCspW CkCspW_Create2(BOOL bForDso);
void CkCspW_Dispose(HCkCspW handle);
void CkCspW_getDebugLogFilePath(HCkCspW cHandle, HCkStringW retval);
void CkCspW_putDebugLogFilePath(HCkCspW cHandle, const wchar_t *newVal);
void CkCspW_getEncryptAlgorithm(HCkCspW cHandle, HCkStringW retval);
int CkCspW_getEncryptAlgorithmID(HCkCspW cHandle);
int CkCspW_getEncryptNumBits(HCkCspW cHandle);
void CkCspW_getHashAlgorithm(HCkCspW cHandle, HCkStringW retval);
int CkCspW_getHashAlgorithmID(HCkCspW cHandle);
int CkCspW_getHashNumBits(HCkCspW cHandle);
void CkCspW_getKeyContainerName(HCkCspW cHandle, HCkStringW retval);
void CkCspW_putKeyContainerName(HCkCspW cHandle, const wchar_t *newVal);
void CkCspW_getLastErrorHtml(HCkCspW cHandle, HCkStringW retval);
void CkCspW_getLastErrorText(HCkCspW cHandle, HCkStringW retval);
void CkCspW_getLastErrorXml(HCkCspW cHandle, HCkStringW retval);
BOOL CkCspW_getMachineKeyset(HCkCspW cHandle);
void CkCspW_putMachineKeyset(HCkCspW cHandle, BOOL newVal);
int CkCspW_getNumEncryptAlgorithms(HCkCspW cHandle);
int CkCspW_getNumHashAlgorithms(HCkCspW cHandle);
int CkCspW_getNumKeyContainers(HCkCspW cHandle);
int CkCspW_getNumKeyExchangeAlgorithms(HCkCspW cHandle);
int CkCspW_getNumSignatureAlgorithms(HCkCspW cHandle);
void CkCspW_getProviderName(HCkCspW cHandle, HCkStringW retval);
void CkCspW_putProviderName(HCkCspW cHandle, const wchar_t *newVal);
int CkCspW_getProviderType(HCkCspW cHandle);
BOOL CkCspW_getVerboseLogging(HCkCspW cHandle);
void CkCspW_putVerboseLogging(HCkCspW cHandle, BOOL newVal);
void CkCspW_getVersion(HCkCspW cHandle, HCkStringW retval);
HCkStringArrayW CkCspW_GetKeyContainerNames(HCkCspW cHandle);
BOOL CkCspW_HasEncryptAlgorithm(HCkCspW cHandle, const wchar_t *name, int numBits);
BOOL CkCspW_HasHashAlgorithm(HCkCspW cHandle, const wchar_t *name, int numBits);
BOOL CkCspW_Initialize(HCkCspW cHandle);
BOOL CkCspW_NthEncryptionAlgorithm(HCkCspW cHandle, int index, HCkStringW outName);
int CkCspW_NthEncryptionNumBits(HCkCspW cHandle, int index);
BOOL CkCspW_NthHashAlgorithmName(HCkCspW cHandle, int index, HCkStringW outName);
int CkCspW_NthHashNumBits(HCkCspW cHandle, int index);
BOOL CkCspW_NthKeyContainerName(HCkCspW cHandle, int index, HCkStringW outName);
BOOL CkCspW_NthKeyExchangeAlgorithm(HCkCspW cHandle, int index, HCkStringW outName);
int CkCspW_NthKeyExchangeNumBits(HCkCspW cHandle, int index);
BOOL CkCspW_NthSignatureAlgorithm(HCkCspW cHandle, int index, HCkStringW outName);
int CkCspW_NthSignatureNumBits(HCkCspW cHandle, int index);
BOOL CkCspW_SaveLastError(HCkCspW cHandle, const wchar_t *path);
int CkCspW_SetEncryptAlgorithm(HCkCspW cHandle, const wchar_t *name);
int CkCspW_SetHashAlgorithm(HCkCspW cHandle, const wchar_t *name);
BOOL CkCspW_SetProviderMicrosoftBase(HCkCspW cHandle);
BOOL CkCspW_SetProviderMicrosoftEnhanced(HCkCspW cHandle);
BOOL CkCspW_SetProviderMicrosoftRsaAes(HCkCspW cHandle);
BOOL CkCspW_SetProviderMicrosoftStrong(HCkCspW cHandle);
const wchar_t *CkCspW__debugLogFilePath(HCkCspW cHandle);
const wchar_t *CkCspW__encryptAlgorithm(HCkCspW cHandle);
const wchar_t *CkCspW__hashAlgorithm(HCkCspW cHandle);
const wchar_t *CkCspW__keyContainerName(HCkCspW cHandle);
const wchar_t *CkCspW__lastErrorHtml(HCkCspW cHandle);
const wchar_t *CkCspW__lastErrorText(HCkCspW cHandle);
const wchar_t *CkCspW__lastErrorXml(HCkCspW cHandle);
const wchar_t *CkCspW__nthEncryptionAlgorithm(HCkCspW cHandle, int index);
const wchar_t *CkCspW__nthHashAlgorithmName(HCkCspW cHandle, int index);
const wchar_t *CkCspW__nthKeyContainerName(HCkCspW cHandle, int index);
const wchar_t *CkCspW__nthKeyExchangeAlgorithm(HCkCspW cHandle, int index);
const wchar_t *CkCspW__nthSignatureAlgorithm(HCkCspW cHandle, int index);
const wchar_t *CkCspW__providerName(HCkCspW cHandle);
const wchar_t *CkCspW__version(HCkCspW cHandle);
#endif

#endif // WIN32 (entire file)
