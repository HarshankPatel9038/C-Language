#include<stdio.h>

int main() {
	
	char str[100], i, count = 0, n;
	int ans;
	
	printf("Enter a string: ");
	gets(str);
	
	for (i=0; i<n; i++) {
		n = n / 10;
		count++;
	}
	
	printf("%d", count);

//    ans = strlen(str);
//    printf("%d", ans);
		
	return 0;
	
}


