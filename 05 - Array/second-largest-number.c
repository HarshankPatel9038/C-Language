#include<stdio.h>

int main() {
	
	int ary[100], n, i, max1 = 0, max2 = 0;
	
	printf("enter a size of an array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("enter a value of an array: ");
		scanf("%d", &ary[i]);
	}
	
	for (i=0; i<n; i++) {
		if (ary[i] > max1) {
			max2 = max1;
			max1 = ary[i];
		} else if (ary[i] > max2 && ary[i] < max1) {
			max2 = ary[i];
		}
	}
	
	printf("\nsecond maximun number in array is %d", max2);
	
	return 0;
	
}


