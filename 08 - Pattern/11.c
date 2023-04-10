#include<stdio.h>

int main() {
	
	int i, j;
	
	for (i=45; i<=49; i++) {
		for (j=45; j<=i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
	
	return 0;
	
}


// 45
// 45 46
// 45 46 47
// 45 46 47 48
// 45 46 47 48 49
