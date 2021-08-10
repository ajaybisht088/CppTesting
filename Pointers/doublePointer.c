// #include<stdio.h>
// void main(){
//     int x = 10, *p = &x, **q = &p; 
//     printf("&x = %d\n", &x);
//     printf("p = %d\n", p);
//     printf("*p = %d\n", *p);
//     printf("q = %d\n", q);
//     printf("*q = %d\n", *q);
//     printf("q = %d\n", **q);
//     // printf("*p = %d\n", *p);
// }

#include<stdio.h>
void main(){
    char i  = 0, ch[10][10] = {"Hello",
                            "Buffalo",
                            "Yellow",
                            "abcdef",
                            "ghijkl",
                            "mnopqr",
                            "stuvwx",
                            "yzabcd",
                            "Ajay",
                            "Pankaj"};
    // for (i=0; i<10; i++){
    //     for (int j=0; j<10; j++){
    //         // printf("%c", ch[i][j]);
    //         // printf("%c", *(*(ch+i)+j));
    //         // printf("%c", (*(ch+i))[j]);
    //         printf("%c", *(ch[i]+j));
    //     }
    //     printf("\n");
    // }
    // //  OR
    for (i=0; i<10; i++){
        printf("\n%s", *(ch+i));
    }
}

// Note that *(c+i) = c[i];
//  This is a very important case of array as pointer or pointer as an array.