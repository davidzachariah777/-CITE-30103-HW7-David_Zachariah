#include <stdio.h>

char str[100];
int length = 0;

int main() {
	printf("Enter a string (with no spaces)\n");
	scanf("%s",str);

	for (int i = 0; i < 100; i++)
		if (str[i] != '\0')
			length++;

	printf("The length of the string is %d\n", length);
	return 0;
}
