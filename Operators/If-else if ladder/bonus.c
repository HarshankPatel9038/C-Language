#include<stdio.h>


int main(){
	
	char gender;
	int salary, bonus, total_salary;
	
	printf("Enter M for Male and F for Female: ");
	scanf("%c", &gender);
	printf("Enter Your Salary: ");
	scanf("%d", &salary);
	
	printf("\nans:\n");
	
	if ((gender == 'M' || gender == 'm') && ((salary >= 0) && (salary < 10000))) {
		bonus = salary * 2 / 100;
	} else if ((gender == 'F' || gender == 'f') && ((salary >= 0) && (salary < 10000))) {
		bonus = salary * 3 / 100;
	} else if (((gender == 'M' || gender == 'm') && (salary >= 10000)) || (gender == 'F' || gender == 'f') && (salary >= 10000)) {
		return printf("You are not eligible for bonus\n");
	} else {
		return printf("Enter Valid Input\n");
	}
	
		total_salary = bonus + salary;
		
		printf("Your salary Is: %d\n", salary);
		printf("Your Bonus Is: %d\n", bonus);
		printf("Your total salary Is: %d", total_salary);
	
	return 0;
	
}


