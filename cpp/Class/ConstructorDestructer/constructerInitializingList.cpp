#include<iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;
public:
    // Constructer Overloading Below
    Person();
    Person(string);
    Person(string , int);
    void showDetails();
};
Person::Person():name{"None"}, age{0} {}
Person::Person(string locName):name{locName} , age{0} {}
Person::Person(string locName, int locAge):name{locName}, age{locAge} {}

void Person::showDetails(){
    cout<<"Name : "<<this->name<<endl;
    cout<<"Age : "<<this->age<<endl;
}

int main(){
    Person p1;
    p1.showDetails();
    Person p2("Ramanlal");
    p2.showDetails();
    Person p3("Chandu", 35);
    p3.showDetails();
    return 0;
}