#include<stdio.h>  
 int main()    
{    
int n,sum=0,m;    
printf("Enter a number to find the sum of its digits: \n");    
scanf("%d",&n);    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
printf("Sum of digits is=%d",sum);
return 0;  
}   