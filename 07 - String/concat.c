#include <stdio.h>

int main() {
    char str1[100], str2[100], str3[100], result[1000];
    int i, j;
   
    printf("enter a frist string: ");
	gets(str1);

    printf("enter a second string: ");
	gets(str2);
	
	printf("enter a Third string: ");
	gets(str3);
	
    for (i = 0; str1[i] != '\0'; i++) {
       result[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; j++, i++) {
       result[i] = str2[j];
    }

    for (j = 0; str3[j] != '\0'; j++, i++) {
       result[i] = str3[j];
    }

    result[i] = '\0';

    printf("Concatenated string: %s", result);

    return 0;
    
}


