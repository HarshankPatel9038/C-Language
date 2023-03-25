#include<stdio.h>

int main() {
	
	int i, n, ary[100];
	
	printf("Please enter size of an array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("Please enter value of array: ");
		scanf("%d", &ary[i]);
	}
	
	printf("\narray value is divisible by 3:\n");
	
	for (i=0; i<n; i++) {
		if (ary[i] % 3 == 0) {
		    printf("%d\n", ary[i]);
	    }
	}
	
	return 0;
}


