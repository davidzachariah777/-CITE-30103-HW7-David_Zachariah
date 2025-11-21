#include <stdio.h>

int arr[100];
int n,sum = 0;
float avg;

int main () {
	printf("How many values do you want to input into the array?\n");
	scanf("%d",&n);	

	for (int i = 0; i < n; i++) {
		printf("Enter value for arr[%d]\n", i);
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
		sum += arr[i];
	
	printf("SUM: %d\n", sum);

	avg = (float) sum/n;
	printf("AVERAGE: %.3f\n", avg);

	return 0;
}
