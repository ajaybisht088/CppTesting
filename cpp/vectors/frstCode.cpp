#include<iostream>
#include<vector>
using namespace std;

int main()
{
    /*************************************************/ 
    // char ch[10] = "abcd";
    vector <int> abc {10, 20, 30};
    cout<<"abc.size() = "<<abc.size()<<endl;
    abc.push_back(40);
    cout<<"abc.size() = "<<abc.size()<<endl;
    for(auto i = 0; i <abc.size();i++)
        cout<<abc[i]<<endl;
    abc.begin();
    // cout<<x;
    // cout<<"abc.begin() = "<<abc.begin()<<endl;
    // cout<<"abc.cbegin() = "<<abc.cbegin()<<endl;
    // cout<<"abc.rbegin() = "<<abc.rbegin()<<endl;
    return 0;
}