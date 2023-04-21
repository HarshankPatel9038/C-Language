#include<stdio.h>

int main() {
	
	int ary[10], i, lower;
	
	for (i=0; i<10; i++) {
		printf("Enter a %d number in array :" , i+1);
	    scanf("%d", &ary[i]);
	}
	
	for (i=0; i<10; i++) {
		if (ary[i+1] > ary[i]) {
			lower = ary[i];
		}
	}
	
	printf("\nans:\n");
	printf("%d", lower);
	
	return 0;
	
}


