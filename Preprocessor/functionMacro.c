#include<stdio.h>
#define MY_FUN(x,y) {\
                        x+y; printf("%d", x+y); \
                        }
int i;
void main(){
    MY_FUN(10,20);
}