#include<stdio.h>

int main() {
	
	int ary[100], n, i, i1, newElem;
	
	printf("enter a size of an array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("enter a value of an array: ");
		scanf("%d", &ary[i]);
	}
	
	printf("\nat which number of value you need to add?: ");
	scanf("%d", &i1);
		
	printf("enter a new value: ");
	scanf("%d", &newElem);
	
	n++;
	
	for (i=n-1; i>=i1; i--) {
		ary[i] = ary[i - 1];
	}
	
	ary[i1 - 1] = newElem;
	
	printf("\nnew array is: ");
	
	 for (i=0; i<n; i++) {
	 	printf("%d", ary[i]);
	 	
	 	if (i<n-1) {
	 		printf(", ");
		 }
	 }
	
	return 0;
	
}


