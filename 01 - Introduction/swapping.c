#include<stdio.h>


int main() {
	
  int first = 5;
  int second = 8;
  int temp;

  temp = first;
  first = second;
  second = temp;

  printf("After swapping first number = %d", first);
  printf("\nAfter swapping second number = %d", second);
  
  return 0;
  
}
