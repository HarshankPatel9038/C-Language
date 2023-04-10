#include<stdio.h>


int main(){
	
	int x;
	
	printf("Please enter a number: ");
	scanf("%d", &x);
	
	printf("\nans:\n");
	x % 2 == 0 ? printf("%d is even number", x) : printf("%d is odd number", x);
	
	return 0;
	
}
