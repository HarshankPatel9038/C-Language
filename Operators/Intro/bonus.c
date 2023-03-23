#include<stdio.h>


int main(){
	
	int x;
	
	printf("Enter your salary: ");
	scanf("%d", &x);
	
	printf("\nans:\n");
	x < 10000 ? printf("you are eligible for bonus") : printf("you are not eligible for bonus");
	
	return 0;
	
}
