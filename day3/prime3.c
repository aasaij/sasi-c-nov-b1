//Program to check whether the given number is prime or not
#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d", &n);
	if (n == 1)
		printf("Neither prime nor composite\n");
	else if (n > 3 && (n % 2 == 0 || n % 3 == 0)){
		printf("Not prime");
	}
	else{
		for (int i = 5;i<=sqrt(n); i+=6){
			if ( n % i == 0 || n % (i+2)==0){
				printf("Not Prime");
				return 0;
			}
		}
		printf("Prime");
	}	
	return 0;
}
//Best algorithm to prime number
//All prime numbers are either 6N+1 or 6N-1 except 2 & 3
//
//7 ==> 6 x 1 + 1
//5 ==> 6 x 1 - 1
//31 ==> 6 x 5 + 1
//
//but All 6N+1 and 6N-1 are not prime numbers
//
//25 ==> 6 x 4 + 1
//35 ==> 6 x 6 -1

//2, 3, 5, 7, 11, 13, 17 19, 23, 29, 31 .....
//
//Twin prime number ==> the difference between two prime numbers should be 2





