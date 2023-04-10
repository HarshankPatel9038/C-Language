#include<stdio.h>


int main(){
	
	int x, y;
	
	printf("Enter frist Number: ");
	scanf("%d", &x);
	printf("Enter second Number: ");
	scanf("%d", &y);
	
	printf("\nans:\n");
	
	if (x == y) {
		printf("%d is equal %d", x, y);
	} else if (x > y) {
		printf("%d is greater than %d", x, y);
	} else {
		printf("%d is less than %d", x, y);
	}
	
	return 0;
	
}


