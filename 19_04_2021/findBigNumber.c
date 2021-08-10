#include <stdio.h>

int main()
{
    int number = 0, myVar = 0, bigNum = 0;
    printf("Enter a number = ");
    scanf("%d",&number);
    while(number!=0)
    {
        myVar = number%10;
        if(myVar>bigNum){
            bigNum = myVar;
        }
        number = number/10;
    }
    printf("Big Number = %d",bigNum);
    getch();
    return 0;
}
/*
Target ==> Enter a number from the user and 
show the biggest digit from the number on the console screen
eg => Enter a Number : 345
output => 5
*/