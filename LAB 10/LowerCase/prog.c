/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: Copy from one file content and convert it to lower case and save it in another file
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>

int main()
{
	int fd1, fd2, i;
	ssize_t size_fd1, size_fd2;
	char buffer[100];
	fd1 = open("payload", O_RDONLY);
	fd2 = open("target", O_RDWR| O_CREAT | O_APPEND, S_IRWXU | S_IRWXG | S_IRWXO);
	if(fd1 < 0)
	{
		perror("r1");
		exit(1);
	}
    
    size_fd1 = read(fd1, &buffer, 100);
    
    for(i = 0; i < size_fd1; i++)
    {
    	if(islower(buffer[i]))
    		buffer[i] = toupper(buffer[i]);
    }
	
    write(fd2, &buffer, (size_t)size_fd1);
    close(fd1);
    close(fd2);
	return 0;
}
