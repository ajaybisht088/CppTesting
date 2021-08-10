#include<stdio.h>
void main(){
    int i = 1024, counter = 1;
    for( ; i ; i >>= 1)
        printf("\nHello world %d", counter++);
}
/* OUTPUT => 
Hello world 1
Hello world 2
Hello world 3
Hello world 4
Hello world 5
Hello world 6
Hello world 7
Hello world 8
Hello world 9
Hello world 10
Hello world 11
*/