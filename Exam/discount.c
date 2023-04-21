#include<stdio.h>
int main() {
	
	float amount, discount, total_amount;
	char product;
	
	printf("Enter a amount: ");
	scanf("%f", &amount);
	
	printf("Enter a Mill Cloth for M or Heandloom items for H: ");
	scanf(" %c", &product);
	
	if (amount > 0 && amount <= 100) {
		if (product == 'M' || product == 'm') {
			discount = amount * 0 / 100;
		} else if (product == 'H' || product == 'h') {
			discount = amount * 5 / 100;
		} else {
			printf("invalid product");
		}
	} else if (amount >= 101 && amount <= 200) {
		if (product == 'M' || product == 'm') {
			discount = amount * 5 / 100;
		} else if (product == 'H' || product == 'h') {
			discount = amount * 7.5 / 100;
		} else {
			printf("invalid product");
		}
	} else if (amount >= 201 && amount <= 300) {
		if (product == 'M' || product == 'm') {
			discount = amount * 7.5 / 100;
		} else if (product == 'H' || product == 'h') {
			discount = amount * 10 / 100;
		} else {
			printf("invalid product");
		}
	} else if (amount > 300) {
		if (product == 'M' || product == 'm') {
			discount = amount * 10 / 100;
		} else if (product == 'H' || product == 'h') {
			discount = amount * 15 / 100;
		} else {
			printf("invalid product");
		}
	}
	
	total_amount = amount - discount;
	
	printf("\nans:\n");
	printf("Your Amount Is: %f\n", amount);
	printf("Your Discount Is: %f\n", discount);
	printf("Your Total Amount Is: %f", total_amount);
	
	return 0;
	
}


