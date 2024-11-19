//Program to demonstrate ternary operator
#include <stdio.h>

int main(){
	int x, y, z;
	scanf("%d %d %d", &x,&y, &z);
	printf("%d", x>y && x>z?x:(y>z?y:z));
//	printf("%d", x > y?x:y);
//	if ( x > y)
//		printf("%d", x);
//	else
//		printf("%d", y);
	return 0;
}