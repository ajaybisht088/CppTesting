/************************************************
#include<stdio.h>
void main(){
    int i = 10; // let say add of i = 1000
    // int* p = &i;
    int *p;
    p = &i; // 1000
    int* q = &p;
    // q = p;
    // *q = 5;
    printf("*q = %d", *q);
}
/************************************************
#include<stdio.h>
void main(){
    int i = 10; // let say add of i = 1000
    // int* p = &i;
    int *p;
    p = &i; // 1000
    // int** r = &p;
    int** r;
    r = &p;
    printf("&r = %d", &r);    // 80 000
    printf("r = %d", r);    // 20 000
    printf("*r = %d", *r);  // *r = *(&p) = *(20 000) = &i = 1000
    printf("**r = %d", **r); // **r = **(&p) = **(20 000) = *(*(20 000))
                            //  = *(&i) = *(1000) = 10
    // second method // **r = **(&p) = *p = *(&i) = i = 10

}
/************************************************
#include<stdio.h>
void main(){
    int i = 10; // let say add of i = 1000
    int* p = &i;
    char *c;
    float *f;
    double *d;
    long long int *llp;
    void *v;
    // long x;         // long int x;
    // long long x1;   // long long int x1;
    // unsigned x2;    // unsigned x2;
    // signed x3;      // signed int x3;
    // unsigned x4;    // unsigned int x4;
    // printf("*p = %d\n", sizeof(*p));  // 4
    // printf("*c = %d\n", sizeof(*c));  // 1
    // printf("*d = %d\n", sizeof(*d)); // 8
    // printf("*f = %d\n", sizeof(*f));  // 4
    // printf("*llp = %d\n", sizeof(*llp));  // 16
    printf("v = %d\n", sizeof(v));  // 4
    printf("*p = %d\n", sizeof(p));  // 4
    printf("*c = %d\n", sizeof(c));  // 1
    printf("*d = %d\n", sizeof(d)); // 8
    printf("*f = %d\n", sizeof(f));  // 4
    printf("*llp = %d\n", sizeof(llp));  // 16
}
/************************************************
#include<stdio.h>
void main(){
    // char c = 'A';   // 
    // char d = c;
    int a = 10; // a = lvalue, 10 = rvalue
    // int &b = a;
    // b = 20;
    // char cArr[10] = "ABCDEFGHIJ";
    printf("a = %d\n", a);  // 10
    // printf("b = %d\n", b);  // 20
    printf("a = %d\n", a);  // 10
}
/************************************************
#include<stdio.h>
void main(){
    char c = 'A'; // let say add of i = 1000
    // int arr[3] = {1,2,3};
    char cArr[10] = "Gauri lati";
    // cArr = &cArr[0];
    // char* cptr = "ABCDEFGHIJ";
    // char* p = &cArr;
    // printf("cArr[0] = %c\n", cArr[0]);  // A
    // printf("cArr[1] = %c\n", cArr[1]);  // B
    // lets say cArr = &cArr[0] = 1000
    printf("*cArr = %c\n", *cArr);          // G
    printf("*(cArr+1) = %c\n", *(cArr+1)); // a // *(cArr+1) = *(1000+1) = *1001
    printf("*cArr+1 = %c\n", *cArr+1);  // H
    printf("*cArr = %c\n", *cArr);  // G
    printf("*cArr+3 = %c\n", *cArr+3);  // J
    // cArr[0] = *(cArr + 0)
    // *(cArr+3) 0r *cArr + 3
    // *(cArr + 3) = *(1000 + 3) = *1003 = r
    // *cArr + 3 = *1000 + 3 = G + 3 = 72 + 3 = J
    // printf("p = %d\n", p);    //    1000
    // printf("p+1 = %d\n", p+1); //   p+1 = p+(1*4) = 1000 +4 = 1004
    // printf("*(p+1) = %c\n", *(p+1)); // *(1000+4) = *1004 = E
    // printf("p+2 = %d\n", p+2); //   p+2 = p+(2*4) = 1000 + 8 = 1008
    // printf("p+ = %d", p+1);  //   
    // printf("*p++ = %d", *p++);
    // printf("*++p = %d", *++p);
    // printf("*p+1 = %d", *p + 1);
}
/*********************Array as a pointer/ pointer as a array************************
#include<stdio.h>
void main(){
    char cArr[10] = "ABCDEFGHIJ";
    // int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    // arr = &arr[0] = 1000
    // int *ptr = arr;
    // lets say cArr = &cArr[0] = 1000
    // char* cptr = "ABCDEFGHIJ";

    // printf("*arr = %d\n", *(arr+0));    // *(cArr+0) = *(1000 + 0*4) = *1000 = 1 
    // printf("*arr = %d\n", *(arr+1));  // *(cArr+1) = *(1000 + 1*4) = *1004 = 2
    printf("*cArr = %c\n", *(cArr+0));  // 
    printf("*cArr = %c\n", *(cArr+1));  // *(cArr+1) = *(1000 + 1*1)  = *1001 = B
    printf("*cArr = %c\n", *(cArr+2));
    printf("*cArr = %c\n", *(cArr+3));
    printf("*cArr = %c\n", *(cArr+4));
    printf("*cArr = %c\n", *(cArr+5));
}
/*********************************************
#include<stdio.h>
void main(){
    // char cArr[10] = "ABCDEFGHIJ";
    int a[10] = {2,3,4,5,6,7,8,9,1,0};
    int *b = &a;
    int (*c)[] = &a;
    // printf("b[0] = %d\n", b[0]);
    // printf("b[1] = %d\n", b[1]);
    // printf("b[2] = %d\n", b[2]);
    // printf("b[3] = %d\n", b[3]);
    // printf("b[4] = %d\n", b[4]);
    printf("c[0] = %d\n", (*c)[0]);
    printf("c[0] = %d\n", (*c)[0]);
    printf("c[0] = %d\n", (*c)[0]);
    printf("c[0] = %d\n", (*c)[0]);
    // printf("c[1] = %d\n", c[1]);
    // printf("c[2] = %d\n", c[2]);
    // printf("c[3] = %d\n", c[3]);
    // printf("c[4] = %d\n", c[4]);
}
/*******************Array to character pointer**************************/
#include<stdio.h>
void main(){
    // char carr[5][10] = {"ABCDEFGHI",
    //                     "Hello",
    //                     "world",
    //                     "Gauri",
    //                     "Pankaj"};
    char* arr[] = {"ABCDEFGHI",
                        "Hello",
                        "world",
                        "Gauri",
                        "Pankaj"};

    // printf("arr %d\n", arr+1);
    // int a[10] = {2,3,4,5,6,7,8,9,1,0};
    // int *b = &a;
    // int (*c)[] = &a;
    // arr[i][j] = *(*(arr+i)+j)    // *(arr+i)[j]
    // arr[i] = *(arr+i)            // *(arr+i)  [j]
    // for(int i = 0; i < 5; i++){
    //     for(int j = 0; arr[i][j] != '\0'; j++){
    //         // printf("c[i][j] = %c", arr[i][j]);
    //         // printf("%c",arr[i][j]);
    //         // printf("%c",*(*(arr+i)+j));
    //         printf("%c",*(arr+i)[j]);   // *(arr+i)[j] = (*(1000+1))[1] = (*1001)[1]
    //     }
    //      printf("\n");
    // }
}
