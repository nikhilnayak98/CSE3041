/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: fork()
*/
#include "stdio.h"
#include "unistd.h"
void fork_thrice();
void fork_quad();

void main(int argc, char *argv[])
{
	if(argc >= 2)
	{
		if(*argv[1] == '3')
			fork_thrice();
		else if(*argv[1] == '4')
			fork_quad();
		else
			printf("%c\n", *argv[1]);
	}
	else
		printf("Not Enough Arugments\n");
}

void fork_thrice()
{
	printf("\n****Thrice forked****\n");
	fork();
	fork();
	fork();
	printf("Hello, PID: %ld \n", (long)getpid());
}

void fork_quad()
{
	printf("\n****Quad forked****\n");
	fork();
	fork();
	fork();
	fork();
	printf("Hello, PID: %ld \n", (long)getpid());
}
