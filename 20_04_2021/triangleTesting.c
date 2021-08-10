#include<stdio.h>

int main(){
    // int k =0;
    int j=4;
    for(int i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(j<4-i){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    // getch();
    return 0;
}
/*
TARGET =>       *
              * *
            * * *
          * * * *
        * * * * *
*/