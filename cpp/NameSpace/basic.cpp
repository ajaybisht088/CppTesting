#include<iostream>
using namespace std;
/********************************************************
namespace mySpace {
    class Person
    {
    private:
        string name;
        int age;
    public:
        Person(string nm , int ag):name(nm), age(ag) {};
        string getName() const { return name; }
        int getAge() const { return age; }
    };
}
/*********************************************************
int main(){
    mySpace::Person p1("Rinku", 32);
    cout<<"Name : "<<p1.getName()<<endl;
    cout<<"Age : "<<p1.getAge()<<endl;
    return 0;
}
/**********************************************************
int main(){
    using namespace mySpace;
    Person p1("Rinku", 32);
    cout<<"Name : "<<p1.getName()<<endl;
    cout<<"Age : "<<p1.getAge()<<endl;
    return 0;
}
/***********************************************************/
/***********************************************************
namespace mySpace {
    class Person
    {
    private:
        string name;
        int age;
    public:
        Person(string , int);
        string getName() const;
        int getAge() const;
    };
}
mySpace::Person::Person(string nm , int ag):name(nm), age(ag) {};
string mySpace::Person::getName() const { return name; }
int mySpace::Person::getAge() const { return age; }

int main(){
    mySpace::Person p1("Rinku", 32);
    cout<<"Name : "<<p1.getName()<<endl;
    cout<<"Age : "<<p1.getAge()<<endl;
    return 0;
} 
/***********************************************************/
namespace mySpace {
    class Person
    {
    private:
        string name;
        int age;
    public:
        Person(string , int);
        string getName() const;
        int getAge() const;
    };
}
using namespace mySpace;
Person::Person(string nm , int ag):name(nm), age(ag) {};
string Person::getName() const { return name; }
int Person::getAge() const { return age; }

int main(){
    Person p1("Rinku", 32);
    cout<<"Name : "<<p1.getName()<<endl;
    cout<<"Age : "<<p1.getAge()<<endl;
    return 0;
} 