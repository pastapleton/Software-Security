// CkPfx.h: interface for the CkPfx class.
//
//////////////////////////////////////////////////////////////////////

// This source file is NOT generated.

// If this is Windows Phone, then define CK_LIBWINPHONE
#if !defined(CK_LIBWINPHONE)
#if defined(WINAPI_FAMILY) && WINAPI_FAMILY == WINAPI_FAMILY_PHONE_APP
#define CK_LIBWINPHONE
#endif
#endif

#if defined(WIN32) && !defined(__MINGW32__) && !defined(CK_LIBWINPHONE)

#ifndef _CKPFX_H
#define _CKPFX_H




#include "CkString.h"
class CkEmail;
#include "CkMultiByteBase.h"

#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkPfx
class CkPfx  : public CkMultiByteBase
{
    private:
	// Don't allow assignment or copying these objects.
	CkPfx(const CkPfx &) { } 
	CkPfx &operator=(const CkPfx &) { return *this; }
	CkPfx(void *impl);

    public:
	CkPfx();
	virtual ~CkPfx();

	// BEGIN PUBLIC INTERFACE

	bool UnlockComponent(const char *unlockCode);

	bool ImportPfxFile(const char *pfxPath, const char *password, bool bMachineKeyset, bool bLocalMachineCertStore, bool bExportable, bool bUseWarningDialog);


	// CK_INSERT_POINT

	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif





#endif

#endif // WIN32
