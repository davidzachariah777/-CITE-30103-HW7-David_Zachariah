#include <stdio.h>

int x, squared;

int square(int x)
{
	return x*x;
}

int main() {
	printf("Enter value to square:\n");
	scanf("%d", &x);
	
	int (*ptr)(int);
        ptr = square;

	squared = ptr(x);
       	printf("%d^2 = %d\n",x,squared);	
	return 0;
}
