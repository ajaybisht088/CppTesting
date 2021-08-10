#include<stdio.h>

void main(){
    char c = 127;
    printf("\nc = %d", c);  // o/p => c = 127
    c = 128;
    printf("\nc = %d", c);  // o/p => c = -128
    c = 255;
    printf("\nc = %d", c);  // o/p => c = -1
    c = 256;
    printf("\nc = %d", c);  // o/p => c = 0
    c = 265;
    printf("\nc = %d", c);  // o/p => c = 9
}
/* NOTE =>  Range of signed char = -128 to -1 and 0 to 127
            which means it worked from clockwise as described in given below
                  -1  0
                -2 |  | 1 
               . |      | 2
             . |          | 3
           . |              | 4
         . |                  | .
           . |              | .
             . |          | .
               . |      | .
              -127 |  | 126
                -128  127

                And Range of unsigned char = 0 to 255
*/
