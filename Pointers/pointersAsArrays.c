#include<stdio.h>
void main(){
    char i  = 0;
    char *ch = "Hello";
    for (i=0; ch[i]!='\0'; i++){
        printf("ch = %c\n", ch[i]);
    }
}