#include<stdio.h>
void main(){
    int a = 5, b, arr[5];
    b = sizeof(a++);
    b = sizeof(arr);
    printf("a = %d, b = %d", a, b);
}
//OUTPUT => a = 5, b = 4
/*
This is in case of C99 and i dont know its behavioue in C11
REASON =>This is because The size of operator yields the size (in bytes)
of its operand, which may be an expression or parenthesized name of a type.
The size is determined from the type of the operand. If the type of the operand 
is variable length array type, then the operand is evaluated; otherwise the 
operand is not evaluated and the result is an integer constant.
*/