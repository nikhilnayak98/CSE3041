/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: print hello, 3 times
*/

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(void)
{
	printf("hello\n");
	fork();
	printf("hello\n");
	fork();
	printf("hello\n");
	fork();
	printf("hello\n");
	sleep(2);
	return 0;
}

