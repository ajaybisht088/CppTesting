#include <iostream>
using namespace std;
void abc(int&);
void abc(int &b){
    b = 50;
}
int main() {
    int a  = 10;
    cout<<"a = "<<a<<endl;
    abc(a);
    cout<<"a = "<<a<<endl;
	return 0;
}