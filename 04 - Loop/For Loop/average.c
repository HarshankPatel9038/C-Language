#include<stdio.h>

int main(){
	
	int i, num, avg, sum = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("\nans:\n");
	
	for (i=1; i<=num; i++) {
		sum = sum + i;
	}
	
	avg = sum / num;
	
	printf("%d",avg);
	
	return 0;
}


