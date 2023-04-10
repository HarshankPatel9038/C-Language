#include<stdio.h>

int main(){
	
	int num, power, ans = 1, i = 1;
	
	printf("Enter value of x: ");
	scanf("%d", &num);
	printf("Enter value of y: ");
	scanf("%d", &power);
	
	while (i <= power) {
		ans = ans * num;
		i++;
	}
	
	printf("\nans:\n");
	printf("%d", ans);
	
	return 0;
}


