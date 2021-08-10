#include<stdio.h>
void main(){
    char i  = 0, *ch[10] = {"Hello",
                            "Buffalo",
                            "Yellow",
                            "abcdef",
                            "ghijkl",
                            "mnopqr",
                            "stuvwx",
                            "yzabcd",
                            "Ajay",
                            "Pankaj"};
    for (i=0; i<10; i++){
        printf("ch = %s\n", ch[i]);
    }
}