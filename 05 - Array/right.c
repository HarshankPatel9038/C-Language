#include<stdio.h>

int main() {
	
	int ary[100], n, i, x, k, temp;
	
	printf("enter a size of an array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("enter a value of an array: ");
		scanf("%d", &ary[i]);
	}
	
	printf("\nhow many time to you need rotate value to right?: ");
	scanf("%d", &k);
	
	for (x=0; x<k; x++) {
		temp = ary[n - 1];
	    for (i=n-1; i>=0; i--) {
		    ary[i] = ary[i - 1];
	    }
	    ary[0] = temp;
	}
	
	printf("\nnew array is: ");
	
	 for (i=0; i<n; i++) {
	 	printf("%d", ary[i]);
	 	
	 	if (i<n-1) {
	 		printf(", ");
		 }
		 
	 }
	
	return 0;
	
	
}
