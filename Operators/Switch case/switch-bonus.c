#include<stdio.h>


int main(){
	
	char gender;
	int salary, bonus, total_salary;
	
	printf("Enter M for Male and F for Female: ");
	scanf("%c", &gender);
	printf("Enter Your Salary: ");
	scanf("%d", &salary);
	
	printf("\nans:\n");
	
	switch (gender) {
		case 'M':
			if ((salary >= 0) && (salary < 10000)) {
				bonus = salary * 2 / 100;
			} else {
				return printf("You are not eligible for bonus\n");
			};
			break;
		case 'F':
			if ((salary >= 0) && (salary < 10000)) {
				bonus = salary * 3 / 100;
			} else {
				return printf("You are not eligible for bonus\n");
			};
			break;
		default:
		    return printf("Enter Valid Input\n");
			break;
	}
	
		total_salary = bonus + salary;
		
		printf("Your salary Is: %d\n", salary);
		printf("Your Bonus Is: %d\n", bonus);
		printf("Your total salary Is: %d", total_salary);
	
	return 0;
	
}


