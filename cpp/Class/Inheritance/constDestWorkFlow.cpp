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
class Child:public Parent {
	public:
		Child()
		{
			cout<<"Child's Constructor"<<endl;
		}
		~Child()
		{
			cout<<"Child's Destructor"<<endl;
			
		}
};
class GrandChild:public Child{
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