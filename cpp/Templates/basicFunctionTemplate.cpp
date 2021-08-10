#include<iostream>
using namespace std;

template<class M>
M myMax(M x, M y){
    return x>y ? x:y;
}

int main(){
    /****First type that we can use this type also******* 
    cout<<"for int : "<<myMax(3, 5)<<endl;    // Here myMax atomatically deduce whic type of data it is
    cout<<"for double : "<<myMax(7.2, 5.8)<<endl;
    /****************************************************/ 
    cout<<"for double : "<<myMax<double>(7.2, 5.8)<<endl;   // Call myMax for double
    cout<<"for int : "<<myMax<int>(7.2, 5.8)<<endl;         // Call myMax for int
    cout<<"for char : "<<myMax<char>('d', 'k')<<endl;         // Call myMax for char
    return 0;
}