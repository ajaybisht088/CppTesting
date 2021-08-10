#include<stdio.h>
#define VAL 10  // it is a convension followed by the programmers 
                // to define a macro using capital letters.
                // In this VAL is macro template and 10 is its macro expansion.

void main(void) {
    // VAL = 11;    // we cannot change the value of a macro definition
    printf("%d", VAL);
}