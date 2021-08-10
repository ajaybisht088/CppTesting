#include <stdio.h>
// void main()
// {
//     int x=20;
//     printf("%d,%d,%d,%d,%d\n",x, x++,x++, ++x, x--);
//     // printf("%d,%d,%d\n",x++, ++x, x--);
//     // printf("%d,%d,%d\n",++x, ++x, ++x);
// }
// void main(){
//     int i = 5;
//     char c = 'A';
//     printf("i = %d, c = %d", sizeof(i), sizeof(c));
// }

// int main(void)
// {

// float x=0.26;

// float y=0.26;

// if(x==0.26f)
//     printf("A");
// else
//     printf("B");

// if(y==0.26f)
//     printf ("C");
// else
//     printf("D");

//     return 0;
// }

// int reverse(int n)
// {
//     static int r, rnum = 0;

//     if (n > 0)
//     {
//         r = n % 10; //3    2    1
//         n = n / 10; //12   1    0
//         rnum = rnum * 10 + r; // 3  32  321  
//         reverse(n);
//         return rnum;
//     }
//     else
//         return n;
// }

// void main()
// {
//     int z = reverse(123);
//     printf("reverse is %d", z);
// }