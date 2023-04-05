#include<stdio.h>

int main() {
	
	int i, j, k;
	char str[100];
	
	printf("enter a string: ");
	gets(str);
	
	for (i=0; str[i] != '\0'; i++) {
		for (j=i+1; str[j] != '\0'; j++) {
			if (str[i] == ' ') {
				str[i] = ' ';
			} else if (str[i] == str[j]) {
				for (k=j; str[k] != '\0'; k++) {
					str[k] = str[k+1];
		        }
			}
		}
	}
	
	puts(str);
	
	return 0;
	
}
