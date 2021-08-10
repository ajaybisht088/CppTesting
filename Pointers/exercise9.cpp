#include<iostream>
#include<cmath>
using namespace std;
class point
{
    int x, y;
    // friend void distance(point, point);
    public:
    point(int a, int b)  //constructor declaration
    {
        x= a;
        y= b;
    }
    void displaypoint()
    {
        cout<<"The point id is ("<<x<<" ,"<<y<<")\n"<<endl;
    } 
    // friend void distance(point, point);
    void distance(point o1, point o2)
    {
        double d, d1, d2;
        d1= pow(o2.x-o1.x,2);
        d2= pow(o2.y-o1.y,2);
        d= sqrt( d1 + d2 );
        cout<<"Distance is "<<d;
    }
};

int main()
{
    point p1(0, 1);         //Implicit call
    p1.displaypoint();
    
    point p2= point(0, 6);  //EXplicit call
    p2.displaypoint();

    p1.distance(p1, p2);
    return 0;
}