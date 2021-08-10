#include<iostream>
using namespace std;
int main(){
    int &&a = 10;    // assigning rvalue(10) to rvalue reference(&&a) 
    //int &&b = a;     // we cannot assign lvalue(a) to rvalue reference(&&b)
    cout<<"a : "<<a<<endl;
    a = 20;
    cout<<"a : "<<a<<endl;
    return 0;
}