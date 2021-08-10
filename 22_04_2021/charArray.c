#include<stdio.h>
// caharacter array is very different from other arrays as it is a null('\0') terminated array

int main(){
    char arr[25];
    arr[0] = 'H';
    arr[1] = 'e';
    arr[2] = 'l';
    arr[3] = 'l';
    arr[4] = 'o';
    printf(arr);
    return 0;
}