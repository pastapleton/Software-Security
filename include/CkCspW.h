#ifndef _CkCspW_H
#define _CkCspW_H
// This header is generated.
#include "chilkatDefs.h"
#if defined(CK_WINDOWS)
#pragma once

#include "CkWideCharBase.h"
#include "CkString.h"
#include "CkCsp.h"

class CkStringArrayW;



#ifndef __sun__
#pragma pack (push, 8) 
#endif


class CkCspW : public CkWideCharBase
{
    private:
	CkCsp *m_impl;
	

        // Disallow assignment or copying this object.
	CkCspW(const CkCspW &) { }
	CkCspW &operator=(const CkCspW &) { return *this; }


    public:
	CkCspW();
	CkCspW(CkCsp *p, bool bForDso);
	CkCspW(bool bForDso);
	virtual ~CkCspW();
	CkCsp *getMbPtr(void) { return m_impl; }
	CkCsp &getMbRef(void) { return *m_impl; }
	const CkCsp *getMbConstPtr(void) const { return m_impl; }
	const CkCsp &getMbConstRef(void) const { return *m_impl; }
	void dispose(void) { if (m_impl) m_impl->dispose();  }

void get_DebugLogFilePath(CkString &propVal);
void put_DebugLogFilePath(const wchar_t *w1);
void get_EncryptAlgorithm(CkString &propVal);
int get_EncryptAlgorithmID(void);
int get_EncryptNumBits(void);
void get_HashAlgorithm(CkString &propVal);
int get_HashAlgorithmID(void);
int get_HashNumBits(void);
void get_KeyContainerName(CkString &propVal);
void put_KeyContainerName(const wchar_t *w1);
void LastErrorHtml(CkString &propVal);
void LastErrorText(CkString &propVal);
void LastErrorXml(CkString &propVal);
bool get_MachineKeyset(void);
void put_MachineKeyset(bool propVal);
int get_NumEncryptAlgorithms(void);
int get_NumHashAlgorithms(void);
int get_NumKeyContainers(void);
int get_NumKeyExchangeAlgorithms(void);
int get_NumSignatureAlgorithms(void);
void get_ProviderName(CkString &propVal);
void put_ProviderName(const wchar_t *w1);
int get_ProviderType(void);
bool get_VerboseLogging(void);
void put_VerboseLogging(bool propVal);
void get_Version(CkString &propVal);
CkStringArrayW *GetKeyContainerNames(void);
bool HasEncryptAlgorithm(const wchar_t *w1,int numBits);
bool HasHashAlgorithm(const wchar_t *w1,int numBits);
bool Initialize(void);
bool NthEncryptionAlgorithm(int index,CkString &outName);
int NthEncryptionNumBits(int index);
bool NthHashAlgorithmName(int index,CkString &outName);
int NthHashNumBits(int index);
bool NthKeyContainerName(int index,CkString &outName);
bool NthKeyExchangeAlgorithm(int index,CkString &outName);
int NthKeyExchangeNumBits(int index);
bool NthSignatureAlgorithm(int index,CkString &outName);
int NthSignatureNumBits(int index);
bool SaveLastError(const wchar_t *w1);
int SetEncryptAlgorithm(const wchar_t *w1);
int SetHashAlgorithm(const wchar_t *w1);
bool SetProviderMicrosoftBase(void);
bool SetProviderMicrosoftEnhanced(void);
bool SetProviderMicrosoftRsaAes(void);
bool SetProviderMicrosoftStrong(void);
const wchar_t *debugLogFilePath(void);
const wchar_t *encryptAlgorithm(void);
const wchar_t *hashAlgorithm(void);
const wchar_t *keyContainerName(void);
const wchar_t *lastErrorHtml(void);
const wchar_t *lastErrorText(void);
const wchar_t *lastErrorXml(void);
const wchar_t *nthEncryptionAlgorithm(int index);
const wchar_t *nthHashAlgorithmName(int index);
const wchar_t *nthKeyContainerName(int index);
const wchar_t *nthKeyExchangeAlgorithm(int index);
const wchar_t *nthSignatureAlgorithm(int index);
const wchar_t *providerName(void);
const wchar_t *version(void);

};
#ifndef __sun__
#pragma pack (pop)
#endif

#endif
#endif
