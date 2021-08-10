#include <stdio.h>  
void main()  
{  
    int a[10]={5, 2, 3};  
    int b=2;  
    // const int* ptr = &a;  
    int* ptr = a;  
    *ptr++;
    // *ptr = 30;
    // ptr=&a;  
    // ptr=&b;  
    printf("Value of ptr is :%d",*ptr);  
    printf("\nValue of ptr is :%d",a[0]);  
}