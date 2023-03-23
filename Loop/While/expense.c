#include<stdio.h>

int main(){
	
    int months, electricity, salary, marketing, total_expense, i = 1;
   
    printf("Enter a total months: ");
    scanf("%d", &months);
  	
  	while (i <= months) {
  		
  		printf("\nEnter a electricity expense: ");
        scanf("%d", &electricity);
        
        printf("Enter a salary expense: ");
        scanf("%d", &salary);
        
        printf("Enter a marketing expense: ");
        scanf("%d", &marketing);
  		
  		total_expense = electricity + salary + marketing;
  		
  		printf("\nans:\n");
  		printf("Your %d month total expense is %d\n", i, total_expense);
  		
   	    i++;
    }

    return 0;
}



