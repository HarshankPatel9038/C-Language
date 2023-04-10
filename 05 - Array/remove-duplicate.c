#include <stdio.h>

int remove_duplicate(int ary[], int n){
	
	int i, j, k, temp;
	
	for (i=0; i<n; i++) {
		for (j=i+1; j<n; j++) {
			if (ary[i] == ary[j]) {
				for (k=j; k<n; k++) {
					ary[k] = ary[k+1];
				}
				n--;
				j--;
			}
	    }
	}
	
	printf("\n");
	for (i=0; i<n; i++) {
		printf("%d", ary[i]);
		if (i<n-1) {
	 		printf(", ");
		}
	}
	
}

int main(){
	
	int ary[100], n, i;
	
	printf("Enter a size of array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("Enter a number: ");
	    scanf("%d", &ary[i]);
	}
	
	remove_duplicate(ary, n);
	
	return 0;
	
}
