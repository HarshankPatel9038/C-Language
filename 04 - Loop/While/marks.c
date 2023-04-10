#include<stdio.h>

int main(){
	
    int students, marks, i = 1;
   
    printf("Enter a total students: ");
    scanf("%d", &students);
  	
  	while (i <= students) {
  		
  		printf("\nEnter a marks form students %d: ", i);
        scanf("%d", &marks);
  		
  		if (marks > 450) {
  			printf("student %d grade is: A\n", i);
		} else if (marks > 350) {
  			printf("student %d grade is: B\n", i);
		} else if (marks > 0 && marks <= 350) {
  			printf("student %d grade is: C\n", i);
		} else {
			printf("Enter valid marks for %d student\n", i);
		}
  		
   	    i++;
    }

    return 0;
}


