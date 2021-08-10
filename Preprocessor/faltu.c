#include<stdio.h>
#define MY_DEF
#ifdef MY_DEF
void main(){
    printf("if block ");
    printf("\nhurreyeyyyy......");
}
#else
void main(){
    printf("else block ");
    printf("\n ya ya else here......");
}
#endif