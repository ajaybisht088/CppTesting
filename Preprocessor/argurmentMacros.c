#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define MY_FUN(x) x*x

void main(void) {
    int squareVal = MY_FUN(10);
    printf("%d", squareVal);
}