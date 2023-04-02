//1. No Parameter & No Return Value

#include<stdio.h>

void even_odd() {
	
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
}


int main() {
	
    even_odd();
    
    return 0;
}
