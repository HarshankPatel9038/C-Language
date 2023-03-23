#include<stdio.h>
int main () {
	int month;
	printf("Enter your month number: ");
	scanf("%d", &month);
	
	printf("\nans:\n");
	
	switch (month) {
		case 1:
			printf("Your Month Is January");
			break;
		case 2:
			printf("Your Month Is February");
			break;
		case 3:
			printf("Your Month Is March");
			break;
		case 4:
			printf("Your Month Is April");
			break;
		case 5:
			printf("Your Month Is May");
			break;
		case 6:
			printf("Your Month Is June");
			break;
		case 7:
			printf("Your Month Is July");
			break;
		case 8:
			printf("Your Month Is August");
			break;
		case 9:
			printf("Your Month Is September");
			break;
		case 10:
			printf("Your Month Is Octomber");
			break;
		case 11:
			printf("Your Month Is November");
			break;
		case 12:
			printf("Your Month Is December");
			break;
		default:
			printf("Invalid Input");
			break;
	}
	
	return 0;
}


