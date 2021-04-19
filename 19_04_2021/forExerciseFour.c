#include <stdio.h>

int main()
{
    char ch = 'A';
    int j = 1;
    for(int i=1; i<17; i++){
        if(i%4==0){
            ch -= 3;
            printf("%c\n",ch);
            ch += 3;
        }
        else{
            printf("%c ",ch++);
        }
    }
    getch();
    return 0;
}
/*
for loop practising exercise Four
Target ==>  A B C A
            D E F D
            G H I G
            J K L J
*/