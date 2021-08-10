/*********************************************************** 
// C++ program without declaring the
// move constructor
#include <iostream>
#include<cstdio>
#include <vector>
using namespace std;

// Move Class
class Move {
private:
	// Declaring the raw pointer as
	// the data member of the class
	int* data;

public:
	// Constructor
	Move(int d)
	{
		// Declare object in the heap
		data = new int;
		*data = d;

		cout << "Constructor is called for "
			<< d << endl;
	};

	// Copy Constructor to delegated
	// Copy constructor
	Move(const Move& source):Move{*source.data}
	{

		// Copying constructor copying
		// the data by making deep copy
		cout << "Copy Constructor is called - "
			<< "Deep copy for "
			<< *source.data
			<< endl;
	}

	// Destructor
	~Move()
	{
		if (data != nullptr)

			// If the pointer is not
			// pointing to nullptr
			cout << "Destructor is called for "
				<< *data << endl;
		else

			// If the pointer is
			// pointing to nullptr
			cout << "Desturctor is called"
				<< " for nullptr"
				<< endl;

		// Free the memory assigned to
		// data member of the object
		// delete data;
	}
};

// Driver Code
int main()
{
	// Create vector of Move Class
	vector<Move> vec;

	// Inserting object of Move class
	vec.push_back(Move{ 10 });
	// cout<<"----------------------vec-----------------"<<endl;
	// printf("%d", vec[0]);
	// cout<<"----------------------vec-----------------"<<endl;
	// vec.push_back(Move{ 20 });
	return 0;
}
/*********************************************************************/
#include <iostream>
#include<cstdio>
#include <vector>
using namespace std;
class MyClass {
private:
	int *data;
public:
	MyClass(int x = 0);
	MyClass(const MyClass& value);
	MyClass(MyClass&& value);
	int getData() const;
	~MyClass();
};

MyClass::MyClass(int x):data(new int(x)) {
	cout<<"Constructer called for : "<<*data<<endl;
}

MyClass::MyClass(const MyClass& value):data(new int(*value.data)){
	cout<<"copy constructer is called for : "<<*data<<endl;
}
MyClass::MyClass(MyClass&& value):data(value.data){
	value.data = nullptr;
	cout<<"Move constructer is called for  : "<<*data<<endl;
}

MyClass::~MyClass(){
	if(data == nullptr){
		cout<<"Destructer called for : nullptr"<<endl;
	}
	else{
		cout<<"Destructer called for : "<<*data<<endl;
	}
	delete data;
}

int MyClass::getData() const { return *data; }

int main(void){
	// MyClass cls1 = 10;
	MyClass cls2{MyClass{10}};
	// cout<<"our data1 is : "<<cls1.getData()<<endl;
	// {
	// 	MyClass cls2 = cls1;
	// 	cout<<"our data1 is : "<<cls2.getData()<<endl;
	// 	cout<<"our data2 is : "<<cls2.getData()<<endl;
	// }
	// cout<<"our data1 is : "<<cls1.getData()<<endl;
	// vector<MyClass> arr;
	// arr.push_back(MyClass{10});
	// arr.push_back(MyClass{20});
	return 0;
}