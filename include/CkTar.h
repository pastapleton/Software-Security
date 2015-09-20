// CkTar.h: interface for the CkTar class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated.

#ifndef _CkTar_H
#define _CkTar_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkTarProgress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkTar
class CkTar  : public CkMultiByteBase
{
    private:
	CkTarProgress *m_callback;

	// Don't allow assignment or copying these objects.
	CkTar(const CkTar &);
	CkTar &operator=(const CkTar &);

    public:
	CkTar(void);
	virtual ~CkTar(void);

	static CkTar *createNew(void);
	void inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkTarProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkTarProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	void get_Charset(CkString &str);
	const char *charset(void);
	void put_Charset(const char *newVal);

	int get_DirMode(void);
	void put_DirMode(int newVal);

	void get_DirPrefix(CkString &str);
	const char *dirPrefix(void);
	void put_DirPrefix(const char *newVal);

	int get_FileMode(void);
	void put_FileMode(int newVal);

	int get_GroupId(void);
	void put_GroupId(int newVal);

	void get_GroupName(CkString &str);
	const char *groupName(void);
	void put_GroupName(const char *newVal);

	int get_HeartbeatMs(void);
	void put_HeartbeatMs(int newVal);

	bool get_NoAbsolutePaths(void);
	void put_NoAbsolutePaths(bool newVal);

	int get_NumDirRoots(void);

	int get_ScriptFileMode(void);
	void put_ScriptFileMode(int newVal);

	bool get_UntarCaseSensitive(void);
	void put_UntarCaseSensitive(bool newVal);

	bool get_UntarDebugLog(void);
	void put_UntarDebugLog(bool newVal);

	bool get_UntarDiscardPaths(void);
	void put_UntarDiscardPaths(bool newVal);

	void get_UntarFromDir(CkString &str);
	const char *untarFromDir(void);
	void put_UntarFromDir(const char *newVal);

	void get_UntarMatchPattern(CkString &str);
	const char *untarMatchPattern(void);
	void put_UntarMatchPattern(const char *newVal);

	int get_UntarMaxCount(void);
	void put_UntarMaxCount(int newVal);

	int get_UserId(void);
	void put_UserId(int newVal);

	void get_UserName(CkString &str);
	const char *userName(void);
	void put_UserName(const char *newVal);

	void get_WriteFormat(CkString &str);
	const char *writeFormat(void);
	void put_WriteFormat(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	bool AddDirRoot(const char *dirPath);

	bool GetDirRoot(int index, CkString &outStr);
	const char *getDirRoot(int index);
	const char *dirRoot(int index);

	// eventCallbacks
	bool ListXml(const char *tarPath, CkString &outStr);
	const char *listXml(const char *tarPath);

	bool UnlockComponent(const char *unlockCode);

	// eventCallbacks
	int Untar(const char *tarPath);

	// eventCallbacks
	bool UntarBz2(const char *tarPath);

	bool UntarFirstMatchingToMemory(const CkByteData &tarFileBytes, const char *matchPattern, CkByteData &outBytes);

	// eventCallbacks
	int UntarFromMemory(const CkByteData &tarFileBytes);

	// eventCallbacks
	bool UntarGz(const char *tarPath);

	// eventCallbacks
	bool UntarZ(const char *tarPath);

	// eventCallbacks
	bool VerifyTar(const char *tarPath);

	// eventCallbacks
	bool WriteTar(const char *tarPath);

	// eventCallbacks
	bool WriteTarBz2(const char *bz2Path);

	// eventCallbacks
	bool WriteTarGz(const char *gzPath);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
