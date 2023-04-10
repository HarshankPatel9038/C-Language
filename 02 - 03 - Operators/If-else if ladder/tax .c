#include <stdio.h>

int main() {
	
    float gross, tax = 0;

    printf("Enter your gross income: ");
    scanf("%f", &gross);

    printf("\nans:\n");
    
    if (gross >= 0 && gross <= 2000) {
        tax = 0;
    } else if ((gross < 2000) && (gross <= 4000)) {
        tax = (gross - 2000) * 0.03;
    } else if ((gross < 4000) && (gross <= 5000)) {
        tax = (gross - 4000) * 0.05;
    } else if (gross > 5000) {
        tax = (gross - 5000) * 0.08;
    } else {
    	return printf("Enter Valid Input");
	}

    printf("Your gross income is Rs. %f\n", gross);
    printf("You have to pay Rs. %f as tax.\n", tax);

    return 0;
}


