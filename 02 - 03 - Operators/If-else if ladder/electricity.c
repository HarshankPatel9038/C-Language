#include<stdio.h>


int main(){
	
	int unit, bill, total_bill;
	
	printf("Enter Your unit: ");
	scanf("%d", &unit);
	
	printf("\nans:\n");
	if ((unit >= 0) && (unit <= 50)) {
		bill = unit * 0.50;
	} else if ((50 < unit) && (unit <= 150)) {
	    bill = 50 * 0.50 + (unit - 50) * 0.75;
	} else if ((150 < unit) && (unit <= 250)) {
		bill = 50 * 0.50 + 100 * 0.75 + (unit - 150) * 1.20;
	} else if (unit > 250) {
		bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50;
	} else {
		return printf("Enter Valid Input\n");
	}
	
	total_bill = bill + bill * 0.20;
	
	printf("Your bill is %d\n", bill);
	printf("Your total bill is %d", total_bill);
	
	return 0;
	
}


