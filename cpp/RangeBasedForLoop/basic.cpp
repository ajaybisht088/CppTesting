#include <iostream>
using namespace std;
int main(){
    cout<<"----------EXAMPLE OF RANGE BASED FOR LOOP--------------"<<endl;
    string str1 {"hello"};
    cout<<"----------using int--------------"<<endl;
    for (int i:str1){
        cout<<i<<endl;
    }
    cout<<"----------using char--------------"<<endl;
    for (char i:str1){
        cout<<i<<endl;
    }
    cout<<"----------using auto--------------"<<endl;
    for (auto i:str1){
        cout<<i<<endl;
    }
    return 0;
}