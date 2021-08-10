#include<iostream>
using namespace std;
// int add(int x, int y){
//     return x + y;
// }
int x = 20;
int fun(){
    return x;
}
int main(){
    int (*ptr)() = fun;
    cout<<ptr()<<endl;
    return 0;
}