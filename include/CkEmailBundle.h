// CkEmailBundle.h: interface for the CkEmailBundle class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkEmailBundle_H
#define _CkEmailBundle_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkEmail;
class CkStringArray;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkEmailBundle
class CkEmailBundle  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkEmailBundle(const CkEmailBundle &);
	CkEmailBundle &operator=(const CkEmailBundle &);

    public:
	CkEmailBundle(void);
	virtual ~CkEmailBundle(void);

	static CkEmailBundle *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	int get_MessageCount(void);



	// ----------------------
	// Methods
	// ----------------------
	bool AddEmail(const CkEmail &email);

	CkEmail *FindByHeader(const char *name, const char *value);

	CkEmail *GetEmail(int index);

	CkStringArray *GetUidls(void);

	bool GetXml(CkString &outXml);
	const char *getXml(void);
	const char *xml(void);

	bool LoadXml(const char *path);

	bool LoadXmlString(const char *xmlStr);

	bool RemoveEmail(const CkEmail &email);

	bool RemoveEmailByIndex(int index);

	bool SaveXml(const char *path);

	void SortByDate(bool ascending);

	void SortByRecipient(bool ascending);

	void SortBySender(bool ascending);

	void SortBySubject(bool ascending);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
