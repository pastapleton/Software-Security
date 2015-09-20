// CkHtmlToXml.h: interface for the CkHtmlToXml class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkHtmlToXml_H
#define _CkHtmlToXml_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkHtmlToXml
class CkHtmlToXml  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkHtmlToXml(const CkHtmlToXml &);
	CkHtmlToXml &operator=(const CkHtmlToXml &);

    public:
	CkHtmlToXml(void);
	virtual ~CkHtmlToXml(void);

	static CkHtmlToXml *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	bool get_DropCustomTags(void);
	void put_DropCustomTags(bool newVal);

	void get_Html(CkString &str);
	const char *html(void);
	void put_Html(const char *newVal);

	int get_Nbsp(void);
	void put_Nbsp(int newVal);

	void get_XmlCharset(CkString &str);
	const char *xmlCharset(void);
	void put_XmlCharset(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	bool ConvertFile(const char *inHtmlPath, const char *destXmlPath);

	void DropTagType(const char *tagName);

	void DropTextFormattingTags(void);

	bool IsUnlocked(void);

	bool ReadFileToString(const char *path, const char *srcCharset, CkString &outStr);
	const char *readFileToString(const char *path, const char *srcCharset);

	void SetHtmlBytes(const CkByteData &inData);

	bool SetHtmlFromFile(const char *path);

	bool ToXml(CkString &outStr);
	const char *toXml(void);

	void UndropTagType(const char *tagName);

	void UndropTextFormattingTags(void);

	bool UnlockComponent(const char *code);

	bool WriteStringToFile(const char *str, const char *path, const char *charset);

	bool Xml(CkString &outStr);
	const char *xml(void);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
