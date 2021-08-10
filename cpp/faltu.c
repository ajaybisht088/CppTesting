#include<stdio.h>
// void main(){
//     char c[4] = "abcd";
//     int i = 0;
//     // while(c[i]!='\0'){
//     //     printf("\n%c",c[i]);
//     //     i++;
//     // }
//     for(; i < 10; i++){
//         printf("\n%d",c[i]);
//     }
// }

// int main()
// {
//     char *c;
//     c = "abcdefghi""qwerty";
// //    printf(5 + "GeeksQuiz");
//    printf("%s",c);
//    return 0;
// }

#include <stdarg.h>
// int fun(int n, ...)
// {
//     int i, j = 1, val = 0;
//     va_list p;
//     va_start(p, n);
//     for (; j < n; ++j)
//     {
//         i = va_arg(p, int);
//         val += i;
//     }
//     va_end(p);
//     return val;
// }
int fun(int n, ...)
{
    
    return n;
}
int main()
{
    printf("%d", fun(4, 1, 2, 3));
    return 0;
}