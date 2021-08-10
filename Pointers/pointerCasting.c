#include<stdio.h>
void main(){
    int x = 10, *p = &x;
    double *d;
    d = (int *)d;
    d = p;
    printf("&x = %d\n", &x);
    printf("p = %d\n", p);
    printf("p+1 = %d\n", p+1);
    printf("*p = %d\n", *p);
    printf("d = %d\n", d);
    printf("d+1 = %d\n", d+1);
    // printf("*d = %d\n", *d);
}