#include<stdio.h>

int main(){
	
	int i, count=0;
	float weight, height;
	
	for (i=1; i<=3; i++) {
		
		printf("Enter Your Weight & Height: ");
	    scanf("%f %f", &weight, &height);
	    
	    if (weight <= 50 && height >=170) {
	    	count++;
		}
		
	}
	
	printf("\nans:\n");
	printf("%d",count);
	
	return 0;
	
}


