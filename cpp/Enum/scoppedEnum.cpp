#include<iostream>
using namespace std;
int main(void){
    enum class MyData { green, red, blue, yellow };
    MyData orange = MyData::green;
    // int b = MyData::blue + 2;    // error
    // int b = MyData::blue;        // error
    // int a = orange + 2; // we cannot do arthemetic operation directly with enum class MyData variable.
    // for (size_t i = (size_t)MyData::green; i <= (size_t)MyData::yellow; i++)
    // {
    //     cout<<i<<endl;
    // }
    //      OR
    for (MyData i = MyData::green; i <= MyData::yellow; i = MyData((int)i + 1))
    {
        cout<<(int)i<<endl;
    }
    
    return 0;
}