//3. No Parameter & With Return Value

#include<stdio.h>

float areaOfRectangle() {
	
	float length, height, area;
	
	printf("please enter length of rectangle: ");
	scanf("%f", &length);
	printf("please enter height of rectangle: ");
	scanf("%f", &height);
	
	area = length * height;
	
	return area;
	
}

int main() {
	
	float res, res1;
	
	res = areaOfRectangle();
	printf("area of rectangle is: %f\n", res);
	printf("--------------------------------\n");
	res1 = areaOfRectangle();
	printf("area of rectangle is: %f\n", res1);
	
}
