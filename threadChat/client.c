#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>

main(int argc,char *argv[])
{
	int sockfd=socket(AF_INET,SOCK_STREAM,0);
	
	//define which server to connet
	struct hostent *ip=(struct hostent*)gethostbyname(argv[1]);	//server IP
	int port=atoi(argv[2]);						//server port
	
	struct sockaddr_in server;
	bzero((char *) &server, sizeof(server));
    server.sin_family = AF_INET;
    
    //Copy Data
    bcopy((char *)&ip->h_addr, 
         (char *)&server.sin_addr.s_addr,
         ip->h_length);
    server.sin_port = htons(port);
    //	bcopy((char*)ip->h_addr,(char*)&server.sin_addr.s_addr,ip->h_length);
	
/*	if(connet())
	{
	
	}
	else
		printf("Error in connection");*/
		
	return 0;
}
