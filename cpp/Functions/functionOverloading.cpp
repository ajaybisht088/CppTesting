#include <iostream>
using namespace std;
void abc(int);
void abc(char);
void abc(double);
void abc(int val){
    cout<<"int argument function and val = "<<val<<endl;
}
void abc(char val){
    cout<<"char argument function and val = "<<val<<endl;
}
void abc(double val){
    cout<<"double argument function and val = "<<val<<endl;
}
void abc(int val1, char val2){
    cout<<"int val1 = "<<val1<<", char val2 = "<<val2<<endl;
}
void abc(int val1, char val2, double val3){
    cout<<"int val1 = "<<val1<<", char val2 = "<<val2<<\
    ", double val3 = "<<val3<<endl;
}
int main() {
    abc(2);
    abc('A');
    abc(3.5);
    abc(4, 'B');
    abc(6, 'C', 12.6);
    return 0;
}