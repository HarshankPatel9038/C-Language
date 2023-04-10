#include<stdio.h>

int main() {
	
	int n, x, rev, rem = 0;
	
	printf("Enter Any Number: ");
	scanf("%d", &n);
	
	x = n;
	
	while (n>0) {
		rem =  n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	
	printf("\nans:\n");
	if (x == rev) {
		printf("%d Is Palindrome Number", rev);
	} else {
		printf("%d Is Not Palindrome Number", rev);
	}
	
	return 0;
}


