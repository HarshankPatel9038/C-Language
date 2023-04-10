#include<stdio.h>

int main(){
	
	float num;
	
	printf("Enter a Percentage: ");
	scanf("%f", &num);
	
	printf("\nResult:\n");
	
	if (num >= 91 && num <= 100) {
		printf("Percentage: %f\nGrade: A", num);
	} else if (num >= 81 && num < 91) {
		printf("Percentage: %f\nGrade: B", num);
	} else if (num >= 71 && num < 81) {
		printf("Percentage: %f\nGrade: C", num);
	} else if (num >= 61 && num < 71) {
		printf("Percentage: %f\nGrade: D", num);
	} else if (num > 40 && num < 61) {
		printf("Percentage: %f\nGrade: E", num);
	} else if (num >= 0 && num <= 40) {
		printf("Percentage: %f\nFailed", num);
	} else {
		printf("Please Enter a Valid Input");
	}
	
	return 0;
	
}



// 91 - 100   =  A
// 81 - >91   =  B
// 71 - >81   =  C
// 61 - >71   =  D
//<40 - >61   =  E
//  0 - >=40  =  Failed
