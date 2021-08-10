#include<iostream>
using namespace std;
union MyUnion{
    char ch;
    int i;
    float x;
    void show();
};
int main(void){
    // union MyUnion abc = {'A', 23, 45.5f};    // only value 'A' remains the sharable memory and rest were executed and ignored.
    MyUnion abc = {11};
    cout<<"ch = "<<abc.ch<<endl;
    cout<<"i = "<<abc.i<<endl;
    cout<<"x = "<<abc.x<<endl;
    abc.show();
    return 0;
}
void MyUnion::show(){
    cout<<"its show()"<<endl;
}