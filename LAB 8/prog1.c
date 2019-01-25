/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: open() functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main()
{
	char c;
	int fd1 = open("foobar.txt", O_RDONLY, 0);
	read(fd1, &c, 10);
	printf("fd1 = %d\n", fd1);	
	printf("c = %c\n", c);
	return 0;
}
