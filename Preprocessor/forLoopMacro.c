#include<stdio.h>
#define FOR_LOOP(n)  for(i=0; i<(n); i++)
int i;
void main(){
    FOR_LOOP(3)
    {
    puts("Inside for loop\n");
    }
}