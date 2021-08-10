#include<stdio.h>

int main(){
    int num = 0, numberOfDigits = 0;
    printf("Enter Value = ");
    scanf("%d",&num);
    while(num!=0){
        num = num/10;
        numberOfDigits++;
    }
    printf(" Number of Digits = %d", numberOfDigits);
    getch();
    return 0;
}
/*
TARGET => Enter a number from the user and print the number of digits
          of the number entered by the user on the console screen

OUTPUT => Enter Value : 345
          Number of Digits = 3
*/