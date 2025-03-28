//	TOPIC : process Management 
//	Part  : 5 < fork function >
//-------------------------------------/
//
//	#include<unistd.h>
//	pid_t fork(void);


#include<stdio.h>
#include<unistd.h>

static a =10;

int main(){

	int b = 10;
	int ret;
	printf("Before fork call\n");
	ret = fork();
	if(ret){
	
		printf("In child process  pid:%d ppid :%d\n",getpid(),getppid());
		printf("a= %d b=%d\n",a*2,b*2);
	}else {
		printf("In parent proecss pid:%d ppid :%d\n",getpid(),getppid());
		printf("a= %d b=%d\n",a*3,b*3);
	
	}
	sleep(1);
	return 0;
}
