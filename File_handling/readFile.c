#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    FILE *fp = fopen("abcd.txt", "r");
    if(fp == NULL){
        printf("Couldn't open the file!!!! ");
        exit(0);
    }
    else{
        fgets(str,20,fp);
        // puts(str);
        printf("%s", str);
    }
    fclose(fp);
    return(0);
}