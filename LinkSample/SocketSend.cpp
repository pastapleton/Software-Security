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
#include <fstream>
#include <string>
#include <vector>
#include <string.h>
#include <sstream>
//#include <boost/algorithm/string/split.hpp>
//#include <boost/algorithm/string/classification.hpp>
#include "SHA.h"
#include "RSA.h"
#include "AES.h"
#include "AESFile.h"
/*
#include "RSApublica.h"
#include "RSApublicb.h"
#include "RSAprivate.h"
*/
using namespace std;


//Spliited
std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems) {
			std::stringstream ss(s);
			std::string item;
			while (std::getline(ss, item, delim)) {
				elems.push_back(item);
			}
			return elems;
		}

		//Used to split a string with a delimiter
		std::vector<std::string> split(const std::string &s, char delim) {
			std::vector<std::string> elems;
			&split(s, delim, elems);
			return elems;

		}

// Sockets
void SocketSend (void)
	{


		/**************************************************
		Setup Sockets
		***************************************************/
		
		CkSocket connectedSocket;
		CkRsa rsa;


		bool success;
    success = connectedSocket.UnlockComponent("T06152014Socket_r6KrKN4ekQNz");
    if (success != true) {
        printf("%s\n",connectedSocket.lastErrorText());
        return;
    }		

		bool ssl;
		ssl = false;
		long maxWaitMillisec;
		maxWaitMillisec = 20000;
		success = connectedSocket.Connect("10.100.106.117",5555,ssl,maxWaitMillisec);
			if (success != true) {
				printf("%s\n",connectedSocket.lastErrorText());
				return;
			}


		connectedSocket.put_MaxReadIdleMs(10000000000);
		connectedSocket.put_MaxSendIdleMs(10000000000);



		/**************************************************
		Generate Keys
		***************************************************/
		success = rsa.UnlockComponent("T06152014RSA_XFn8tkbGkQQd");
		/*if (success != true) {
			printf("RSA component unlock failed\n");
			return;
		}*/


		success = rsa.GenerateKey(1024);
		/*if (success != true) {
			printf("%s\n",rsa.lastErrorText());
			return;
		}*/


			const char * publicKey;
			const char * privateKey;
		 
		 publicKey = rsa.exportPublicKey();
		 privateKey = rsa.exportPrivateKey();

		 
		/********************************************
		Send public key of b
		*********************************************/

		success = connectedSocket.SendString(publicKey);

		/********************************************
		Reveive public A
		**********************************************/
		const char * apublic;
		apublic = connectedSocket.receiveString();


		/********************************************
		recieve message(A, {Na,{H(Na)}Ka-1}Kb) split and decrypt
		*********************************************/

		/****************************************************
		Recieve A, {Na,{H(Na)}Ka-1}Kb 
		****************************************************/
		const char * message;
		message = connectedSocket.receiveString();
		//Split
		std::vector<std::string> splitted1 = split(message, ',');
		std::string NaHnaKa1Kb = splitted1[1];

		/****************************************************
		Decrypting {Na, {H(Na)}Ka-1}Kb
		****************************************************/
		printf("%s\n\n", NaHnaKa1Kb);
		std::string NaKnaKa1 = RSAPrivateDecryption(NaHnaKa1Kb, privateKey);
		printf("%s\n\n", NaKnaKa1);

		/****************************************************
		Split {Na, {H(Na)}Ka-1}
		****************************************************/

		std::vector<std::string> splitted2 = split(NaKnaKa1, ',');
		std::string Na = splitted2[0];
		printf("Na = %s\n\n", Na);
		/****************************************************
		Generate Nb
		****************************************************/

		std::string Nb = to_string(rand() % 999999999999999 + 1000000000000000);

		/****************************************************
		Generate Kab = Na||Nb and hash HKab Data Integrity
		****************************************************/

		std::string Kab = Na + Nb;
		std::string HKab = SHA(Kab);
		printf("Kab = %s\n\n", Kab);
		printf("HKab = %s\n\n", HKab);
		
		/**************************************
		H(Nb) 
		**************************************/
		std::string Hnb = SHA(Nb); 
		printf("Hnb = %s\n\n", Hnb);


		/***************************************************
		Encrypt with private key {H(Nb)}Kb-1
		***************************************************/

		std::string HnbKb1 = RSAprivate(Hnb, privateKey); 
		printf("HnbKb1 = %s\n\n", HnbKb1);

		/****************************************************
		Concatenation: Nb,{H(Nb)}Kb-1 
		****************************************************/

		std::string NbHnbKb1 = Nb + "," + HnbKb1;
		printf("NbHnbKb1 = %s\n\n", NbHnbKb1);
		

		/***************************************************
		{Nb, {H(Nb)}Kb-1}Ka
		***************************************************/
		std::string NbHnbKb1Ka = RSApublicEncryption(NbHnbKb1, apublic); 
		// B public key printf("NaHnaKa1Kb = %s\n\n", NaHnaKa1Kb);
		

		/****************************************************
		Concatenation: B, {Nb,{H(Nb)}Kb-1}Ka 
		****************************************************/
		std::string B = "I am B";
		std::string BNbHnbKb1 = B + "," + NbHnbKb1Ka;

		/****************************************************
		AES Encryp Na
		****************************************************/

		std::string NaKab = AESEncrypt(Na.c_str(), HKab);

		std::string BNbHnbKb1NaKab = BNbHnbKb1 + "," + NaKab;


		/****************************************************
		Send: B, {Nb,{H(Nb)}Kb-1}Ka 
		****************************************************/
		
		connectedSocket.SendString(BNbHnbKb1NaKab.c_str());

		/****************************************************
		Recieve and AES Decrypt Nb
		****************************************************/

		const char * NbKab;
		NbKab = connectedSocket.receiveString();

		std::string Nba = AESDecrypt(NbKab, HKab);
		if(Nba != Nb)
			printf("Error");

		printf("NbKab = %s\n\n", NbKab);

		/****************************************************
		Recieve Message and Decrypt
		****************************************************/

		const char * msg;
		msg = connectedSocket.receiveString();
		
		std::string decryptedMsg = AESDecrypt(msg, HKab);
		printf("%s\n\n", decryptedMsg.c_str());

		/****************************************************
		Send Message and Encrypt
		****************************************************/

		const char * sendString = "Hello A";
		std::string sendMsg =  AESEncrypt(sendString, HKab);
		connectedSocket.SendString(sendMsg.c_str());
		


		/****************************************************
		Loop for user input send/receive
		****************************************************/
		/*while(true)
			{
				string value;
				std::cin >> value;

				//const char * sendString = "Hello A";
				std::string sendValue =  AESEncrypt(value.c_str(), HKab);
				connectedSocket.SendString(sendValue.c_str());

				const char * valueReceived;
				valueReceived = connectedSocket.receiveString();
		
				std::string printReceived = AESDecrypt(valueReceived, HKab);
				printf("%s\n\n", printReceived.c_str());
		}*/



		/*ofstream myfile;
		myfile.open ("example.txt");
		myfile << "Writing this to a file.\n";
		ifstream myfile ("example.txt");
		if (myfile.is_open())
		{
			while ( getline (myfile,line) )
			{
				cout << line << '\n';
			}
			 myfile.close();
		}
		myfile.close();*/


}//End Socket Send

int _tmain(int argc, _TCHAR* argv[])
{
	
	SocketSend();
	getch();
	return 0;
}