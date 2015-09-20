// CkZipProgress.h: interface for the CkZipProgress class.
//
//////////////////////////////////////////////////////////////////////

#ifndef _CKZIPPROGRESS_H
#define _CKZIPPROGRESS_H

#include "CkObject.h"

/*

  To receive progress events (callbacks), create a C++ class that 
  inherits this one and provides one or more overriding implementations 
  for the events you wish to receive.  Then pass your Zip progress object
  to CkZip methods such as WriteZip, Extract, etc.

  */
#ifndef __sun__
#pragma pack (push, 8)
#endif
 

class CkZipProgress : public CkObject 
{
    public:
	CkZipProgress();
	virtual ~CkZipProgress();

	// WriteZipPercentDone and UnzipPercentDone are now a single "PercentDone" callback.
	virtual void PercentDone(int pctDone, bool *abort) { }

	//virtual void WriteZipPercentDone(long pctDone, bool *abort) { }
	//virtual void UnzipPercentDone(long pctDone, bool *abort) { }

	// Called periodically to check to see if the Zip / Unzip should be aborted.
	virtual void AbortCheck(bool *abort) { }
	
	virtual void ProgressInfo(const char *name, const char *value) { }

	virtual void ToBeAdded(const char *filePath, 
	    unsigned long fileSize, 
	    bool *skip) { }

	virtual void DirToBeAdded(const char *filePath, 
	    bool *skip) { }

	virtual void FileAdded(const char *filePath, 
	    unsigned long fileSize, 
	    bool *abort) { }

	virtual void ToBeZipped(const char *filePath, 
	    unsigned long fileSize, 
	    bool *skip) { }

	virtual void FileZipped(const char *filePath, 
	    unsigned long fileSize, 
	    unsigned long compressedSize, 
	    bool *abort) { }

	virtual void ToBeUnzipped(const char *filePath, 
	    unsigned long compressedSize,
	    unsigned long fileSize, 
	    bool *skip) { }

	virtual void FileUnzipped(const char *filePath, 
	    unsigned long compressedSize,
	    unsigned long fileSize, 
	    bool *abort) { }

	virtual void SkippedForUnzip(const char *filePath, 
	    unsigned long compressedSize,
	    unsigned long fileSize,
	    bool isDirectory) { }

	virtual void AddFilesBegin(void) { }
	virtual void AddFilesEnd(void) { }
	virtual void WriteZipBegin(void) { }
	virtual void WriteZipEnd(void) { }
	virtual void UnzipBegin(void) { }
	virtual void UnzipEnd(void) { }
};
#ifndef __sun__
#pragma pack (pop)
#endif


#endif
