#include<iostream>
#include<string>
using namespace std;
class Concatenation
{
	public:
		string s1,s2;
		string operator +(Concatenation s)
		{
			return s1+s2;
		}
};
int main()
{
	Concatenation c;
	cout<<"Enter string 1:";
	cin>>c.s1;
	cout<<"Enter string 2:";
	cin>>c.s2;
	cout<<"Concatented String is:"<<(c.s1+c.s2);
	return 0;
}