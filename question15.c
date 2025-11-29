#include <stdio.h>
#include <string.h>

char str[100];
int length, count = 0;

int main () {
	printf("Enter text\n");
	scanf("%[^\n]", str);

	length = strlen(str);

	//Checks first word
	if (str[0] != ' ')
		count++;

	for (int i = 1; i < length; i++) {
		if (str[i] != ' ' && str[i-1] == ' ')
			count++;
	}

	printf("Word count: %d\n", count);

	return 0;
}
