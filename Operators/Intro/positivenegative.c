#include<stdio.h>


int main(){
	
	int x;
	
	printf("Enter the value of x: ");
	scanf("%d", &x);
	
	printf("\nans:\n");
	x >= 0 ? printf("%d number is positive", x) : printf("%d number is negative", x);
	
	return 0;
	
}
