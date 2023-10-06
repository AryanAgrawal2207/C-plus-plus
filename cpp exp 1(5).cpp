#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,m;
	cout<<"Enter a number to find the sum of its digits:\n";
	cin>>n;
	while(n>0)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
	}
	cout<<"The sum of digits is="<<sum;
}
