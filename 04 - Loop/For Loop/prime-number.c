#include<stdio.h>

int main() {
	
	int i, n, num =0;
	
	printf("Enter any number: ");
	scanf("%d", &n);
	
	if (n>1) {
		
		if(n == 2) {
			printf("%d is prime number", n);
		} else {
			
			for (i=2; i<n; i++) {
				if (n % i == 0) {
					num = 1;
				    break;
				}
			}
			
			if (num == 0) {
				printf("%d is prime number", n);
			} else {
				printf("%d is normal number", n);
			}
		}
		
	} else {
		printf("not decidable");
	}
	
	
	
	return 0;
}


