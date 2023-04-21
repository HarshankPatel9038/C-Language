#include<stdio.h>

int main() {
	
	int first, second, temp;
	
	printf("Enter a first number: ");
	scanf("%d", &first);
	
	printf("Enter a second number: ");
	scanf("%d", &second);
	
	temp = first;
	first = second;
	second = temp;
	
	printf("\nans:\n");
	printf("Your first number is: %d\n", first);  
	printf("Your second number is: %d", second);
		
	return 0;
	
}


