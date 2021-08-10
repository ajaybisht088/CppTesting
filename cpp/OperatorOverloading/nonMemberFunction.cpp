//##############Non Member fuction/ Global function Overloading############### 
#include <iostream>
 
class MyNum
{
private:
    int num;
public:
    MyNum(const int n) : num{n} {std::cout<<"MyNum is called"<<std::endl;}
    int getnum() const { return num; }
    friend MyNum operator+(const MyNum& lhs, const MyNum& rhs);
};
// note: this function is not a member function!
MyNum operator+(const MyNum& lhs, const MyNum& rhs){
	// use the MyNum constructor and operator+(int, int)
	// we can access num directly because this is a friend function
	return MyNum(lhs.num + rhs.num);
}
int main() {
	MyNum num1{ 6 };
	MyNum num2{ 8 };
	MyNum sum = num1 + num2 ;
	std::cout <<"Sum = "<< sum.getnum() <<std::endl;
	return 0;
}