/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	stupid code
*/
#include <stdio.h>
void function1();
void function2();
void main()
{	
	function1();
	function2();
}

void function1()
{
	char buf[20];
	printf("Enter string:");
	scanf("%19s", buf);
}

void function2()
{
	printf("Funtion 2 called.\n");
}
