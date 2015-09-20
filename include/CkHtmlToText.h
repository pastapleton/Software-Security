// CkHtmlToText.h: interface for the CkHtmlToText class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkHtmlToText_H
#define _CkHtmlToText_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"




#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkHtmlToText
class CkHtmlToText  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkHtmlToText(const CkHtmlToText &);
	CkHtmlToText &operator=(const CkHtmlToText &);

    public:
	CkHtmlToText(void);
	virtual ~CkHtmlToText(void);

	static CkHtmlToText *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	bool get_DecodeHtmlEntities(void);
	void put_DecodeHtmlEntities(bool newVal);

	int get_RightMargin(void);
	void put_RightMargin(int newVal);

	bool get_SuppressLinks(void);
	void put_SuppressLinks(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	bool IsUnlocked(void);

	bool ReadFileToString(const char *path, const char *srcCharset, CkString &outStr);
	const char *readFileToString(const char *path, const char *srcCharset);

	bool ToText(const char *html, CkString &outStr);
	const char *toText(const char *html);

	bool UnlockComponent(const char *code);

	bool WriteStringToFile(const char *str, const char *path, const char *charset);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
