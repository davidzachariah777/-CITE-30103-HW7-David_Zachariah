#include <stdio.h>

int x,y;

void swap(int *x, int *y) {
	int intermediate = *x;
	*x = *y;
	*y = intermediate;
}

int main() {
	printf("Enter integer (1/2) \n");
	scanf("%d",&x);
	printf("Enter integer (2/2) \n");
	scanf("%d",&y);
	
	printf("BEFORE: x = %d, y = %d\n", x,y);
	swap(&x,&y);
	printf("AFTER: x = %d, y = %d\n", x,y);
	return 0;
}
