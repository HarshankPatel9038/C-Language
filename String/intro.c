#include<stdio.h>

int main() {
	
	int i;
	char str[5] = {'S', 'a', 'r', 'a' ,'t'};
	
	puts(str);
	
	i = 0;
	while (str[i] != '\0') {
		printf("%c -", str[i]);
		i++;
	}
	
	return 0;
	
}
