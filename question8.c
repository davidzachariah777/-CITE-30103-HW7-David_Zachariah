#include <stdio.h>

int arr[100];
int n, even = 0, odd = 0;

int main() {
	printf("How many values do you want to enter into the array?\n");
	scanf("%d",&n);

	for (int i = 0; i < n; i++) {
		printf("Enter value for arr[%d]\n", i);
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		if (arr[i]%2==0)
			even++;
		else 
			odd++;
	}

	printf("There are %d even values and %d odd values\n", even,odd);

	return 0;
}
