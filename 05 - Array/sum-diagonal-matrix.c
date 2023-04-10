#include<stdio.h>

int main() {
	
	int ary[3][3] = {
		{1, 25, 86},
		{2, 32, 71},
		{3, 16, 92},
	}, j, i, sum;
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			if (i == j) {
				sum = sum + ary[i][j];
			}
		}
	}
	
	printf("%d", sum);
	
	return 0;
	
}


