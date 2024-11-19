//Program to check whether the given number is prime or not
#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d", &n);
	//Method 2
	for (int i = 2; i<=sqrt(n); i++){
		//checking whether I is a factor of N or not
		if (n%i==0){
			printf("no"); //Not prime
			return 0; // exit the program
		}
	}
	printf("yes"); // Prime
	return 0;
}