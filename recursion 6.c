#include<stdio.h>
int sum (int n);
void main()
{
int s,n;
printf("enter n value");
scanf ("%d",&n);
s=sum(n);
printf("sum of n numbers=%d",s);
return 0;
}

int sum (int n)
{
if (n==0)
return 0;
else
return n+sum(n-1);
}