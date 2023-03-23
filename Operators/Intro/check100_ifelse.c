#include<stdio.h>


int main(){
	
	int x;
	
	printf("Enter the value of x: ");
	scanf("%d", &x);
	
	printf("\nans:\n");
	if (x >= 100) {
		printf("x is greater than or queal to 100", x);
	} else {
		printf("x is less than to 100", x);
	}
	
	return 0;
	
}
