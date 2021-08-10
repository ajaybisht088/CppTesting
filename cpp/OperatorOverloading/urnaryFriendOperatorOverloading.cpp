#include<iostream>
using namespace std;
class MyNum{
    int n1;
    public:
    MyNum(int x):n1{x} {}
    void showNum(){ cout<<"n1 : "<<n1<<endl; }
    friend int operator++(MyNum &ob);
    friend int operator++(MyNum &ob, int x);
};
int operator++(MyNum &ob){ cout<<"pre"<<endl; return ++ob.n1; }
int operator++(MyNum &ob, int x){ cout<<"post"<<endl; return ob.n1++; }
int main()
{
  MyNum num1{10};
  cout<<"++num1 : "<<++num1<<endl;
  cout<<"num1++ : "<<num1++<<endl;
  num1.showNum();
  return 0;
}