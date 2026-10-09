#include<stdio.h>
int main()
{
int n;
printf("enter n value") ;
scanf("%d",&n);
if (n>0)
{
printf("positive");
}
else
if (n<0)
{
printf("negative");
}
else
printf("zero");
}