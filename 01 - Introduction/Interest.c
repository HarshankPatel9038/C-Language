#include<stdio.h>

int main(){
	
	int price = 50000;
	int rate = 10;
	int time = 2;
	int simpleInterest;
	
	simpleInterest = (price * rate * time ) / 100;
	
	printf("Simple Interest is : %d", simpleInterest);
	
	return 0;

}