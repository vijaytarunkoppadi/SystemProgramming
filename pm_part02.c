//	TOPIC : process Management 
//	Part  : 2 <kill command>
//------------------------------------------------/
//
//	kill 9  PID 	#kill a process
//	kill 18 PID	#resume suspended process
//	kill 19 PID	#suspend a process
//


#include<stdio.h>
#include<unistd.h>

int main(){

	printf("Process_id(pid) : %d\n",getpid()); 		// print the process id 
	printf("Parent_Process_id (ppid) :%d\n",getppid());	// print the parent of that process id 
	while(1);						// infinite loop 
	return 0;
}

/*

output :

vijay@vijay:~/coding/systemprogramming/process_management$ ps -al
F S   UID     PID    PPID  C PRI  NI ADDR SZ WCHAN  TTY          TIME CMD
0 S  1000    1333    1327  0  80   0 - 55761 do_pol tty2     00:00:00 gnome-session-b
0 T  1000    5857    2175 70  80   0 -   694 do_sig pts/0    00:00:31 pm_part2
4 R  1000    5887    2175  0  80   0 -  3168 -      pts/0    00:00:00 ps
vijay@vijay:~/coding/systemprogramming/process_management$ kill -18 5857
vijay@vijay:~/coding/systemprogramming/process_management$ ps -al
F S   UID     PID    PPID  C PRI  NI ADDR SZ WCHAN  TTY          TIME CMD
0 S  1000    1333    1327  0  80   0 - 55761 do_pol tty2     00:00:00 gnome-session-b
0 R  1000    5857    2175 47  80   0 -   694 -      pts/0    00:00:33 pm_part2
4 R  1000    5898    2175  0  80   0 -  3168 -      pts/0    00:00:00 ps
vijay@vijay:~/coding/systemprogramming/process_management$ kill -9 5857
vijay@vijay:~/coding/systemprogramming/process_management$ ps -al
F S   UID     PID    PPID  C PRI  NI ADDR SZ WCHAN  TTY          TIME CMD
0 S  1000    1333    1327  0  80   0 - 55761 do_pol tty2     00:00:00 gnome-session-b
4 R  1000    5912    2175  0  80   0 -  3168 -      pts/0    00:00:00 ps
[1]+  Killed                  ./pm_part2
 
*/



