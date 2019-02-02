/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: Credit card validator
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>
int is_valid(int[]);

int main()
{
	int fd1, i, card_number[16];
	ssize_t size_fd1;
	char buffer[17];
	fd1 = open("payload", O_RDONLY);
	if(fd1 < 0)
	{
		perror("r1");
		exit(1);
	}
    
    size_fd1 = read(fd1, &buffer, 17);
    
    for(i = 0; i < 16; i++)
    {
    	printf("%c", buffer[i]);
    	card_number[i] = buffer[i] - '0';
    }
    
    if(is_valid(card_number))
    	printf("\nValid\n");
    else
    	printf("\nNot Valid\n");
    close(fd1);
}

int is_valid(int arr[])
{
	int i, A = 0, B = 0, C = 0;
	for(i = 0; i < 16; i += 2)
	{
		A += arr[i];
		if(arr[i] >= 5)
			C++;
	}
	
	A *= 2;
	
	for(i = 1; i < 16; i += 2)
		B += arr[i];
	
	if((A + B + C) % 10 == 0)
		return 1;
	else
		return 0;
}
