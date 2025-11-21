#include <stdio.h>

int arr[10];
int min,max;

int main() { 
	for (int i = 0; i < 10; i++) {
		printf("Input int value for arr[%d]\n", i);
		scanf("%d",&arr[i]);
	}

	int min = arr[0];
	int max = arr[0];

	for (int i = 0; i < 10; i++) {
		if (arr[i] > max)
			max = arr[i];
	}

	for (int i = 0; i < 10; i++) {
                if (arr[i] < min)
                        min = arr[i];
        }

	printf("Largest Value: %d\n", max);
	printf("Smallest Value: %d\n", min);


	return 0;
}
