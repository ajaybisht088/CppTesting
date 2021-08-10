#include<iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;
public:
    Person();   // Declaing a constructer
    ~Person();  // Declaring a destructer
};

Person::Person() // definig a constructer
{
    cout<<"Constructer Called."<<endl;
}

Person::~Person() // defining a destructer
{
    cout<<"Destructer Called."<<endl;
}

int main(){
    Person p1;
    return 0;
}