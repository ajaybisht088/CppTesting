#include<iostream>
using namespace std;
class Person {
    public:
        string name;
        int age;
    public:
        Person(string , int);
        void showDetails();
        void setDetails(string , int);
};
Person::Person(string name, int age): name(name), age(age) {}
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
    p2.showDetails();
    p1.setDetails("Akumo", 35);
    p1.showDetails();
    p2.showDetails();
    return 0; 
}