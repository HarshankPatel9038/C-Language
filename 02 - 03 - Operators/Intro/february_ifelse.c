#include<stdio.h>


int main(){
	
	int x;
	
	printf("type total day of month: ");
	scanf("%d", &x);
	
	printf("\nans:\n");
	if ((x == 28) || (x == 29)) {
		printf("month is february");
	} else {
		printf("month is not a february");
	}
	
	return 0;
	
}
