/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: Create n processes
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
int create(int);

int main(int agrc, char *argv[])
{
	int n =  atoi(argv[1]);
	create(n);
}

int create(int n)
{
    if(n == 0)
        return 0;
    
    int pid = fork();
    
    if(pid == -1)
        exit(0);
    if(pid == 0)
    {
        printf("I am a child process. My PID is: %ld, My PPID is: %ld\n", (long)getpid(), (long)getppid());
        n--;
        create(n);
        exit(0);
    }
    else
    	wait(NULL);
    
    return 0;   
}

