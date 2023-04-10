#include<stdio.h>

int main() {
	
	int n, rev, rem = 0;
	
	printf("Enter Any Number: ");
	scanf("%d", &n);
	
	while (n>0) {
		rem =  n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	
	printf("\nans:\n");
	printf("Your reverse Number Is: %d", rev);
	
	return 0;
}
