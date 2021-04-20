#include<stdio.h>

int main(){
    int value = 0, localVar = 0;
    printf("Enter Value = ");
    scanf("%d",&value);
    while(localVar<=value){
        printf("%d , ", localVar);
        localVar++;
    }
    getch();
    return 0;
}
/*
TARGET => Enter a number from the user and 
print the fibnocii series of that number on the console screen

OUTPUT => Enter Value : 5
          0 , 1 , 2 , 3 , 4 , 5 ,
*/