//Program to demonstrate string comparision
#include <stdio.h>
#include <string.h>
int main(){
	char str1[100], str2[100];
	scanf("%s %s", str1, str2);
	if ( strcmp(str1, str2)>0)
		printf("String1 is greater than string2");
	else
		printf("String2 is greater than string1");
	
	return 0;
}
//strcmp() 
//		returns 
//		str1 = "Ashaya" str2 = "Alleswari"
//		  0 ==> both strings are equal
//		  >0 ==> string1 is greater
//		  <0 ==> string2 is greater
		  

