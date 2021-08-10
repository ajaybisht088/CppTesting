#include<iostream>
#include<algorithm>
using namespace std;

void showArr(int size, int arr[]){
    for (size_t i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    cout<<"unsorted array : "<<endl;
    int size = sizeof(arr)/sizeof(int);
    showArr(size, arr);
    sort(arr, arr + size);
    cout<<"sorted array : "<<endl;
    showArr(size, arr);
    return 0;
}