#include<iostream>
using namespace std;
class MyClass; // Forward declaration
class MyClass{
    private:
        string name;
        int age;
    public:
        void setNameAge(string name = "None" , int age = 18 )   // setter with default arguement initialization
        {
            this->name = name;
            this->age = age;
        }
        string getName() const // getter
        {
            // this->name = "lodu"; // gett an error bcz we can't 
            // assign values to name variable/attribute bcz its function 
            // is of const.  
            return this->name;
        }
        int getAge() const  // getter
        {
            return this->age;
        }
};
int main(){
    MyClass cls1;
    cls1.setNameAge();  // with no arguements
    cout<<cls1.getName()<<endl;
    cout<<cls1.getAge()<<endl;
    cls1.setNameAge("chunnu");  // with only name arguement
    cout<<cls1.getName()<<endl;
    cout<<cls1.getAge()<<endl;
    cls1.setNameAge("chunnu", 32);  // with all the arguements
    cout<<cls1.getName()<<endl;
    cout<<cls1.getAge()<<endl;
    // cout<<"public variable  = "<<cls1.pub1<<endl;
}