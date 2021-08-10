#include<stdio.h>

void main()
{
    char str[20];
    int len, i = 0, j = 0, checkFlag = 0;
    printf("Enter your name : ");
    gets(str);
    for(len = 0; str[len]!='\0';len++);
    printf("length of the string = %d",len);
    for(j=len-1,i=0;i<len/2;i++, j--){
        if ((str[j]-str[i] == 0)||(str[j]-str[i] == 32)||(str[j]-str[i] == -32)){
            checkFlag++;
        }
        else{
            checkFlag=0;
        }
    }
    if(checkFlag==len/2){ 
        printf("\nInput String is a palindrome");
    }
    else{
        printf("\nInput String is not a palindrome");
    }
}