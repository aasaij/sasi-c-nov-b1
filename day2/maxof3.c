//Program to find mac of three values
#include <stdio.h>

int main(){
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	if ( x > y && x > z)
		printf("%d", x);
	else if (y > z)
		printf("%d", y);
	else
		printf("%d", z);
	return 0;
}