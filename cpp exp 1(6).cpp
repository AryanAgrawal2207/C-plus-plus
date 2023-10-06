#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,z;
	float e;
	cout<<"Enter 2 numbers=";
	cin>>a>>b;
	do
	{
		cout<<"\nMenu\n1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\nEnter choice number:";
		cin>>c;
		switch(c)
		{
			case 1:
				{
					d=a+b;
					cout<<d;
				}
			break;
			case 2:
				{
					d=a-b;
					cout<<d;
				}
			break;
			case 3:
				{
					d=a*b;
					cout<<d;
				}
			break;
			case 4:
				{
					e=a/b;
					cout<<e;
				}
			break;
			default:
				{
					cout<<"\nInvalid choice";
				}
		}
	cout<<"\nPress 1 to continue..";
	cin>>z;
	}
	while(z==1);
	return 0;
}
