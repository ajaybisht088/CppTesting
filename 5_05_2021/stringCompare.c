#include<stdio.h>

void main()
{
    char str1[20], str2[20];
    int len1, len2, i = 0, j = 0;
    printf("Enter String One : ");
    gets(str1);
    printf("Enter String Two : ");
    gets(str2);
    for(len1 = 0; str1[len1]!='\0';len1++);
    for(len2 = 0; str2[len2]!='\0';len2++);
    printf("length of the string = %d",len1);
    for(j=0,i=0;str1[i]!=0&&str2[j]!=0;i++, j++){
        if ((str2[j]-str1[i] == 0)||(str2[j]-str1[i] == 32)||(str2[j]-str1[i] == -32)){
            continue;
        }
        else{
            break;
        }
    }
    if(i==len1&&i==len2){ 
        printf("\nStrings are same");
    }
    else{
        printf("\nStrings are not same");
    }
}