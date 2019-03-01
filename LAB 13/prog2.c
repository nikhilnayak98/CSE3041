/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: pipe example 2
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
	int fd[2], nbytes;
	pid_t childpid;
	char string[] = "Hello, world!\n";
	char readbuffer[80];
	
	pipe(fd);
	
	if((childpid = fork()) == -1)
	{
    	perror("fork");
    	return 1;
    }
    
    if(childpid == 0)
    {
    	write(fd[1], string, sizeof(string));
    	return 1;
    }
    else
    {
    	nbytes = read(fd[0], readbuffer, sizeof(readbuffer));
    	printf("Received string: %s", readbuffer);
    }
    return 0; 
}

