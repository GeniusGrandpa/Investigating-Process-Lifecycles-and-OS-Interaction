#include <stdio.h>
#include <unistd.h>

int main() {
	printf (" I am Starting ... \n");
	
	// loop for 30 seconds 
	for (int i = 1 ; i <= 30; i++) {
		sleep(1); //pauses execution for one seconds 
	}
	
	printf (" I am Finished. \n");
	return 0 ;
}


