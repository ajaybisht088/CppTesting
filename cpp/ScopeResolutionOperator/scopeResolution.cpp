#include <iostream>
using namespace std;
int i = 50;
int main(){
    int i = 15;
    {
        int i = 12;
        cout<<::i<<endl;
    }
    cout<<::i<<endl;
    return 0;
}