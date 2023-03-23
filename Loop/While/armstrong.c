#include<stdio.h>

int main(){
	
    int num = 0, rem = 0, n, x;
   
    printf("Armstrong numbers under 1000 are:\n");

    for (n=1; n<=1000; n++) {
    	
    	n = x;
  	
  	    while (n > 0) {
   	        rem = n % 10;
   	        num = num + (rem * rem * rem);
   	        n = n / 10;
        }
        
        if (num == x) {
        	printf("%d\n", x);
		}
  	
    }

    return 0;
}

