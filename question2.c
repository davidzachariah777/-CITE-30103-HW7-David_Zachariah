#include <stdio.h>

int a,b,c,max;

int max3(int a, int b, int c) {
	return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

int main () {
	printf("Enter int (1/3)\n");
	scanf("%d", &a);
	printf("Enter int (2/3)\n");
        scanf("%d", &b);
	printf("Enter int (3/3)\n");
        scanf("%d", &c);
	printf("The largest of the 3 integers is: %d\n", max3(a,b,c));
	return 0;
}
