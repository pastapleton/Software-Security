// CkHttpRequest.h: interface for the CkHttpRequest class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkHttpRequest_H
#define _CkHttpRequest_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkHttpRequest
class CkHttpRequest  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkHttpRequest(const CkHttpRequest &);
	CkHttpRequest &operator=(const CkHttpRequest &);

    public:
	CkHttpRequest(void);
	virtual ~CkHttpRequest(void);

	static CkHttpRequest *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_Charset(CkString &str);
	const char *charset(void);
	void put_Charset(const char *newVal);

	void get_ContentType(CkString &str);
	const char *contentType(void);
	void put_ContentType(const char *newVal);

	void get_EntireHeader(CkString &str);
	const char *entireHeader(void);
	void put_EntireHeader(const char *newVal);

	void get_HttpVerb(CkString &str);
	const char *httpVerb(void);
	void put_HttpVerb(const char *newVal);

	void get_HttpVersion(CkString &str);
	const char *httpVersion(void);
	void put_HttpVersion(const char *newVal);

	int get_NumHeaderFields(void);

	int get_NumParams(void);

	void get_Path(CkString &str);
	const char *path(void);
	void put_Path(const char *newVal);

	bool get_SendCharset(void);
	void put_SendCharset(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	bool AddBytesForUpload(const char *name, const char *filename, const CkByteData &byteData);

	bool AddBytesForUpload2(const char *name, const char *filename, const CkByteData &byteData, const char *contentType);

	bool AddFileForUpload(const char *name, const char *path);

	bool AddFileForUpload2(const char *name, const char *path, const char *contentType);

	void AddHeader(const char *name, const char *value);

	void AddParam(const char *name, const char *value);

	bool AddStringForUpload(const char *name, const char *filename, const char *strData, const char *charset);

	bool AddStringForUpload2(const char *name, const char *filename, const char *strData, const char *charset, const char *contentType);

	bool GenerateRequestText(CkString &outStr);
	const char *generateRequestText(void);

	bool GetHeaderField(const char *name, CkString &outStr);
	const char *getHeaderField(const char *name);
	const char *headerField(const char *name);

	bool GetHeaderName(int index, CkString &outStr);
	const char *getHeaderName(int index);
	const char *headerName(int index);

	bool GetHeaderValue(int index, CkString &outStr);
	const char *getHeaderValue(int index);
	const char *headerValue(int index);

	bool GetParam(const char *name, CkString &outStr);
	const char *getParam(const char *name);
	const char *param(const char *name);

	bool GetParamName(int index, CkString &outStr);
	const char *getParamName(int index);
	const char *paramName(int index);

	bool GetParamValue(int index, CkString &outStr);
	const char *getParamValue(int index);
	const char *paramValue(int index);

	bool GetUrlEncodedParams(CkString &outStr);
	const char *getUrlEncodedParams(void);
	const char *urlEncodedParams(void);

	bool LoadBodyFromBytes(const CkByteData &binaryData);

	bool LoadBodyFromFile(const char *path);

	bool LoadBodyFromString(const char *bodyStr, const char *charset);

	void RemoveAllParams(void);

	bool RemoveHeader(const char *name);

	void RemoveParam(const char *name);

	void SetFromUrl(const char *url);

	bool StreamBodyFromFile(const char *path);

	void UseGet(void);

	void UseHead(void);

	void UsePost(void);

	void UsePostMultipartForm(void);

	void UsePut(void);

	void UseUpload(void);

	void UseUploadPut(void);

	void UseXmlHttp(const char *xmlBody);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
