#include<stdio.h>

int main(){
	
	int age, weight;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	
	if (age >= 18) {
		
		printf("Enter your weight: ");
	    scanf("%d", &weight);
	    
	    printf("\nans:\n");
		
		if (weight >= 50) {
			printf("You are eligible for blood donation");
		} else {
			printf("Your weight is under 50");
		}
		
	} else {
		
		printf("\nans:\n");
		
		printf("Your age is under 18");
		
	}
}


