#include<stdio.h>

int main() {
	
	int ary[100], n, i, sum = 0, avg;
	
	printf("enter a size of an array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("enter a value of an array: ");
		scanf("%d", &ary[i]);
	}
	
	for (i=0; i<n; i++) {
		sum = sum + ary[i];
	}
	
	avg = sum / n;
	
	printf("\naverage of all value's in arry is %d", avg);
	
	return 0;
	
}


