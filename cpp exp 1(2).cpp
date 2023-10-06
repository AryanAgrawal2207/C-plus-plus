#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int t1=0,t2=1;
	int next=t1+t2;
	cout<<"Enter the number of terms to be printed:\n";
	cin>>n;
	cout<<"Fibonacci series is:"<<t1<<","<<t2<<",";
	for(i=3;i<=n;++i)
	{
		cout<<next<<",";
		t1=t2;
		t2=next;
		next=t1+t2;
	}
}
