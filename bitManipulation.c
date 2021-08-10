#include<stdio.h>
#define PIN_1 0
#define PIN_2 1
#define PIN_3 2
// 1 byte = 8 bits
// char a = 13;
// char a = 0x00;  // hexadecimal representation
// a = 0b  0   0    0   0    1    1    0   1;
//                     2^4  2^3  2^2  2^1  2^0
//                      0 +  8  +  4  +  0  + 1
//                      = 13               
// a<<2;
// 0       0       0       0       1       1       0       1       <<      2

// 0       0       1       1       0       1       0       0
// 2^7     2^6     2^5     2^4     2^3     2^2    2^1     2^0
//  0    +  0   +  32   +   16   +  0  +   4  +   0   +   0
//  =52
// 0 0 0 0 0 0 0 0  

// OR logic table
// 0|0 = 0
// 0|1 = 1
// 1|0 = 1
// 1|1 = 1

// AND & logic table 
// 0&0 = 0
// 0&1 = 0
// 1&0 = 0
// 1&1 = 1
// XOr logic table 
// 0^0 = 0
// 0^1 = 1
// 1^0 = 1
// 1^1 = 0
// 0 0 1 1 1 0 0 1
// 0 0 0 0 0 0 0 1
// 0 0 0 0 0 0 0 1

void main(){
    char a = 53;
    a = ~a;
    a |= (1<<PIN_1);
    a = ~a;
    // a = a & (0<<PIN_1);
    printf("%d", a);
}

// #define PIN_4 3
// #define PIN_5 4
// #define PIN_6 5
// #define PIN_7 6
// #define PIN_8 7

// void main(void) {
//     unsigned char dumpData = 0;
// dumpData |= ~((1<<PIN_8)|(1<<PIN_7)|(1<<PIN_6)|(1<<PIN_5)|(1<<PIN_4)|(0<<PIN_3)|(0<<PIN_2)|(0<<PIN_1));
//     // dumpData |= (~((1<<PIN_3)|(1<<PIN_2)|(1<<PIN_1)));
//     printf("%u", dumpData);
// }