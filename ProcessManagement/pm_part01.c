//	TOPIC : process Management 
//	Part : 1 <pid , ppid>
//-------------------------------------/
//
//	pid_t getpid(void)
//	pid_t getppid(void)


#include<stdio.h>
#include<unistd.h>

int main(){

	printf("Process_id(pid) : %d\n",getpid()); 		// print the process id 
	printf("Parent_Process_id (ppid) :%d\n",getppid());	// print the parent of that process id 
	return 0;
}
