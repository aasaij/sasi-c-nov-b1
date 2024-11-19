#include <stdio.h>
#include <math.h>
int main(){
//	printf("%f", 10%4.0);
//printf("%f", fmod(10,4.0));
//	printf("%d", 10 > 20);
	int x = 0, y;
//	y = ++x && ++x;
	y = x++ || ++x;
	printf("%d %d", x, y); 
	return 0;
}