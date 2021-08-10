#include<iostream>
using namespace std;

class SmartPointer{
    private:
    int *ptr;
    public:
    explicit SmartPointer(int *p = nullptr) { ptr = p; cout<<"Constructer called for : "<<*ptr<<endl; }
    ~SmartPointer() { 
        if(ptr == nullptr){
            cout<<"destructer called for : nullptr"<<endl;
        }
        else{
            cout<<"destructer called for : "<<*ptr<<endl;
        }
        delete ptr; }
    int& operator*() { cout<<"value assignedto *ptr : "<<*ptr<<endl; return *ptr; }
};

int main(){
    SmartPointer optr(new int());
    *optr = 10;
    cout<<*optr<<endl;
    return 0;
}