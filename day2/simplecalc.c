//Program to implement simple calculator
//Input : 10 + 5
//Output :  10 + 5 = 15
#include <stdio.h>
int main(){
	int x, y, z;
	char opr;
	scanf("%d %c %d", &x,&opr, &y);//10 + 5
	switch(opr){
		case '+':
			z = x + y; break;
		case '-':
			z = x - y; break;
		case '*': case 'x': case 'X': // 10 X 10
			z = x * y; break;
		case '/':
			printf("%d %c %d = %g\n", x, opr, y,(float)x/y );return 0;
		default:
			printf("Invalid operation!");
			return 0;
	}
	printf("%d %c %d = %d\n", x, opr, y, z);
	return 0;
}

Practice Link : https://tinyurl.com/87c5jx62


