#include<stdio.h>

int main() {
	
	int n, count = 0;
	
	printf("Enter Any Number: ");
	scanf("%d", &n);
	
	while (n>0) {
		n = n / 10;
		count++;
	}
	
	printf("\nans:\n");
	printf("Your Total Digits Is: %d", count);
	
	return 0;
}


