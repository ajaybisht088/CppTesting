#include <iostream>
using namespace std;
#include <memory>
 
class Rectangle {
    int length;
    int breadth;
 
public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
 
    int area()
    {
        return length * breadth;
    }
};
int main(){
    unique_ptr<Rectangle> myPtr1(new(nothrow) Rectangle(20, 4));
    cout<<"myPtr1->Area : "<<myPtr1->area()<<endl;
    unique_ptr<Rectangle> myPtr2 = move(myPtr1);
    cout<<"myPtr2->Area : "<<myPtr2->area()<<endl;
    cout<<"myPtr1->Area : "<<myPtr1->area()<<endl;  // program get crashed when trying to access
                                                    // myPtr1
    return 0;
}