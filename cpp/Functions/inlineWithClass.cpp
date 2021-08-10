/* Example of inline function with class.
   Note->In C++ class by default member function of the class
   is inline function only if it is one line instruction.
*/
#include <iostream>
using namespace std;
class AddingNumbers{
    public:
        int fun(int a, int b) { return a+b; }
};
int main() {
    AddingNumbers add;
    int sum = add.fun(10, 20);
    cout<<"sum = "<<sum<<endl;
	return 0;
}