#include<stdio.h>

int main() {
	
	char str[100], ans;
	
	printf("Enter a string: ");
	gets(str);
	
	strrev(str);
    printf("\nreverse string is: ");
    puts(str);
		
	return 0;
	
}


