// #include<stdio.h>
// void main(){
//     char i  = 0, ch[10][10] = {"Hello",
//                             "Buffalo",
//                             "Yellow",
//                             "abcdef",
//                             "ghijkl",
//                             "mnopqr",
//                             "stuvwx",
//                             "yzabcd",
//                             "Ajay",
//                             "Pankaj"};
//     for (i=0; i<10; i++){
//         printf("ch = %s\n", ch[i]);
//     }
// }

#include<stdio.h>
void main(){
    char i  = 0, ch[5][10] = {"Hello",
                            "Buffalo",
                            "Yellow",
                            "abcdef",
                            "ghijkl",}; 
    for (i=0; i<5; i++){
        for (int j=0; j<10; j++){
            // printf("%c", ch[i][j]);      // method one to print
            // printf("%c", *(*(ch+i)+j));  // method two to print
            printf("%c", (*(ch+i))[j]);  // method three to print
            // printf("%c", *(ch[i]+j));    // method four to print
        }
        printf("\n");
    }
    // //  OR
    // for (i=0; i<10; i++){
    //     printf("\n%s", *(ch+i));         // method five to print
    // }
}
// Note that *(c+i) = c[i];
//  This is a very important case of array as pointer or pointer as an array.