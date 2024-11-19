//Program to check whether the given number is prime or not
#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	//Method 1
	for (int i = 2; i<=n/2; i++){
		if (n%i==0){
			printf("no");
			return 0; // exit the program
		}
	}
	printf("yes");
	return 0;
}