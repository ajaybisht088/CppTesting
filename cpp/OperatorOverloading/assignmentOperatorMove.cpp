#include<iostream>
#include<cstring>
using namespace std;
class MyString
{
private:
    char *str;
public:
    MyString(const char*);
    // MyString& operator=(const MyString &rhSource);
    // MyString(MyString &&rhSource);
    MyString(){cout<<"Constructer called"<<endl;}
    MyString &operator=(MyString &&rhSource);
    void show();
    ~MyString();
};
MyString::~MyString() {
    if(str==nullptr){cout<<"Destructer Called for : nullptr"<<endl;}
    else { cout<<"Destructer Called for : "<<str<<endl; }
    delete []str;
}
MyString::MyString(const char *s):str{nullptr} {
    if(s==nullptr){
        str = new char[1];
        str[0] = '\0';
        cout<<"String with null created"<<endl;
    }
    else{
        str = new char[strlen(s)+1];
        strcpy(str, s);
        cout<<"String : "<<str<<" created"<<endl;
    }
}
// MyString::MyString(MyString &&source):str{source.str}{
//     source.str = nullptr;
//     cout<<"Moved Constructer is used"<<endl;
// }
MyString &MyString::operator=(MyString &&rhSource) {
    if(this == &rhSource) { return *this;}
    delete []str;
    str = rhSource.str;
    rhSource.str = nullptr;
    cout<<"Assignment operator Overloading called"<<endl;
    return *this;
}

void MyString::show() {
    cout<<"str : "<<str<<endl;
}
/**********************************************/
int main(){
    MyString cls1{"Hello"};
    {
        cls1=MyString{"World"};
        cls1.show();
    }
    cls1.show();
    return 0;
}
/**********************************************/ 