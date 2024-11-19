//
//<datatype> <arrayName>[<dimension>];
//
//example:
//	int ages[100];
//	int arr[];  // invalid
//	int arr[5] = {435, 65,78,87,66};
//	int arr[] = {435, 65,78,87,66};
//	
//	size = sizeof(arr)/sizeof(arr[0]);
//	
//	int x = 10;
//	int arr[x];
//	int arr[x] = { 56, 88,77}; //invalid
//	
//	printf("%lu", sizeof(ages)); // 400

#include <stdio.h>

int main() {
//  int arr[] = {10, 20, 30, 40, 50, 12 ,4, 7, 8,90};
//    int arr[5];
//	int arr[5] = {10};
//	int arr[5] = {[2]=10};
//	int arr[5] = {[1 ... 3]=10};
	int arr[5];
  int size = sizeof(arr)/sizeof(arr[0]);
  arr[0] = 100;
  for(int i = 0; i<size; i++)
  	scanf("%d", &arr[i]  );
//  printf("%d %d", arr[0], arr[size-1]);
//  printf("%d ", arr[0]);
//  printf("%d ", arr[1]);
//  printf("%d ", arr[2]);
//  printf("%d ", arr[3]);
//  printf("%d ", arr[4]);
	for (int i = 0; i<size; i++)
		printf("%d ", arr[i]);
  return 0;
}