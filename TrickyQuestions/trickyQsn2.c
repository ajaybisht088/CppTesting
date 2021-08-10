#include<stdio.h>

void main(){
    int i = -5;
    while(i<=5)
    {
        if(i>=0)
            break;
        else
        {
            i++;
            continue;
        }
        printf("Hi!\n");
    }
}
// OUTPUT => No OUTPUT will be seen as the program is not going to the printf("Hi!\n"); statement.