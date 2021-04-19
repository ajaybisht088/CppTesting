#include <stdio.h>

int main()
{
    char ch = 'A';
    int j = 1;
    // Easy method
    for(int i=1; i<17; i++){
        if(i%4==0){
            ch = 'A';
            printf("%c\n",ch);
        }
        else{
            printf("%c ",ch++);
        }
    }
    // Another Method
    // for(int i = 1; i<17;i++)
    // {
    //     printf("%c ",ch++);
    //     if(j%3==0){
    //         ch = 'A';
    //     }
    //     if(i%4==0){
    //         printf("\n");
    //         j = 0;
    //         ch='A';
    //     }
    //     j++;
    // }
    getch();
    return 0;
}
/*
for loop practising exercise Two
Target ==>  A B C A
            A B C A
            A B C A
            A B C A
*/