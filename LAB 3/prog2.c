/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: PID
*/
#include "stdio.h"
#include "unistd.h"

void main()
{
	int id = fork();
	if(id == 0)
		printf("Child Process, PID : %ld\n", (long)getpid());
	else
		printf("Parent Process, PID : %ld\n", (long)getpid());
}
