#include<stdio.h>

int main(){
	
	int a, b, c, max;
	
	printf("Enter Frist number: ");
	scanf("%d", &a);
	printf("Enter Second number: ");
	scanf("%d", &b);
	printf("Enter Third number: ");
	scanf("%d", &c);
	
	printf("\nans:\n");
	
	if (a>b) {
		
		if (a>c) {
			max = a;
		} else {
			max = c;
		}
		
	} else {
		
		if (b>c) {
			max = b;
		} else {
			max = c;
		}
		
	}
	
	printf("%d is bigger then all numbers", max);
	
	return 0;
	
}


