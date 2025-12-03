#include <stdio.h>

struct Student {
        char name[40];
        int roll;
        float marks;
};

int main () {
        struct Student students[5];
	struct Student max;

        for (int i = 0; i < 5; i++) {
                printf("Enter name for student %d: \n",i+1);
                scanf(" %[^\n]", students[i].name);
                printf("Enter roll for student %d: \n",i+1);
                scanf("%d", &students[i].roll);
                printf("Enter marks for student %d: \n",i+1);
                scanf("%f", &students[i].marks);
        }

	float maxMarks = students[0].marks;
	for (int i = 1; i < 5; i++){
		if (students[i].marks > maxMarks) {
			maxMarks = students[i].marks;
			max = students[i];	
		}
	}

	printf("%s with a roll of %d has the highest marks of %.2f\n", max.name, max.roll, max.marks);

        return 0;
}
