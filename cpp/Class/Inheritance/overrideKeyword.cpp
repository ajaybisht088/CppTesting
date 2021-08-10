#include <iostream>
using namespace std;
class Parent{
    public:
    virtual void show(){ cout<<"Parent show()"<<endl; }
};
class Child: public Parent{
    public:
    void show() override { cout<<"Child show()"<<endl; }
};
int main(){
    Child c1;
    c1.show();
    return 0;
}