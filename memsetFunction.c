#include<stdio.h>
#include<string.h>
void main(void) {
    char str[50] = "Hello Ajay, how are you buddy.";
    memset(str+10, '#', 10*sizeof(char));
    puts(str);
}