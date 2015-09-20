// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkCertStore_W_H
#define _C_CkCertStore_W_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkCertStoreW CkCertStoreW_Create(void);
HCkCertStoreW CkCertStoreW_Create2(BOOL bForDso);
void CkCertStoreW_Dispose(HCkCertStoreW handle);
BOOL CkCertStoreW_getAvoidWindowsPkAccess(HCkCertStoreW cHandle);
void CkCertStoreW_putAvoidWindowsPkAccess(HCkCertStoreW cHandle, BOOL newVal);
void CkCertStoreW_getDebugLogFilePath(HCkCertStoreW cHandle, HCkStringW retval);
void CkCertStoreW_putDebugLogFilePath(HCkCertStoreW cHandle, const wchar_t *newVal);
void CkCertStoreW_getLastErrorHtml(HCkCertStoreW cHandle, HCkStringW retval);
void CkCertStoreW_getLastErrorText(HCkCertStoreW cHandle, HCkStringW retval);
void CkCertStoreW_getLastErrorXml(HCkCertStoreW cHandle, HCkStringW retval);
int CkCertStoreW_getNumCertificates(HCkCertStoreW cHandle);
#if defined(CK_WINCERTSTORE_INCLUDED)
int CkCertStoreW_getNumEmailCerts(HCkCertStoreW cHandle);
#endif
BOOL CkCertStoreW_getVerboseLogging(HCkCertStoreW cHandle);
void CkCertStoreW_putVerboseLogging(HCkCertStoreW cHandle, BOOL newVal);
void CkCertStoreW_getVersion(HCkCertStoreW cHandle, HCkStringW retval);
#if defined(CK_WINCERTSTORE_INCLUDED)
BOOL CkCertStoreW_AddCertificate(HCkCertStoreW cHandle, HCkCertW cert);
#endif
#if defined(CK_WINCERTSTORE_INCLUDED)
BOOL CkCertStoreW_CreateFileStore(HCkCertStoreW cHandle, const wchar_t *path);
#endif
#if defined(CK_WINCERTSTORE_INCLUDED)
BOOL CkCertStoreW_CreateMemoryStore(HCkCertStoreW cHandle);
#endif
#if defined(CK_WINCERTSTORE_INCLUDED)
BOOL CkCertStoreW_CreateRegistryStore(HCkCertStoreW cHandle, const wchar_t *regRoot, const wchar_t *regPath);
#endif
HCkCertW CkCertStoreW_FindCertByRfc822Name(HCkCertStoreW cHandle, const wchar_t *name);
HCkCertW CkCertStoreW_FindCertBySerial(HCkCertStoreW cHandle, const wchar_t *serialNumber);
HCkCertW CkCertStoreW_FindCertBySha1Thumbprint(HCkCertStoreW cHandle, const wchar_t *str);
HCkCertW CkCertStoreW_FindCertBySubject(HCkCertStoreW cHandle, const wchar_t *subject);
HCkCertW CkCertStoreW_FindCertBySubjectCN(HCkCertStoreW cHandle, const wchar_t *commonName);
HCkCertW CkCertStoreW_FindCertBySubjectE(HCkCertStoreW cHandle, const wchar_t *emailAddress);
HCkCertW CkCertStoreW_FindCertBySubjectO(HCkCertStoreW cHandle, const wchar_t *organization);
HCkCertW CkCertStoreW_FindCertForEmail(HCkCertStoreW cHandle, const wchar_t *emailAddress);
HCkCertW CkCertStoreW_GetCertificate(HCkCertStoreW cHandle, int index);
#if defined(CK_WINCERTSTORE_INCLUDED)
HCkCertW CkCertStoreW_GetEmailCert(HCkCertStoreW cHandle, int index);
#endif
BOOL CkCertStoreW_LoadPemFile(HCkCertStoreW cHandle, const wchar_t *pemPath);
BOOL CkCertStoreW_LoadPemStr(HCkCertStoreW cHandle, const wchar_t *pemString);
BOOL CkCertStoreW_LoadPfxData(HCkCertStoreW cHandle, HCkByteDataW pfxData, const wchar_t *password);
#if !defined(CHILKAT_MONO)
BOOL CkCertStoreW_LoadPfxData2(HCkCertStoreW cHandle, const unsigned char *pByteData, unsigned long szByteData, const wchar_t *password);
#endif
BOOL CkCertStoreW_LoadPfxFile(HCkCertStoreW cHandle, const wchar_t *path, const wchar_t *password);
#if defined(CK_WINCERTSTORE_INCLUDED)
BOOL CkCertStoreW_OpenCurrentUserStore(HCkCertStoreW cHandle, BOOL readOnly);
#endif
#if defined(CK_WINCERTSTORE_INCLUDED)
BOOL CkCertStoreW_OpenFileStore(HCkCertStoreW cHandle, const wchar_t *path, BOOL readOnly);
#endif
#if defined(CK_WINCERTSTORE_INCLUDED)
BOOL CkCertStoreW_OpenLocalSystemStore(HCkCertStoreW cHandle, BOOL readOnly);
#endif
#if defined(CK_WINCERTSTORE_INCLUDED)
BOOL CkCertStoreW_OpenRegistryStore(HCkCertStoreW cHandle, const wchar_t *regRoot, const wchar_t *regPath, BOOL readOnly);
#endif
#if defined(CK_WINCERTSTORE_INCLUDED)
BOOL CkCertStoreW_RemoveCertificate(HCkCertStoreW cHandle, HCkCertW cert);
#endif
BOOL CkCertStoreW_SaveLastError(HCkCertStoreW cHandle, const wchar_t *path);
const wchar_t *CkCertStoreW__debugLogFilePath(HCkCertStoreW cHandle);
const wchar_t *CkCertStoreW__lastErrorHtml(HCkCertStoreW cHandle);
const wchar_t *CkCertStoreW__lastErrorText(HCkCertStoreW cHandle);
const wchar_t *CkCertStoreW__lastErrorXml(HCkCertStoreW cHandle);
const wchar_t *CkCertStoreW__version(HCkCertStoreW cHandle);
#endif
