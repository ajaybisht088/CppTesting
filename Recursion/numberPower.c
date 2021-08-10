#include <stdio.h>
int power(int, int);
int power(int num, int pwr) {
    if (pwr == 0) return 1;
    else return num*power(num, pwr-1); }
int main () {
    int n = power(3, 3);
    printf("3^3 = %d", n);
    return 0; }