//Program to print digit in word ( 0...9)
#include <stdio.h>
int main(){
	int digit;
	scanf("%d", &digit);
	printf("%d", digit);
	switch(digit){
		case 0: case 1:
			printf("Decimal, Binary, Octal, Hexa"); break;		
		case 2 ... 7:
			printf("Decimal, Octal, Hexa"); break;		
		case 8 ... 9: 
			printf("Decimal, Hexa"); break;		
		case 'A' ... 'F':
			printf("Hexadecimal"); break;
		default:
			printf("Invalid Number!");
	}
	return 0;
}
