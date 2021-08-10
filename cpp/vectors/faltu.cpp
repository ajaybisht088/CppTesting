#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
/****************************** begin() and end() ******************************* 
int main(){
    vector <int> arr {2, 5 , 3 , 7 , 6 , 1 , 0 , 4, 8};
    int intArr[] = {2, 5 , 3 , 7 , 6 , 1 , 0 , 4, 8};
    sort(arr.begin(), arr.end());
    // sort(intArr.begin(), intArr.end());  // error
    // cout<<arr.at(3)<<endl;
    // unsigned int *p = &(arr[0]); // not possible as it is a vector not array
    printf("%d\n",arr.begin()); // -> beginning address of the vector arr
    printf("%d\n",&(arr[0]));   // -> same as arr.begin()
    vector <int> :: iterator ptr;
    for(ptr = arr.begin(); ptr != arr.end() ; ptr++){
        cout<<*ptr<<" "<<endl;
    }
    return 0;
}

// Note-
// arr.begin() -> returns the starting address(or the first element address) of vector arr.
// arr.end() -> returns the last address(or the last element address) of vector arr.
/************************************** advance() ******************************************
int main(){
    vector <int> arr {2, 5 , 3 , 7 , 6 , 1 , 0 , 4, 8};
    vector <int> :: iterator ptr = arr.begin();
    cout<<*ptr<<endl;   // 2
    advance(ptr, 3);    // moves pointer ptr to 4th position of the vector arr.
    cout<<*ptr<<endl;  // 7
    return 0;
}
/********************************* next() and prev() *********************************/ 
int main(){
    vector <int> arr {2, 5 , 3 , 7 , 6 , 1 , 0 , 4, 8};
    vector <int> :: iterator ptr = arr.begin();
    cout<<*ptr<<endl;   // 2
    cout<<*next(ptr)<<endl;  // 5  // -> it returns the address of next element in vector array.
    cout<<*ptr<<endl;  // 2
    ptr += 3;  // increment the pointer ptr by 3
    cout<<*ptr<<endl;  // 7
    cout<<*prev(ptr)<<endl; // 3 // -> it returns the address of previous element in vector array.
    cout<<*ptr<<endl;  // 7
    return 0;
}
