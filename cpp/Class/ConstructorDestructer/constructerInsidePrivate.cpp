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
        static Test getTest(){
            Test t;
            return t;
        }
};

int main()
{
	Test t = Test::getTest();
	t.show();
	return 0;
}