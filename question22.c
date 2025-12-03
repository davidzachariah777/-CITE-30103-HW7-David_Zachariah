#include <stdio.h>

int arr[5];

int main() {
	int* ptr = &arr[0];

	for (int i = 0; i < 5; i++)
	{
		printf("Enter value for arr[%d]\n", i+1);
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", *ptr);
		ptr++;
	}
	return 0;
}
