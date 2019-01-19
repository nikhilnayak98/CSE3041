/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: exec() function
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(void)
{
	pid_t childpid;
	childpid = fork();
	if(childpid == -1)
	{
		perror("FAILED TO FORK");
		return 1;
	}
	
	if (childpid == 0)
	{
		/* child node */
		execl("./fact","","",NULL);
		printf("child");
		perror("child failed to exec ");
		return 1;
	}
	if(childpid != wait(NULL))
	{
		/* parent node */
		perror("Parent failed to wait due to signal or error");
		return 1;
	}
}
