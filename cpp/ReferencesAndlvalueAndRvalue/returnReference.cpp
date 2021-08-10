#include<iostream>
using namespace std;

class Test
{
private:
    int x;
    int y;
public:
    Test(int x1=0, int y1=0):x{x1}, y{y1} {}
    Test& setx(int x){ this->x=x; cout<<this<<endl; return *this; }
    Test& sety(int y){ this->y=y; cout<<this<<endl; return *this; }
    void show() { cout<<"x : "<<this->x<<endl; cout<<"y : "<<this->y<<endl;}
};

int main()
{
    Test t1(0, 0);
    t1.show();
    /***********************************
    t1.setx(20).sety(30);       // basic type that we want to uderstand
    t1.show();
    /***********************************
    (t1.setx(20)).sety(30).show();
    /***********************************
    ((t1.setx(20)).sety(30)).show(); // Actually it works like this
    /***********************************/ 
    t1.setx(20).sety(30).show();    // Best method to use chain function call
// Chained function calls. All calls modify the same object
// as the same object is returned by reference
return 0;
}
