//Program to add two matrices
#include <stdio.h>
//int arr[][]; // invalid
//int arr[][3] = {{1,2,43}, {6,7,8}, {2,4,3}};
//int arr[5][3] = {{1,2,43}, {6,7,8}, {2,4,3}};
int main(){
	int a[3][3], b[3][3], C[3][3];
	//Getting values for Matrix A
	for (int r = 0; r<3; r++){
		for (int c = 0; c<3; c++)
			scanf("%d", &a[r][c]);
	}
	//Getting values for Matrix B
	for (int r = 0; r<3; r++){
		for (int c = 0; c<3; c++)
			scanf("%d", &b[r][c]);
	}
	//Addition of matrix A & B
	for (int r = 0; r<3; r++){
		for(int c = 0; c<3; c++)
			C[r][c] = a[r][c] + b[r][c];
	}
	//Printing the resultant matrix
	for(int r = 0; r<3; r++){
		for(int c = 0; c<3; c++){
			printf("%4d", C[r][c]);
		}
		printf("\n"); // new row
	}
	return 0;
}
