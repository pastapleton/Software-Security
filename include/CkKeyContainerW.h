#ifndef _CkKeyContainerW_H
#define _CkKeyContainerW_H
// This header is generated.
#include "chilkatDefs.h"
#if defined(CK_WINDOWS)
#pragma once

#include "CkWideCharBase.h"
#include "CkString.h"
#include "CkKeyContainer.h"

class CkPrivateKeyW;
class CkPublicKeyW;



#ifndef __sun__
#pragma pack (push, 8) 
#endif


class CkKeyContainerW : public CkWideCharBase
{
    private:
	CkKeyContainer *m_impl;
	

        // Disallow assignment or copying this object.
	CkKeyContainerW(const CkKeyContainerW &) { }
	CkKeyContainerW &operator=(const CkKeyContainerW &) { return *this; }


    public:
	CkKeyContainerW();
	CkKeyContainerW(CkKeyContainer *p, bool bForDso);
	CkKeyContainerW(bool bForDso);
	virtual ~CkKeyContainerW();
	CkKeyContainer *getMbPtr(void) { return m_impl; }
	CkKeyContainer &getMbRef(void) { return *m_impl; }
	const CkKeyContainer *getMbConstPtr(void) const { return m_impl; }
	const CkKeyContainer &getMbConstRef(void) const { return *m_impl; }
	void dispose(void) { if (m_impl) m_impl->dispose();  }

#if defined(CK_CRYPTOAPI_INCLUDED)
void get_ContainerName(CkString &propVal);
#endif
void get_DebugLogFilePath(CkString &propVal);
void put_DebugLogFilePath(const wchar_t *w1);
#if defined(CK_CRYPTOAPI_INCLUDED)
bool get_IsMachineKeyset(void);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
bool get_IsOpen(void);
#endif
void LastErrorHtml(CkString &propVal);
void LastErrorText(CkString &propVal);
void LastErrorXml(CkString &propVal);
bool get_VerboseLogging(void);
void put_VerboseLogging(bool propVal);
void get_Version(CkString &propVal);
#if defined(CK_CRYPTOAPI_INCLUDED)
void CloseContainer(void);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
bool CreateContainer(const wchar_t *w1,bool machineKeyset);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
bool DeleteContainer(void);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
bool FetchContainerNames(bool bMachineKeyset);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
bool GenerateKeyPair(bool bKeyExchangePair,int keyLengthInBits);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
bool GenerateUuid(CkString &outGuid);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
bool GetNthContainerName(bool bMachineKeyset,int index,CkString &outName);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
int GetNumContainers(bool bMachineKeyset);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
CkPrivateKeyW *GetPrivateKey(bool bKeyExchangePair);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
CkPublicKeyW *GetPublicKey(bool bKeyExchangePair);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
bool ImportPrivateKey(CkPrivateKeyW &key,bool bKeyExchangePair);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
bool ImportPublicKey(CkPublicKeyW &key,bool bKeyExchangePair);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
bool OpenContainer(const wchar_t *w1,bool needPrivateKeyAccess,bool machineKeyset);
#endif
bool SaveLastError(const wchar_t *w1);
#if defined(CK_CRYPTOAPI_INCLUDED)
const wchar_t *containerName(void);
#endif
const wchar_t *debugLogFilePath(void);
#if defined(CK_CRYPTOAPI_INCLUDED)
const wchar_t *generateUuid(void);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
const wchar_t *getNthContainerName(bool bMachineKeyset,int index);
#endif
const wchar_t *lastErrorHtml(void);
const wchar_t *lastErrorText(void);
const wchar_t *lastErrorXml(void);
#if defined(CK_CRYPTOAPI_INCLUDED)
const wchar_t *nthContainerName(bool bMachineKeyset,int index);
#endif
const wchar_t *version(void);

};
#ifndef __sun__
#pragma pack (pop)
#endif

#endif
#endif
