#include<iostream>
using namespace std;
int a = 0;
int& fun() {
    return a;
}
int main(){
    cout<<"a : "<<a<<endl;
    fun() = 10;
    cout<<"a : "<<a<<endl;
    return 0;
}
