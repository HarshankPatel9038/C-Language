#include<stdio.h>
int main(){
	char cast;
    float grade;
    int fees, total_fees, scholarship;
    printf("Enter your caste (A for Open, B for OBC, C for SC, D for ST): ");
    scanf("%c", &cast);
    printf("Enter your grade: ");
    scanf("%f", &grade);
    printf("Enter your fee: ");
    scanf("%d", &fees);
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
		return printf("Enter Valid grade");
	}
	
	if (cast == 'a' || cast == 'A') {
		printf("Sorry, no scholarship for Open category.\n");	
	} else if (cast == 'b' || cast == 'B') {
		if (grade <= 'B') {
			scholarship = fees * 0.25;
		} else if (grade == 'C' || grade == 'D') {
			printf("grade is low for scholarship\n");
		} else {
			printf("Enter Valid Grade");
		}
	} else if (cast == 'c' || cast == 'C') {
		if (grade <= 'B') {
			scholarship = fees * 0.50;
		} else if (grade == 'C' || grade == 'D') {
			printf("grade is low for scholarship\n");
		} else {
			printf("Enter Valid Grade");
		}
	} else if (cast == 'd' || cast == 'D') {
		if (grade <= 'B') {
			scholarship = fees * 1.0;
		} else if (grade == 'C' || grade == 'D') {
			printf("grade is low for scholarship\n");
		} else {
			printf("Enter Valid Grade");
		}
	} else {
	    return printf("Enter valid cast");
	}
	
	total_fees = fees - scholarship;
	printf("Your fees is Rupee %d\n", fees);
	printf("Your scholarship is Rupee %d\n", scholarship);
	printf("Your total fees is Rupee %d", total_fees);
	return 0;
}


