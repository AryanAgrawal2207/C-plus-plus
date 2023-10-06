#include<stdio.h>
int main()
{
    int avg;
    printf("Enter your average marks in 3 subjects:  ");
    scanf("%d",&avg);
    if(avg<=100 && avg>=80)
       printf("average is %d\nOutstanding you get grade A!!!!!!",avg);
    else if(avg<80 && avg>=60)
       printf("average is %d\nYou get grade B.",avg);
    else if(avg<60 && avg>=40)
       printf("average is %d\nYou can do better than grade C.",avg);
    else if(avg<40 && avg>=0)
       printf("average is %d\nBetter luck next time!!!Your grade is F.",avg);
    else
       printf("Enter correct marks!!");
    return 0;
}