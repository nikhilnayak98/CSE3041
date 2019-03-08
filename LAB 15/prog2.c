/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: Shared memory receive
*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main()
{
	int id, *rvar;
	key_t key;
	key = ftok("prog1.c", 8);
	id = shmget(key, 128, 0642 | IPC_CREAT);
	rvar = (int*)shmat(id, NULL, 0);
	printf("shared value is:%d\n", *rvar);
	shmdt(rvar);
	shmctl(id, IPC_RMID, NULL);
	return 0;
}
