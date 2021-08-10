#include <iostream>
using namespace std;
/*****************************************************************
int main ()
{
    //int *p = new(std::nothrow) int {10}; // either for *p initialization
    int *p = new(nothrow) int (10);      // or that, use anyone
    if(p == nullptr){
        cout<<"No memory is allocated!!!!!!!!!"<<endl;
    }
    else{
        std::cout<<"*p : "<<*p<<std::endl;
        delete p;
        std::cout<<"*p : "<<*p<<std::endl;
    }
    return 0;
}
/*******************************************************************/ 
int main ()
{
    int *p = new(nothrow) int[10];
    if(p == nullptr){
        cout<<"No memory is allocated!!!!!!!!!"<<endl;
    }
    else{
        *p = 10;
        *(p+1) = 20;
        cout<<"*p : "<<*p<<endl;
        cout<<"*p : "<<*(p+1)<<endl;
        delete [] p;
        cout<<"*p : "<<*p<<endl;
    }
    return 0;
}