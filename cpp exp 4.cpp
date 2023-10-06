#include<iostream>
using namespace std;
class Demo
{
	public:
	int a,b;
	Demo(int x,int y)
	{
		a=x;
		b=y;
	}
	~Demo()
	{
		cout<<"Destructor is here\n";
	}
};
int main()
{
	int a,b;
	Demo d(10,100);
	cout<<"The value of a is:\n"<<d.a<<endl<<"The value of b is:\n"<<d.b<<endl;
	return 0;
}