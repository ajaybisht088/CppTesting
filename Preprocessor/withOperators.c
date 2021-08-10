#include<stdio.h>
#define AND &&
#define OR ||

void main(void) {
    if((3<5)AND(6<8)){
        printf("AND worked for && ");
    }
    if((3<1)AND(6<8)){
        printf("\nNOT possible!!! ");
    }
    else { printf("\nAgain AND worked. "); }
}