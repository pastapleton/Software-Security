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


const char * publicKey;
const char * privateKey;
CkRsa rsa;

/**************************************************
Generate Keys 
Generate a 1024-bit key.  
Chilkat RSA supports key sizes ranging from 512 bits to 4096 bits.
***************************************************/

/*
void generateKey(){
		

}
*/


//RSA Private Key
std::string RSAprivate(string Hnb, const char * key)
    {

    bool success;
    success = rsa.UnlockComponent("T06152014RSA_XFn8tkbGkQQd");
    /*if (success != true) {
        printf("RSA component unlock failed\n");
        return;
    }*/

    CkRsa rsaEncryptor;

    rsaEncryptor.put_EncodingMode("hex");

    //  We'll encrypt with the public key and decrypt with the private
    //  key.  It's also possible to do the reverse.
    rsaEncryptor.ImportPrivateKey(key);

    bool usePrivateKey;
    usePrivateKey = true;
    const char * encryptedStr;
    encryptedStr = rsaEncryptor.encryptStringENC(Hnb.c_str(),usePrivateKey);

	
	return encryptedStr;

    }




//RSA Public Key of A
string RSApublicEncryption(string encrypt, const char * pub)
    {

    bool success;
    success = rsa.UnlockComponent("T06152014RSA_XFn8tkbGkQQd");
    /*if (success != true) {
        printf("RSA component unlock failed\n");
        return;
    }*/


    //  Start with a new RSA object to demonstrate that all we
    //  need are the keys previously exported:
    CkRsa rsaEncryptor;

    //  Encrypted output is always binary.  In this case, we want
    //  to encode the encrypted bytes in a printable string.
    //  Our choices are "hex", "base64", "url", "quoted-printable".
    rsaEncryptor.put_EncodingMode("hex");

    //  We'll encrypt with the public key and decrypt with the private
    //  key.  It's also possible to do the reverse.
    rsaEncryptor.ImportPublicKey(pub);

    bool usePrivateKey;
    usePrivateKey = false;
    const char * encryptedStr;
    encryptedStr = rsaEncryptor.encryptStringENC(encrypt.c_str(),usePrivateKey);

	string result(encryptedStr);
	return result;

    }


string RSAPrivateDecryption(string decr, const char * key)
    {
    

    bool success;
    success = rsa.UnlockComponent("T06152014RSA_XFn8tkbGkQQd");
    /*if (success != true) {
        printf("RSA component unlock failed\n");
        return;
    }*/


    //  Now decrypt:
    CkRsa rsaDecryptor;

    rsaDecryptor.put_EncodingMode("hex");
    rsaDecryptor.ImportPrivateKey(key);

	bool usePrivateKey;
    usePrivateKey = true;
    const char * decryptedStr;
    decryptedStr = rsaDecryptor.decryptStringENC(decr.c_str(), usePrivateKey);


	string result(decryptedStr);
	return result;
    }

