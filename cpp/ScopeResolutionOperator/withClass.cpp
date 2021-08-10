#include <iostream>
using namespace std;
class Person{
    public:
    string name {};
    int age;
    void show();
};
class Student{
    public:
    string name {};
    int rollNum;
    void show();
};
void Person::show(){
    cout<<"Person Name = "<<name<<endl;
    cout<<"Person Age = "<<age<<endl;
}
void Student::show(){
    cout<<"Student Name = "<<name<<endl;
    cout<<"Student Age = "<<rollNum<<endl;
}
int main(){
    Person p1;
    p1.name = "Shankar";
    p1.age = 85;
    Student s1;
    s1.name = "Tiwari";
    s1.rollNum = 2;
    p1.show();
    s1.show();
    return 0;
}