#include<stdio.h>


int main(){
	
	int x, y ,temp;
	
	printf("Enter Two Number For Swapping\n");
	printf("Enter value of x = ");
	scanf("%d",&x);
	printf("Enter value of y = ");
	scanf("%d",&y);
	
	temp = x;
	x = y;
	y = temp;
	
	printf("\nans:");
	printf("\nvalue of x = %d",x);
	printf("\nvalue of y = %d", y);
	
	return 0;
	
}
