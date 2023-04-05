#include<stdio.h>

int sum_all_number(int ary[], int n){
	
	int i,sum = 0;
	
	for (i=0; i<n; i++) {
		sum = sum + ary[i];
	}
	
	return sum;
	
}

int main() {
	
	int ary[1000], n, i, res1, ans, total = 0;
	char input;
	
	for (;;) {
		printf("Add values press y for yes & n for no: ");
	    scanf(" %c", &input);
	
	    if (input == 'y') {
		    printf("\nEnter a size of an array: ");
	        scanf("%d", &n);
	
	        printf("\n");
	        for (i=0; i<n; i++) {
		        printf("Enter a value of an array: ");
	            scanf("%d", &ary[i]);
	        }
	    
		    res1 = sum_all_number(ary, n);
		
		    ans = res1;
		
		    total = total + ans;
		
	        printf("\nsum of all values is: %d", total);
	        printf("\n----------------------------------------------------------------------------------------------------------\n", total);
	    }
	}
	
	return 0;
	
}
