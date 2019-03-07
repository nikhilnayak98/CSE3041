/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: fifo example, this side writes first, then reads 
*/

#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	int fd, mkfd;
	char string[] = "Hello World!\n";
	char *myfifo = "/home/student/1641012040/LAB 14/pipe";
	char arr1[80], arr2[80];
	pid_t childpid;
	
	mkfd = mkfifo(myfifo, S_IRUSR | S_IWUSR);
	printf("mkfd: %d\n", mkfd);
	
	if(mkfd == -1)
		perror("Error:");
	
	if((childpid = fork()) == -1)
	{
		perror("fork");
		return 1;
	}
	
	if(childpid == 0)
	{
		fd = open(myfifo, O_WRONLY);
		write(fd, string, strlen(string) + 1);
		close(fd);
		return 1;
	}
	else
	{
		fd = open(myfifo, O_RDONLY);
		read(fd, arr1, sizeof(arr1));
		printf("Data Recieved from child: %s", arr1);
		close(fd);
	}
	return 0; 
} 

