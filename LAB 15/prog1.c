/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: Shared memory send
*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main()
{
	int id, *svar;
	key_t key;
	key = ftok("prog1.c", 8);
	id = shmget(key, 128, 0642 | IPC_CREAT);
	svar = (int*)shmat(id, NULL, 0);
	*svar = 888;
	return 0;
}
