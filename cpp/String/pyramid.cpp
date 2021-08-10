#include <iostream>
using namespace std;
int main(){
    string pyramid {};
    int row, col, mid, counter = 0;
    cout<<"Enter a string for a pyramid : ";
    cin>>pyramid;
    cout<<endl;
    row = pyramid.size();
    col = (2*pyramid.size())-1;
    mid = col/2;
    for(int r = 0; r<row; r++){
        for(int c = 0; c<col; c++){
            if((c>=mid-r)&&(c<=mid+r)){
                if(c<mid){
                    cout<<pyramid.at(counter);
                    ++counter;
                }
                else{
                    cout<<pyramid.at(counter);
                    --counter;
                }
            }
            else {
                counter=0;
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}