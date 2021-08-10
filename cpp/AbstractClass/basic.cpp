#include<iostream>
using namespace std;

// // An abstract class with constructor
// class Base
// {
// protected:
// int x;
// public:
// virtual void fun() = 0;
// Base(int i) {
// 			x = i;
// 			cout<<"Constructor of base called\n";
// 			}
//             void faltu(){
//                 cout<<"This is faltu fun of Base"<<endl;
//             }
// };

// class Derived: public Base
// {
// 	int y;
// public:
// 	Derived(int i, int j):Base(i) { y = j; }
//     // void abc(){cout<<"TDerived abc here"<<endl;}
// 	void fun() { cout << "x = " << x << ", y = " << y<<'\n'; }
// };

struct abc{
	public:
	int x = 1;
	int y = 2;
};

int main(void)
{
	// Derived d(4, 5);
	// d.fun();
    // d.faltu();
	abc a1 = {10, 20};
	// cout<<a1.x<<endl;
	// cout<<a1.y<<endl;
//object creation using pointer of base class
	// Base *ptr=new Derived(6,7);
	// ptr->fun();
	int a = 10;
	char c = 'A';
	int *p = &a;
	
	cout<<*p<<endl;
	return 0;
}
