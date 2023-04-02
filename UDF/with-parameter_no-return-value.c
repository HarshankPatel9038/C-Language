//2. With Parameter & No Return Value

#include<stdio.h>

void areaOfCircle(float r) {
	
	float area;
	
	area = 3.14 * r * r;
	
	printf("area of circle is: %f\n", area);
	
}


int main() {
	
	areaOfCircle(5);
	printf("---------------------------\n");
	areaOfCircle(8);
	
	return 0;
	
}
