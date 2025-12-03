#include <stdio.h>

struct Student {
	char name[40];
	int roll;
	float marks;
};

int main () {
	struct Student students[5];

	for (int i = 0; i < 5; i++) { 
		printf("Enter name for student %d: \n",i+1);
		scanf(" %[^\n]", students[i].name);
		printf("Enter roll for student %d: \n",i+1);
        	scanf("%d", &students[i].roll);
		printf("Enter marks for student %d: \n",i+1);
        	scanf("%f", &students[i].marks);
	}

	printf("Name      Roll      Marks");
	for (int i = 0; i < 5; i++) {
		printf("%s       %d       %.2f\n", students[i].name, students[i].roll, students[i].marks);
	}
	return 0;
}
