#include<stdio.h>
int fun(int);
int fun(int num){
    int counter = 0;
    while(num)
    {
        counter++;
        num >>= 2;
    }
    return counter;
}
void main(){
    printf("Return value is : %d", fun(435));
}






// OUTPUT => Return value is : 5