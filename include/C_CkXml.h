// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkXml_H
#define _C_CkXml_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkXml CkXml_Create(void);
void CkXml_Dispose(HCkXml handle);
BOOL CkXml_getCdata(HCkXml cHandle);
void CkXml_putCdata(HCkXml cHandle, BOOL newVal);
void CkXml_getContent(HCkXml cHandle, HCkString retval);
void CkXml_putContent(HCkXml cHandle, const char *newVal);
int CkXml_getContentInt(HCkXml cHandle);
void CkXml_putContentInt(HCkXml cHandle, int newVal);
void CkXml_getDebugLogFilePath(HCkXml cHandle, HCkString retval);
void CkXml_putDebugLogFilePath(HCkXml cHandle, const char *newVal);
void CkXml_getDocType(HCkXml cHandle, HCkString retval);
void CkXml_putDocType(HCkXml cHandle, const char *newVal);
BOOL CkXml_getEmitXmlDecl(HCkXml cHandle);
void CkXml_putEmitXmlDecl(HCkXml cHandle, BOOL newVal);
void CkXml_getEncoding(HCkXml cHandle, HCkString retval);
void CkXml_putEncoding(HCkXml cHandle, const char *newVal);
void CkXml_getLastErrorHtml(HCkXml cHandle, HCkString retval);
void CkXml_getLastErrorText(HCkXml cHandle, HCkString retval);
void CkXml_getLastErrorXml(HCkXml cHandle, HCkString retval);
int CkXml_getNumAttributes(HCkXml cHandle);
int CkXml_getNumChildren(HCkXml cHandle);
BOOL CkXml_getSortCaseInsensitive(HCkXml cHandle);
void CkXml_putSortCaseInsensitive(HCkXml cHandle, BOOL newVal);
BOOL CkXml_getStandalone(HCkXml cHandle);
void CkXml_putStandalone(HCkXml cHandle, BOOL newVal);
void CkXml_getTag(HCkXml cHandle, HCkString retval);
void CkXml_putTag(HCkXml cHandle, const char *newVal);
int CkXml_getTreeId(HCkXml cHandle);
BOOL CkXml_getUtf8(HCkXml cHandle);
void CkXml_putUtf8(HCkXml cHandle, BOOL newVal);
BOOL CkXml_getVerboseLogging(HCkXml cHandle);
void CkXml_putVerboseLogging(HCkXml cHandle, BOOL newVal);
void CkXml_getVersion(HCkXml cHandle, HCkString retval);
BOOL CkXml_AccumulateTagContent(HCkXml cHandle, const char *tag, const char *skipTags, HCkString outStr);
BOOL CkXml_AddAttribute(HCkXml cHandle, const char *name, const char *value);
BOOL CkXml_AddAttributeInt(HCkXml cHandle, const char *name, int value);
BOOL CkXml_AddChildTree(HCkXml cHandle, HCkXml tree);
void CkXml_AddOrUpdateAttribute(HCkXml cHandle, const char *name, const char *value);
void CkXml_AddOrUpdateAttributeI(HCkXml cHandle, const char *name, int value);
void CkXml_AddStyleSheet(HCkXml cHandle, const char *styleSheet);
void CkXml_AddToAttribute(HCkXml cHandle, const char *name, int amount);
void CkXml_AddToChildContent(HCkXml cHandle, const char *tag, int amount);
void CkXml_AddToContent(HCkXml cHandle, int amount);
BOOL CkXml_AppendToContent(HCkXml cHandle, const char *str);
BOOL CkXml_BEncodeContent(HCkXml cHandle, const char *charset, HCkByteData db);
BOOL CkXml_ChildContentMatches(HCkXml cHandle, const char *tag, const char *pattern, BOOL caseSensitive);
BOOL CkXml_ChilkatPath(HCkXml cHandle, const char *cmd, HCkString outStr);
BOOL CkXml_Clear(HCkXml cHandle);
BOOL CkXml_ContentMatches(HCkXml cHandle, const char *pattern, BOOL caseSensitive);
void CkXml_Copy(HCkXml cHandle, HCkXml node);
void CkXml_CopyRef(HCkXml cHandle, HCkXml node);
BOOL CkXml_DecodeContent(HCkXml cHandle, HCkByteData outData);
BOOL CkXml_DecodeEntities(HCkXml cHandle, const char *str, HCkString outStr);
BOOL CkXml_DecryptContent(HCkXml cHandle, const char *password);
BOOL CkXml_EncryptContent(HCkXml cHandle, const char *password);
HCkXml CkXml_ExtractChildByIndex(HCkXml cHandle, int index);
HCkXml CkXml_ExtractChildByName(HCkXml cHandle, const char *tag, const char *attrName, const char *attrValue);
HCkXml CkXml_FindChild(HCkXml cHandle, const char *tag);
BOOL CkXml_FindChild2(HCkXml cHandle, const char *tag);
HCkXml CkXml_FindNextRecord(HCkXml cHandle, const char *tag, const char *contentPattern);
HCkXml CkXml_FindOrAddNewChild(HCkXml cHandle, const char *tag);
HCkXml CkXml_FirstChild(HCkXml cHandle);
BOOL CkXml_FirstChild2(HCkXml cHandle);
BOOL CkXml_GetAttrValue(HCkXml cHandle, const char *name, HCkString outStr);
int CkXml_GetAttrValueInt(HCkXml cHandle, const char *name);
BOOL CkXml_GetAttributeName(HCkXml cHandle, int index, HCkString outStr);
BOOL CkXml_GetAttributeValue(HCkXml cHandle, int index, HCkString outStr);
int CkXml_GetAttributeValueInt(HCkXml cHandle, int index);
BOOL CkXml_GetBinaryContent(HCkXml cHandle, BOOL unzipFlag, BOOL decryptFlag, const char *password, HCkByteData outData);
HCkXml CkXml_GetChild(HCkXml cHandle, int index);
BOOL CkXml_GetChild2(HCkXml cHandle, int index);
BOOL CkXml_GetChildBoolValue(HCkXml cHandle, const char *tag);
BOOL CkXml_GetChildContent(HCkXml cHandle, const char *tag, HCkString outStr);
BOOL CkXml_GetChildContentByIndex(HCkXml cHandle, int index, HCkString outStr);
HCkXml CkXml_GetChildExact(HCkXml cHandle, const char *tag, const char *content);
int CkXml_GetChildIntValue(HCkXml cHandle, const char *tag);
BOOL CkXml_GetChildTag(HCkXml cHandle, int index, HCkString outStr);
BOOL CkXml_GetChildTagByIndex(HCkXml cHandle, int index, HCkString outStr);
HCkXml CkXml_GetChildWithAttr(HCkXml cHandle, const char *tag, const char *attrName, const char *attrValue);
HCkXml CkXml_GetChildWithContent(HCkXml cHandle, const char *content);
HCkXml CkXml_GetChildWithTag(HCkXml cHandle, const char *tag);
HCkXml CkXml_GetNthChildWithTag(HCkXml cHandle, const char *tag, int n);
BOOL CkXml_GetNthChildWithTag2(HCkXml cHandle, const char *tag, int n);
HCkXml CkXml_GetParent(HCkXml cHandle);
BOOL CkXml_GetParent2(HCkXml cHandle);
HCkXml CkXml_GetRoot(HCkXml cHandle);
void CkXml_GetRoot2(HCkXml cHandle);
HCkXml CkXml_GetSelf(HCkXml cHandle);
BOOL CkXml_GetXml(HCkXml cHandle, HCkString outStr);
BOOL CkXml_HasAttrWithValue(HCkXml cHandle, const char *name, const char *value);
BOOL CkXml_HasAttribute(HCkXml cHandle, const char *name);
BOOL CkXml_HasChildWithContent(HCkXml cHandle, const char *content);
BOOL CkXml_HasChildWithTag(HCkXml cHandle, const char *tag);
BOOL CkXml_HasChildWithTagAndContent(HCkXml cHandle, const char *tag, const char *content);
BOOL CkXml_InsertChildTreeAfter(HCkXml cHandle, int index, HCkXml tree);
BOOL CkXml_InsertChildTreeBefore(HCkXml cHandle, int index, HCkXml tree);
HCkXml CkXml_LastChild(HCkXml cHandle);
BOOL CkXml_LastChild2(HCkXml cHandle);
BOOL CkXml_LoadXml(HCkXml cHandle, const char *xmlData);
BOOL CkXml_LoadXml2(HCkXml cHandle, const char *xmlData, BOOL autoTrim);
BOOL CkXml_LoadXmlFile(HCkXml cHandle, const char *path);
BOOL CkXml_LoadXmlFile2(HCkXml cHandle, const char *path, BOOL autoTrim);
HCkXml CkXml_NewChild(HCkXml cHandle, const char *tag, const char *content);
void CkXml_NewChild2(HCkXml cHandle, const char *tag, const char *content);
HCkXml CkXml_NewChildAfter(HCkXml cHandle, int index, const char *tag, const char *content);
HCkXml CkXml_NewChildBefore(HCkXml cHandle, int index, const char *tag, const char *content);
void CkXml_NewChildInt2(HCkXml cHandle, const char *tag, int value);
HCkXml CkXml_NextSibling(HCkXml cHandle);
BOOL CkXml_NextSibling2(HCkXml cHandle);
int CkXml_NumChildrenHavingTag(HCkXml cHandle, const char *tag);
HCkXml CkXml_PreviousSibling(HCkXml cHandle);
BOOL CkXml_PreviousSibling2(HCkXml cHandle);
BOOL CkXml_QEncodeContent(HCkXml cHandle, const char *charset, HCkByteData db);
BOOL CkXml_RemoveAllAttributes(HCkXml cHandle);
void CkXml_RemoveAllChildren(HCkXml cHandle);
BOOL CkXml_RemoveAttribute(HCkXml cHandle, const char *name);
void CkXml_RemoveChild(HCkXml cHandle, const char *tag);
void CkXml_RemoveChildByIndex(HCkXml cHandle, int index);
void CkXml_RemoveChildWithContent(HCkXml cHandle, const char *content);
void CkXml_RemoveFromTree(HCkXml cHandle);
BOOL CkXml_SaveBinaryContent(HCkXml cHandle, const char *path, BOOL unzipFlag, BOOL decryptFlag, const char *password);
BOOL CkXml_SaveLastError(HCkXml cHandle, const char *path);
BOOL CkXml_SaveXml(HCkXml cHandle, const char *path);
HCkXml CkXml_SearchAllForContent(HCkXml cHandle, HCkXml after, const char *contentPattern);
BOOL CkXml_SearchAllForContent2(HCkXml cHandle, HCkXml after, const char *contentPattern);
HCkXml CkXml_SearchForAttribute(HCkXml cHandle, HCkXml after, const char *tag, const char *attr, const char *valuePattern);
BOOL CkXml_SearchForAttribute2(HCkXml cHandle, HCkXml after, const char *tag, const char *attr, const char *valuePattern);
HCkXml CkXml_SearchForContent(HCkXml cHandle, HCkXml after, const char *tag, const char *contentPattern);
BOOL CkXml_SearchForContent2(HCkXml cHandle, HCkXml after, const char *tag, const char *contentPattern);
HCkXml CkXml_SearchForTag(HCkXml cHandle, HCkXml after, const char *tag);
BOOL CkXml_SearchForTag2(HCkXml cHandle, HCkXml after, const char *tag);
BOOL CkXml_SetBinaryContent(HCkXml cHandle, HCkByteData data, BOOL zipFlag, BOOL encryptFlag, const char *password);
#if !defined(CHILKAT_MONO)
BOOL CkXml_SetBinaryContent2(HCkXml cHandle, const unsigned char *pByteData, unsigned long szByteData, BOOL zipFlag, BOOL encryptFlag, const char *password);
#endif
BOOL CkXml_SetBinaryContentFromFile(HCkXml cHandle, const char *path, BOOL zipFlag, BOOL encryptFlag, const char *password);
void CkXml_SortByAttribute(HCkXml cHandle, const char *attrName, BOOL ascending);
void CkXml_SortByAttributeInt(HCkXml cHandle, const char *attrName, BOOL ascending);
void CkXml_SortByContent(HCkXml cHandle, BOOL ascending);
void CkXml_SortByTag(HCkXml cHandle, BOOL ascending);
void CkXml_SortRecordsByAttribute(HCkXml cHandle, const char *sortTag, const char *attrName, BOOL ascending);
void CkXml_SortRecordsByContent(HCkXml cHandle, const char *sortTag, BOOL ascending);
void CkXml_SortRecordsByContentInt(HCkXml cHandle, const char *sortTag, BOOL ascending);
BOOL CkXml_SwapNode(HCkXml cHandle, HCkXml node);
BOOL CkXml_SwapTree(HCkXml cHandle, HCkXml tree);
BOOL CkXml_TagContent(HCkXml cHandle, const char *tag, HCkString outStr);
BOOL CkXml_TagEquals(HCkXml cHandle, const char *tag);
BOOL CkXml_UnzipContent(HCkXml cHandle);
BOOL CkXml_UnzipTree(HCkXml cHandle);
BOOL CkXml_UpdateAttribute(HCkXml cHandle, const char *attrName, const char *attrValue);
BOOL CkXml_UpdateAttributeInt(HCkXml cHandle, const char *attrName, int value);
void CkXml_UpdateChildContent(HCkXml cHandle, const char *tag, const char *value);
void CkXml_UpdateChildContentInt(HCkXml cHandle, const char *tag, int value);
BOOL CkXml_ZipContent(HCkXml cHandle);
BOOL CkXml_ZipTree(HCkXml cHandle);
const char *CkXml_accumulateTagContent(HCkXml cHandle, const char *tag, const char *skipTags);
const char *CkXml_attrValue(HCkXml cHandle, const char *name);
const char *CkXml_attributeName(HCkXml cHandle, int index);
const char *CkXml_attributeValue(HCkXml cHandle, int index);
const char *CkXml_childContent(HCkXml cHandle, const char *tag);
const char *CkXml_childContentByIndex(HCkXml cHandle, int index);
const char *CkXml_childTag(HCkXml cHandle, int index);
const char *CkXml_childTagByIndex(HCkXml cHandle, int index);
const char *CkXml_chilkatPath(HCkXml cHandle, const char *cmd);
const char *CkXml_content(HCkXml cHandle);
const char *CkXml_debugLogFilePath(HCkXml cHandle);
const char *CkXml_decodeEntities(HCkXml cHandle, const char *str);
const char *CkXml_docType(HCkXml cHandle);
const char *CkXml_encoding(HCkXml cHandle);
const char *CkXml_getAttrValue(HCkXml cHandle, const char *name);
const char *CkXml_getAttributeName(HCkXml cHandle, int index);
const char *CkXml_getAttributeValue(HCkXml cHandle, int index);
const char *CkXml_getChildContent(HCkXml cHandle, const char *tag);
const char *CkXml_getChildContentByIndex(HCkXml cHandle, int index);
const char *CkXml_getChildTag(HCkXml cHandle, int index);
const char *CkXml_getChildTagByIndex(HCkXml cHandle, int index);
const char *CkXml_getXml(HCkXml cHandle);
const char *CkXml_lastErrorHtml(HCkXml cHandle);
const char *CkXml_lastErrorText(HCkXml cHandle);
const char *CkXml_lastErrorXml(HCkXml cHandle);
const char *CkXml_tag(HCkXml cHandle);
const char *CkXml_tagContent(HCkXml cHandle, const char *tag);
const char *CkXml_version(HCkXml cHandle);
const char *CkXml_xml(HCkXml cHandle);
#endif
