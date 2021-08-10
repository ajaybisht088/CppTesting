#include<iostream>
using namespace std;
template<class tempType1, class tempType2>
class MyNum{
private:
    tempType1 x;
    tempType2 y;
public:
    MyNum(tempType1 locX = 0, tempType2 locY = 0);
    tempType1 getNumX() const;
    tempType2 getNumY() const;
    ~MyNum();
};

template<class tempType1, class tempType2>
MyNum<tempType1, tempType2>::MyNum(tempType1 locX, tempType2 locY){
    x = locX; y = locY;
}

template<class tempType1, class temptype2>
MyNum<tempType1, temptype2>::~MyNum(){ cout<<"Destructer called"<<endl;}

template<class tempType1, class tempType2>
tempType1 MyNum<tempType1, tempType2>::getNumX() const { return x; }

template<class tempType1, class tempType2>
tempType2 MyNum<tempType1, tempType2>::getNumY() const { return y; }

int main(){
    MyNum<int , double> num1(10, 20.12);
    cout<<"x : "<<num1.getNumX()<<endl;
    cout<<"Y : "<<num1.getNumY()<<endl;
    return 0;
}