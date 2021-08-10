// #include<stdio.h>
// #define MY_DEF
// #ifdef MY_DEF
// void main(){
//     printf("if block ");
//     printf("\nhurreyeyyyy......");
// }
// #else
// void main(){
//     printf("else block ");
//     printf("\n ya ya else here......");
// }
// #endif
#include<stdio.h>
#define MY_DEF
void main(){
    #ifdef MY_DEF
        printf("if block ");
        printf("\nhurreyeyyyy......");
    #else
        printf("else block ");
        printf("\n ya ya else here......");
    #endif
    printf("\nblock common to all....");
}