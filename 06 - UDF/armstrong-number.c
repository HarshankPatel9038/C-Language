//4. With Parameter & With Return Value

#include <stdio.h>

int is_armstrong(int  a) {
	
    int num= 0, rem = 0, x, i;

  	while ( a > 0 ) {
  		rem = a % 10;
   	    num = num + (rem * rem * rem);
   	    a = a / 10;
	}

    return num;
}

int main() {
	
    int number, res;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    res = is_armstrong(number);
    
    if(res == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    
    return 0;
}
