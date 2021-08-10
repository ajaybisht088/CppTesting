/******************************* Example 1 ******************************************
#include <iostream>
using namespace std;

class Base {};
class Derived:public Base {};

int main(){
    // Base b;
    Derived b;
    try{
        throw b;
    }
    catch(Derived dd) {
        cout<<"Derived Exception"<<endl;
    }
    catch(Base bb) {
        cout<<"Base Exception"<<endl;
    }
    return 0;
}
// Note - If both base and derived classes are caught as exceptions then catch block 
// of derived class must appear before the base class. 
/******************************* Example 2 ******************************************/ 
#include <iostream>
using namespace std;

class demo1 {};

class demo2 : public demo1 {};

int main()
{
	for (int i = 1; i <= 2; i++) {
		try {
			if (i == 1)
				throw demo1();
			else if (i == 2)
				throw demo2();
		}
		catch (demo2 d2) {
			cout << "Caught exception of demo2 class \n";
		}
		catch (demo1 d1) {
			cout << "Caught exception of demo1 class \n";
		}
	}
}
/***************************************************************************************/ 