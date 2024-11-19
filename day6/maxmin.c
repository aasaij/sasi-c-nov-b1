#include <stdio.h>
//Program to print max and min in an arry
int main(){
	int n, max, min;
	scanf("%d", &n);
	int arr[n];
	for(int index =0; index<n; scanf("%d", &arr[index++]));
	max = min = arr[0];
	for(int index = 1; index < n; index++){
		if ( max < arr[index])
			max = arr[index];
		else if(min > arr[index])
			min = arr[index];
	}
	printf("Max : %d \t Min : %d\n", max, min);
	return 0; 
}