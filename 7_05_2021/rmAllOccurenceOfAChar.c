#include<stdio.h>
#include<string.h>

void main()
{
    char str1[20], removeChar;
    int len, i = 0, j = 0, counter = 0, checkFlag=0;
    printf("Enter String : ");
    gets(str1);
    printf("Enter the Character That You Want to remove : ");
    scanf("%c",&removeChar);
    len = strlen(str1);
    while(i<len){
        if(str1[i] == removeChar){
            j++;
            counter++;
        }
        else{
            i++;
            j++;
        }
        str1[i] = str1[j];
    }
    str1[i-counter] = '\0';
    printf("\nNew String : %s", str1);
    getch();
}