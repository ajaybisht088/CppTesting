#include<stdio.h>
int func();
int func(){
    static int num = 16;
    return num--;
}
void main(){
    for (func(); func(); func())
        printf("%d ", func());
}







// OUTPUT => Return value is : 14 11 8 5 2