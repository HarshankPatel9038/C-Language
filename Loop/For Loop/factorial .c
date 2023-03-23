#include<stdio.h>

int main(){
	
	int i, num, factorial = 1;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("\nans:\n");
	
	for (i=num; i>=1; i--) {
		factorial = factorial * i;
	}
	
	printf("%d",factorial);
	
	return 0;
}


