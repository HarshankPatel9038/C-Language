#include<stdio.h>

int main() {
	
	int i = 1, num, n;
	
	printf("How many number you want to check: ");
	scanf("%d", &n);
	
	do {
		printf("\nEnter number: ");
		scanf("%d", &num);
		i++;
		
		if ((num % 3 == 0) || (num % 7 == 0)) {
		    printf("%d number is divisible with 3 or 7\n", num);
	    } else {
		    printf("%d number is not divisible with 3 or 7\n", num);
	    }
	    
	} while (i <= n);
	
	
	
	return 0;
}


