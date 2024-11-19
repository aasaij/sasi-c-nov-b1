//Program to print natural numbers in reverse order
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
//	for(int i=n; i>=1 ;i--)
//		printf("%d ", i);
	for(int i=n%2==0?n:n-1; i>=1 ;i-=2)
		printf("%d ", i);

//	if (n%2==0){
//	for(int i=n;i>=2;i-=2)
//	printf("%d ",i);
//	}	
//	else{
//	n=n-1;
//	for(int i=n;i>=2;i-=2)
//	printf("%d ",i);
//	}
	return 0;
}