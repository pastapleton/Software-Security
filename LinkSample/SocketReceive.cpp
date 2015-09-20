#include "stdafx.h"

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
#include <CkSocket.h>
#include <conio.h>


void SocketReceive(void)
    {
    CkSocket socket;

    bool success;
    success = socket.UnlockComponent("T06152014Socket_r6KrKN4ekQNz");
    if (success != true) {
        printf("%s\n",socket.lastErrorText());
        return;
    }

    //  Connect to port 5555 of localhost.
    //  The string "localhost" is for testing on a single computer.
    //  It would typically be replaced with an IP hostname, such
    //  as "www.chilkatsoft.com".
    bool ssl;
    ssl = false;
    long maxWaitMillisec;
    maxWaitMillisec = 20000;
    success = socket.Connect("10.50.19.31",5555,ssl,maxWaitMillisec);
    if (success != true) {
        printf("%s\n",socket.lastErrorText());
        return;
    }

    //  Set maximum timeouts for reading an writing (in millisec)
    socket.put_MaxReadIdleMs(10000);
    socket.put_MaxSendIdleMs(10000);

    //  Pretend, for the sake of the example, that the
    //  ficticious server is going to send a "Hello World!"
    //  after accepting the connection.
    //  Note: Technically, the ReceiveString may not receive the
    //  complete string, although it's highly probable given the short
    //  length of the "Hello World!" message.
    //  See this Chilkat blog post for more information:
    //  http://www.cknotes.com/?p=302
    const char * receivedMsg;
    receivedMsg = socket.receiveString();
    if (receivedMsg == 0 ) {
        printf("%s\n",socket.lastErrorText());
        return;
    }

	//  Send a "Hello World!" message to the client:
	success = socket.SendString("Hello Pa!!");

    /*if (success != true) {
        printf("%s\n",socket.lastErrorText());
        delete socket;
        return;
    }*/


    //  Close the connection with the server
    //  Wait a max of 20 seconds (20000 millsec)
    socket.Close(20000);

    printf("%s\n",receivedMsg);
    }

int _tmain(int argc, _TCHAR* argv[])
{
	SocketReceive();
	getch();
	return 0;
}