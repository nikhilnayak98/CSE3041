/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: Semaphore set
*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/sem.h>
#include <sys/stat.h>
#define PERMS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH)
#define SET_SIZE 2

int main()
{
	key_t mykey;
	int semid;
	mykey = ftok("prog1.c", 65);
	if((semid = semget(mykey, SET_SIZE, PERMS | IPC_CREAT)) == -1)
	{
		fprintf(stderr, "Failed to create semaphore with key %d:%s\n", (int)mykey, strerror(errno));
		return 1;
	}
	printf("semid = %d\n", semid);
	return 0;
}
