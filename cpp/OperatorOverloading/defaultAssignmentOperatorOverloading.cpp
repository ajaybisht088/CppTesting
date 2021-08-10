#include<iostream>
using namespace std;
class MyClass
{
private:
    int a;
    int b;
    int *ptr;
public:
    MyClass(int a = 0, int b  = 0, int data = 0): a{a}, b{b} {
        ptr = new int;
        *ptr = data;
    }
    void operator=(const MyClass &obj);
    void show();
    ~MyClass() {
        delete ptr;
        cout<<"Destructer Called"<<endl;
    }
};

void MyClass::operator=(const MyClass &obj){
    MyClass cls;
    a = obj.a;
    b = obj.b;
    *ptr = *obj.ptr;
    cout<<"Assignment operator Overloading called"<<endl;
}

void MyClass::show() {
    cout<<" a : "<<a<<endl;
    cout<<" b : "<<b<<endl;
    cout<<" *ptr : "<<*ptr<<endl;
}
/**********************************************/
int main(){
    MyClass cls1(2, 3, 10);
    {
        MyClass cls2(4, 5, 20);
        cls1 = cls2;
        cls1.show();
    }
    cls1.show();
    return 0;
}
/**********************************************/ 