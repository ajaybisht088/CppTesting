#include <stdio.h>

int main()
{
    int num1, num2, num3;
    char op;
    printf("enter first number : ");
    scanf("%d", &num1);
    printf("enter second number : ");
    scanf("%d", &num2);
    printf("enter third number : ");
    scanf("%d", &num3);
    if((num1>num2)&&(num1>num3)){
        printf("Biggest Number = %d", num1);}
    else if((num2>num1)&&(num2>num3)){
        printf("Biggest Number = %d", num2);}
    else if((num3>num1)&&(num3>num2)){
        printf("Biggest Number = %d", num3);}
    else { printf("All numbers are equal"); }
    return 0;
}