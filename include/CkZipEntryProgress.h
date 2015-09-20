// CkZipEntryProgress.h: interface for the CkZipEntryProgress class.
//
//////////////////////////////////////////////////////////////////////

#ifndef _CKZIPENTRYPROGRESS_H
#define _CKZIPENTRYPROGRESS_H

#include "CkObject.h"

#ifndef __sun__
#pragma pack (push, 8)
#endif
 

class CkZipEntryProgress : public CkObject 
{
    public:
	CkZipEntryProgress() { }
	virtual ~CkZipEntryProgress() { }

	// Called periodically to check to see if the method call should be aborted.
	virtual void AbortCheck(bool *abort) { }
	virtual void PercentDone(int pctDone, bool *abort) { }

	virtual void ProgressInfo(const char *name, const char *value) { }

};
#ifndef __sun__
#pragma pack (pop)
#endif


#endif
