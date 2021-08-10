#include<iostream>
#include<cstring>
using namespace std;
class Address {
    int bn,st;
    long zip;
    char loc[50];
    char city[50];
    char state[50];
    public:
        Address(){}
        Address(int bn,int st,long zip, char loc[], char city[], char state[])
        {
            this->bn = bn;
            this->st = st;
            this->zip = zip;
            strcpy(this->loc, loc);
            strcpy(this->city, city);
            strcpy(this->state, state);
        }
        void show()
        {
            cout<<"Building Number : "<<bn<<endl;
            cout<<"Street Number : "<<st<<endl;
            cout<<"Locality : "<<loc<<endl;
            cout<<"City : "<<city<<endl;
            cout<<"State : "<<state<<endl;
        }
};
class Student {
    int roll;
    char name[25];
    Address a;   //Entity Reference
    public:
    Student(int roll, char name[], Address &a){
        this->roll = roll;
        strcpy(this->name, name);
        this->a = a;
    }
    void show()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Roll : "<<roll<<endl;
    }
};
		
int main()
{
    Address a(5, 6, 7, "abc", "ghaziabad", "UP");
    Student st1(10, "Ajay", a);
    st1.show();
    a.show();
    // delete st1;    
    return 0;
}