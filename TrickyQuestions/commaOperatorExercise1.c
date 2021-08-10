#include<stdio.h>

void main(){
    int a, b;
    a = (b=15,b+35);
    // printf("a  = %d, b = %d", a, b);
    printf("\na  =  %d", a);
    getch();
}