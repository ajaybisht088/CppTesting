#include<stdio.h>
#define AND &&
#define OR ||
#define MY_CONDITION_1 (3<5)AND(6<8)
#define MY_CONDITION_2 (3<1)AND(6<8)

void main(void) {
    if(MY_CONDITION_1){
        printf("AND worked for && ");
    }
    if(MY_CONDITION_2){
        printf("\nNOT possible!!! ");
    }
    else { printf("\nAgain AND worked. "); }
}