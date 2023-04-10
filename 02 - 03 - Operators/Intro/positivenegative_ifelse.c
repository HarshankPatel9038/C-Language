#include<stdio.h>


int main(){
	
	int x;
	
	printf("Enter the value of x: ");
	scanf("%d", &x);
	
	printf("\nans:\n");
	if (x >= 0) {
		printf("%d number is positive", x);
	} else {
		printf("%d number is negative", x);
	}
	
	return 0;
	
}
