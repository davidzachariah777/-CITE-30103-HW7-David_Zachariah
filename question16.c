#include <stdio.h>

struct Student 
{
	char name[40];
	int roll;
	float marks;
} s1;

int main() {
	printf("Enter name: \n");
	scanf("%[^\n]", s1.name);

	printf("Enter roll: \n");
	scanf("%d", &s1.roll);

	printf("Enter marks: \n");
	scanf("%f", &s1.marks);

	printf("Name: %s\n", s1.name);
	printf("Roll: %d\n", s1.roll);
	printf("Marks: %.2f\n", s1.marks);
	return 0;
}
