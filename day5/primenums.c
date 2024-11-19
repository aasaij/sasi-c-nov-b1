//Program to print prime numbers in between x and y
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(){
	int x, y;
	scanf("%d-%d", &x, &y);
	for (int n = x; n<=y; n++){
		bool prime = true;
		if (n == 1)
			prime = false;
		else if (n > 3 && ( n % 2 == 0 || n % 3 == 0))
			prime = false;
		else {
			for (int i = 5; i<=sqrt(n);i++){
				if ( n % i == 0 || n % (i+2)==0){
					prime = false;
					break;
				}
			}
		}
		if (prime == true)
			printf("%d ", n);
	}
	return 0;
}