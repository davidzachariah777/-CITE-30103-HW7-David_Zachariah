#include <stdio.h>

int arr1[3][3];
int arr2[3][3];
int arr3[3][3];

int main () {

	//Creates arr1
        for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                        printf("Enter value for arr1[%d][%d]: ",i,j);
			scanf("%d",&arr1[i][j]);
                }
        }
     	printf("\n");

	//Creates arr2
        for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
		        printf("Enter value for arr2[%d][%d]: ",i,j);
                        scanf("%d",&arr2[i][j]);
		}
        }
	printf("\n");

	//Creates arr3
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	//Prints arr1
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("arr1[%d][%d] = %d\n", i,j,arr1[i][j]);
		}
	}
	printf("\n");

	//Prints arr2
	for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                        printf("arr2[%d][%d] = %d\n", i,j,arr2[i][j]);
                }
        }
     	printf("\n");
	
	//Prints arr3
	for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                        printf("arr3[%d][%d] = %d\n", i,j,arr3[i][j]);
                }
        }

	return 0;
}
