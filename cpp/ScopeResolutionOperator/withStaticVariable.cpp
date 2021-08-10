#include <iostream>
using namespace std;
class Student{
    string name;
    int rollNum;
    static int bn;
    public:
        Student() {}
        Student(string name, int rollNum){
            this->name = name;
            this->rollNum = rollNum;
        }
        static void initName(){
            cout<<"Building Number : "<<Student::bn<<endl;
            Student s2("Amreen" , 136);
            cout<<"Roll number : "<<s2.rollNum<<endl; 
            // we cannot use instance variables in static function
        }
        static void change(int newBn){
            Student::bn = newBn;
        }
};
int Student::bn = 12;
int main(){
    // cout<<Student::bn<<endl;
    // Student::initName();
    // Student::change(20);
    // Student::initName();
    Student s1("Ajay", 25);
    s1.initName();
    return 0;
}