#include<stdio.h>

int main(){
    char ch = 'A';
    while(ch<='Z'){
        printf("%c", ch++);
    }
    getch();
    return 0;
}
/*
Target => printing all alphabets from A to Z on the console screen
Output => ABCDEFGHIJKLMNOPQRSTUVWXYZ
*/