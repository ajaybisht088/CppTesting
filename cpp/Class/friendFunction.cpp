#include<iostream>
using namespace std;
class Test
{
    private:
    int i;
        Test()
        {
            cout<<"Constructor"<<endl;
        }
    protected:
        int j;
	public:
		void show()
		{
			cout<<"value of i = "<<i<<endl;
			cout<<"value of j = "<<j<<endl;
		}
        friend Test getTest();
};
Test getTest(){
    Test t;     // making instance of Test, Note here constructor is private
    t.i = 20;   // accessing the private variable
    t.j = 30;   // accessing the protected variable
    return t;
}

int main()
{
	Test t = getTest();
	t.show();
	return 0;
}