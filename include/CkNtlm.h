// CkNtlm.h: interface for the CkNtlm class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkNtlm_H
#define _CkNtlm_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"




#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkNtlm
class CkNtlm  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkNtlm(const CkNtlm &);
	CkNtlm &operator=(const CkNtlm &);

    public:
	CkNtlm(void);
	virtual ~CkNtlm(void);

	static CkNtlm *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_ClientChallenge(CkString &str);
	const char *clientChallenge(void);
	void put_ClientChallenge(const char *newVal);

	void get_DnsComputerName(CkString &str);
	const char *dnsComputerName(void);
	void put_DnsComputerName(const char *newVal);

	void get_DnsDomainName(CkString &str);
	const char *dnsDomainName(void);
	void put_DnsDomainName(const char *newVal);

	void get_Domain(CkString &str);
	const char *domain(void);
	void put_Domain(const char *newVal);

	void get_EncodingMode(CkString &str);
	const char *encodingMode(void);
	void put_EncodingMode(const char *newVal);

	void get_Flags(CkString &str);
	const char *flags(void);
	void put_Flags(const char *newVal);

	void get_NetBiosComputerName(CkString &str);
	const char *netBiosComputerName(void);
	void put_NetBiosComputerName(const char *newVal);

	void get_NetBiosDomainName(CkString &str);
	const char *netBiosDomainName(void);
	void put_NetBiosDomainName(const char *newVal);

	int get_NtlmVersion(void);
	void put_NtlmVersion(int newVal);

	int get_OemCodePage(void);
	void put_OemCodePage(int newVal);

	void get_Password(CkString &str);
	const char *password(void);
	void put_Password(const char *newVal);

	void get_ServerChallenge(CkString &str);
	const char *serverChallenge(void);
	void put_ServerChallenge(const char *newVal);

	void get_TargetName(CkString &str);
	const char *targetName(void);
	void put_TargetName(const char *newVal);

	void get_UserName(CkString &str);
	const char *userName(void);
	void put_UserName(const char *newVal);

	void get_Workstation(CkString &str);
	const char *workstation(void);
	void put_Workstation(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	bool CompareType3(const char *msg1, const char *msg2);

	bool GenType1(CkString &outStr);
	const char *genType1(void);

	bool GenType2(const char *type1Msg, CkString &outStr);
	const char *genType2(const char *type1Msg);

	bool GenType3(const char *type2Msg, CkString &outStr);
	const char *genType3(const char *type2Msg);

	bool LoadType3(const char *type3Msg);

	bool ParseType1(const char *type1Msg, CkString &outStr);
	const char *parseType1(const char *type1Msg);

	bool ParseType2(const char *type2Msg, CkString &outStr);
	const char *parseType2(const char *type2Msg);

	bool ParseType3(const char *type3Msg, CkString &outStr);
	const char *parseType3(const char *type3Msg);

	bool SetFlag(const char *flagLetter, bool on);

	bool UnlockComponent(const char *unlockCode);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
