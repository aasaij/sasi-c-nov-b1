//Program to reverse a number
#include <stdio.h>
//method 2
int main(){
	long long int n, rev = 0;
	scanf("%lld", &n);
	while(rev=rev*10+n%10, n/=10);
	printf("%lld\n", rev);
	return 0;
}
//
//while(<condition>){
//	<statements-to-be-repeated>
//}

