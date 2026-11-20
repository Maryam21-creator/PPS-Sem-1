#include<stdio.h>
void main()
{
int N[4],i,s=1;
printf("enter 4 values");
for (i=0; i<4; i++)
{
scanf("%d",&N[i]);
}
for (i=0; i<4; i++)
{
s=s*N[i];
}
printf("s=%d",s);
}
