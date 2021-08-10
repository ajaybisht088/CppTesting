#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    string a {"abcdefghijk"};
    char* p = &a[0];
    cout<<"sizeof p = "<<sizeof(p)<<endl;
    cout<<"sizeof a = "<<sizeof(a)<<endl;
    printf("p =  %d\n",p);
    printf("p+1 =  %d\n", p + 1);
    printf("a =  %d\n", a);
    printf("a =  %d\n", &a[0]);
    for(int i = 0; i < a.size() ; i++){
        cout<<*(p+i);
        printf("  %d\n", p+i);
    }
    return 0;
}