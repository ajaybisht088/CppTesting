#include <iostream>
using namespace std;
 
//Base class
class Parent
{
    private:
        int id_p;
    public:
        int getPID() const { return id_p; }
        void setID(int set){ 
            id_p = set; 
            cout<<"Parent id is set to : "<<id_p<<endl;
        }
};
  
class Child : public Parent
{
    private:
        int id_c;
    public:
    void setID(int set){ 
        id_c = set; 
        cout<<"Child id is set to : "<<id_c<<endl;
    }
};

int main(){
    Child c1;
    c1.setID(10);
    cout << "Child id is " <<c1.getPID()<< endl;
    return 0;
} 