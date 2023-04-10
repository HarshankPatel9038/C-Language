#include<stdio.h>

int main(){
    int num = 0, rem = 0, n, x;
   
    printf("Enter Number Under 1000: ");
    scanf("%d", &n);
    
    x = n;

    if (n<1000) {
    	
    	while (n > 0) {
   	        rem = n % 10;
   	        num = num + (rem * rem * rem);
   	        n = n / 10;
        }
        
        if(x == num) {
        	printf("%d is armstong number", x);
		} else {
			printf("%d is not armstong number", x);
		}
		
        
	} else {
		printf("Your number is big");
	}

    return 0;
}


