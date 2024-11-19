//Program to print the following pattern
//5
/*
*****
 ****
  ***  
   **  
    *   
*/       
#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int r = n;r>=1; r--){
		printf("%*s",n-r, "");
		for(int c = 1; c<=r; c++){
//			printf("*");
			printf("%c", c+64);
//			printf("%c", 177);
		}
		printf("\n");
	}	
	return 0;
}