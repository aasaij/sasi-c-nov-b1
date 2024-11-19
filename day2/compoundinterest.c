//Program to calculate compound interest
#include <stdio.h>
#include <math.h>
int main(){
	int principal;
	double rate, years, interest;
	printf("Principal Amount : ");
	scanf("%d", &principal);
	printf("Rate of Interest : ");
	scanf("%lf", &rate);
	printf("Number of years : ");
	scanf("%lf", &years);
	interest = principal * pow(1 + rate / 100, years ) - principal;
	printf("Compound Interest : %.2lf\n", interest);	
	return 0;
}