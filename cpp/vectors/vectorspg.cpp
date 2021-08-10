#include<iostream>
#include <vector>
using namespace std;

int main(){
    /***********************************/
    vector <int> abc {1,5,7,3,9};
    cout<<abc[0]<<endl; // 1
    cout<<abc[1]<<endl; // 5
    cout<<abc[2]<<endl; // 7
    cout<<abc[3]<<endl; // 3
    cout<<abc[4]<<endl; // 9
    cout<<abc[5]<<endl; // gives garbage value at index 5
    /***********************************
    vector <int> abc {1,5,7,3,9};
    cout<<abc.at(0)<<endl;  // 1
    cout<<abc.at(1)<<endl;  // 5
    cout<<abc.at(2)<<endl;  // 7
    cout<<abc.at(3)<<endl;  // 3
    cout<<abc.at(4)<<endl;  // 9
    cout<<abc.at(5)<<endl;  // exception error caught because index 5 is out of range
    /***********************************
    vector <int> abc = {1,5,7,3,9};
    cout<<abc[0]<<endl;
    cout<<abc[1]<<endl;
    cout<<abc[2]<<endl;
    cout<<abc[3]<<endl;
    cout<<abc[4]<<endl;
    /***********************************
    vector <int> abc (5);
    cout<<abc[0]<<endl;
    cout<<abc[1]<<endl;
    cout<<abc[2]<<endl;
    cout<<abc[3]<<endl;
    cout<<abc[4]<<endl;
    cout<<abc[5]<<endl;
    /***********************************
    vector <int> abc (3, 25);
    cout<<abc[0]<<endl; // 25
    cout<<abc[1]<<endl; // 25
    cout<<abc[2]<<endl; // 25
    /***********************************/
    return 0;
}