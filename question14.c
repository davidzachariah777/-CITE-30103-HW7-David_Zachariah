#include <stdio.h>
#include <string.h>

char str1[100];
char str2[100];
char str3[100];
int length1, length2;

int main () {
	printf("Enter string (1/2):\n");
	scanf("%s",str1);
	printf("Enter string (2/2):\n");
	scanf("%s",str2);

	length1 = strlen(str1);
	length2 = strlen(str2);
	
	for (int i = 0; i < length1; i++) {
		str3[i] = str1[i];
	}
	for (int i = length1; i < (length1+length2); i++) {
		str3[i] = str2[i-length1];
	}
	
	printf("Concatenated String: %s\n", str3);

	return 0;
}
