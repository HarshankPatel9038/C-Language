//2. With Parameter & No Return Value

#include<stdio.h>

void average(int num1, int num2, int num3, int num4) {
	
	float ans = (num1 + num2 + num3 + num4) / 4;
	
	printf("\naverage of 4 numbers is: %f", ans);
	
}


int main() {
	
	int a, b, c, d;
	
	printf("Enter a first number: ");
	scanf("%d", &a);
	printf("Enter a second number: ");
	scanf("%d", &b);
	printf("Enter a Third number: ");
	scanf("%d", &c);
	printf("Enter a Fourth number: ");
	scanf("%d", &d);
	
	average(a, b, c, d);
	
	return 0;
	
}
