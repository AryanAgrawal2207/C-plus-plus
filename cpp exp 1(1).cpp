#include<iostream>
using namespace std;
int main()
{
	int p,r,n,si;
	cout<<"Enter principal,rate of interest and time period:\n";
	cin>>p>>r>>n;
	si=p*r*n/100;
	cout<<"The simple interest is:"<<si;
}
