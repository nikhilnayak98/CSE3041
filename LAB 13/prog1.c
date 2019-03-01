/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: pipe example
*/

#include <stdio.h> 
#include <unistd.h> 
#define MSGSIZE 19 

char* msg1 = "hello, I am msg #1";
char* msg2 = "hello, I am msg #2";
char* msg3 = "hello, I am msg #3";

int main()
{
	int p[2], i;
	char inbuf[MSGSIZE];
	
	if(pipe(p) < 0)
		return 1;
	
	write(p[1], msg1, MSGSIZE);
	write(p[1], msg2, MSGSIZE);
	write(p[1], msg3, MSGSIZE);
	
	for(i = 0; i < 3; i++)
	{
		read(p[0], inbuf, MSGSIZE);
		printf("%s\n", inbuf);
	}
	return 0; 
}
