// CHILKAT_Use.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <Windows.h>	// needed by CHILKAT e.g. for SystemTime

// added for CHILKAT
#include "..\include\ckimap.h" // stored the libs local
//#include "..\include\tchar.h"
//
// need this for various thinks
extern "C" {
#include "../include/allC.h"
#include "../include/allUnicodeC.h"
}
#include "../include/allUnicode.h"

// for the AES Encryption & Hashing
#include "../include/CkCrypt2.h"

// for RSA
#include "../include/CkRsa.h"

// get strings, because the const char* sucks
#include <iostream>
#include <string>
using namespace std;


// taken from LinkSample.cpp shows if you have set up the project correctly
void DoNothing(void)
{
	CkImap imap;
	imap.UnlockComponent("Test");
	imap.Connect("imap.gmail.com");
	CkFtp2W ftp2W;

	bool success = ftp2W.UnlockComponent(L"Test");

    HCkSFtpW c_sftp = CkSFtpW_Create();
    int isuccess = CkSFtpW_UnlockComponent(c_sftp,L"Anything for 30-day trial");
    CkSFtpW_Dispose(c_sftp);

    HCkImap c_imap = CkImap_Create();
    isuccess = CkImap_UnlockComponent(c_imap,"Anything for 30-day trial");
    CkImap_Dispose(c_imap);
}

void AEScrypt(void)
{
    CkCrypt2 crypt;

    bool success;
    success = crypt.UnlockComponent("Anything for 30-day trial");
    if (success != true) {
        printf("%s\n",crypt.lastErrorText());
        return;
    }

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
    keyHex = "000102030405060708090A0B0C0D0E0F101112131415161718191A1B1C1D1E1F";
    crypt.SetEncodedKey(keyHex,"hex");

    //  Encrypt a string...
    //  The input string is 44 ANSI characters (i.e. 44 bytes), so
    //  the output should be 48 bytes (a multiple of 16).
    //  Because the output is a hex string, it should
    //  be 96 characters long (2 chars per byte).
    const char * encStr;
    encStr = crypt.encryptStringENC("The quick brown fox jumps over the lazy dog.");
    printf("%s\n",encStr);

    //  Now decrypt:
    const char * decStr;
    decStr = crypt.decryptStringENC(encStr);
    printf("%s\n",decStr);
}

void SHA1hash(void)
    {
    CkCrypt2 crypt;

    //  Any string argument automatically begins the 30-day trial.
    bool success;
    success = crypt.UnlockComponent("30-day trial");
    if (success != true) {
        printf("Crypt component unlock failed\n");
        return;
    }

    const char * s;
    s = "The quick brown fox jumps over the lazy dog";

    crypt.put_HashAlgorithm("sha1");
    crypt.put_EncodingMode("hex");

    //  Other possible EncodingMode settings are:
    //  "quoted-printable", "base64", and "url"

    const char * hash;
    hash = crypt.hashStringENC(s);
    printf("SHA1:\n");
    printf("%s\n",hash);
}

void RSAcrypt(void)
    {
    CkRsa rsa;

    bool success;
    success = rsa.UnlockComponent("Anything for 30-day trial");
    if (success != true) {
        printf("RSA component unlock failed\n");
        return;
    }

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
    if (success != true) {
        printf("%s\n",rsa.lastErrorText());
        return;
    }

    //  Keys are exported in XML format:
    const char * publicKey;
    publicKey = rsa.exportPublicKey();
	printf("Public key: %s\n",publicKey);

    const char * privateKey;
    privateKey = rsa.exportPrivateKey();
	printf("Private key: %s\n",privateKey);

    const char * plainText;
    plainText = "Encrypting and decrypting should be easy!";

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
    encryptedStr = rsaEncryptor.encryptStringENC(plainText,usePrivateKey);
    printf("%s\n",encryptedStr);

    //  Now decrypt:
    CkRsa rsaDecryptor;

    rsaDecryptor.put_EncodingMode("hex");
    rsaDecryptor.ImportPrivateKey(privateKey);

    usePrivateKey = true;
    const char * decryptedStr;
    decryptedStr = rsaDecryptor.decryptStringENC(encryptedStr,usePrivateKey);

    printf("%s\n",decryptedStr);
 }

// remember that C++ is ugly and wants to have const char * or otherwise can ruin it!!!
// so use string !!!

// task 2: mutually generation of an AES key by with the help of an RSA exchange
// define a  class for each Particpant
class CCommunicationPartner {
	const char * _ObjectName; // This is just for demonstration
	CkCrypt2 crypt;	// for AES support
	const char * _AesMyKeyPart;	
	const char * _AesHisKeyPart;	// TODO is set to a result in a subfunction and looses its scope later!!!
	const char * _RsaMyPrivateKey;	
	const char * _RsaMyPublicKey;	
	const char * _RsaHisPublicKey;	
	CkRsa rsa;
	
  public:
	CCommunicationPartner(char * name, char * keyPart);	// constructor to create internal objects
	const char * sendRsaMyPubliyKey();	// exchange the public keys, simple getter
	void setRsaHisPubliyKey(const char * RsaHisPublicKey);	// get the public key of partner, simple setter

	// now do the encrption/decryption and exchange
	void encryptAesMyKeyPartAes(char * output);
	void decryptAesHisKeyPart(const char * AesHisKeyPart);
	
	// build the AES key and exchange something
	void createAesKey();
	const char* sendAesMessage(const char * plainText);
	void receiveAesMessage(const char * cypher);
};

CCommunicationPartner::CCommunicationPartner(char * name, char * keyPart) 
{
	_ObjectName = name;
	// constructor crreat the Chilkat Objects here
	// AES part
	bool success;
    success = crypt.UnlockComponent("Anything for 30-day trial");
    if (success != true) {
        printf("%s\n",crypt.lastErrorText());
     }
    crypt.put_CryptAlgorithm("aes");
    crypt.put_CipherMode("cbc");
    crypt.put_KeyLength(256);
    crypt.put_PaddingScheme(0);
    crypt.put_EncodingMode("hex");
    const char * ivHex;
    ivHex = "000102030405060708090A0B0C0D0E0F";
    crypt.SetEncodedIV(ivHex,"hex");
	// just need to set the key, when it is known

	// set my local part of the key
	_AesMyKeyPart = keyPart;

	// RSA part
    success = rsa.UnlockComponent("Anything for 30-day trial");
    if (success != true) {
        printf("RSA component unlock failed\n");
    }
    success = rsa.GenerateKey(1024);
    if (success != true) {
        printf("%s\n", rsa.lastErrorText());
    }
	_RsaMyPrivateKey = rsa.exportPrivateKey();	
	_RsaMyPublicKey = rsa.exportPublicKey();
	printf("%s: my AES Key Part is %s \n\n", _ObjectName, _AesMyKeyPart);
}

const char * CCommunicationPartner::sendRsaMyPubliyKey()	// = getter
{
	printf("%s: send my RSA Public Key (%s) \n\n", _ObjectName, _RsaMyPublicKey);
	return _RsaMyPublicKey;
}

void CCommunicationPartner::setRsaHisPubliyKey(const char * RsaHisPublicKey)	// = setter
{
	_RsaHisPublicKey = RsaHisPublicKey;
	printf("%s: received a RSA Public Key (%s) \n\n", _ObjectName, _RsaHisPublicKey);
}

void CCommunicationPartner::encryptAesMyKeyPartAes(char * output)
{
	const char * SignedAesKeyPart;
	const char * EncryptedSignedAesKeyPart;
	bool usePrivateKey;
	CkRsa rsaEncryptor;
	rsaEncryptor.put_EncodingMode("hex");

	// Signature = Encrypte with my private key 	
	rsaEncryptor.ImportPrivateKey(_RsaMyPrivateKey);
	usePrivateKey = true;    
	SignedAesKeyPart = rsaEncryptor.encryptStringENC(_AesMyKeyPart,usePrivateKey);
	printf("%s: signed my AES key part with my private key: %s \n\n", _ObjectName, SignedAesKeyPart);

	// Confidentially = Encrypte with partner's public key	
	rsaEncryptor.ImportPublicKey(_RsaHisPublicKey);
	usePrivateKey = false;    
	EncryptedSignedAesKeyPart = rsaEncryptor.encryptStringENC(SignedAesKeyPart, usePrivateKey);
	printf("%s: encrypted and send my signed AES key part with his public key: %s \n\n", _ObjectName, EncryptedSignedAesKeyPart);

	// physically copy to not lose the string due to scope limits of the object
	strcpy(output, EncryptedSignedAesKeyPart);
}

void CCommunicationPartner::decryptAesHisKeyPart(const char * EncryptedSignedAesKeyPart)
{
	const char * PlainAesKeyPart;
	const char * SignedAesKeyPart;	
	bool usePrivateKey;
	CkRsa rsaDecryptor;
	rsaDecryptor.put_EncodingMode("hex");

	// Confidentially = Decrypte with my private key
	rsaDecryptor.ImportPrivateKey(_RsaMyPrivateKey);
	usePrivateKey = true;
	SignedAesKeyPart = rsaDecryptor.decryptStringENC(EncryptedSignedAesKeyPart,usePrivateKey);
	printf("%s: received and decrypted the signed AES key part with my private key: %s \n\n", _ObjectName, SignedAesKeyPart);	
	
	// Resolve signature = Decrypt with his public key
	rsaDecryptor.ImportPublicKey(_RsaHisPublicKey);
	usePrivateKey = false;
	PlainAesKeyPart = rsaDecryptor.decryptStringENC(SignedAesKeyPart,usePrivateKey);
	printf("%s: resolved signature from the AES key part with my private key: %s \n\n", _ObjectName, PlainAesKeyPart);
	
    _AesHisKeyPart = new char [strlen(PlainAesKeyPart)+1];	// Another memory solution, what about cleaning the memory up?
    strcpy(const_cast<char*>(_AesHisKeyPart),PlainAesKeyPart);
}
// TODO->	////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CCommunicationPartner::createAesKey()
{
	char fullAESkey[65];   // array to hold the resulting AES key: 64+1 = each bit is 32 char (hexa)
				    		//  256-bit encryption, the binary secret key is 32 bytes.
	// TODO: find something better to orginazie the order of it!!!
	if (strcmp(_ObjectName,"Alice") != 0) 
	{
		strcpy(fullAESkey,_AesMyKeyPart); // copy string one into the result.
		strcat(fullAESkey,_AesHisKeyPart); // append string two to the result.
	} else
	{
		strcpy(fullAESkey,_AesHisKeyPart); // copy string one into the result.
		strcat(fullAESkey,_AesMyKeyPart); // append string two to the result.
	}
	crypt.SetEncodedKey(fullAESkey,"hex");
	printf("%s: the full AES key is: %s \n\n", _ObjectName, fullAESkey);
}

const char* CCommunicationPartner::sendAesMessage(const char * plainText)
{
	const char * encStr;
    encStr = crypt.encryptStringENC(plainText);
	printf("%s: send encrypted AES message: %s \n\n", _ObjectName, encStr);
    return encStr;
}

void CCommunicationPartner::receiveAesMessage(const char * cypher)
{
	const char * decStr;
    decStr = crypt.decryptStringENC(cypher);
	printf("%s: received and decrypted AES message: %s \n\n", _ObjectName, decStr);
}

// task 2
void AESexchange(void)
{
	
	// create two communication partners
	// AES Key in the demo: "000102030405060708090A0B0C0D0E0F101112131415161718191A1B1C1D1E1F";
	CCommunicationPartner *Alice = new CCommunicationPartner("Alice", "000102030405060708090A0B0C0D0E0F");
	CCommunicationPartner *Bob = new CCommunicationPartner("Bob", "101112131415161718191A1B1C1D1E1F");
	// Alice gets the public key of Bob
	Alice->setRsaHisPubliyKey(Bob->sendRsaMyPubliyKey());
	// Bob gets the public key of Alice
	Bob->setRsaHisPubliyKey(Alice->sendRsaMyPubliyKey());

	// Alice sends here key encrypted to Bob, his decrypts it
	// Problem with scope of const char * return
	char * tmp;
	tmp = new char [2056];
	Alice->encryptAesMyKeyPartAes(tmp);
	Bob->decryptAesHisKeyPart(tmp);
	// other way round
	Bob->encryptAesMyKeyPartAes(tmp);
	Alice->decryptAesHisKeyPart(tmp);

	// now build the AES key
	Alice->createAesKey();
	Bob->createAesKey();

	// and send AES encrypted stuff
	Bob->receiveAesMessage(Alice->sendAesMessage("Alice says Hello to Bob"));
	// and the other way round
	Alice->receiveAesMessage(Bob->sendAesMessage("Bob greets Alice"));

	// clean up
	delete Alice;
	delete Bob;
	// tmp char should be clean with end of function=scope
}


int _tmain(int argc, _TCHAR* argv[])
{	
	 DoNothing();
	printf("AES\n");
	AEScrypt();
	printf("\n\n");

	printf("SHA1\n");
	SHA1hash();
	printf("\n\n");

	printf("RSA\n");
	RSAcrypt();

	printf("\n\n----------------Part 3----------------\n");
	AESexchange();

	printf("\n\nPress enter to exit.");
	scanf("a");	//scanf is an unclean solution, just for demo to wait until key press
	return 0;
}