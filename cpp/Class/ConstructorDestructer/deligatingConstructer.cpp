#include<iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;
public:
    Person();
    Person(string , int);
    void showDetails();
};
Person::Person() : Person::Person{"None", 0}    // delegating constructer
{
    cout<<"Default Constructer is called"<<endl;
}

Person::Person(string name, int age){
    cout<<"Parametrised Constructer is called"<<endl;
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