#include<stdio.h>

int main(){
	
	char x;
	
	printf("Enter a Input: ");
	scanf("%c", &x);
	
	printf("\nans:\n");
	
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) {
		printf("%c is Alphabet", x);
	} else if (x >= '0' && x <= '9') {
		printf("%c is Number", x);
	} else {
		printf("%c is Special Characters", x);
	}
	
	return 0;
	
}


