//Program to print diagonal elements of square matrix
#include <stdio.h>
//Program to print main & off diagonal elements of an array
int main(){
	int m,n;
	scanf("%dx%d", &m, &n); // 5x5
	if (m==n){
		int arr[m][n];
		for(int r = 0; r<m; r++){
			for (int c = 0; c<n; c++)
				scanf("%d", &arr[r][c]);
		}
		//Printing main diagonal elements
		for(int r = 0; r<n; r++)
			printf("%d ", arr[r][r]);
		printf("\n");
		//Printing off diagonal elements
		for(int r = 0; r<n; r++)
			printf("%d ", arr[r][n-r-1]);			
	}
	return 0;
}