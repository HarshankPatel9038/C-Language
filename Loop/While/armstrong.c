#include<stdio.h>

int main(){
	
    int num = 0, rem = 0, n, x;
   
    printf("Armstrong numbers under 1000 are:\n");

    for (n=1; n<=1000; n++) {
    	
    	x = n;
  	
  	    while (x > 0) {
   	        rem = x % 10;
   	        num = num + (rem * rem * rem);
   	        x = x / 10;
        }
        
        if (num == n) {
        	printf("%d\n", n);
		}
		
		num = 0;
  	
    }

    return 0;
}

