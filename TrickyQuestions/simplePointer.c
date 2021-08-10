#include<stdio.h>

void main(){
    int *ptr, a = 15;
    unsigned int b;
    ptr = &a;
    (*ptr)++;
    printf("a = %d", a);
    // b = *(ptr++);
    // printf("a = %d", a);
    // printf("\nb = %u", b);
    
}