#include <stdio.h>
//continue demo
int main(){
	for (int i = 1; i<=10; i++){
		if ( i % 5)
//		if ( i % 5==0)
			continue;
		printf("%d ", i);
	}
	return 0;
}