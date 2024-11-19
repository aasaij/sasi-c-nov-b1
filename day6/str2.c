#include <stdio.h>
#include <string.h>
int main(){
    char ch = 'R';
    // char name[10] = "Rajesh";
//    char name[10] = {'R', 'a','m','\0'};
//	char name[] = "Anjali";
	char str[100];
//	scanf("%s", str);
//	scanf("%[^\n]s", str);
//	scanf("%[A-Za-z]s", str);
//	scanf("%[0-9]s", str);
	scanf("%[^0-9]s", str);
    // char name[] = "Rajesh";
//    printf("%d %lu", strlen(name), sizeof(name));
//	printf("%c", name[0]);
//	printf("%c", name[strlen(name)-1]);
//	puts(name);
	printf("%s", str);
    
    return 0;
}