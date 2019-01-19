/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: run ls -l in child process
*/

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main(int argc, char** argv)
{
	pid_t childpid = fork();
	if(childpid == 0)
		execl("/bin/ls","ls","-l", argv[1]);
}
