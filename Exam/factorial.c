#include<stdio.h>

int main() {
	
	int n, i, num;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for (i=n; i>=1; i--) {
		num = num * i;
	}
	
	printf("\nans:\n");
	printf("%d", num);
		
	return 0;
	
}


