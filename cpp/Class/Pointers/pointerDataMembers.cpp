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
    ~Test(){
        cout<<"Destructer here and freed the data : "<<*data<<endl;
        delete data;
    }

};

int main(){
    Test t1(20);
    cout<<"t1.data = "<<t1.data<<endl;   // address that is allocated
    cout<<"*t1.data = "<<*t1.data<<endl; // 20
}