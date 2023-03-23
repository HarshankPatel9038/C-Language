#include<stdio.h>

int main() {
	
	int n, sum, rem = 0;
	
	printf("Enter Any Number: ");
	scanf("%d", &n);
	
	while (n>0) {
		rem =  n % 10;
		sum = sum + rem;
		n = n / 10;
	}
	
	printf("\nans:\n");
	printf("Your Number Sum Is: %d", sum);
	
	return 0;
}


