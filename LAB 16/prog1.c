/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: Shared memory with parent and child
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main()
{
	int id, *svar, *rvar;
	key_t key;
	pid_t childpid;
	key = ftok("prog1.c", 8);
	id = shmget(key, 128, 0642 | IPC_CREAT);
	
	if((childpid = fork()) == -1)
	{
		perror("fork");
		return 1;
	}
	
	if(childpid == 0)
	{
		svar = (int*)shmat(id, NULL, 0);
		*svar = 888;
	}
	else
	{
		wait(NULL);
		rvar = (int*)shmat(id, NULL, 0);
		printf("shared value is:%d\n", *rvar);
		shmdt(rvar);
		shmctl(id, IPC_RMID, NULL);
	}

	return 0;
}
