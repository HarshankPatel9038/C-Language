#include<stdio.h>

int main() {
	
	int i, n, ary[100], max;
	
	printf("Please enter size of an array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("Please enter value of array: ");
		scanf("%d", &ary[i]);
	}
	
	max = ary[0];
	
	for (i=0; i<n; i++) {
		if (ary[i] > max) {
		    max = ary[i];
	    }
	}
	printf("\nMaximum value in array is %d", max);
	
	return 0;
}


