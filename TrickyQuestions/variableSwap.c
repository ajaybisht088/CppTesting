#include<stdio.h>  

int swap(int, int);
int swap(int a, int b)
{
    a=a+b;
    b=a-b; 
    a=a-b; 
    printf("\nAfter swap a=%d b=%d",a,b);    
    return 0;  
}

int main()    
{    
    int a=10, b=20;      
    printf("Before swap a=%d b=%d",a,b);   
    swap(a, b);
    return 0;     
}  