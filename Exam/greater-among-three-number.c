#include<stdio.h>

int main() {
	
	int ary[3], max, i;
	
	for (i=0; i<3; i++) {
		printf("Enter a %d number in array :" , i+1);
	    scanf("%d", &ary[i]);
	}
	
	for (i=0; i<3; i++) {
		if (ary[i] > ary[i+1]) {
			max = ary[i];
		} else if (ary[i+1]> ary[i]) {
			max = ary[i+1];
		}
	}
	
	printf("\nans:\n");
	printf("%d", max);
		
	return 0;
	
}


