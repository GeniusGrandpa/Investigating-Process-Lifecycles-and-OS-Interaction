#include <stdio.h>

int main() {
	int num;
	printf("Enter a number (Positive for Sucess, Negative for Fail): ") ;
	scanf("%d", &num) ;
	if (  num > 0 ) { 
		printf("Sucess \n");
		return 0; // Tell OS: Success 
	} else {
		printf("Failure \n");
		return 1; // Tell OS ; Error 
	}
}

