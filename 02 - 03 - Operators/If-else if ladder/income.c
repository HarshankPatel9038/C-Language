#include <stdio.h>

int main() {
	
    float income, net_income, tax;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income >= 0 && income <= 10000) {
        return printf("you have not to pay any tax");
    } else if (income > 10000 && income <= 15000) {
        tax = income * 0.10;
    } else if (income > 15000){
        tax = income * 0.18;
    } else {
    	return printf("Enter valid input");
	}
    
    net_income = income - tax;

    printf("Your net income is Rs. %f\n", net_income);
    printf("You have to pay Rs. %f as tax.", tax);

    return 0;
}


