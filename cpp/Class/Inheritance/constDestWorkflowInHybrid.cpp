#include<iostream>
using namespace std;
class Parent{
	public:
		Parent()
		{
			cout<<"Parent's Constructor"<<endl;
		}
		~Parent()
		{
			cout<<"Parent's Destructor"<<endl;
			
		}
};
class Child1:public Parent {
	public:
		Child1()
		{
			cout<<"Child1's Constructor"<<endl;
		}
		~Child1()
		{
			cout<<"Child1's Destructor"<<endl;
			
		}
};
class Child2:public Parent{
	public:
		Child2()
		{
			cout<<"Child2's Constructor"<<endl;
		}
		~Child2()
		{
			cout<<"Child2's Destructor"<<endl;
			
		}
};
class GrandChild:public Child1, public Child2{
	public:
		GrandChild()
		{
			cout<<"GrandChild's Constructor"<<endl;
		}
		~GrandChild()
		{
			cout<<"GrandChild's Destructor"<<endl;
		}
};
int main()
{
	GrandChild gc;
	return 0;
}