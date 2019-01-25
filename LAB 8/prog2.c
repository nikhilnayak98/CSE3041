/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: Copy from one file to another
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	int fd1, fd2;
	ssize_t size_fd1, size_fd2;
	char buffer[100];
	fd1 = open("source.txt", O_RDONLY);
	fd2 = open("target.txt", O_RDWR| O_CREAT | O_APPEND, S_IRUSR | S_IRWXO | S_IRWXG);
	if(fd1 < 0)
	{
		perror("r1");
		exit(1);
	}
    
    /*while((size_fd1 = read(fd1, &buffer, 100)) > 0)
    {
    	size_fd2 = write(fd2, &buffer, (ssize_t) size_fd1);
    	if(size_fd2 != size_fd1)
    	{
    		perror("write");
    		exit(0);
    	}
    }*/
    size_fd1 = read(fd1, &buffer, 100);
    size_fd2 = write(fd2, &buffer, (ssize_t) size_fd1);
	return 0;
}
