#ifndef _CkPrivateKeyW_H
#define _CkPrivateKeyW_H
// This header is generated.
#include "chilkatDefs.h"

#pragma once

#include "CkWideCharBase.h"
#include "CkString.h"
#include "CkPrivateKey.h"




#ifndef __sun__
#pragma pack (push, 8) 
#endif


class CkPrivateKeyW : public CkWideCharBase
{
    private:
	CkPrivateKey *m_impl;
	

        // Disallow assignment or copying this object.
	CkPrivateKeyW(const CkPrivateKeyW &) { }
	CkPrivateKeyW &operator=(const CkPrivateKeyW &) { return *this; }


    public:
	CkPrivateKeyW();
	CkPrivateKeyW(CkPrivateKey *p, bool bForDso);
	CkPrivateKeyW(bool bForDso);
	virtual ~CkPrivateKeyW();
	CkPrivateKey *getMbPtr(void) { return m_impl; }
	CkPrivateKey &getMbRef(void) { return *m_impl; }
	const CkPrivateKey *getMbConstPtr(void) const { return m_impl; }
	const CkPrivateKey &getMbConstRef(void) const { return *m_impl; }
	void dispose(void) { if (m_impl) m_impl->dispose();  }

void get_DebugLogFilePath(CkString &propVal);
void put_DebugLogFilePath(const wchar_t *w1);
void LastErrorHtml(CkString &propVal);
void LastErrorText(CkString &propVal);
void LastErrorXml(CkString &propVal);
bool get_VerboseLogging(void);
void put_VerboseLogging(bool propVal);
void get_Version(CkString &propVal);
bool GetPkcs8(CkByteData &outData);
bool GetPkcs8Encrypted(const wchar_t *w1,CkByteData &outBytes);
bool GetPkcs8EncryptedPem(const wchar_t *w1,CkString &outStr);
bool GetPkcs8Pem(CkString &outStr);
bool GetRsaDer(CkByteData &outData);
bool GetRsaPem(CkString &outStr);
bool GetXml(CkString &outStr);
bool LoadEncryptedPem(const wchar_t *w1,const wchar_t *w2);
bool LoadEncryptedPemFile(const wchar_t *w1,const wchar_t *w2);
bool LoadPem(const wchar_t *w1);
bool LoadPemFile(const wchar_t *w1);
bool LoadPkcs8(const CkByteData &data);
bool LoadPkcs8Encrypted(const CkByteData &data,const wchar_t *w1);
bool LoadPkcs8EncryptedFile(const wchar_t *w1,const wchar_t *w2);
bool LoadPkcs8File(const wchar_t *w1);
#if defined(CK_CRYPTOAPI_INCLUDED)
bool LoadPvk(const CkByteData &data,const wchar_t *w1);
#endif
#if defined(CK_CRYPTOAPI_INCLUDED)
bool LoadPvkFile(const wchar_t *w1,const wchar_t *w2);
#endif
bool LoadRsaDer(const CkByteData &data);
bool LoadRsaDerFile(const wchar_t *w1);
bool LoadXml(const wchar_t *w1);
bool LoadXmlFile(const wchar_t *w1);
bool SaveLastError(const wchar_t *w1);
bool SavePkcs8EncryptedFile(const wchar_t *w1,const wchar_t *w2);
bool SavePkcs8EncryptedPemFile(const wchar_t *w1,const wchar_t *w2);
bool SavePkcs8File(const wchar_t *w1);
bool SavePkcs8PemFile(const wchar_t *w1);
bool SaveRsaDerFile(const wchar_t *w1);
bool SaveRsaPemFile(const wchar_t *w1);
bool SaveXmlFile(const wchar_t *w1);
const wchar_t *debugLogFilePath(void);
const wchar_t *getPkcs8EncryptedPem(const wchar_t *w1);
const wchar_t *getPkcs8Pem(void);
const wchar_t *getRsaPem(void);
const wchar_t *getXml(void);
const wchar_t *lastErrorHtml(void);
const wchar_t *lastErrorText(void);
const wchar_t *lastErrorXml(void);
const wchar_t *pkcs8EncryptedPem(const wchar_t *w1);
const wchar_t *pkcs8Pem(void);
const wchar_t *rsaPem(void);
const wchar_t *version(void);
const wchar_t *xml(void);

};
#ifndef __sun__
#pragma pack (pop)
#endif

#endif
