#include <stdio.h>
//break demo
int main(){
	for (int i = 1; i<=10; i++){
//		if ( i % 5)
		if ( i % 5==0)
			break;
		printf("%d", i);
	}
	return 0;
}