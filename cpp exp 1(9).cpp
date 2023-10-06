#include<iostream>
using namespace std;
int main()
{
	int row,col,a[100][100],i,j;
	cout<<"Enter number of rows:\n";
	cin>>row;
	cout<<"Enter number of columns:\n";
	cin>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"\nEnter element:";
			cin>>a[i][j];
		}
	}
	cout<<"\nThe matrix is:\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}