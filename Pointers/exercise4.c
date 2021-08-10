#include<stdio.h>
void main(){
    int arr[] = {5, 17, 25, 37, 63};
    int (*p)[5] = &arr;
    // int *p = arr;
    // printf("\n p = %d", *(p++));
    // printf("\n p = %d", *(p+2));
    // printf("\n p = %d", (*p)[1]);
    // printf("\n p = %d", *(*p+1));
    printf("\n p = %d", p);
    printf("\n p = %d", p+1);
    printf("\n p = %d", *p);
    printf("\n p = %d", **p);
    // printf("\n p = %d", &arr[0]);
}