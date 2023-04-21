#include<stdio.h>

int main() {
	
	int n, i, x, rem, num;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	x = n;
	
	for (i=1; i<=n; i++) {
		rem = n % 10;
		num = num + (rem * rem * rem);
		n = n / 10;
	}
	
	printf("\nans:\n");
	if (x == num) {
		printf("%d is armstrong number", x);
	} else {
		printf("%d is not armstrong number", x);
	}
		
	return 0;
	
}


