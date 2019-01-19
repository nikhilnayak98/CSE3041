/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: Get current wokring directory
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	execlp("pwd","pwd", NULL);
}
