//Program to demonstrate Dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr;
    //arr = (int *)malloc(40);
    
    arr = (int *)calloc(10, 4);
    arr[0] = 100;
    arr[1] = 200;
    arr = (int *)realloc(arr, 20);
    free(arr);
    return 0;
}