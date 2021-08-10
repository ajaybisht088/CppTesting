#include<iostream>
using namespace std;
class Test{
    public:
    int *data;
    Test(int data){
        this->data =  new int;
        *this->data = data;
        cout<<this->data<<endl;
        cout<<*this->data<<endl;
    }

};

int main(){
    Test t1(20);
    cout<<"t1.data = "<<t1.data<<endl;
    cout<<"*t1.data = "<<*t1.data<<endl;
}