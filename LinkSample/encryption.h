#include "../include/CkCrypt2.h"

String ChilkatSHASample(int na)
    {
    CkCrypt2 crypt;

    //  Any string argument automatically begins the 30-day trial.
    bool success;
    success = crypt.UnlockComponent("T06152014Crypt_J2uOFPEBkQ3d");
    if (success != true) {
        printf("Crypt component unlock failed\n");
        return;
    }

    
	printf(na);
    crypt.put_HashAlgorithm("sha1");
    crypt.put_EncodingMode("hex");

    //  Other possible EncodingMode settings are:
    //  "quoted-printable", "base64", and "url"

    const char * hash;
    hash = crypt.hashStringENC(na);
    printf("SHA1:\n");
    printf("%s\n",hash);

	return hash;

    }