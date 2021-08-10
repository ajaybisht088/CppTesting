#include<iostream>
#include<cstring>
using namespace std;
class MyString
{
private:
    char *str;
public:
    MyString(const char*);
    MyString& operator=(const MyString &rhs);
    // MyString(MyString &&rhs);
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
MyString& MyString::operator=(MyString const &rhs){
    if(this == &rhs) { return *this;}
    delete [] str;
    str = new char[strlen(rhs.str)+1];
    strcpy(str, rhs.str);
    cout<<"Assignment operator Overloading called for str : "<<str<<endl;
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