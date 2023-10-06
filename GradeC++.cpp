#include<iostream>
using namespace std;
class getGrade
{
	public:
	int avg;
	getGrade(int avg)
	{
	if(avg<=100 && avg>=80)
       cout<<"Average is "<<avg<<"\nOutstanding you get grade A!!!";
    else if(avg<80 && avg>=60)
       cout<<"Average is "<<avg<<"\nYou get grade B.";
    else if(avg<60 && avg>=40)
       cout<<"Average is "<<avg<<"\nYou can do better than grade C.";
    else if(avg<40 && avg>=0)
       cout<<"Average is "<<avg<<"\nBetter luck next time!!!Your grade is F.";
    else
       cout<<"Enter correct marks!!";
	}	
};
int main()
{
    int avg;
   cout<<"Enter your average marks:  ";
   cin>>avg;
   getGrade g(avg);
   return 0;
}