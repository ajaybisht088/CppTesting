#include <iostream>
#include <string>
using namespace std;
void abc(string, string, int);
void abc(string name, string school = "V.P.S.",int percentage = 95){
    cout<<name+" of "+school+" got "<<percentage<<"%."<<endl;
}
int main() {
    string name {"Shankar Das"}, school{"Chandigarh School"};
    int percentage {33};
    abc(name);
    abc(name, school);
    abc(name, school, percentage);
	return 0;
}