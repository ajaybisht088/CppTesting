#include<stdio.h>
void main(){
    int arr[] = {5, 17, 25, 37, 63}, *p = &arr[0];
    printf("\n *p = %d", *(p++));    //  *p = 5
    printf("\n *p = %d", *p);       //  *p = 17
}