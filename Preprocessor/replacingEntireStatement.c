#include<stdio.h>
#define AND &&
#define OR ||
#define MY_CONDITION_1 (3<5)AND(6<8)
#define MY_CONDITION_2 (3<1)AND(6<8)
#define MY_STATEMENT1 printf("AND worked for && ");
#define MY_STATEMENT2 printf("\nNOT possible!!! ");
#define MY_STATEMENT3 printf("\nAgain AND worked. ");

void main(void) {
    if(MY_CONDITION_1){
        MY_STATEMENT1
    }
    if(MY_CONDITION_2){
        MY_STATEMENT2
    }
    else { MY_STATEMENT3 }
}