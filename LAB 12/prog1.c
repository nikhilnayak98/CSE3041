/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: select() function
*/

#include <poll.h>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

int main()
{
	int ret_poll;
	ssize_t ret_read;
	struct pollfd input[1] = {{fd: 0, events: POLLIN}};
	char buff[100];
	
	//while(1)
	//{
		ret_poll = poll(input, 1, 5000);
		printf("ret_poll:\t%d\nerrno:\t%d\n", ret_poll, errno);
		ret_read = read(0, buff, 99);
		printf("ret_read:\t%d\nerrno:\t%d\nbuff:\t%s\n", (int)ret_read, errno, buff);
	//}
}
