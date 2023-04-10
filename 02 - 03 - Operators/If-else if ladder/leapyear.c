#include<stdio.h>

int main(){
	
	int year;
	
	printf("Enter a Year: ");
	scanf("%d", &year);
	
	printf("\nans:\n");
	
	if (year % 400 == 0) {
		printf("%d Leap Year", year);
	} else if (year % 100 == 0) {
		printf("%d Common Year", year);
	} else if (year % 4 == 0) {
		printf("%d Leap Year", year);
	} else {
		printf("%d Common Year", year);
	}
	
	return 0;
	
}

//1900 - common year
//2000 - leap year
//2020 - leap year
//2023 - common year
