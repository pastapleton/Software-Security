// This is a generated source file for Chilkat version 9.4.1.34
#ifndef _C_CkMailboxes_W_H
#define _C_CkMailboxes_W_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

HCkMailboxesW CkMailboxesW_Create(void);
HCkMailboxesW CkMailboxesW_Create2(BOOL bForDso);
void CkMailboxesW_Dispose(HCkMailboxesW handle);
int CkMailboxesW_getCount(HCkMailboxesW cHandle);
void CkMailboxesW_getDebugLogFilePath(HCkMailboxesW cHandle, HCkStringW retval);
void CkMailboxesW_putDebugLogFilePath(HCkMailboxesW cHandle, const wchar_t *newVal);
void CkMailboxesW_getLastErrorHtml(HCkMailboxesW cHandle, HCkStringW retval);
void CkMailboxesW_getLastErrorText(HCkMailboxesW cHandle, HCkStringW retval);
void CkMailboxesW_getLastErrorXml(HCkMailboxesW cHandle, HCkStringW retval);
BOOL CkMailboxesW_getVerboseLogging(HCkMailboxesW cHandle);
void CkMailboxesW_putVerboseLogging(HCkMailboxesW cHandle, BOOL newVal);
void CkMailboxesW_getVersion(HCkMailboxesW cHandle, HCkStringW retval);
BOOL CkMailboxesW_GetName(HCkMailboxesW cHandle, int index, HCkStringW outStrName);
BOOL CkMailboxesW_HasInferiors(HCkMailboxesW cHandle, int index);
BOOL CkMailboxesW_IsMarked(HCkMailboxesW cHandle, int index);
BOOL CkMailboxesW_IsSelectable(HCkMailboxesW cHandle, int index);
BOOL CkMailboxesW_SaveLastError(HCkMailboxesW cHandle, const wchar_t *path);
const wchar_t *CkMailboxesW__debugLogFilePath(HCkMailboxesW cHandle);
const wchar_t *CkMailboxesW__getName(HCkMailboxesW cHandle, int index);
const wchar_t *CkMailboxesW__lastErrorHtml(HCkMailboxesW cHandle);
const wchar_t *CkMailboxesW__lastErrorText(HCkMailboxesW cHandle);
const wchar_t *CkMailboxesW__lastErrorXml(HCkMailboxesW cHandle);
const wchar_t *CkMailboxesW__name(HCkMailboxesW cHandle, int index);
const wchar_t *CkMailboxesW__version(HCkMailboxesW cHandle);
#endif
