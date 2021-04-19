#include <stdio.h>

int main()
{
    int number = 0, myVar = 0;
    printf("Enter a number = ");
    scanf("%d",&number);
    while(number!=0)
    {
        myVar += number%10;
        number = number/10;
    }
    printf("Sum of the digits of a number entered by the user = %d",myVar);
    getch();
    return 0;
}
/*
Target ==> Enter a number from the user and 
show the sum of the digits of that number on the console screen
eg => Enter a Number : 345
output => 12
*/