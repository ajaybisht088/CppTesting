#include <iostream>
using namespace std;

// This function signature is fine by the compiler, but not recommended.
// Ideally, the function should specify all uncaught exceptions and function
// signature should be "void fun(int *ptr, int x) throw (int *, int)"
void fun(int *ptr, int x) throw (int *, int )
{
	if (ptr == NULL)
		throw ptr;
	if (x == 0)
		throw x;
	/* Some functionality */
}

int main()
{
	try {
	fun(NULL, 0);
	}
	catch(...) {
		cout << "Caught exception from fun()"<<endl;
	}
	return 0;
}

// Note : The use of Dynamic Exception Specification has been deprecated 
// after C++11, one of the reason maybe because it can randomly abort your program. 
// This can happen when you throw an exception of an another type which is not mentioned 
// in the dynamic exception specification, your program will abort itself, because in that
//  scenario program calls(indrectly) terminate(), and which is by default call abort()