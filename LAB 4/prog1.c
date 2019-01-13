/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: Process print statements execution order
*/
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
	pid_t firstCh, secondCh, returnR;
	
	firstCh = fork();
	
	if(firstCh > 0)
	{
		printf("I am parent process ID %ld & my child process is in execution.\n", (long)getpid());
		returnR = wait(NULL);
		printf("I am parent process ID %ld & my child process is terminated.\nWait return value is %ld.\n", (long)getpid(), (long)returnR);
	}
	
	if(firstCh == 0)
	{
		printf("I am parent process ID %ld & my child process is in execution.\n", (long)getpid());
		int sum = 2 + 3;
		printf("Sum = %d\n", sum);
		return 0;
	}
}
