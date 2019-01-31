/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: check output
*/

#include <stdio.h>
#include <unistd.h>

int main()
{
	fork();
	fork() || fork();
	fork();
	printf("Really Interesting\n");
	sleep(3);
}
