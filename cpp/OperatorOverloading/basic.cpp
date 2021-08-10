#include<iostream>
using namespace std;
class MyClass
{
private:
    int a;
    int b;
public:
    MyClass(int a = 0, int b  = 0): a{a}, b{b} {}
    MyClass operator+(MyClass const &obj);
    void show();
};

MyClass MyClass::operator+(MyClass const &obj){
    MyClass cls;
    cls.a = a + obj.a;
    cls.b = b + obj.b;
    return cls;
}

void MyClass::show() {
    cout<<" a : "<<a<<endl;
    cout<<" b : "<<b<<endl;
}
/**********************************************/ 
int main(){
    MyClass cls1(2, 3), cls2(4, 5);
    cls1.show();
    cls2.show();
    // MyClass cls3 = cls1.operator+(cls2);    // Or we can write as cls3 = cls1 + cls2;
    MyClass cls3 = cls1+cls2;    // Or we can write as cls3 = cls1 + cls2;
    cls3.show();
    return 0;
}
/**********************************************
int main(){
    MyClass cls1(2, 3), cls2(4, 5);
    // cls1.show();
    // cls2.show();
    MyClass cls3 = cls1 + cls2;           // It means cls3 = cls1.operator+(cls2);
    cls3.show();
    return 0;
}
/**********************************************/ 