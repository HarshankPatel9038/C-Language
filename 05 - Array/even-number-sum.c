#include<stdio.h>

int main() {
	
	int ary[100], n, i, sum = 0;
	
	printf("enter a size of an array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("enter a value of an array: ");
		scanf("%d", &ary[i]);
	}
	
	for (i=0; i<n; i++) {
		
		if (ary[i] % 2 == 0) {
			sum = sum + ary[i];
		}
		
	}
	
	printf("\nsum of all even value's in arry is %d", sum);
	
	return 0;
	
}
