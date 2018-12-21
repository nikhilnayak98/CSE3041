/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: fork()
*/
#include "stdio.h"
#include "unistd.h"

void main()
{
	fork();
	fork();
	fork();
	printf("Hello, PID: %ld \n", (long)getpid());
}
