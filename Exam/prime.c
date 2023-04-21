#include<stdio.h>

int main() {
	
	int n, i, num, x;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	if (n>1) {
		if (n == 2) {
			printf("%d is prime number", n);
		} else {
			for (i=n; i<n-1; i++) {
				if (i % n == 0){
					return x = 1;
					break;
				} else {
					return x = 0;
				}
			}
		}
	} else {
		printf("%d is not desidable number");
	}
	
	printf("\nans:\n");
	if (x == 0) {
		printf("%d is prime number", n);
	} else {
		printf("%d is not a prime number", n);
	}
		
	return 0;
	
}


