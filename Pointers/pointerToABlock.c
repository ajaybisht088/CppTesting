#include<stdio.h>
void main(){
    // char str[10] = "Hello";
    char i  = 0;
    // char (*ch)[10] = "Hello";
    char chArr[10] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char (*ch)[10] = &chArr;
    for (i=0; i<10; i++){
        printf("ch = %c\n", *(*ch + i));
    }
}