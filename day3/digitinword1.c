//Program to print digit in word ( 0...9)
#include <stdio.h>
int main(){
	int digit;
	scanf("%d", &digit);
	switch(digit){
		case 0:
			printf("Zero"); break;
		case  1:
			printf("One");break;
		case 2:
			printf("Two"); break;
		case 3:
			printf("Three"); break;
		case 4:
			printf("Four"); break;
		case 5: 
			printf("Five"); break;
		case 6:
			printf("Six"); break;
		case 7:
			printf("Seven"); break;
		case 8: 
			printf("Eight"); break;
		case 9:
			printf("Nine"); break;
		default:
			printf("Invalid Number!");
	}
	return 0;
}
