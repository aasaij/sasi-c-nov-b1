#include <stdio.h>
//Program to display vowels of given string
#include <ctype.h>
#include <stdbool.h>
int main(){
	char str[100];
	bool vowel =false;
	scanf("%s", str);
	//reading characters in given string
	for(int i = 0; str[i]!='\0'; i++){
		switch(toupper(str[i])){
			case 'A': case 'E': case 'I': case 'O': case 'U':
				printf("%c", str[i]);
				vowel = true;
		}
	}
	if (!vowel)
		printf("No vowels");
	return 0;
}