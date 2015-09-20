// CkHttpResponse.h: interface for the CkHttpResponse class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkHttpResponse_H
#define _CkHttpResponse_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkHttpResponse
class CkHttpResponse  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkHttpResponse(const CkHttpResponse &);
	CkHttpResponse &operator=(const CkHttpResponse &);

    public:
	CkHttpResponse(void);
	virtual ~CkHttpResponse(void);

	static CkHttpResponse *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_Body(CkByteData &outBytes);

	void get_BodyQP(CkString &str);
	const char *bodyQP(void);

	void get_BodyStr(CkString &str);
	const char *bodyStr(void);

	void get_Charset(CkString &str);
	const char *charset(void);

	unsigned long get_ContentLength(void);

	__int64 get_ContentLength64(void);

	void get_Date(SYSTEMTIME &outSysTime);

	void get_DateStr(CkString &str);
	const char *dateStr(void);

	void get_Domain(CkString &str);
	const char *domain(void);

	void get_FullMime(CkString &str);
	const char *fullMime(void);

	void get_Header(CkString &str);
	const char *header(void);

	int get_NumCookies(void);

	int get_NumHeaderFields(void);

	int get_StatusCode(void);

	void get_StatusLine(CkString &str);
	const char *statusLine(void);



	// ----------------------
	// Methods
	// ----------------------
	bool GetCookieDomain(int index, CkString &outStr);
	const char *getCookieDomain(int index);
	const char *cookieDomain(int index);

	bool GetCookieExpires(int index, SYSTEMTIME &outSysTime);

	bool GetCookieExpiresStr(int index, CkString &outStr);
	const char *getCookieExpiresStr(int index);
	const char *cookieExpiresStr(int index);

	bool GetCookieName(int index, CkString &outStr);
	const char *getCookieName(int index);
	const char *cookieName(int index);

	bool GetCookiePath(int index, CkString &outStr);
	const char *getCookiePath(int index);
	const char *cookiePath(int index);

	bool GetCookieValue(int index, CkString &outStr);
	const char *getCookieValue(int index);
	const char *cookieValue(int index);

	bool GetHeaderField(const char *fieldName, CkString &outStr);
	const char *getHeaderField(const char *fieldName);
	const char *headerField(const char *fieldName);

	bool GetHeaderFieldAttr(const char *fieldName, const char *attrName, CkString &outStr);
	const char *getHeaderFieldAttr(const char *fieldName, const char *attrName);
	const char *headerFieldAttr(const char *fieldName, const char *attrName);

	bool GetHeaderName(int index, CkString &outStr);
	const char *getHeaderName(int index);
	const char *headerName(int index);

	bool GetHeaderValue(int index, CkString &outStr);
	const char *getHeaderValue(int index);
	const char *headerValue(int index);

	bool SaveBodyBinary(const char *path);

	bool SaveBodyText(bool bCrlf, const char *path);

	bool UrlEncParamValue(const char *encodedParams, const char *paramName, CkString &outStr);
	const char *urlEncParamValue(const char *encodedParams, const char *paramName);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
