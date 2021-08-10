#include <stdio.h>

int main()
{
    int salary;
    char grade;
    printf("Enter Employe Salary : ");
    scanf("%d", &salary);
    if(salary<=35000){
        printf("Enter Grade of the Employe : ");
        scanf(" %c", &grade);
        if((grade=='a')||(grade=='A')){
        printf("Increamented Salary = %d",salary+((salary*20)/100));}
        if((grade=='b')||(grade=='B')){
        printf("Increamented Salary = %d",salary+((salary*15)/100));}
        if((grade=='c')||(grade=='C')){
        printf("Increamented Salary = %d",salary+((salary*10)/100));}
        if((grade=='d')||(grade=='D')){
        printf("Increamented Salary = %d",salary+((salary*5)/100));}
        }
    else { printf("All numbers are equal"); }
    return 0;
}