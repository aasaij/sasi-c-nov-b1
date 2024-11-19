//Interest calculator
#include <stdio.h>
#include <math.h>
int main(){
	int principal;
	double rate, years, interest;
	char choice;
	
	printf("Principal Amount : ");
	scanf("%d", &principal);
	printf("Rate of Interest : ");
	scanf("%lf", &rate);
	printf("Number of years : ");
	scanf("%lf", &years);
	printf("[C]ompound Interest\n");
	printf("[S]imple Interest\n");
	printf("Enter your choice : ");
	scanf("%c", &choice);
	if ( choice == 'C' || choice == 'c')	
		interest = principal * pow(1 + rate / 100, years ) - principal;
	else if (choice =='s' || choice =='S' )
		interest = principal * rate * years / 100;
	else{
		printf("Invalid choice");
		return 0;
	}
	printf("Interest : %.2lf\n", interest);	
	return 0;
}