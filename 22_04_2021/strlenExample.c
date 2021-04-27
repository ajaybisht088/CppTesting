#include<stdio.h>

int main(){
    char arr[50];
    int i;
    scanf("%s",&arr);
    for(i=0;arr[i]!='\0';i++);

    printf("%d",i);
    return 0;
}