// Note -> its not necessary that the size of the pointer is of 4 bytes,
// as it is dependent on OS, CPU artitecture etc.
// Note all pointers have same size but the data type of the pointers makes
// the arthematic operations according to the size of the data type.
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    char a {'A'}, *b = &a;
    int c {10}, *d = &c;
    long double e, *f = &e;
    cout<<"sizeof a(char) = "<<sizeof(a);   // gives 1 byte
    cout<<"   sizeof b(char*) = "<<sizeof(b)<<endl; // gives 4 byte
    cout<<"sizeof c(int) = "<<sizeof(c);    // gives 4 byte
    cout<<"   sizeof d(int*) = "<<sizeof(d)<<endl;  // gives 4 byte
    cout<<"sizeof e(long doule) = "<<sizeof(e); // gives 12 byte
    cout<<"   sizeof f(long doule*) = "<<sizeof(f)<<endl;   // gives 4 byte
    cout<<"---- As u can see all pointer variables contains same size that is 4 ----"<<endl;
    printf("b = %d", b);
    printf("    b+1 = %d\n", b+1);
    printf("d = %d", d);
    printf("    d+1 = %d\n", d+1);
    printf("f = %d", f);
    printf("    f+1 = %d\n", f+1);
    return 0;
}