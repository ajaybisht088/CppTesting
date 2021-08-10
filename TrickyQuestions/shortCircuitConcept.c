#include<stdio.h>
/*
Short Circuit concept using && operator.
As we know && operator needs two operands to perform the operation,
So if (a<4) which means first operands comes to true then it will also
 check another operand that is a++, but if the first operand becomes False 
 that is if (a>4) then it will not check the other operand and leaves it which
  makes a shortCircuit for && case. 
*/
// void main(){
//     int val, a = 3;
//     val = (a>4)&&(a++);
//     printf("val = %d\n", val);
//     printf("a = %d", a);
// }
/*
Short Circuit concept using || operator.
As we know || operator needs two operands to perform the operation,
So if (a>4) which means first operands comes to False then it will also
 check another operand that is a++, but if the first operand becomes True 
 that is if (a<4) then it will not check the other operand and leaves it which
  makes a shortCircuit for || case. 
*/
void main(){
    int val, a = 3;
    val = (a<4)||(a++);
    printf("val = %d\n", val);
    printf("a = %d", a);
}