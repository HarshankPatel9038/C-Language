#include<stdio.h>


int main(){
	
	int x;
	
	printf("Enter your age: ");
	scanf("%d", &x);
	
	printf("\nans:\n");
	x > 18 ? printf("you are eligible to voting") : printf("you are not eligible to voting");
	
	return 0;
	
}
