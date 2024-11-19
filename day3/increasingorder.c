//Input
//10 7 12
//
//Output
//7 < 10 < 12
//Program to print three values in increasing order
#include <stdio.h>
int main(){
	int a, b, c;
	scanf ("%d %d %d", &a, &b, &c);
	//Method 1
	if (a<b && a<c){
		if (b < c)
			printf("%d < %d < %d\n", a,b,c);
		else
			printf("%d < %d < %d\n", a,c,b);			
	}
	else if ( b < c){
		if (a< c)
			printf("%d < %d < %d\n", b,a, c);
		else
			printf("%d < %d < %d\n", b,c, a);
	}
	else if (a<b)
		printf("%d < %d < %d\n", c, a, b);
	else
		printf("%d < %d < %d\n", c, b,a);
	return 0;
}