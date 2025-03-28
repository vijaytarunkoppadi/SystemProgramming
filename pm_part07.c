//	TOPIC : process Management 
//	Part  : 7 < single parent with multiple  children  >
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
		break;
	}else;
	}
	return 0;
}

//
//
//
//	p+1
// 
// P -> p+2
//
//	p+3
//
// 	 
