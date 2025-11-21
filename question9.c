#include <stdio.h>

int arr[5];

int main() {
	for (int i = 0; i < 5; i++) {
		printf("Enter value for arr[%d]\n",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Inputted Order\n");
	for (int i = 0; i < 5; i++)
                printf("%d\n", arr[i]);

	int intermediate = arr[0];
	arr[0] = arr[4];
	arr[4] = intermediate;

	intermediate = arr[1];
	arr[1] = arr[3];
	arr[3] = intermediate;

	printf("Reverse Order:\n");
	for (int i = 0; i < 5; i++)
		printf("%d\n", arr[i]);

	return 0;
}
