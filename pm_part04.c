//	TOPIC : process Management 
//	Part  : 4 < fork function >
//-------------------------------------/
//
//	#include<unistd.h>
//	pid_t fork(void);


#include<stdio.h>
#include<unistd.h>

int main(){

	printf("before fork\n");
	printf("pid :%d\n",getpid());
	fork();
	printf("after fork function call\n");
	printf("pid : %d  ppid : %d\n",getpid(),getppid());
	while(1);
	return 0;
}
