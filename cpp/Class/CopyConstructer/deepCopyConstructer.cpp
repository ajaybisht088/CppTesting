#include<iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;
public:
    Person(string , int);
    Person(const Person &p1); //Deep Copy constructer Declared
    void showDetails();
    void setDetails(string name, int age);
};
// Default Arguements values.
Person::Person(string name, int age): name(name), age(age) {}
Person::Person(const Person &p1) {name = p1.name; age = p1.age;} // DCC defined
void Person::showDetails(){
    cout<<"Name : "<<this->name<<endl;
    cout<<"Age : "<<this->age<<endl;
}

void Person::setDetails(string name="None", int age=0) {
    this->name = name;
    this->age = age;
}

int main(){
    Person p1 = {"Chinku", 10};
    p1.showDetails();
    Person p2 = p1;
    // Person p2(p1);
    p2.showDetails();
    p1.setDetails("heeralal", 32);
    p1.showDetails();
    p2.showDetails();
    return 0;
}