#include<stdio.h>

void a() {
	
	int ary1[100], ary2[100], n, i, j, res[100];

    printf("enter a size of an array: ");
    scanf("%d", &n);
    
    for (i=0; i<n; i++) {
        printf("enter a value of an first array: ");
        scanf("%d", &ary1[i]);
    }
    printf("\n");
    for (i=0; i<n; i++) {
        printf("enter a size of an second array: ");
        scanf("%d", &ary2[i]);
    }
    
    for (i=0; i<n; i++) {
		res[i] = ary1[i] + ary2[i];
	}
	
    printf("\n");
	for (i=0; i<n; i++) {
			printf("%d, ", res[i]);
	}
    
}

int main() {
	
    a();

    return 0;
}


