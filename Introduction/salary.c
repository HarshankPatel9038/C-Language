#include<stdio.h>
 
int main() {
	
	int Base_salary = 100;
    int gross_salary, hra, da, ta;
 
    hra = (10 * Base_salary) / 100;
    da = (5 * Base_salary) / 100;
    ta = (8 * Base_salary) / 100;
 
    gross_salary = Base_salary + hra + da + ta;
 
    printf("Gross salary Is: %d", gross_salary);
    
    return (0);
}
