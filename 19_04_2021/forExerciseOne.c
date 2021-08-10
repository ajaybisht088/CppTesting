#include <stdio.h>

int main()
{
    char ch = 'A';
    for(int i = 1; i<17;i++)
    {
        printf("%c ",ch);
        if(i%2==0){
            ch++;
        }
        if(i%4==0){
            printf("\n");
        }
    }
    getch();
    return 0;
}
/*
for loop practising exercise one
Target ==>  A A B B
            C C D D
            E E F F
            G G H H
*/