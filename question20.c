#include <stdio.h>

struct Date {
	int day;
	int month;
	int year;
} d;

struct Student {
	char name[40];
	int roll;
	float marks;
	struct Date d;
} s1;

void printStudent(struct Student s) {
	printf("Name: %s\n", s1.name);
        printf("Roll: %d\n", s1.roll);
        printf("Marks: %.2f\n", s1.marks);
        printf("DOB: %d-%d-%d\n", s1.d.month, s1.d.day, s1.d.year);
}

int main() {
	printf("Enter student name: \n");
        scanf(" %[^\n]", s1.name);
        printf("Enter student roll: \n");
        scanf("%d", &s1.roll);
        printf("Enter student marks: \n");
        scanf("%f", &s1.marks);
        printf("Enter DOB (day): \n");
        scanf("%d", &s1.d.day);
        printf("Enter DOB (month): \n");
        scanf("%d", &s1.d.month);
        printf("Enter DOB (year): \n");
        scanf("%d", &s1.d.year);

	printStudent(s1);
	return 0;
}
