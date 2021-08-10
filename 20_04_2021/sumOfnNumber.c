#include<stdio.h>

int main(){
    int num = 0, counter = 0, sum = 0;
    printf("Enter a number = ");
    scanf("%d",&num);
    while(counter<=num){
        sum += counter;
        counter++;
    }
    printf("Sum of numbers between 1 and %d = %d", num, sum);
    getch();
    return 0;
}
/*
TARGET => Enter a number from the user and print the sum of all numbers
 in between 1 to that number on the console screen

OUTPUT => Enter Value : 4
          Sum of numbers between 1 and 4 = 10
*/