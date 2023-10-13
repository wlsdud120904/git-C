#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    int prime, num;
	printf("Please enter a number: ");
	scanf("%d", &num);
		 for (int i=2; i<num; i++) {
            if (num % i == 0)
                prime++;
    }
 
    
    if ( prime == 0 )
        printf ("It is a prime number.");
    else 
        printf ("It is not a prime number.");

    return 0;
	}


