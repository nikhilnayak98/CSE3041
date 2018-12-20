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
	while(1){}
}
