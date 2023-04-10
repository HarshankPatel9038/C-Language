#include<stdio.h>


int main(){
	
	int x;
	
	printf("type your percentage: ");
	scanf("%d", &x);
	
	printf("\nans:\n");
	x > 34 ? printf("you are pass in exam") : printf("you are fail in exam");
	
	return 0;
	
}
