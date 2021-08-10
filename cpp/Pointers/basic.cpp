#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int a = 10, *p = &a;
    cout<<"p = "<<p<<endl;
    cout<<"&a = "<<&a<<endl;
    cout<<"&p = "<<&p<<endl;
    cout<<"sizeof p = "<<sizeof(p)<<endl;
    cout<<"sizeof a = "<<sizeof(a)<<endl;
    printf("p =  %d\n",p);
    printf("p+1 =  %d\n",p+1);
    cout<<"*p = "<<*p<<endl;
    return 0;
}