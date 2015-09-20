#include "stdafx.h"
#include "stdlib.h"
//#include "../include/CkCrypt2.h"

#include <Windows.h>	// needed by CHILKAT e.g. for SystemTim
#include <CkRsa.h>
#include <CkCrypt2.h>
#include <CkString.h>
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

void AESFileDecrypt(string key)
    {
    CkCrypt2 crypt;

    bool success;
    success = crypt.UnlockComponent("T06152014Crypt_J2uOFPEBkQ3d");
    /*if (success != true) {
        printf("%s\n",crypt.lastErrorText());
        return;
    }*/

    //  AES is also known as Rijndael.
    crypt.put_CryptAlgorithm("aes");

    //  CipherMode may be "ecb" or "cbc"
    crypt.put_CipherMode("cbc");

    //  KeyLength may be 128, 192, 256
    crypt.put_KeyLength(256);

    //  The padding scheme determines the contents of the bytes
    //  that are added to pad the result to a multiple of the
    //  encryption algorithm's block size.  AES has a block
    //  size of 16 bytes, so encrypted output is always
    //  a multiple of 16.
	//	How many bytes are added to the result so that its a 
	//	multiple of block size. 
    crypt.put_PaddingScheme(0);

    //  EncodingMode specifies the encoding of the output for
    //  encryption, and the input for decryption.
    //  It may be "hex", "url", "base64", or "quoted-printable".
    crypt.put_EncodingMode("hex");

    //  An initialization vector is required if using CBC mode.
    //  ECB mode does not use an IV.
    //  The length of the IV is equal to the algorithm's block size.
    //  It is NOT equal to the length of the key.
    
	const char * ivHex;
    ivHex = "000102030405060708090A0B0C0D0E0F";
    crypt.SetEncodedIV(ivHex,"hex");
	

    //  The secret key must equal the size of the key.  For
    //  256-bit encryption, the binary secret key is 32 bytes.
    //  For 128-bit encryption, the binary secret key is 16 bytes.
    const char * keyHex;
    keyHex = key.c_str();
    crypt.SetEncodedKey(keyHex,"hex");

    //  Encrypt a string...
    //  The input string is 44 ANSI characters (i.e. 44 bytes), so
    //  the output should be 48 bytes (a multiple of 16).
    //  Because the output is a hex string, it should
    //  be 96 characters long (2 chars per byte).
   

    //  Now decrypt:
    const char * decStr;
    success = crypt.CkDecryptFile("aesEncrypted.dat", "example_aes.txt");

    /*string result(decStr);
	return result;*/

    }

void AESFileEncrypt(const char * encr, string key)
    {
    CkCrypt2 crypt;

    bool success;
    success = crypt.UnlockComponent("T06152014Crypt_J2uOFPEBkQ3d");
    /*if (success != true) {
        printf("%s\n",crypt.lastErrorText());
        return;
    }*/

    //  AES is also known as Rijndael.
    crypt.put_CryptAlgorithm("aes");

    //  CipherMode may be "ecb" or "cbc"
    crypt.put_CipherMode("cbc");

    //  KeyLength may be 128, 192, 256
    crypt.put_KeyLength(256);

    //  The padding scheme determines the contents of the bytes
    //  that are added to pad the result to a multiple of the
    //  encryption algorithm's block size.  AES has a block
    //  size of 16 bytes, so encrypted output is always
    //  a multiple of 16.
	//	How many bytes are added to the result so that its a 
	//	multiple of block size. 
    crypt.put_PaddingScheme(0);

    //  EncodingMode specifies the encoding of the output for
    //  encryption, and the input for decryption.
    //  It may be "hex", "url", "base64", or "quoted-printable".
    crypt.put_EncodingMode("hex");

    //  An initialization vector is required if using CBC mode.
    //  ECB mode does not use an IV.
    //  The length of the IV is equal to the algorithm's block size.
    //  It is NOT equal to the length of the key.
    
	const char * ivHex;
    ivHex = "000102030405060708090A0B0C0D0E0F";
    crypt.SetEncodedIV(ivHex,"hex");
	

    //  The secret key must equal the size of the key.  For
    //  256-bit encryption, the binary secret key is 32 bytes.
    //  For 128-bit encryption, the binary secret key is 16 bytes.
    const char * keyHex;
    keyHex = key.c_str();
    crypt.SetEncodedKey(keyHex,"hex");

    //  Encrypt a string...
    //  The input string is 44 ANSI characters (i.e. 44 bytes), so
    //  the output should be 48 bytes (a multiple of 16).
    //  Because the output is a hex string, it should
    //  be 96 characters long (2 chars per byte).
    const char * encStr;
	const char * encStr1;
	encStr = encr;
    success= crypt.CkEncryptFile(encr, "aesEncrypted.dat");

	//string result(encStr1);
	//return result;
 

    
    }