#include<stdio.h>


int main(){
	
	int x;
	
	printf("type total day of month: ");
	scanf("%d", &x);
	
	printf("\nans:\n");
	(x == 28) || (x == 29) ? printf("month is february") : printf("month is not a february");
	
	return 0;
	
}
