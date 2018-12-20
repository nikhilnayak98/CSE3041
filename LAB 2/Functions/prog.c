/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	PID
*/
#include "stdio.h"
#include "unistd.h"

void main()
{
	printf("PID: %ld\n", (long)getpid());
	printf("PPID: %ld\n", (long)getppid());
	printf("UID: %ld\n", (long)getuid());
	printf("GID: %ld\n", (long)getgid());
	printf("EGID: %ld\n", (long)getegid());
	printf("EUID: %ld\n", (long)geteuid());
	while(1){}
}
