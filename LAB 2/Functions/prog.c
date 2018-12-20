/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Functions
*/
#include "stdio.h"
#include "unistd.h"

void main()
{
	printf("PID: %ld\n", (long)getpid());	// returns process id
	printf("PPID: %ld\n", (long)getppid());	// returns parent process id
	printf("UID: %ld\n", (long)getuid());	// returns user id
	printf("GID: %ld\n", (long)getgid());	// returns group id
	printf("EGID: %ld\n", (long)getegid());	// returns effective group id
	printf("EUID: %ld\n", (long)geteuid()); // returns effective user id
	while(1){}
}
