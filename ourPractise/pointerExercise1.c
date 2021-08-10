#include<stdio.h>

void main(){
    unsigned char *p;
    int x = 10;
    p = &x;
    // printf("\n char = %d, int = %d", sizeof(char), sizeof(int));
    // printf("\n *p = %u", *p);
    printf("\n &x = %u", &x);
    printf("\n p = %u", p);

}
