#include<stdio.h>
void main(){
    int val, a = 3;
    // val = ((a>4)&&(a++))||(a>2);
    val = (a>4)&&(a++);
    printf("val = %d\n", val);
    printf("a = %d", a);
}

// OUTPUT => val = 0
//           a = 3