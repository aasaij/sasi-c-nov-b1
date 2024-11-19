//Program to print Odd numbers
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	//Method 1
//	for(int i = 1; i<=n; i++){
//		if ( i % 2 == 1)
//			printf("%d ", i);
//	}
	for(int i = 1; i<=n; i+=2){
		printf("%d ", i);
	}

	return 0;
}