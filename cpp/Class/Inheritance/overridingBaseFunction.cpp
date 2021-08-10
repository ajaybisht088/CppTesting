#include <iostream>
using namespace std;
class Parent{
    public:
        void show(){ cout<<"Parent show()"<<endl; }
};
class Child : public Parent{
    public:
        // function override by using same function name which is in parent class
        void show() { cout<<"Child show()"<<endl; }
};
int main(){
    Child c1;
    c1.show();
    return 0;
}