#include<stdio.h>

int main(){
    int choice = 0, num1 = 0, num2 = 0, result = 0;
    do
    {
        printf("1. ADDITION\n");
        printf("1. SUBTRACTION\n");
        printf("1. MULTIPLICATION\n");
        printf("1. DIVISION\n");
        printf("0. EXIT\n");
        printf("*********************************************\n");
        printf("Enter Your Choice Here : ");
        scanf("%d", &choice);
        if (choice>0&&choice<5){
            printf("Enter first number : ");
            scanf(" %d", &num1);
            printf("\nEnter second number : ");
            scanf(" %d", &num2);
        }
        switch (choice)
        {
        case 0: printf("\nExit block\n"); 
                break;
        case 1: result = num1 + num2;
                printf("Result = %d\n", result);
                break;
        case 2: result = num1 - num2;
                printf("Result = %d\n", result);
                break;
        case 3: result = num1 * num2;
                printf("Result = %d\n", result);
                break;
        case 4: result = num1 / num2;
                printf("Result = %d\n", result);
                break;
        default:
            printf("not specified");
            break;
        }
    } while (choice!=0);

    printf("\n ***program ended***\n");
    getch();
    return 0;
    
}
// Target => Simple Calculator