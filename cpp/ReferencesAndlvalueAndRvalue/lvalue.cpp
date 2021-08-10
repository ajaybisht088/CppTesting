#include<iostream>
using namespace std;
int main(){
    // int &a = 10; // we cannot assign rvalue(10) to lvalue reference
    int a = 10;
    int &b = a; //declaring and initializing lvalue(a) to lvalue reference(&b)
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
    b = 20;     
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
    return 0;
}