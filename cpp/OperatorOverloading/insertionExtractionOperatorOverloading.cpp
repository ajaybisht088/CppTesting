/*********************************************************
In C++, stream insertion operator “<<” is used for output and 
extraction operator “>>” is used for input.
We must know the following things before we start overloading these operators. 
1) cout is an object of ostream class and cin is an object of istream class.
2) These operators must be overloaded as a global function. And if we want to allow 
   them to access private data members of the class, we must make them friend.
/*********************************************************/

#include<iostream>
using namespace std;
class MyNum{
    int x;
    int y;
    public:
    MyNum():x{0}, y{0} {}
    friend istream& operator>>(istream&, MyNum&);
    friend ostream& operator<<(ostream&, const MyNum&);
};
istream& operator>>(istream& in, MyNum &ob){ 
    cout<<"Enter x : ";
    in >> ob.x;
    cout<<"Enter y : ";
    in >> ob.y;
    return in; 
}
ostream& operator<<(ostream& out, const MyNum &ob){
    out << ob.x + ob.y << endl;
    return out;
}
int main()
{
  MyNum num;
  cin>>num;
  cout<<"x + y : ";
  cout<<num;
  return 0;
}