#include<iostream>
using namespace std;
class Test
{
    private:
        Test()
        {
            cout<<"Constructor"<<endl;
        }
	public:
		void show()
		{
			cout<<"Show Method"<<endl;
		}
        friend Test getTest();
};
Test getTest(){
    Test t;
    return t;
}

int main()
{
	Test t = getTest();
	t.show();
	return 0;
}