#include<iostream>
using namespace std;
template<class temp>
class MyNum{
private:
    temp x;
    temp y;
public:
    MyNum(temp locX = 0, temp locY = 0);
    temp getNumX() const;
    temp getNumY() const;
    void setXY(temp locX = 0, temp locY = 0);
    ~MyNum();
};

template<class temp>
MyNum<temp>::MyNum(temp locX, temp locY) :x{locX}, y{locY} 
{ cout<<"Constructer called"<<endl; }

template<class temp>
MyNum<temp>::~MyNum() { cout<<"Destructer called"<<endl; }

template<class temp>
temp MyNum<temp>::getNumX() const { return x; }

template<class temp>
temp MyNum<temp>::getNumY() const { return y; }

template<class temp>
void MyNum<temp>::setXY(temp locX, temp locY){
    x = locX; y =  locY;
}

int main(){

    MyNum<int> num{10, 20};
    cout<<"x = "<<num.getNumX()<<endl;
    cout<<"y = "<<num.getNumY()<<endl;
    cout<<"*********************************************"<<endl;
    MyNum<double> num2(30.12, 40.34);
    cout<<"x = "<<num2.getNumX()<<endl;
    cout<<"y = "<<num2.getNumY()<<endl;
    return 0;
}
/**************************************************/ 