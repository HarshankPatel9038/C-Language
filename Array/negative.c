#include<stdio.h>

int main(){
	
    int ary[5] = {14, -25, 30, 45, -2}, i;
    
    printf("negative value in array: \n");
    for (i=0; i<=4; i++) {
    	
    	if (ary[i] < 0) {
    		printf("%d\n", ary[i]);
		}
    	
	}

    return 0;
    
}


