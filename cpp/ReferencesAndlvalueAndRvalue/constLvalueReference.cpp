#include<iostream>
using namespace std;
int main(){
    // int &a = 10; // we cannot assign rvalue(10) to lvalue reference
    const int& a = 50;  // but we can make it constant type of lvalue
                // reference and initialize a constant value(rvalue) to it.
    // a = 60; // error -> beacuse a is of contant type and we cannot assign
            // another values to it
    int b = 10;
    // a = b;   // error -> because a is a constant type which means it has a 
                // address of read only memory so we cant assign any values to it.
    return 0;
}