#include "stdafx.h"
#include "stdlib.h"

#include <Windows.h>	// needed by CHILKAT e.g. for SystemTime

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

// for the AES Encryption & Hashing
#include "../include/CkCrypt2.h"

// for RSA
#include "../include/CkRsa.h"

// get strings, because the const char* causes problems....
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

string RSApublicb()
    {
    CkRsa rsa;

    bool success;
    success = rsa.UnlockComponent("T06152014RSA_XFn8tkbGkQQd");
    /*if (success != true) {
        printf("RSA component unlock failed\n");
        return;
    }*/

    //  This example also generates the public and private
    //  keys to be used in the RSA encryption.
    //  Normally, you would generate a key pair once,
    //  and distribute the public key to your partner.
    //  Anything encrypted with the public key can be
    //  decrypted with the private key.  The reverse is
    //  also true: anything encrypted using the private
    //  key can be decrypted using the public key.

    //  Generate a 1024-bit key.  Chilkat RSA supports
    //  key sizes ranging from 512 bits to 4096 bits.
    success = rsa.GenerateKey(1024);
    /*if (success != true) {
        printf("%s\n",rsa.lastErrorText());
        return;
    }*/

    //  Keys are exported in XML format:
    const char * publicKey;
    publicKey = rsa.exportPublicKey();

	/*
    //  Start with a new RSA object to demonstrate that all we
    //  need are the keys previously exported:
    CkRsa rsaEncryptor;

    //  Encrypted output is always binary.  In this case, we want
    //  to encode the encrypted bytes in a printable string.
    //  Our choices are "hex", "base64", "url", "quoted-printable".
    rsaEncryptor.put_EncodingMode("hex");

    //  We'll encrypt with the public key and decrypt with the private
    //  key.  It's also possible to do the reverse.
    rsaEncryptor.ImportPublicKey(publicKey);

    bool usePrivateKey;
    usePrivateKey = false;
    const char * encryptedStr;
    encryptedStr = rsaEncryptor.encryptStringENC(Hna.c_str(),usePrivateKey);
	*/

	string result(publicKey);
	return result;

    }