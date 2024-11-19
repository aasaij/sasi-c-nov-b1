//Program to check whether the given character is alpha or not
#include <stdio.h>

int main(){
	char ch;
	scanf("%c", &ch);
	if ((ch >='A' && ch <='Z') || (ch >='a' && ch <='z'))
		printf("yes");
	else
		printf("no");
	return 0;
}

/*
	A
	Yes
	7
	No
	%
	No
	f
	Yes
*/