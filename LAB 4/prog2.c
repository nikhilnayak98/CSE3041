/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: Process print statements execution order
*/
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

int main()
{
	pid_t firstCh, secondCh, waitpidReturn;
	int statPtr;
	firstCh = fork();
	
	if(firstCh > 0)
	{
		printf("I am parent process ID %ld & my child process is in execution.\n", (long)getpid());
		
		secondCh = fork();
		
		if(secondCh > 0)
		{
			printf("I am parent process ID %ld & my child process is in execution.\n", (long)getpid());
			waitpidReturn = waitpid(firstCh, NULL, 0);
			printf("I am parent process ID %ld & my child process is terminated.\nWait return value is %ld.\n", (long)getpid(), (long)waitpidReturn);
		}
	}
	
	if(firstCh == 0)
	{
		printf("I am first child process ID %ld & my mother process is %ld.\n", (long)getpid(), (long)getppid());
		int sum = 2 + 3;
		printf("Sum = %d\n", sum);
		return 0;
	}
	
	if(secondCh == 0)
	{
		printf("I am second child process ID %ld & my mother process is %ld.\n", (long)getpid(), (long)getppid());
		return 0;
	}
}
