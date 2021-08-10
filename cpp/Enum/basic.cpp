#include<iostream>
using namespace std;
/*************************************************************************************
int main(void){
    enum MyData { green, red, blue, yellow };   // here green,yellow,red,blue all are enumerators which holds a constant integer value.
    // MyData orange={2,4,6,8};  // error.
    // MyData orange=50;  // error.
    MyData orange=green;  // enum variables.
    orange = (MyData)6;     // takes only enum type of data only. so we cannot directly assign integer to it.
    int y = orange+2;   // yes we can directly do arthemetic operations with enum variables.
    cout<<y<<endl;
    // orange++;       // error.
    // for (size_t i = green; i < orange; i++)
    // {
    //     cout<<i<<endl;
    // }
    //          OR
    for (MyData i = green; i < orange; i = (MyData)(i + 1))
    {
        cout<<i<<endl;
    }
    
    return 0;
}
/*************************************************************************************/ 
int main(void){
    enum MyData : uint8_t { green, red, blue, yellow };
    for (size_t i = green; i <= yellow; i++)
    {
        cout<<i<<endl;
    }
    return 0;
}