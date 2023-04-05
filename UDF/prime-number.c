//3. No Parameter & With Return Value

#include <stdio.h>

int is_prime() {
	
    int i, n, num = 0;
	
	printf("Enter any number: ");
	scanf("%d", &n);
	
	if (n>1) {
		
		if(n == 2) {
			printf("prime number = ");
		} else {
			
			for (i=2; i<n; i++) {
				if (n % i == 0) {
					num = 1;
				    break;
				}
			}
			
			if (num == 0) {
				printf("prime number = ");
			} else {
				printf("normal number = ");
			}
		}
		
	} else {
		printf("not decidable");
	}
	
	return n;
	
}

int main() {
	
	int res = is_prime();
	printf("%d", res);
    
    
    return 0;
}

