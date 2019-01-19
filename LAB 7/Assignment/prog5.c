/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: copy file from one fir to another
*Check:	./a.out prog2.c new
*/

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main(int argc, char** argv)
{
	if(argc < 4)
	{
		pid_t pid = fork();
		if(pid == 0)
    	{
        	char *const args[] = {"cp","-p","-i", argv[1], argv[2], 0};
			execv("/bin/cp", args);
			exit(0);
    	}
    	else
    		wait(NULL);
	}
}
