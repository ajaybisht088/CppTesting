#include<stdio.h>
void main(){
    int i;
    for (i = 0; i < 20; i++)
    {
        switch (i)
        {
            case 0: i += 5;
            case 1: i += 2;
            case 5: i += 5;
            default: i += 4;
        }
        printf("\na = %d", i);
    }
}





// OUTPUT => a = 16
//           a = 21
// Because there is no break after the case.