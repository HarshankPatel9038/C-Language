#include<stdio.h>

int main () {
	
	char day;
	
	printf("Enter your day name: ");
	scanf("%c", &day);
	
	printf("\nans:\n");
	
	switch (day) {
		
		case 'M':
			printf("Monday");
			break;
		case 'T':
			printf("Tuesday");
			break;
		case 'W':
			printf("Wednesday");
			break;
		case 't':
			printf("thursday");
			break;
		case 'F':
			printf("Friday");
			break;
		case 'S':
			printf("Saturday");
			break;
		case 's':
			printf("sunday");
			break;
		default:
			printf("Invalid Input");
			break;
		
	}
	
	return 0;
	
}


