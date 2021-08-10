#include<stdio.h>

void main()
{
    char str[20], temp;
    int len, i = 0, j = 0;
    printf("Enter your name : ");
    gets(str);
    for(len = 0; str[len]!='\0';len++);
    printf("length of the string = %d",len);
    for(j=len-1,i=0;i<len/2;i++, j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }    
    printf("\n%s", str);
}