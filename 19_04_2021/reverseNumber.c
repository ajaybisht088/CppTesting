#include <stdio.h>

int main()
{
    int number = 0, myVar = 0;
    printf("Enter a number = ");
    scanf("%d",&number);
    while(number!=0)
    {
        myVar = number%10;
        printf("%d",myVar);
        number = number/10;
        // printf("\n%d",number);
    }
    getch();
    return 0;
}
/*
Target ==> Enter a number from the user and 
show the reverse of that number on the console screen
eg => Enter a Number : 345
output => 543
*/