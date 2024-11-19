#include <stdio.h>

int main(){
    int x = 10, y = 20, *ptr;
    ptr = &x; //pointing x
    *ptr = 100;
    printf("%d", *ptr);
    ptr = &y; // pointin y
    printf("\n%d", *ptr);
    return 0;
}