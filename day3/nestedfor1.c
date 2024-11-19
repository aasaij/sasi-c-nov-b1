//Program to print the following pattern
#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
//	for (int i = 1; i<=n; i++){
//		for (int j = 1; j<=i; j++)
//			printf("%d", j);
//		printf("\n");
//	}
//		
	for (int i = n; i>=1; i--){
		for (int j = 1; j<=i; j++)
			printf("%d", j);
		printf("\n");
	}
		
	return 0;
}


//Syntax:
//	for (<initial_value>;<condition>;<updation>){
//		for (<initial_value>;<condition>;<updation>){
//			<statements>
//		}
//	}
//	
//Example
//	for (int i = 1; i<=5; i++){
//		for (int j = 1; j<=5; j++){
//			printf("%d ", j);
//		}
//	}
//	i = 1
//		j = 1, 2,3,4,5;
//	i = 2
//		j = 1, 2,3,4,5;
//	i = 3
//		j = 1, 2,3,4,5;
//	i = 4
//		j = 1, 2,3,4,5;
//	i = 5
//		j = 1, 2,3,4,5;
