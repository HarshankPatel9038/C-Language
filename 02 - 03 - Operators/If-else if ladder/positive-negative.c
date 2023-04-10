#include<stdio.h>

int main(){
	
	float num;
	
	printf("Enter a number: ");
	scanf("%f", &num);
	
	printf("\nans:\n");
	
	if (num > 0) {
		printf("number is positive");
	} else if (num < 0) {
		printf("number is Negative");
	} else {
		printf("number is Zero");
	}
	
	return 0;
	
}


