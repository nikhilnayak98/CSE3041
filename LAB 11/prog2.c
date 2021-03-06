/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: select() function with buffer
*/

#include <stdio.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	fd_set rfds;
	//fd_set wfds;
	struct timeval tv;
	int sretval, fd;
	char buffer[100];
	int ret;
	fd = 0;
	while(1)
	{
		FD_ZERO(&rfds);
		FD_SET(fd, &rfds);
		tv.tv_sec = 5;
		tv.tv_usec = 0;
		sretval = select(2, &rfds, NULL, NULL, &tv);
		
		if(sretval == 0)
			printf("Timeout\nTry Again\n");
		else
		{
			printf("sretval = %d\n", sretval);
			memset((void*)buffer, 0, 100);
			ret = read(fd, (void*)buffer, 10);
			if(ret == -1)
				printf("error\n");
			else
			{
				//buffer[10]='\0';
				printf("buffer = %s\n", buffer);
			}
		}
	}
	return 0;	
}
