
// C Program for Message Queue (Reader Process) 
#include <stdio.h> 
#include <unistd.h>
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
	key = ftok("msgrcv.c", 65); 

	// msgget creates a message queue 
	// and returns identifier 
	msgid = msgget(key, 0600 | IPC_CREAT); 

	// msgrcv to receive message 
	msgrcv(msgid, &message, sizeof(message.mesg_text), 1, 0); 

	// display the message 
	printf("Data Received is : %s \n", 
					message.mesg_text); 
	//write(STDOUT_FILENO, message.mesg_text, sizeof(message)) ;

	// to destroy the message queue 
	msgctl(msgid, IPC_RMID, NULL); 

	return 0; 
} 

