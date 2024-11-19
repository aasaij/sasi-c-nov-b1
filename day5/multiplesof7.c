//Program to print multiples of 7 in between x & y
#include <stdio.h>
int main(){
	int x, y;
	scanf("%d-%d", &x, &y);
	for (int i = x; i<=y;i++)
		if (i % 7 == 0)
			printf("%d ", i);
	return 0;
}