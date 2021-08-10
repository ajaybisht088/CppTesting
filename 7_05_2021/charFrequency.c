#include<stdio.h>

void main()
{
    char str1[20];
    int checkFlag = 0, i = 0, j = 0, counter = 0;
    printf("Enter String One : ");
    gets(str1);
    for(i=0;str1[i]!='\0';i++){
        for(j=0;str1[j]!='\0';j++){
            if(str1[i] == str1[j]){
                if(i<=j){
                    counter++;
                }
                else {
                    checkFlag = 1;
                }
            }
        }
        if (!checkFlag){
            printf("\n%c = %d",str1[i],counter);
        }
        checkFlag = 0;
        counter = 0;
    }
    getch();
}