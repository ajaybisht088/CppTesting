#include <stdio.h>

int main()
{
    char ch = 'A';
    for(int i = 1; i<17;i++)
    {
        printf("%c",ch++);
        printf(" ");
        if(i%2==0){
            ch -= 2;
        }
        if(i%4==0){
            printf("\n");
            ch += 2;
        }
    }
    getch();
    return 0;
}
/*
for loop practising exercise Three
Target ==>  A B A B
            C D C D
            E F E F
            G H G H
*/