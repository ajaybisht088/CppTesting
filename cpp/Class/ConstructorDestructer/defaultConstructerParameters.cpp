#include<iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;
public:
    // Person() {} // we can't overload the constructer while using default Arguement values
    Person(string , int);
    void showDetails();
};
// Default Arguements values.
Person::Person(string name = "None", int age = 0): name{name}, age{age} {
    this->name = name;
    this->age = age;
}

void Person::showDetails(){
    cout<<"Name : "<<this->name<<endl;
    cout<<"Age : "<<this->age<<endl;
}

int main(){
    Person p1;
    p1.showDetails();
    Person p2("Tinku", 10);
    p2.showDetails();
    return 0;
}