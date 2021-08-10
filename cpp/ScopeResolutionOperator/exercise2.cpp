#include<iostream>
using namespace std;
class Address
{
    int bn,st;
    long zip;
    char loc[50];
    char city[50];
    char state[50];

    public:
    void init()
    {
        cout<<"Enter Building Number : ";
        cin>>bn;
        cout<<"Enter Street Number : ";
        cin>>st;
        cout<<"Enter Locality : ";
        cin>>loc;
        cout<<"Enter City : ";
        cin>>city;
        cout<<"Enter State : ";
        cin>>state;
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
class Student
{
    int roll;
    char name[25];
    Address a;   //Entity Reference
    public:
    void init()
    {
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Roll No : ";
        cin>>roll;

        a.init();
    }
    void show()
    {
        cout<<"Roll : "<<roll<<endl;
        cout<<"Name : "<<name<<endl;

        a.show();
    }
};
		
int main()
{
    Student st1;
    st1.init();
    st1.show();
    return 0;
}