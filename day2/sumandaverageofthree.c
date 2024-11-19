//Program to find sum and average of three integers
#include <stdio.h>

int main(){
	int n1, n2, n3, sum;
	double avg;
	scanf("%d%d%d", &n1, &n2, &n3);
	sum = n1 + n2 + n3;
// 	avg = sum / 3.0; // CTRL + /  --> Toggle command button
    avg = (float)sum / 3;  // type casting --> converting the integer into float
	printf("Sum : %d\n", sum);
	printf("Average : %. 2lf\n", avg);
	return 0;
}