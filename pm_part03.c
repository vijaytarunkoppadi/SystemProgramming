//	TOPIC : process Management 
//	Part  : 3 < system call function >
//-------------------------------------/
//
//	#include<stdlib.h>
//	int system(const char *command);


#include<stdio.h>
#include<unistd.h>

int main(){

	printf("start of program\n");
	system("ls");			//  create shell and execute the ls command
	system("pwd");			//  create shell and execute the pwd command
	printf("end of the program");
	return 0;
}
