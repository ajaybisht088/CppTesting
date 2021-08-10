#include<iostream>
using namespace std;
class MyClass; // Forward declaration
class MyClass{
    private:
        int pvt1;       // instance variable
        void pvtFun()   // instance method
        {
            cout<<"private variable : "<<pvt1<<endl;
        }
    protected:
        int prt1;       // instance variable
        void prtFun()   // instance method
        {
            cout<<"protected variable : "<<prt1<<endl;
        }
    public:
        int pub1;       // instance variable
        void init(){
            pvt1 = 10;
            prt1 = 20;
            pub1 = 30;
        }
        void pubFun()   // instance method
        {
            prtFun();
            pvtFun();
        }
};
int main(){
    MyClass cls1;
    cls1.init();
    cout<<"public variable  = "<<cls1.pub1<<endl;
    cls1.pubFun();
    // MyClass::cls1.pvtFun();
}
// Note -  we can access public members only in our main function, and 
// private and protected memebers can only accessed by the class memners only. 
// Protected members can also be accessed by the child classes members. 