#include <stdio.h>
#include <string.h>

char str[100];
int length,i,j,isPalindrome = 0;

int main () {
	printf("Enter a string (with no spaces)\n");
	scanf("%s",str);
	
	length = strlen(str);
	i = 0; 
	j = length-1;

	while (i < j) {
		if (str[i] != str[j]) {
			isPalindrome = 1;
			break;
		}
		i++;
		j--;
	}

	//0 = true; 1 = false;
	if (isPalindrome == 0)
		printf("Palindrome\n");
	else 
		printf("Not Palindrome\n");
	return 0;
}
