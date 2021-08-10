#include <iostream>
using namespace std;
class Parent
{
    private:
        int id_p;
    public:
        Parent() : id_p{0} {
            cout<<"Parent def const called for id_p : "<<id_p<<endl;
        }
        Parent(int val) : id_p{val} {
            cout<<"Parent para const called for id_p : "<<id_p<<endl;
        }
};
  
class Child : public Parent
{
    private:
        int id_c;
    public:
        Child(){cout<<"Child def const called"<<endl;}
        Child(int val) : Parent(val), id_c(val) {
            cout<<"Child para const called"<<endl;
        }
};
 
int main(){
    cout <<"##############################################"<< endl;
    Child c1;
    cout <<"##############################################"<< endl;
    Child c2{10};
    cout <<"##############################################"<< endl;
    return 0;
} 
