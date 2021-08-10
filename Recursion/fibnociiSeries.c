// #include <stdio.h>
// void f(int val) {
//     static int n = 0, n1 = 1;
//     printf("%d ", n);
//     n1 = n+n1;
//     n = n1-n;
//     if (val == 1) return;
//     else f(val-1); }
// int main () {
//   f(9);
//   return 0; }

#include <stdio.h>
int f(int val) {
    if (val == 1||val==0) return val;
    else return (f(val-1)+f(val-2)); }
int main () {
  int faltu = f(4);
  printf("value = %d", faltu);
  return 0; }











  
// OUTPUT => 0 1 1 2 3 5 8 13 21