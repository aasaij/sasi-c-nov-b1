//Program to check the given date is valid or not
#include <stdio.h>
#include <stdbool.h>
int main(){
	int d, m, y;
	bool valid = true;
	scanf("%d/%d/%d", &d, &m, &y);
	if ( d > 31 || d < 1 || m > 12 || m < 1 || y < 1){
		valid = false;
	}
	else{
		switch(m){
			case 4: case 6: case 9: case 11:
				if ( d > 30) valid = false;
			break;
			case 2:
				if (y % 400 == 0 || (y % 4 == 0 && y % 100 !=0)){
					if (d > 29) valid = false;
				}
				else if (d > 28) valid = false;				
		}
	}
//	if (valid==true)
//		printf("Valid");
//	else
//		printf("Invalid");
	printf("%s", valid==true?"Valid":"Invalid");
	return 0;
}