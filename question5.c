#include <stdio.h>

long n;

long factorial(int n) {
	if (n == 0)
		return 1;
	if (n == 1)
		return n;
	return n*factorial(n-1);
}

int main() {
	printf("Input value: \n");
	scanf("%ld",&n);

	if (n < 0) 
		printf("ERROR\n");
	else
		printf("%ld! = %ld\n",n,factorial(n));
	return 0;
}
