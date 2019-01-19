/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: Program 7: 4 times
*/
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
	int pid, pid2;
	pid = fork();
	if(pid)
	{
		printf("Parent process 1.\n");
		pid2 = fork();
		printf("iter");
		printf("Child process 1.\n");
	}
	else
	{
		printf("Parent process 2.\n");
		printf("iter");
		pid2 = fork();
		printf("Child process 2.\n");
	}
	return 0;
}
