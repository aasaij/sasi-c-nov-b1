//Program to demonstrate if statement
#include <stdio.h>

int main(){
	char product[100];
	int qty;
	double price, amount, discount = 0, bill_amt;
	printf("Product Name : ");
	scanf("%s", product);
	printf("Price        : ");
	scanf("%lf", &price);
	printf("Quantity     : ");
	scanf("%d", &qty);
	amount = qty * price;
	if (amount >= 5000)
		discount = amount * 0.15; // 15% of amount

	bill_amt = amount - discount;
	printf("Total Amount : %10.2lf\n", amount);
	printf("Discount (-) : %10.2lf\n", discount);
	printf("             : **********\n");
	printf("Net Amount   : %10.2lf\n", bill_amt);
	printf("             : **********\n");
	return 0;
}