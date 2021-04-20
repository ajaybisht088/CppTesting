#include<stdio.h>

int main(){
    // int k =0;
    for(int i=0;i<5;i++){
        for(int j=4;i<=j;j--){
            printf("* ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
/*
TARGET =>   * * * * *
            * * * *
            * * *
            * *
            * 
*/