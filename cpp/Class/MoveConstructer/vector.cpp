#include <iostream>
#include<cstdio>
#include <vector>
using namespace std;
int main(){
	// vector<int> arr(4);
    // cout<<arr.size()<<endl; // 4
    // for (size_t i = 0; i < 4; i++)
    // {
    //     cout<<arr.at(i)<<endl;
    // }
	vector<int> arr;
    // cout<<arr.size()<<endl;
    arr.push_back(10);
    cout<<arr.at(0)<<endl;
    // cout<<arr.size()<<endl;
    arr.push_back(20);
    cout<<arr.at(1)<<endl;
    // cout<<arr.size()<<endl;
    arr.push_back(30);
    cout<<arr.at(2)<<endl;
    cout<<arr.size()<<endl;
    // arr.pop_back();
    arr.erase(arr.begin() + 1);
    cout<<arr.size()<<endl;
    vector<int>::iterator it = arr.begin();

    for (size_t i = 0; i < 3; i++)
    {
        cout<<arr[i]<<endl;
    }
    
	return 0;
}