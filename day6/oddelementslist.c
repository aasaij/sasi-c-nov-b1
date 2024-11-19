#include <stdio.h>
//Program to print odd elements in an arry
int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int index =0; index<n; scanf("%d", &arr[index++]));
	
	for(int index = 0; index < n; index++){
		if (!(arr[index]%2))
			printf("%d ", arr[index]);
	}
		
	return 0;
}