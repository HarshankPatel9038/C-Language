#include<stdio.h>

int main() {
	
	int i;
	char str[100], j[100], k[100];
	
	printf("enter a string: ");
	gets(str);
	
	printf("\nwhich letter you want to relace in string: ");
	gets(j);
	
	printf("\nenter a new word: ");
	gets(k);
	
	for (i=0; str[i] != '\0'; i++) {
		if (str[i] == j[0]) {
			str[i] = k[0];
		}
	}
	
	printf("\nans:\n");
	puts(str);
	
	return 0;
	
}


