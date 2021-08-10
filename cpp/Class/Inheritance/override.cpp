#include<iostream>
using namespace std;

class Shape {
    public:
    virtual void draw(){ cout<<"Shape Drawn"<<endl;}
};
class Circle:public Shape {
    public:
    void draw(){ cout<<"Circle Drawn"<<endl; }
};
class Rectangel:public Shape {
    public:
    void draw(){ cout<<"Rectangle Drawn"<<endl; }
};

int main() {
    Circle c;
    c.draw();
    Rectangel r;
    r.draw();
    Shape *sptr;
    sptr = &c;
    sptr->draw();
    return 0;
}