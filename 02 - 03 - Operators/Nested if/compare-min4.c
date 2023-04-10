#include<stdio.h>
int main(){
	int a, b, c, d, max;
	printf("Enter Frist number: ");
	scanf("%d", &a);
	printf("Enter Second number: ");
	scanf("%d", &b);
	printf("Enter Third number: ");
	scanf("%d", &c);
	printf("Enter Fourth number: ");
	scanf("%d", &d);
	
	printf("\nans:\n");
	if (a<b) {
		if (a<c) {
			max = a;
			if (a<d) {
			    max = a;
		    } else {
			    max = d;
		    }
		} else {
			if (c<d) {
				max = c;
			} else {
				max = d;
			}
		}
	} else {
		if (b<c) {
			max = b;
			if (b<d) {
			    max = b;
		    } else {
			    max = d;
		    }
		} else {
			if (c<d) {
				max = c;
			} else {
				max = d;
			}
		}
	}
	
	printf("%d is smallest then all numbers", max);
	return 0;
}


