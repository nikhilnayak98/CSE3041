/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: print iter, 3 times
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int pid, pid2;
	pid = fork();
	if(pid)
	{
		pid2 = fork();
		printf("iter\n");
	}
	else
	{
		printf("iter\n");
		pid2 = fork();
	}
	return 0;
}
