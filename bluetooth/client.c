#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>
#include <bluetooth/bluetooth.h>
#include <bluetooth/rfcomm.h>
#include <sys/types.h>

//Bluetooth Client
//
//This Client takes in a command line string and transmits it to a hardcoded address
static char test[1000];
int main(int argc, char **argv)
{
    struct sockaddr_rc addr = { 0 };
    int s, status;
//hard coded server address goes here
    char dest[18] = " 00:71:CC:3A:BC:F6";
//convert command line argument to string 
    sprintf(test,"%s",argv[1]);
    // allocate a socket
    s = socket(AF_BLUETOOTH, SOCK_STREAM, BTPROTO_RFCOMM);

    // set the connection parameters (who to connect to)
    addr.rc_family = AF_BLUETOOTH;
    addr.rc_channel = (uint8_t) 1;
    str2ba( dest, &addr.rc_bdaddr );

    // connect to server if it returns -1 go to error handling
    status = connect(s, (struct sockaddr *)&addr, sizeof(addr));

    // send a message
    if( status == 0 ) {
        status = write(s,test,strlen(test));
    }
//error handling
    if( status < 0 ) perror("uh oh");

    close(s);
    return 0;
}
