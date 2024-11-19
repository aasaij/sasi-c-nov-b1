//Input
//10 7 12
//
//Output
//7 < 10 < 12
//Program to print three values in increasing order
#include <stdio.h>
int main(){
	int a, b, c, min, max, mid;
	scanf ("%d %d %d", &a, &b, &c);
	//Method 2
	min = a<b && a<c?a:(b<c?b:c);
	max = a>b && a>c?a:(b>c?b:c);
	mid = a+b+c - (max + min);
	printf("%d < %d < %d", min, mid, max);
	return 0;
}
//min     max
//10, 20, 30
//60 - 40 = 20
//a+b+c - max+min


