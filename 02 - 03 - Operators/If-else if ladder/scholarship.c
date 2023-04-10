#include<stdio.h>


int main(){
	
	char cast;
    float grade, fees, total_fees, scholarship;

    printf("Enter your caste (A for Open, B for OBC, C for SC, D for ST): ");
    scanf("%c", &cast);
    printf("Enter your grade: ");
    scanf("%f", &grade);
    printf("Enter your fee: ");
    scanf("%f", &fees);
    
	printf("\nans:\n");
	
    if (grade >= 9 && grade <= 10) {
    	grade = 'A';
	} else if (grade >= 8.5 && grade < 9) {
		grade = 'B';
	} else if (grade >= 8 && grade < 8.5) {
		grade = 'C';
	} else if (grade >= 0 && grade < 8) {
		grade = 'D';
	} else {
		return printf("Enter Valid Input");
	}
	
	if (cast == 'a' || cast == 'A') {
        return printf("Sorry, no scholarship for Open category.");
	} else if ((cast == 'b' || cast == 'B') && grade <= 'B') {
		scholarship = fees * 0.25;
	} else if ((cast == 'c' || cast == 'C') && grade <= 'B') {
		scholarship = fees * 0.50;
	} else if ((cast == 'd' || cast == 'D') && grade <= 'B') {
		scholarship = fees * 1.0;
	} else if (grade > 'C' || grade > 'D') {
		return printf("You are not eligible for scholarship");
	} else {
		return printf("Enter Valid Input");
	}
	
	total_fees = fees - scholarship;
	
	printf("Your fees is Rupee %f\n", fees);
	printf("Your scholarship is Rupee %f\n", scholarship);
	printf("Your total fees is Rupee %f", total_fees);
	
	return 0;
	
}


