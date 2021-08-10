#include<iostream>
using namespace std;
class Parent{
    private:
    void privateShow(){
        cout<<"Private here!!!"<<endl;
    }
    public :
    void show(){
        cout<<"Parent here!!!"<<endl;
    }
    protected:
    void protect(){
        cout<<"Protected Here!!!"<<endl;
    }
};
class Child: public Parent{
    public:
    void childProtect(){
        protect();
    }
};

int main()
{
    Child ch;
    ch.show();
    ch.childProtect();
    // ch.privateShow();
    return 0;
}