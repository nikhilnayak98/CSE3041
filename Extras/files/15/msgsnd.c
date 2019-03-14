// C Program for Message Queue (Writer Process) 
#include <stdio.h> 
#include <sys/ipc.h> 
#include <sys/msg.h> 

// structure for message queue 
struct mesg_buffer { 
	long mesg_type; 
	char mesg_text[20]; 
} message; 

int main() 
{ 
	key_t key; 
	int msgid; 

	// ftok to generate unique key 
	key = ftok("msgrcv.c", 5); 

	// msgget creates a message queue 
	// and returns identifier 
	msgid = msgget(key, 0600 | IPC_CREAT); 
	message.mesg_type = 1; 

	printf("Write Data : "); 
	gets(message.mesg_text); 

	// msgsnd to send message 
	msgsnd(msgid, &message, sizeof(message.mesg_text), 0); 

	// display the message 
	printf("Data send is : %s \n", message.mesg_text); 

	return 0; 
} 

