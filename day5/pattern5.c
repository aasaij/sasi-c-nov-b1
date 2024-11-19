//Program to print the following pattern
//5
//1   5
// 2 4
//  3
#include <stdio.h>
int main(){
	int x, i,j ;
	scanf("%d", &x);
//	printf("%5d %5d\n", 1, 1);
//	printf("%5d %5d\n", 12, 12);
//	printf("%5d %5d\n", 123, 123);

	for(i = 1,j=x ; i<=x/2;i++, j--)
//		printf("%*d%*d\n", i, i, j-i, j);
		printf("%*c%*c\n", i, i+64, j-i, j+64);
	printf("%*c", j, j+64);
	return 0;
}