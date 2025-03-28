//	TOPIC : process Management 
//	Part  : 6 < chain of parent and child  >
//-------------------------------------/
//
//	#include<unistd.h>
//	pid_t fork(void);


#include<stdio.h>
#include<unistd.h>


int main(){
	int i;

	for(i=0;i<3;i++){

	if(fork() == 0){
	
		printf("%d In child process  pid:%d ppid :%d\n",i,getpid(),getppid());
	}else{ 
		break;
	}
	}
	return 0;
}


// P -> p+1 -> p+2 -> p+3 
