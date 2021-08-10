#include<iostream>
#include<cstring>
using namespace std;
class MyNum
{
private:
    int *ptr;
public:
    MyNum(int);
    // MyNum& operator=(const MyNum &rhSource);
    // MyNum(MyNum &&rhSource);
    MyNum(){cout<<"Constructer called"<<endl;}
    int& operator++(int);
    int& operator++();
    int getNum() const;
    ~MyNum();
};
MyNum::~MyNum() {
    if(ptr==nullptr){cout<<"Destructer Called for : nullptr"<<endl;}
    else { cout<<"Destructer Called for : "<<*ptr<<endl; }
    delete ptr;
}
MyNum::MyNum(int n):ptr{nullptr} {
        ptr = new int;
        *ptr = n;
        cout<<"Memory allocated for *ptr  = "<<*ptr<<endl;
}
/**********************POST INCREAMENT***************************/ 
int& MyNum::operator++(int) {
    (*ptr)++;
    return *ptr;
}
/*****************##########PRE INCREMENT#####*********************/ 
int& MyNum::operator++() {
    (*ptr)++;
    return *ptr;
}
/*************************************************/ 
int MyNum::getNum() const{ return *ptr; }
/*************************************************/
int main(){
    MyNum num{10};
    // num++;
    // cout<<"num = "<<num.getNum()<<endl;
    cout<<"num++ = "<<num++<<endl;
    cout<<"++num = "<<++num<<endl;
    return 0;
}
/**************************************************/ 