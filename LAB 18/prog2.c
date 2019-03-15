/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: Semaphore A
*/

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
//#define KEY (1492)

void main()
{
	int id;
	struct sembuf operations[1];
	int retval;
	int KEY = ftok("prog1.c", 65);
	id = semget(KEY, 1, 0666 | IPC_CREAT);
	if(id < 0)
	{
		fprintf(stderr, "Program sema cannot find semaphore, exiting.\n");
		exit(0);
	}
	
	printf("Program sem A about to do a V-operation. \n");
	
	operations[0].sem_num = 0;
	operations[0].sem_op = 1;
	operations[0].sem_flg = 0;
	
	retval = semop(id, operations, 1);
	
	if(retval == 0)
	{
		printf("Successful V-operation by program sema.\n");
	}
	else
	{
		printf("sema: V-operation did not succeed.\n");
		perror("REASON");
	}
}
