// Example of inline function
#include <iostream>
using namespace std;
inline int fun(int a, int b){
    return a+b;
}
int main() {
    int sum = fun(10, 20);
    cout<<"sum = "<<sum<<endl;
	return 0;
}