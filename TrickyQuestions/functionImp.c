// This program gives the output without declaring function prototype before main(),
// its possible only in case of int return type function.
#include<stdio.h>
char fun();

void main(){
    int a = fun();
    printf("a = %d", a);    // o/p => 10 if int fun() was there, and gives error 
                            // when other then int return type was there. 
}

char fun()
{
    return 'A';
}

// if we place char return type in place of int then we got an error, if 
// you want to check that error then uncomment the below code and comment 
// out the above fun() function.
// char fun()
// {
//     return 10;
// }
// The reason of error with char return type below the main() without declaring 
// the function prototype is the compiler assumes fuction at the time of calling 
// as int return type and when called and if finds other return type then it gives 
// an error
