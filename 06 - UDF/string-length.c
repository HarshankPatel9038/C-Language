#include<stdio.h>

void length() {
	
	char str[100], n;
	
	printf("Enter a string: ");
	gets(str);
	
	n = strlen(str);
	printf("length of string is: %d", n);
	
}


int main() {
	
	length();
	
	return 0;
	
}


