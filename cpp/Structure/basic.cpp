#include<iostream>
using namespace std;
struct MyStruct;
struct MyStruct{
    char ch;
    int i;
    float x;
    void show();
};
void MyStruct::show(){
    cout<<"its show()"<<endl;
}
int main(void){
    // struct ::MyStruct{   // Not possible
    //     char ch;
    //     int i;
    //     float x;
    //     void show();
    // };
    // union MyStruct abc = {'A', 23, 45.5f};    // only value 'A' remains the sharable memory and rest were executed and ignored.
    MyStruct abc = {'A', 10, 25.6};
    cout<<"ch = "<<abc.ch<<endl;
    cout<<"i = "<<abc.i<<endl;
    cout<<"x = "<<abc.x<<endl;
    abc.show();
    return 0;
}