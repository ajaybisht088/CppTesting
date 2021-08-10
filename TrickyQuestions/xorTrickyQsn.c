#include<stdio.h>
void main(){
    int a = 4;  //  binary = 00000100
    int b = 3;  //  binary = 00000011
    a = a^b;    //  = 00000111
    b = a^b;    //  = 00000100
    a = a^b;    //  = 00000011
    printf("a  = %d, b = %d", a, b);
    getch();
}
// Note this program simply swap the values of a and b.
// Or we can say that swaping using XOR operator.