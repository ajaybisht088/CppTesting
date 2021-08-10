#include<stdio.h>
// #include<string.h>

// void main(){
    // char c = 129;
    // int a  = 6, b = 3;
    // int x = 5;
    // c = c+10;
    // printf("%d = \n%d = \n%d = ", a&b);
// }

// void main()
// {
//     int x=20;
//     printf("%d,%d,%d,%d,%d\n",x, x++,x++, ++x, x--);
//     printf("%d,%d,%d\n",x++, ++x, x--);
//     printf("%d,%d,%d\n",++x, ++x, ++x);
// }
/*
As we know 
*/
void main(){
    int val, a = 3;
    val = (a>4)&&(a++);
    printf("val = %d\n", val);
    printf("a = %d", a);
}