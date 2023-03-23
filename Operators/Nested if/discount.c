#include<stdio.h>
int main () {
	float purchase_amount, total_amount;
	char product_type;
	printf("Enter Your Product Type (M For Mill Cloth, H For Handloom Items): ");
	scanf("%c", &product_type);
	printf("Enter Your Purchase Amount: ");
	scanf("%f", &purchase_amount);
	printf("\nans:\n");
	if (purchase_amount >= 0 && purchase_amount <= 100) {
		if (product_type == 'm' || product_type == 'M') {
			total_amount = purchase_amount - 0;
		} else if (product_type == 'h' || product_type == 'H') {
			total_amount = purchase_amount - 0.05;
		} else {
			return printf("Enter Valid Product Type");
		}
	} else if (purchase_amount >= 101 && purchase_amount <= 200) {
		if (product_type == 'm' || product_type == 'M') {
			total_amount = purchase_amount - 0.05;
		} else if (product_type == 'h' || product_type == 'H') {
			total_amount = purchase_amount - 0.075;
		} else {
			return printf("Enter Valid Product Type");
		}
	} else if (purchase_amount >= 201 && purchase_amount <= 300) {
		if (product_type == 'm' || product_type == 'M') {
			total_amount = purchase_amount - 0.075;
		} else if (product_type == 'h' || product_type == 'H') {
			total_amount = purchase_amount - 0.10;
		} else {
			return printf("Enter Valid Product Type");
		}
	} else if (purchase_amount > 301) {
		if (product_type == 'm' || product_type == 'M') {
			total_amount = purchase_amount - 0.10;
		} else if (product_type == 'h' || product_type == 'H') {
			total_amount = purchase_amount - 0.15;
		} else {
			return printf("Enter Valid Product Type");
		}
	} else {
		return printf("Enter Valid Purchase Amount");
	}
	
	printf("Your Purchase Amount is: %f\n", purchase_amount);
	printf("Your Total Amount is: %f", total_amount);
	return 0;
}


