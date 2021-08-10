#include<stdio.h>
void main(){
    int arr[2][3] = {5, 17, 25,
                     37, 63, 12};
    int (*p)[3] = arr;
    printf("\n p = %d", p);
    printf("\n *p = %d", *p);
    printf("\n p+1 = %d", p+1);
    printf("\n *(p+1) = %d", *(p+1));
    printf("\n **p = %d", **p);
}