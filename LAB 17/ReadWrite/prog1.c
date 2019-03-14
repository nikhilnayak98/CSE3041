/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: Message Queue write
*/

#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>

struct mesg_buffer
{
	long mesg_type;
	char mesg_text[20];
} message;

int main()
{
	key_t key;
	int msgid;
	key = ftok("prog1.c", 65); 
	msgid = msgget(key, 0600 | IPC_CREAT);
	message.mesg_type = 1;
	printf("Write Data : ");
	gets(message.mesg_text);
	msgsnd(msgid, &message, sizeof(message.mesg_text), 0);
	printf("Data send is : %s \n", message.mesg_text);
	return 0;
}
