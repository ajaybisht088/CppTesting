#include<stdio.h>

void main(){
    int a = 1, b = 1;
    int c = ++a||b++;
    int d = b--&&--a;
    printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);
}
//OUTPUT => a = 1, b = 0, c = 1, d = 1