// CkCharset.h: interface for the CkCharset class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkCharset_H
#define _CkCharset_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkCharset
class CkCharset  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkCharset(const CkCharset &);
	CkCharset &operator=(const CkCharset &);

    public:
	CkCharset(void);
	virtual ~CkCharset(void);

	static CkCharset *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_AltToCharset(CkString &str);
	const char *altToCharset(void);
	void put_AltToCharset(const char *newVal);

	int get_ErrorAction(void);
	void put_ErrorAction(int newVal);

	void get_FromCharset(CkString &str);
	const char *fromCharset(void);
	void put_FromCharset(const char *newVal);

	void get_LastInputAsHex(CkString &str);
	const char *lastInputAsHex(void);

	void get_LastInputAsQP(CkString &str);
	const char *lastInputAsQP(void);

	void get_LastOutputAsHex(CkString &str);
	const char *lastOutputAsHex(void);

	void get_LastOutputAsQP(CkString &str);
	const char *lastOutputAsQP(void);

	bool get_SaveLast(void);
	void put_SaveLast(bool newVal);

	void get_ToCharset(CkString &str);
	const char *toCharset(void);
	void put_ToCharset(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	int CharsetToCodePage(const char *charsetName);

	bool CodePageToCharset(int codePage, CkString &outCharset);
	const char *codePageToCharset(int codePage);

	bool ConvertData(const CkByteData &inData, CkByteData &outData);

	bool ConvertFile(const char *srcPath, const char *destPath);

	bool ConvertFileNoPreamble(const char *srcPath, const char *destPath);

	bool ConvertFromUtf16(const CkByteData &uniData, CkByteData &outMbData);

	bool ConvertHtml(const CkByteData &htmlIn, CkByteData &outHtml);

	bool ConvertHtmlFile(const char *srcPath, const char *destPath);

	bool ConvertToUtf16(const CkByteData &mbData, CkByteData &outUniData);

	bool EntityEncodeDec(const char *inStr, CkString &outStr);
	const char *entityEncodeDec(const char *inStr);

	bool EntityEncodeHex(const char *inStr, CkString &outStr);
	const char *entityEncodeHex(const char *inStr);

	bool GetHtmlCharset(const CkByteData &htmlData, CkString &outCharset);
	const char *getHtmlCharset(const CkByteData &htmlData);
	const char *htmlCharset(const CkByteData &htmlData);

	bool GetHtmlFileCharset(const char *htmlPath, CkString &outCharset);
	const char *getHtmlFileCharset(const char *htmlPath);
	const char *htmlFileCharset(const char *htmlPath);

	bool HtmlDecodeToStr(const char *str, CkString &outStr);
	const char *htmlDecodeToStr(const char *str);

	bool HtmlEntityDecode(const CkByteData &inData, CkByteData &outData);

	bool HtmlEntityDecodeFile(const char *srcPath, const char *destPath);

	bool IsUnlocked(void);

	bool LowerCase(const char *inStr, CkString &outStr);
	const char *lowerCase(const char *inStr);

	bool ReadFile(const char *path, CkByteData &outData);

	bool ReadFileToString(const char *path, const char *srcCharset, CkString &outStr);
	const char *readFileToString(const char *path, const char *srcCharset);

	void SetErrorBytes(const unsigned char *pByteData, unsigned long szByteData);

	void SetErrorString(const char *str, const char *charset);

	bool UnlockComponent(const char *unlockCode);

	bool UpperCase(const char *inStr, CkString &outStr);
	const char *upperCase(const char *inStr);

	bool UrlDecodeStr(const char *inStr, CkString &outStr);
	const char *urlDecodeStr(const char *inStr);

	bool VerifyData(const char *charset, const CkByteData &charData);

	bool VerifyFile(const char *charset, const char *path);

	bool WriteFile(const char *path, const CkByteData &dataBuf);

	bool WriteStringToFile(const char *str, const char *path, const char *charset);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
