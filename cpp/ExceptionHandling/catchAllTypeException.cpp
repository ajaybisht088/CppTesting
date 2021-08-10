#include<iostream>

using namespace std;
int main(){
    char ch = 'A';
    try {
        throw ch;
        if(ch<0){
            cout<<"True"<<endl;
        }
        else { cout<<"False"<<endl; }
    }
    catch(...) { cout<<"Exception occurs!!! "<<endl; }
    return 0;
}