//Program to covert upper case to lower case
#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
//	scanf("%s", str);
//	str = "Harish";
	strcpy(str, "Harish12345");
	for(int i = 0; str[i]!='\0'; i++){
		
//		if (str[i] >= 'A'&& str[i]<='Z')
		//CONVERTING UPPER CASE INTO LOWER CASE
//			str[i] = str[i] + 32;
		if (str[i] >= 'a'&& str[i]<='z')			
		//CONVERTING lower CASE INTO upper CASE
			str[i] = str[i] - 32;
	}
	puts(str);
	return 0;
}