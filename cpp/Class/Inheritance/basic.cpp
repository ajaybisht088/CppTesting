#include <iostream>
using namespace std;
 
//Base class
class Parent
{
    private:
        int privateX;
    protected:
        int protectedX;
    public:
        int publicX;
};
  
// Sub class inheriting from Base Class(Parent)
class Child : public Parent
{
    public:
        int id_c;
        // int getPrivateX() const { return privateX; } // error , can't access private member of parent class in child class
        int getProtectedX() const { return protectedX; }
        int getPublicX() const { return publicX; }
        void setPubPro(int pub = 0, int pro = 0 ) {
            this->publicX = pub;
            this->protectedX = pro;
        }
};
 
//main function
int main(){
    Child obj1;
        
    // An object of class child has all data members
    // and member functions of class parent
    obj1.id_c = 7;
    obj1.publicX = 91;
    obj1.setPubPro(10, 20);
    cout << "Child id is " <<  obj1.id_c << endl;
    cout << "Parent id is " <<  obj1.publicX << endl;
    cout << "publicX " <<obj1.getPublicX()<< endl;
    cout << "protectedX " <<obj1.getProtectedX()<< endl;
    
        
    return 0;
}