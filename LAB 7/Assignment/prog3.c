/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: zombie process
*Check with: ps aux | grep a.out	
*/
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main() 
{ 
    pid_t childpid = fork();
  	if(childpid > 0)
  	{
        printf("Parent Process");
        sleep(10);
    }
    else
    	 printf("Child Process: %ld", (long)getpid());
    return 0;
}
