#include <stdio.h>
#include <math.h>

int n,x;

int isPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return 0;
	}

	return 1;
}

int main () {
	printf("Enter an int\n");
	scanf("%d",&n);
	x = isPrime(n);
	if (x == 1)
		printf("Prime\n");
	else
		printf("Not Prime\n");
	return 0;
}
