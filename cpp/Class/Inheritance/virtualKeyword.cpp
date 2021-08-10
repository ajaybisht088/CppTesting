#include <iostream>
using namespace std;
class Parent{
    public:
    virtual void show(){ cout<<"Parent show()"<<endl; }
    void print(){ cout<<"Parent print()"<<endl; }
};
class Child: public Parent{
    public:
    void show() { cout<<"Child show()"<<endl; }
    void print() { cout<<"Child print()"<<endl; }
};
int main(){
    Child c1;
    Parent* ptr = &c1;
    ptr->show();
    ptr->print();
    return 0;
}