#include<stdio.h>


int main(){
	
	int x;
	
	printf("Enter your age: ");
	scanf("%d", &x);
	
	printf("\nans:\n");
	if (x > 18) {
		printf("you are eligible to voting");
	} else {
		printf("you are not eligible to voting");
	}
	
	return 0;
	
}
