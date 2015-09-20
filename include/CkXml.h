// CkXml.h: interface for the CkXml class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkXml_H
#define _CkXml_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkXml
class CkXml  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkXml(const CkXml &);
	CkXml &operator=(const CkXml &);

    public:
	CkXml(void);
	virtual ~CkXml(void);

	static CkXml *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	bool get_Cdata(void);
	void put_Cdata(bool newVal);

	void get_Content(CkString &str);
	const char *content(void);
	void put_Content(const char *newVal);

	int get_ContentInt(void);
	void put_ContentInt(int newVal);

	void get_DocType(CkString &str);
	const char *docType(void);
	void put_DocType(const char *newVal);

	bool get_EmitXmlDecl(void);
	void put_EmitXmlDecl(bool newVal);

	void get_Encoding(CkString &str);
	const char *encoding(void);
	void put_Encoding(const char *newVal);

	int get_NumAttributes(void);

	int get_NumChildren(void);

	bool get_SortCaseInsensitive(void);
	void put_SortCaseInsensitive(bool newVal);

	bool get_Standalone(void);
	void put_Standalone(bool newVal);

	void get_Tag(CkString &str);
	const char *tag(void);
	void put_Tag(const char *newVal);

	int get_TreeId(void);



	// ----------------------
	// Methods
	// ----------------------
	bool AccumulateTagContent(const char *tag, const char *skipTags, CkString &outStr);
	const char *accumulateTagContent(const char *tag, const char *skipTags);

	bool AddAttribute(const char *name, const char *value);

	bool AddAttributeInt(const char *name, int value);

	bool AddChildTree(const CkXml &tree);

	void AddOrUpdateAttribute(const char *name, const char *value);

	void AddOrUpdateAttributeI(const char *name, int value);

	void AddStyleSheet(const char *styleSheet);

	void AddToAttribute(const char *name, int amount);

	void AddToChildContent(const char *tag, int amount);

	void AddToContent(int amount);

	bool AppendToContent(const char *str);

	bool BEncodeContent(const char *charset, const CkByteData &db);

	bool ChildContentMatches(const char *tag, const char *pattern, bool caseSensitive);

	bool ChilkatPath(const char *cmd, CkString &outStr);
	const char *chilkatPath(const char *cmd);

	bool Clear(void);

	bool ContentMatches(const char *pattern, bool caseSensitive);

	void Copy(const CkXml &node);

	void CopyRef(CkXml &node);

	bool DecodeContent(CkByteData &outData);

	bool DecodeEntities(const char *str, CkString &outStr);
	const char *decodeEntities(const char *str);

	bool DecryptContent(const char *password);

	bool EncryptContent(const char *password);

	CkXml *ExtractChildByIndex(int index);

	CkXml *ExtractChildByName(const char *tag, const char *attrName, const char *attrValue);

	CkXml *FindChild(const char *tag);

	bool FindChild2(const char *tag);

	CkXml *FindNextRecord(const char *tag, const char *contentPattern);

	CkXml *FindOrAddNewChild(const char *tag);

	CkXml *FirstChild(void);

	bool FirstChild2(void);

	bool GetAttrValue(const char *name, CkString &outStr);
	const char *getAttrValue(const char *name);
	const char *attrValue(const char *name);

	int GetAttrValueInt(const char *name);

	bool GetAttributeName(int index, CkString &outStr);
	const char *getAttributeName(int index);
	const char *attributeName(int index);

	bool GetAttributeValue(int index, CkString &outStr);
	const char *getAttributeValue(int index);
	const char *attributeValue(int index);

	int GetAttributeValueInt(int index);

	bool GetBinaryContent(bool unzipFlag, bool decryptFlag, const char *password, CkByteData &outData);

	CkXml *GetChild(int index);

	bool GetChild2(int index);

	bool GetChildBoolValue(const char *tag);

	bool GetChildContent(const char *tag, CkString &outStr);
	const char *getChildContent(const char *tag);
	const char *childContent(const char *tag);

	bool GetChildContentByIndex(int index, CkString &outStr);
	const char *getChildContentByIndex(int index);
	const char *childContentByIndex(int index);

	CkXml *GetChildExact(const char *tag, const char *content);

	int GetChildIntValue(const char *tag);

	bool GetChildTag(int index, CkString &outStr);
	const char *getChildTag(int index);
	const char *childTag(int index);

	bool GetChildTagByIndex(int index, CkString &outStr);
	const char *getChildTagByIndex(int index);
	const char *childTagByIndex(int index);

	CkXml *GetChildWithAttr(const char *tag, const char *attrName, const char *attrValue);

	CkXml *GetChildWithContent(const char *content);

	CkXml *GetChildWithTag(const char *tag);

	CkXml *GetNthChildWithTag(const char *tag, int n);

	bool GetNthChildWithTag2(const char *tag, int n);

	CkXml *GetParent(void);

	bool GetParent2(void);

	CkXml *GetRoot(void);

	void GetRoot2(void);

	CkXml *GetSelf(void);

	bool GetXml(CkString &outStr);
	const char *getXml(void);
	const char *xml(void);

	bool HasAttrWithValue(const char *name, const char *value);

	bool HasAttribute(const char *name);

	bool HasChildWithContent(const char *content);

	bool HasChildWithTag(const char *tag);

	bool HasChildWithTagAndContent(const char *tag, const char *content);

	bool InsertChildTreeAfter(int index, const CkXml &tree);

	bool InsertChildTreeBefore(int index, const CkXml &tree);

	CkXml *LastChild(void);

	bool LastChild2(void);

	bool LoadXml(const char *xmlData);

	bool LoadXml2(const char *xmlData, bool autoTrim);

	bool LoadXmlFile(const char *path);

	bool LoadXmlFile2(const char *path, bool autoTrim);

	CkXml *NewChild(const char *tag, const char *content);

	void NewChild2(const char *tag, const char *content);

	CkXml *NewChildAfter(int index, const char *tag, const char *content);

	CkXml *NewChildBefore(int index, const char *tag, const char *content);

	void NewChildInt2(const char *tag, int value);

	CkXml *NextSibling(void);

	bool NextSibling2(void);

	int NumChildrenHavingTag(const char *tag);

	CkXml *PreviousSibling(void);

	bool PreviousSibling2(void);

	bool QEncodeContent(const char *charset, const CkByteData &db);

	bool RemoveAllAttributes(void);

	void RemoveAllChildren(void);

	bool RemoveAttribute(const char *name);

	void RemoveChild(const char *tag);

	void RemoveChildByIndex(int index);

	void RemoveChildWithContent(const char *content);

	void RemoveFromTree(void);

	bool SaveBinaryContent(const char *path, bool unzipFlag, bool decryptFlag, const char *password);

	bool SaveXml(const char *path);

	CkXml *SearchAllForContent(const CkXml *after, const char *contentPattern);

	bool SearchAllForContent2(const CkXml *after, const char *contentPattern);

	CkXml *SearchForAttribute(const CkXml *after, const char *tag, const char *attr, const char *valuePattern);

	bool SearchForAttribute2(const CkXml *after, const char *tag, const char *attr, const char *valuePattern);

	CkXml *SearchForContent(const CkXml *after, const char *tag, const char *contentPattern);

	bool SearchForContent2(const CkXml *after, const char *tag, const char *contentPattern);

	CkXml *SearchForTag(const CkXml *after, const char *tag);

	bool SearchForTag2(const CkXml *after, const char *tag);

	bool SetBinaryContent(const CkByteData &data, bool zipFlag, bool encryptFlag, const char *password);

#if !defined(CHILKAT_MONO)
	bool SetBinaryContent2(const unsigned char *pByteData, unsigned long szByteData, bool zipFlag, bool encryptFlag, const char *password);
#endif

	bool SetBinaryContentFromFile(const char *path, bool zipFlag, bool encryptFlag, const char *password);

	void SortByAttribute(const char *attrName, bool ascending);

	void SortByAttributeInt(const char *attrName, bool ascending);

	void SortByContent(bool ascending);

	void SortByTag(bool ascending);

	void SortRecordsByAttribute(const char *sortTag, const char *attrName, bool ascending);

	void SortRecordsByContent(const char *sortTag, bool ascending);

	void SortRecordsByContentInt(const char *sortTag, bool ascending);

	bool SwapNode(const CkXml &node);

	bool SwapTree(const CkXml &tree);

	bool TagContent(const char *tag, CkString &outStr);
	const char *tagContent(const char *tag);

	bool TagEquals(const char *tag);

	bool UnzipContent(void);

	bool UnzipTree(void);

	bool UpdateAttribute(const char *attrName, const char *attrValue);

	bool UpdateAttributeInt(const char *attrName, int value);

	void UpdateChildContent(const char *tag, const char *value);

	void UpdateChildContentInt(const char *tag, int value);

	bool ZipContent(void);

	bool ZipTree(void);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
