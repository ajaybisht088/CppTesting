#include <iostream>
#include <string>

using namespace std;

int main() {
    void abc(); // Note that we declare a function prototype inside a function 
                // but we cannot define a function inside another function
    abc();
	return 0;
}

void abc(){
        cout<<"abc function here!!!!"<<endl;
}