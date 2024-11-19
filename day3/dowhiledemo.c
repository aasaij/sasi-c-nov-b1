//Program to count number +ves and -ves in the list
#include <stdio.h>
int x; // global variable -- default value 0
int main(){
	int pos=0, neg; // Garbage values
	pos=neg=0;
	printf("Enter integers... Press 0 to exit..\n");
	do{
		int x;
		scanf("%d", &x);
		if (x == 0) break;
		if (x < 0)
			neg++;
		else if (x > 0)
			pos++;
	}while(1); //infinite loop
	printf("Positives : %d\tNegatives : %d\n", pos, neg);
	return 0;
}
// Syntax
//do{
//	<statements-to-be-repeated>
//}while(<condition>);