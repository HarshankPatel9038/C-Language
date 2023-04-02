//4. With Parameter & With Return Value

#include<stdio.h>

int add(int a, int b){
	int value;
	value = a + b;
	return value;
}

int sub(int m, int n){
	int value;
	value = m - n;
	return value;
}

int multi(int m, int n){
	int value;
	value = m * n;
	return value;
}

int div(int m, int n){
	int value;
	value = m / n;
	return value;
}

int main() {
	int a, b, res;
	char op;
	
	printf("enter a frist value: ");
	scanf("%d", &a);
	printf("enter a second value: ");
	scanf("%d", &b);
	printf("enter a operator: ");
	scanf(" %c", &op);
	
	switch (op) {
		case '+':
		 	res = add(a, b);
		 	break;
		case '-':
		 	res = sub(a, b);
		 	break;
		case '*':
		 	res = multi(a, b);
		 	break;
		case '/':
		 	res = div(a, b);
		 	break;
		default:
			printf("enter valid operator");
			break;
	}
	
	printf("ans: %d", res);
	return 0;
}
