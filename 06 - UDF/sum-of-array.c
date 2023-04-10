#include<stdio.h>

int ary_sum(int ary[], int n) {
	
	int i, sum = 0;
	
	for (i=0; i<n; i++) {
		sum = sum + ary[i];
	}
	
	return sum;
	
}

int main() {
	
	int ary[100], i, n, res;
	
	printf("Enter a size of an array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("Enter a value of an array: ");
	    scanf("%d", &ary[i]);
	}
	
	res = ary_sum(ary, n);
	printf("\nsum of array is: %d", res);
	
	return 0;
	
}


