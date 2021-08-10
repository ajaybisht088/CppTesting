// Fucntion pointer simply means a pointer pointing to a function.
#include<stdio.h>
/*****************************************************
void myFun(){
    printf("myFun executed...");
}
void main(void){
    void (*ptr)() = NULL;
    ptr = myFun;
    (*ptr)();
    return;
}
/*****************************************************
int myFun(){
    printf("myFun executed...");
    return 1;
}
int main(void){
    int (*ptr)() = NULL;
    ptr = myFun;
    (*ptr)();
    return 0;
}
/*****************************************************
int myFun(int x){
    printf("x = %d", x);
    return 1;
}
int main(void){
    int (*ptr)(int) = NULL;
    // ptr = &myFun;    // ok
    ptr = myFun;        // ok
    // printf("myFun = %u\n", myFun);
    // printf("myFun+1 = %u\n", myFun+1);
    // printf("&myFun = %u\n", &myFun);
    // printf("&myFun+1 = %u\n", &myFun+1);
    // printf("ptr+1 = %u\n", ptr+1);
    // ptr(5);     // ok
    (*ptr)(5);     // ok
    return 0;
}
/*****************************************************
int myFun(char ch){
    printf("ch = %c", ch);
    return 1;
}
int main(void){
    int (*ptr)(char) = NULL;
    ptr = myFun;
    (*ptr)('B');
    return 0;
}
/*****************************************************
int myFun(char ch, float x){
    printf("ch = %c , x = %.2f ", ch, x);
    return 1;
}
int main(void){
    int (*ptr)(char, float) = NULL;
    ptr = myFun;
    (*ptr)('B', 4.6f);
    return 0;
}
/**************array of function pointers***************
int add(int x, int y){
    printf("x = %d , y = %d ", x, y);
    return x+y;
}
int subtract(int x, int y){
    printf("x = %d , y = %d ", x, y);
    return x-y;
}
int multiply(int x, int y){
    printf("x = %d , y = %d ", x, y);
    return x*y;
}
int main(void){
    int (*ptr[])(int, int) = {add, subtract, multiply};
    printf("add(x,y) = %d\n", ptr[0](10,2));
    printf("subtract(x,y) = %d\n", ptr[1](10,2));
    printf("multiply(x,y) = %d\n", ptr[2](10,2));
    return 0;
}
/*****************************************************
void myFun(){
    printf("myFun is here...");
}
void wrapper(void (*myPtr)()){
    myPtr();        // ok
    (*myPtr)();        // ok
}
int main(void){
    // wrapper(myFun);     // ok
    wrapper(&myFun);     // ok
    return 0;
}
/*****************************************************
void myFun(){
    printf("myFun is here...");
}
void* takeFun(void (*myPtr)()){
    return myPtr;
}
int main(void){
    void (*ptr)() = NULL;
    ptr = takeFun(myFun);
    ptr();
    return 0;
}
/*****************************************************/
void myFun(){
    printf("myFun is here...");
}
void wrapper(void (*myPtr)(void)){
    myPtr();
}
void* takeFun(void (*myPtr)(void)){
    return myPtr;
}
int main(void){
    void (*ptr)() = NULL;
    ptr = takeFun(*myFun);      // ok
    ptr = takeFun(myFun);       // ok
    wrapper(ptr);
    return 0;
}