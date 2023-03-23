#include<stdio.h>


int main(){
	
	int x;
	
	printf("type your percentage: ");
	scanf("%d", &x);
	
	printf("\nans:\n");
	if (x > 34) {
		printf("you are pass in exam");
	} else {
		printf("you are fail in exam");
	}
	
	return 0;
	
}
