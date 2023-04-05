#include<stdio.h>

void sort_array(int a[], int x) {
	
	int i, j, temp;     
    for (i=0; i<x; i++) {    
        for (j=i+1; j<x; j++) {    
            if (a[j] < a[i]) {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp; 
            }     
        }     
    }     
    printf("\nSorted Element List Is:\n");    
    for (i = 0; i<x; i++) {    
        printf("%d",a[i]);
		if (i<x-1) {
	 		printf(", ");
		}   
    }  
	
}

int main() {
	
	int ary[100], n, i;
	
	printf("Enter a size of array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("Enter a number: ");
	    scanf("%d", &ary[i]);
	}
	     
    sort_array(ary, n);
    
    return 0;
    
}


