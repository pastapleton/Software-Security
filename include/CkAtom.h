// CkAtom.h: interface for the CkAtom class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkAtom_H
#define _CkAtom_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkDateTime;
class CkAtomProgress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkAtom
class CkAtom  : public CkMultiByteBase
{
    private:
	CkAtomProgress *m_callback;

	// Don't allow assignment or copying these objects.
	CkAtom(const CkAtom &);
	CkAtom &operator=(const CkAtom &);

    public:
	CkAtom(void);
	virtual ~CkAtom(void);

	static CkAtom *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkAtomProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkAtomProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	int get_NumEntries(void);



	// ----------------------
	// Methods
	// ----------------------
	int AddElement(const char *tag, const char *value);

	int AddElementDate(const char *tag, SYSTEMTIME &dateTime);

	int AddElementDateStr(const char *tag, const char *dateTimeStr);

	int AddElementDt(const char *tag, CkDateTime &dateTime);

	int AddElementHtml(const char *tag, const char *htmlStr);

	int AddElementXHtml(const char *tag, const char *xmlStr);

	int AddElementXml(const char *tag, const char *xmlStr);

	void AddEntry(const char *xmlStr);

	void AddLink(const char *rel, const char *href, const char *title, const char *typ);

	void AddPerson(const char *tag, const char *name, const char *uri, const char *email);

	void DeleteElement(const char *tag, int index);

	void DeleteElementAttr(const char *tag, int index, const char *attrName);

	void DeletePerson(const char *tag, int index);

	// eventCallbacks
	bool DownloadAtom(const char *url);

	bool GetElement(const char *tag, int index, CkString &outStr);
	const char *getElement(const char *tag, int index);
	const char *element(const char *tag, int index);

	bool GetElementAttr(const char *tag, int index, const char *attrName, CkString &outStr);
	const char *getElementAttr(const char *tag, int index, const char *attrName);
	const char *elementAttr(const char *tag, int index, const char *attrName);

	int GetElementCount(const char *tag);

	bool GetElementDate(const char *tag, int index, SYSTEMTIME &outSysTime);

	bool GetElementDateStr(const char *tag, int index, CkString &outStr);
	const char *getElementDateStr(const char *tag, int index);
	const char *elementDateStr(const char *tag, int index);

	CkDateTime *GetElementDt(const char *tag, int index);

	CkAtom *GetEntry(int index);

	bool GetLinkHref(const char *relName, CkString &outStr);
	const char *getLinkHref(const char *relName);
	const char *linkHref(const char *relName);

	bool GetPersonInfo(const char *tag, int index, const char *tag2, CkString &outStr);
	const char *getPersonInfo(const char *tag, int index, const char *tag2);
	const char *personInfo(const char *tag, int index, const char *tag2);

	bool GetTopAttr(const char *attrName, CkString &outStr);
	const char *getTopAttr(const char *attrName);
	const char *topAttr(const char *attrName);

	bool HasElement(const char *tag);

	bool LoadXml(const char *xmlStr);

	void NewEntry(void);

	void NewFeed(void);

	void SetElementAttr(const char *tag, int index, const char *attrName, const char *attrValue);

	void SetTopAttr(const char *attrName, const char *value);

	bool ToXmlString(CkString &outStr);
	const char *toXmlString(void);

	void UpdateElement(const char *tag, int index, const char *value);

	void UpdateElementDate(const char *tag, int index, SYSTEMTIME &dateTime);

	void UpdateElementDateStr(const char *tag, int index, const char *dateTimeStr);

	void UpdateElementDt(const char *tag, int index, CkDateTime &dateTime);

	void UpdateElementHtml(const char *tag, int index, const char *htmlStr);

	void UpdateElementXHtml(const char *tag, int index, const char *xmlStr);

	void UpdateElementXml(const char *tag, int index, const char *xmlStr);

	void UpdatePerson(const char *tag, int index, const char *name, const char *uri, const char *email);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
