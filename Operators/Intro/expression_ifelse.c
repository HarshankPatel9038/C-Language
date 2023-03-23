#include<stdio.h>


int main(){
	
	int x, y;
	
	printf("Please enter value of x: ");
	scanf("%d", &x);
	printf("Please enter value of y: ");
	scanf("%d", &y);
	
	printf("\nans:\n");
	if ((x > 100) || (x != y) || (y < 50)) {
		printf("(%d > 100) || (%d != %d) || (%d < 50) condition is true", x, x, y, y);
	} else {
		printf("(%d > 100) || (%d != %d) || (%d < 50)  condition is false", x, x, y, y);
	}
	
	printf("\n");
	
	if (! (x == y && y < 10)) {
		printf("! (%d == %d && %d < 10) condition is true", x, y, y);
	} else {
		printf("! (%d == %d && %d < 10) condition is false", x, y, y);
	}
	
	return 0;
	
}
