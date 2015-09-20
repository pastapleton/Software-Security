// CkRss.h: interface for the CkRss class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkRss_H
#define _CkRss_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkRssProgress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkRss
class CkRss  : public CkMultiByteBase
{
    private:
	CkRssProgress *m_callback;

	// Don't allow assignment or copying these objects.
	CkRss(const CkRss &);
	CkRss &operator=(const CkRss &);

    public:
	CkRss(void);
	virtual ~CkRss(void);

	static CkRss *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkRssProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkRssProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	int get_NumChannels(void);

	int get_NumItems(void);



	// ----------------------
	// Methods
	// ----------------------
	CkRss *AddNewChannel(void);

	CkRss *AddNewImage(void);

	CkRss *AddNewItem(void);

	// eventCallbacks
	bool DownloadRss(const char *url);

	bool GetAttr(const char *tag, const char *attrName, CkString &outStr);
	const char *getAttr(const char *tag, const char *attrName);
	const char *attr(const char *tag, const char *attrName);

	CkRss *GetChannel(int index);

	int GetCount(const char *tag);

	bool GetDate(const char *tag, SYSTEMTIME &outSysTime);

	bool GetDateStr(const char *tag, CkString &outStr);
	const char *getDateStr(const char *tag);
	const char *dateStr(const char *tag);

	CkRss *GetImage(void);

	int GetInt(const char *tag);

	CkRss *GetItem(int index);

	bool GetString(const char *tag, CkString &outStr);
	const char *getString(const char *tag);
	const char *string(const char *tag);

	bool LoadRssFile(const char *path);

	bool LoadRssString(const char *rssString);

	bool MGetAttr(const char *tag, int index, const char *attrName, CkString &outStr);
	const char *mGetAttr(const char *tag, int index, const char *attrName);

	bool MGetString(const char *tag, int index, CkString &outStr);
	const char *mGetString(const char *tag, int index);

	bool MSetAttr(const char *tag, int index, const char *attrName, const char *value);

	bool MSetString(const char *tag, int index, const char *value);

	void NewRss(void);

	void Remove(const char *tag);

	void SetAttr(const char *tag, const char *attrName, const char *value);

	void SetDate(const char *tag, SYSTEMTIME &dateTime);

	void SetDateNow(const char *tag);

	void SetDateStr(const char *tag, const char *dateTimeStr);

	void SetInt(const char *tag, int value);

	void SetString(const char *tag, const char *value);

	bool ToXmlString(CkString &outStr);
	const char *toXmlString(void);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
