#include <iostream>  
using namespace std;  
class sumDigits
{
int m,n,sum=0;
public:
	sumDigits(int n)
	{
	   while(n>0)    
       {    
         m=n%10;    
         sum=sum+m;    
        n=n/10;    
       }  
	     cout<<"Sum of digits is= "<<sum<<endl;     
    } 
};
int main()  
{  
int n;   
cout<<"Enter a number to find the sum of its digits: \n";    
cin>>n; 
sumDigits s(n);
return 0;
}