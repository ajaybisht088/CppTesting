#include<iostream>
#include<vector>
using namespace std;
int main(void) {
    // int arr[10] {0};
    vector<int> arr {1,2,3,4,5,6,7,8,9,0};
    for (size_t i = 0; i < 10; i++) {
        cout<<arr.at(i)<<endl;
    }
    return 0;
}