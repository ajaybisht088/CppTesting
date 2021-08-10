#include <iostream>
using namespace std;
int main(){
    string str1 {"hello"}, str2 {"world"};
    // string abc = "new" + " world";  // Wrong way of initializing a Sting variable
    cout<<"str1 = "<<str1<<endl;
    cout<<"str2 = "+str2<<endl;
    cout<<str1<<" "+str2<<endl;
    return 0;
}