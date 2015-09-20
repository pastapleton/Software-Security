#ifndef _CkXmlW_H
#define _CkXmlW_H
// This header is generated.
#include "chilkatDefs.h"

#pragma once

#include "CkWideCharBase.h"
#include "CkString.h"
#include "CkXml.h"




#ifndef __sun__
#pragma pack (push, 8) 
#endif


class CkXmlW : public CkWideCharBase
{
    private:
	CkXml *m_impl;
	

        // Disallow assignment or copying this object.
	CkXmlW(const CkXmlW &) { }
	CkXmlW &operator=(const CkXmlW &) { return *this; }


    public:
	CkXmlW();
	CkXmlW(CkXml *p, bool bForDso);
	CkXmlW(bool bForDso);
	virtual ~CkXmlW();
	CkXml *getMbPtr(void) { return m_impl; }
	CkXml &getMbRef(void) { return *m_impl; }
	const CkXml *getMbConstPtr(void) const { return m_impl; }
	const CkXml &getMbConstRef(void) const { return *m_impl; }
	void dispose(void) { if (m_impl) m_impl->dispose();  }

bool get_Cdata(void);
void put_Cdata(bool propVal);
void get_Content(CkString &propVal);
void put_Content(const wchar_t *w1);
int get_ContentInt(void);
void put_ContentInt(int propVal);
void get_DebugLogFilePath(CkString &propVal);
void put_DebugLogFilePath(const wchar_t *w1);
void get_DocType(CkString &propVal);
void put_DocType(const wchar_t *w1);
bool get_EmitXmlDecl(void);
void put_EmitXmlDecl(bool propVal);
void get_Encoding(CkString &propVal);
void put_Encoding(const wchar_t *w1);
void LastErrorHtml(CkString &propVal);
void LastErrorText(CkString &propVal);
void LastErrorXml(CkString &propVal);
int get_NumAttributes(void);
int get_NumChildren(void);
bool get_SortCaseInsensitive(void);
void put_SortCaseInsensitive(bool propVal);
bool get_Standalone(void);
void put_Standalone(bool propVal);
void get_Tag(CkString &propVal);
void put_Tag(const wchar_t *w1);
int get_TreeId(void);
bool get_VerboseLogging(void);
void put_VerboseLogging(bool propVal);
void get_Version(CkString &propVal);
bool AccumulateTagContent(const wchar_t *w1,const wchar_t *w2,CkString &outStr);
bool AddAttribute(const wchar_t *w1,const wchar_t *w2);
bool AddAttributeInt(const wchar_t *w1,int value);
bool AddChildTree(const CkXmlW &tree);
void AddOrUpdateAttribute(const wchar_t *w1,const wchar_t *w2);
void AddOrUpdateAttributeI(const wchar_t *w1,int value);
void AddStyleSheet(const wchar_t *w1);
void AddToAttribute(const wchar_t *w1,int amount);
void AddToChildContent(const wchar_t *w1,int amount);
void AddToContent(int amount);
bool AppendToContent(const wchar_t *w1);
bool BEncodeContent(const wchar_t *w1,const CkByteData &db);
bool ChildContentMatches(const wchar_t *w1,const wchar_t *w2,bool caseSensitive);
bool ChilkatPath(const wchar_t *w1,CkString &outStr);
bool Clear(void);
bool ContentMatches(const wchar_t *w1,bool caseSensitive);
void Copy(const CkXmlW &node);
void CopyRef(CkXmlW &node);
bool DecodeContent(CkByteData &outData);
bool DecodeEntities(const wchar_t *w1,CkString &outStr);
bool DecryptContent(const wchar_t *w1);
bool EncryptContent(const wchar_t *w1);
CkXmlW *ExtractChildByIndex(int index);
CkXmlW *ExtractChildByName(const wchar_t *w1,const wchar_t *w2,const wchar_t *w3);
CkXmlW *FindChild(const wchar_t *w1);
bool FindChild2(const wchar_t *w1);
CkXmlW *FindNextRecord(const wchar_t *w1,const wchar_t *w2);
CkXmlW *FindOrAddNewChild(const wchar_t *w1);
CkXmlW *FirstChild(void);
bool FirstChild2(void);
bool GetAttrValue(const wchar_t *w1,CkString &outStr);
int GetAttrValueInt(const wchar_t *w1);
bool GetAttributeName(int index,CkString &outStr);
bool GetAttributeValue(int index,CkString &outStr);
int GetAttributeValueInt(int index);
bool GetBinaryContent(bool unzipFlag,bool decryptFlag,const wchar_t *w1,CkByteData &outData);
CkXmlW *GetChild(int index);
bool GetChild2(int index);
bool GetChildBoolValue(const wchar_t *w1);
bool GetChildContent(const wchar_t *w1,CkString &outStr);
bool GetChildContentByIndex(int index,CkString &outStr);
CkXmlW *GetChildExact(const wchar_t *w1,const wchar_t *w2);
int GetChildIntValue(const wchar_t *w1);
bool GetChildTag(int index,CkString &outStr);
bool GetChildTagByIndex(int index,CkString &outStr);
CkXmlW *GetChildWithAttr(const wchar_t *w1,const wchar_t *w2,const wchar_t *w3);
CkXmlW *GetChildWithContent(const wchar_t *w1);
CkXmlW *GetChildWithTag(const wchar_t *w1);
CkXmlW *GetNthChildWithTag(const wchar_t *w1,int n);
bool GetNthChildWithTag2(const wchar_t *w1,int n);
CkXmlW *GetParent(void);
bool GetParent2(void);
CkXmlW *GetRoot(void);
void GetRoot2(void);
CkXmlW *GetSelf(void);
bool GetXml(CkString &outStr);
bool HasAttrWithValue(const wchar_t *w1,const wchar_t *w2);
bool HasAttribute(const wchar_t *w1);
bool HasChildWithContent(const wchar_t *w1);
bool HasChildWithTag(const wchar_t *w1);
bool HasChildWithTagAndContent(const wchar_t *w1,const wchar_t *w2);
bool InsertChildTreeAfter(int index,const CkXmlW &tree);
bool InsertChildTreeBefore(int index,const CkXmlW &tree);
CkXmlW *LastChild(void);
bool LastChild2(void);
bool LoadXml(const wchar_t *w1);
bool LoadXml2(const wchar_t *w1,bool autoTrim);
bool LoadXmlFile(const wchar_t *w1);
bool LoadXmlFile2(const wchar_t *w1,bool autoTrim);
CkXmlW *NewChild(const wchar_t *w1,const wchar_t *w2);
void NewChild2(const wchar_t *w1,const wchar_t *w2);
CkXmlW *NewChildAfter(int index,const wchar_t *w1,const wchar_t *w2);
CkXmlW *NewChildBefore(int index,const wchar_t *w1,const wchar_t *w2);
void NewChildInt2(const wchar_t *w1,int value);
CkXmlW *NextSibling(void);
bool NextSibling2(void);
int NumChildrenHavingTag(const wchar_t *w1);
CkXmlW *PreviousSibling(void);
bool PreviousSibling2(void);
bool QEncodeContent(const wchar_t *w1,const CkByteData &db);
bool RemoveAllAttributes(void);
void RemoveAllChildren(void);
bool RemoveAttribute(const wchar_t *w1);
void RemoveChild(const wchar_t *w1);
void RemoveChildByIndex(int index);
void RemoveChildWithContent(const wchar_t *w1);
void RemoveFromTree(void);
bool SaveBinaryContent(const wchar_t *w1,bool unzipFlag,bool decryptFlag,const wchar_t *w2);
bool SaveLastError(const wchar_t *w1);
bool SaveXml(const wchar_t *w1);
CkXmlW *SearchAllForContent(const CkXmlW *after,const wchar_t *w1);
bool SearchAllForContent2(const CkXmlW *after,const wchar_t *w1);
CkXmlW *SearchForAttribute(const CkXmlW *after,const wchar_t *w1,const wchar_t *w2,const wchar_t *w3);
bool SearchForAttribute2(const CkXmlW *after,const wchar_t *w1,const wchar_t *w2,const wchar_t *w3);
CkXmlW *SearchForContent(const CkXmlW *after,const wchar_t *w1,const wchar_t *w2);
bool SearchForContent2(const CkXmlW *after,const wchar_t *w1,const wchar_t *w2);
CkXmlW *SearchForTag(const CkXmlW *after,const wchar_t *w1);
bool SearchForTag2(const CkXmlW *after,const wchar_t *w1);
bool SetBinaryContent(const CkByteData &data,bool zipFlag,bool encryptFlag,const wchar_t *w1);
#if !defined(CHILKAT_MONO)
bool SetBinaryContent2(const unsigned char *pByteData,unsigned long szByteData,bool zipFlag,bool encryptFlag,const wchar_t *w1);
#endif
bool SetBinaryContentFromFile(const wchar_t *w1,bool zipFlag,bool encryptFlag,const wchar_t *w2);
void SortByAttribute(const wchar_t *w1,bool ascending);
void SortByAttributeInt(const wchar_t *w1,bool ascending);
void SortByContent(bool ascending);
void SortByTag(bool ascending);
void SortRecordsByAttribute(const wchar_t *w1,const wchar_t *w2,bool ascending);
void SortRecordsByContent(const wchar_t *w1,bool ascending);
void SortRecordsByContentInt(const wchar_t *w1,bool ascending);
bool SwapNode(const CkXmlW &node);
bool SwapTree(const CkXmlW &tree);
bool TagContent(const wchar_t *w1,CkString &outStr);
bool TagEquals(const wchar_t *w1);
bool UnzipContent(void);
bool UnzipTree(void);
bool UpdateAttribute(const wchar_t *w1,const wchar_t *w2);
bool UpdateAttributeInt(const wchar_t *w1,int value);
void UpdateChildContent(const wchar_t *w1,const wchar_t *w2);
void UpdateChildContentInt(const wchar_t *w1,int value);
bool ZipContent(void);
bool ZipTree(void);
const wchar_t *accumulateTagContent(const wchar_t *w1,const wchar_t *w2);
const wchar_t *attrValue(const wchar_t *w1);
const wchar_t *attributeName(int index);
const wchar_t *attributeValue(int index);
const wchar_t *childContent(const wchar_t *w1);
const wchar_t *childContentByIndex(int index);
const wchar_t *childTag(int index);
const wchar_t *childTagByIndex(int index);
const wchar_t *chilkatPath(const wchar_t *w1);
const wchar_t *content(void);
const wchar_t *debugLogFilePath(void);
const wchar_t *decodeEntities(const wchar_t *w1);
const wchar_t *docType(void);
const wchar_t *encoding(void);
const wchar_t *getAttrValue(const wchar_t *w1);
const wchar_t *getAttributeName(int index);
const wchar_t *getAttributeValue(int index);
const wchar_t *getChildContent(const wchar_t *w1);
const wchar_t *getChildContentByIndex(int index);
const wchar_t *getChildTag(int index);
const wchar_t *getChildTagByIndex(int index);
const wchar_t *getXml(void);
const wchar_t *lastErrorHtml(void);
const wchar_t *lastErrorText(void);
const wchar_t *lastErrorXml(void);
const wchar_t *tag(void);
const wchar_t *tagContent(const wchar_t *w1);
const wchar_t *version(void);
const wchar_t *xml(void);

};
#ifndef __sun__
#pragma pack (pop)
#endif

#endif
