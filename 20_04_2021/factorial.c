#include<stdio.h>

int main(){
    int value = 0, counter = 1, result = 1;
    printf("Enter a Number = ");
    scanf("%d",&value);
    while(counter<=value){
        result = result * counter;
        counter++;
    }
    printf("Result = %d",result);
    getch();
    return 0;
}
/*
TARGET => Factorial of a number

EXAMPLE => user enter 4 then factorial of 4 = 4*3*2*1

OUTPUT => Enter a Number : 4
          Result = 24
*/