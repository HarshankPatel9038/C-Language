#include<stdio.h>

int findFact(int n) {
	
	if (n > 1) {
		return n * findFact(n-1);
	} else {
		return 1;
	}
	
}


int main() {
	
	int n, res;
	
	printf("enter a number: ");
	scanf("%d", &n);
	
	res = findFact(n);
	printf("\n%d factorial is: %d", n, res);
	
	return 0;
	
}


