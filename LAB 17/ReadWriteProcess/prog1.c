/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: Message queue in parent and child
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/msg.h>

struct mesg_buffer
{
	long mesg_type;
	char mesg_text[20];
} message;

int main()
{
	pid_t childpid;
	key_t key;
	int msgid;
	key = ftok("prog1.c", 65); 
	msgid = msgget(key, 0600 | IPC_CREAT);
	
	if((childpid = fork()) == -1)
	{
		perror("fork");
		return 1;
	}
	
	if(childpid == 0)
	{
		message.mesg_type = 1;
		printf("Write Data : ");
		gets(message.mesg_text);
		msgsnd(msgid, &message, sizeof(message.mesg_text), 0);
		printf("Data send is : %s \n", message.mesg_text);
	}
	else
	{
		wait(NULL);
		msgrcv(msgid, &message, sizeof(message.mesg_text), 1, 0);
		printf("Data Received is : %s \n", message.mesg_text);
		msgctl(msgid, IPC_RMID, NULL);
	}
	
	return 0;
}
