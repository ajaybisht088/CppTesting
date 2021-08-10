#include<stdio.h>

int main(){
    int num = 0, firstDigit = 0, lastDigit = 0, result = 0;
    printf("Enter Value = ");
    scanf("%d",&num);
    lastDigit = num%10;
    while(num!=0){
        firstDigit = num%10;
        num = num/10;
    }
    result = firstDigit+lastDigit;
    printf(" Result = %d", result);
    getch();
    return 0;
}
/*
TARGET => Enter a number from the user and 
print the addition of first and last digit of the number on the console screen

OUTPUT => Enter Value : 345
          Result = 8
*/