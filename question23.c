#include <stdio.h>
#include <stdlib.h>

int *arr;
int n,sum;
float avg;

int main() {
	printf("How many integers?\n");
	scanf("%d",&n);
	
	arr = (int*)malloc(n*sizeof(int));
	
	if (arr==NULL) {
		printf("Error! Memory not allocated\n");
		return 1;
	}

	for (int i = 0; i < n; i++)
	{
		printf("Enter value (%d/%d)\n", i+1,n);
		scanf("%d", &arr[i]);
		sum+= arr[i];
	}

	avg = (float) sum/n;
	printf("Average: %.2f\n", avg);
	free(arr);
	return 0;
}


