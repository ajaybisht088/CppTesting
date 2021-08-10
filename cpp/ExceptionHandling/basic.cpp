#include<iostream>

using namespace std;
int main(){
    int x = -1;
    try {
        throw x;
        if(x<0){
            cout<<"True"<<endl;
        }
        else { cout<<"False"<<endl; }
    }
    catch(int x) { cout<<"Exception occurs : "<< x <<endl; }
    return 0;
}