#include<stdio.h>

int main() {
	
	int ary1[3][3] = {
		{1, 25, 86},
		{2, 32, 71},
		{3, 16, 92}
	},
	ary2[3][3] = {
		{1, 25, 86},
		{2, 32, 71},
		{3, 16, 92}
	},
	res[3][3] = {0}, j, i;
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			res[i][j] = ary1[i][j] + ary2[i][j];
		}
	}
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			printf("%d, ", res[i][j]);
		}
		printf("\n");
	}
	
	return 0;
	
}


