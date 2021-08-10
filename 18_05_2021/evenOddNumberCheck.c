#include<stdio.h>
int evenOdd(int);
int evenOdd(int num){
    if(num%2==0)
        return 0;
    else
        return 1;
}

void main(){
    int number, checkNum;
    printf("Enter a Number : ");
    scanf("%d", &number);
    checkNum = evenOdd(number);
    if(checkNum)
        printf("\nODD Number");
    else
        printf("\nEVEN Number");
}