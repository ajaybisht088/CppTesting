#include<stdio.h>
void main(){
    char i  = 0;
    char ch[10] = "Hello";
    for (i=0; ch[i]!='\0'; i++){
        printf("ch = %c\n", *(ch+i));
    }
    // printf("ch = %c\n", (ch+2)[-1]); // very important concept.
}