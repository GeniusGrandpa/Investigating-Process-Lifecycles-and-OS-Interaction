#include <stdio.h>
#include <unistd.h>

int main() { 
	int choice; 
	
	// Print PID at Start 
	printf(" Current PID: %d\n", getpid() ) ; 
	
	printf (" Do you want to Continue ? (1 for yes, 0 for no: "); 
	scanf("%d", & choice); 
	
	if (choice == 1 ) { 
		printf("Continuing ..... \n"); 
		sleep(5) ; 
		return 0; // Success 
	} else { 
		printf("Exiting ......... \n"); 
		return 1; // Failure/Abort 
	} 
} 

