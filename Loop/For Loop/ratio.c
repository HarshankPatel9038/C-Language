#include <stdio.h>

int main() {
	
   int i, a, b, c, d, ans;
	
   for (i=1; i<=3; i++) {
   
        printf("\nEnter Frist Number: ");
        scanf("%d", &a);
        printf("Enter Second Number: ");
        scanf("%d", &c);
        printf("Enter Third Number: ");
        scanf("%d", &c);
        printf("Enter Fourth Number: ");
        scanf("%d", &d);
   
        if (c == d) {
   	        printf("\nwarning:\n");
   	        printf("ratio is not possible");
        } else {
   	        ans = (a-b) / (c-d);
   	        printf("\nans:\n");
   	        printf("ans is %d: \n", ans);
   	        printf("--------------------");
        }
   	
   }
   
   return 0;
}



