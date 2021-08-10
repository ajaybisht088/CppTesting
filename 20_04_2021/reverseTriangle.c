#include<stdio.h>

int main(){
    // int k =0;
    // for(int i=5;i>0;i--){
    //     for(int j=0;j<i;j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // Another Method
    // for(int i=0;i<5;i++){
    //     for(int j=5;j>i;j--){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // Another Method
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
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