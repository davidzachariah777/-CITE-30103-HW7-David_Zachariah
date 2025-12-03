#include <stdio.h>

int main() {
	int x = 100;
	int *ptr = &x;

	printf("Var value: %d\n", x);
	printf("Var address: %p\n", &x);
	printf("Ptr value: %d\n", *ptr);

	return 0;
}
