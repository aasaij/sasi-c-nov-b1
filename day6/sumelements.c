#include <stdio.h>
//Program to print sum of elements in an arry
int main(){
	int n, sum;
	scanf("%d", &n);
	int arr[n];
	for(int index =0; index<n; scanf("%d", &arr[index++]));
	sum = arr[0];
	for(int index = 1; index < n; index++){
		sum += arr[index];
	}
	printf("%d", sum);
	return 0; 
}