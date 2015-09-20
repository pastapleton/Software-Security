/********************************************************************
*	EE6032 Communication & Security Protocols
*	Dr. Tom Newe
*	Project
*
*	Group:
*	Patrick Stapleton	10122834
*	Cian Conway			10126767
*	Rory Burns			10108696
*
*	Start Date: 13/02/2014
*********************************************************************/

#include "stdafx.h"
#include "stdlib.h"
//#include "../include/CkCrypt2.h"

#include <Windows.h>	// needed by CHILKAT e.g. for SystemTim
#include <CkRsa.h>
#include <CkCrypt2.h>
// added for CHILKAT
#include "..\include\ckimap.h" 
//#include "..\include\tchar.h"
//
// need this for various things
extern "C" {
#include "../include/allC.h"
#include "../include/allUnicodeC.h"
}
#include "../include/allUnicode.h"
#include <CkSocket.h>
#include <conio.h>


// get strings, because the const char* causes problems....
#include <iostream>
#include <string>
using namespace std;

// SHA Encryption
string SHA(string na)
    {
    CkCrypt2 crypt;

    //  Any string argument automatically begins the 30-day trial.
    bool success;
    success = crypt.UnlockComponent("T06152014Crypt_J2uOFPEBkQ3d");
    if (success != true) {
        printf("Crypt component unlock failed\n");
     
    }

    

	//const char * s = "Hello";
    crypt.put_HashAlgorithm("sha1");
    crypt.put_EncodingMode("hex");

    //  Other possible EncodingMode settings are:
    //  "quoted-printable", "base64", and "url"

    CkString hashStr;
    crypt.HashStringENC(na.c_str(), hashStr);

	string result(hashStr);
	return result;

    }