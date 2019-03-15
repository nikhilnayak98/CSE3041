
/* Semaphore example program a (sema.c) */
/* We have two programs, sema and semb. Semb may be initiated at any 
  time, but will be forced to wait until sema is executed. Sema and
  semb do not have to be executed by the same user! */
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>

//#define KEY (1492)
/* This is the external name by which the semaphore is known to any
   program that wishes to access it. */

void main()
{
   int id;  /* Internal identifier of the semaphore. */
   struct sembuf operations[1];
/*The struct sembuf structure, which specifies a semaphore element operation, includes the
following members.
short sem_num number of the semaphore element
short sem_op particular element operation to be performed
short sem_flg flags to specify options for the operation*/
   /* An "array" of one operation to perform on the semaphore. */

   int retval; /* Return value from semop() */
int KEY= ftok("f1", 65);
   /* Get the index for the semaphore with external name KEY. */
   id = semget(KEY, 1, 0666 | IPC_CREAT);
   if(id < 0)
   /* Semaphore does not exist. */
   {
      fprintf(stderr, "Program sema cannot find semaphore, exiting.\n");
      exit(0);
   }

   /* Do a semaphore V-operation. */
   printf("Program sema about to do a V-operation. \n");

   /* Set up the sembuf structure. */
   /* Which semaphore in the semaphore array : */
    operations[0].sem_num = 0;
    /* Which operation? Add 1 to semaphore value : */
    operations[0].sem_op = 1;
    /* Set the flag so we will wait : */   
    operations[0].sem_flg = 0;

    /* So do the operation! */
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

/* Think carefully about what the V-operation does. If sema is executed 
   twice, then semb can execute twice. */

/* Semaphore example program b (semb.c) */
/* We have two programs, sema and semb. Semb may be initiated at any 
  time, but will be forced to wait until sema is executed. Sema and
  semb do not have to be executed by the same user! */

/* HOW TO TEST:
   Execute semb &
   The & is important - otherwise you would have have to move to
   a different terminal to execute sema.

   Then execute sema.
*/

