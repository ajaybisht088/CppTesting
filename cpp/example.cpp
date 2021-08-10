#include<iostream>
using namespace std;
class Time
{
    private:
        int hh,mm,ss;
        int h12;
    public:
        void show()
        {
            cout<<hh<<":"<<mm<<":"<<ss<<endl;
        }
        Time operator+(Time t); //Member function
        // Time operator-(Time t) //Member Function
        // {
        // }
};
Time Time::operator+(Time t) {
    Time tmp;
    tmp.hh=hh+t.hh;
    tmp.mm=mm+t.mm;
    tmp.ss=ss+t.ss;

    if(tmp.ss>60) {
        tmp.ss=tmp.ss-60;// or  tmp.ss=tmp.ss%60;
        tmp.mm++;
    }
    if(tmp.mm>60) {
        tmp.mm=tmp.mm-60;// or  tmp.mm=tmp.mm%60;
        tmp.hh++;
    }
    if(t.h12==0) {
        if(t.hh>12) {
            tmp.hh=tmp.hh-12;// or  tmp.hh=tmp.hh%12;
        }
    }
    else {
        if(t.hh>24) {
            tmp.hh=tmp.hh-24;// or  tmp.hh=tmp.hh%24;
        }
    }
    return tmp;
}
int main(){
    Time t1;
    t1  =  operator+t1;
    return 0;
}