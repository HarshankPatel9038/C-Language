#include<stdio.h>


int main(){
	
	int x;
	
	printf("Enter your salary: ");
	scanf("%d", &x);
	
	printf("\nans:\n");
	if (x < 10000) {
		printf("you are eligible for bonus");
	} else {
		printf("you are not eligible for bonus");
	}
	
	return 0;
	
}
