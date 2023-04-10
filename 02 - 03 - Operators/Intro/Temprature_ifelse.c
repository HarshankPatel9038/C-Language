#include<stdio.h>


int main(){
	
	int x;
	float y;
	
	printf("Celsius : ");
	scanf("%d", &x);
	
	printf("\nans:\n");
	
	y = (x * 1.8) + 32;
	
	printf("%d Celsius = %f Farhanhit\n", x, y);
	
	if (y > 105) {
		printf("%f is hot Temprature", y);
	} else {
		printf("%f is cool Temprature", y);
	}
	
	return 0;
	
}
