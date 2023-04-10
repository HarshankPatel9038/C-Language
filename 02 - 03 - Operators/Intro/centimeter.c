#include<stdio.h>


int main(){
	
	int x, y;
	
	printf("Meter: ");
	scanf("%d", &x);
	
	printf("\nans:\n");
	
	y = x * 100;
	
	printf("%d Meter = %d Centimeter", x, y);
	
	return 0;
	
}
