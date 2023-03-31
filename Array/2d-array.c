#include<stdio.h>

int main() {
	
	int ary[3][3] = {
		{1, 25, 86},
		{2, 32, 71},
		{3, 16, 92},
	}, j, i;
	
	for (i=0; i<3; i++) {
		
		for (j=0; j<3; j++) {
			
			printf("%d", ary[i][j]);
			
			if (j<2) {
	 		    printf(", ");
		    }
		 
		}
		
		printf("\n");
		
	}
	
	return 0;
	
}
