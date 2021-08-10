#include<stdio.h>
void main(){
    int arr1[] = {5, 17, 25, 37, 63}, arr2[] = {10, 15, 25, 73, 77};
    int *p = &arr1[0], *q = &arr2[0];
    int val = *p < *q ? 1:0;
    // printf("\n p = %d", *(p++));
    // printf("\n p = %d", val);
    printf("\n p = %d", arr1);
    printf("\n p = %d", arr1 + 1);
}