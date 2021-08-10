#include<stdio.h>
void main(void){
    union MyUnion
    {
        char ch;
        int i;
        float x;
    };
    // union MyUnion abc = {'A', 23, 45.5f};    // only value 'A' remains the sharable memory and rest were executed and ignored.
    union MyUnion abc = {67};
    printf("ch = %c \n", abc.ch);
    printf("i = %d \n", abc.i);
    printf("x = %f \n", abc.x);
}