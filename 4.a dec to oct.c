#include<stdio.h>
int main()
{
	int n,oct=0,i=1,rem;
	printf ("enter decimal value");
	scanf ("%d",&n);
	while (n!=0)
	{ 
	rem=n%8;
	oct=oct+rem*i;
	n=n/8;
	printf ("oct=%d",oct);
	return 0;
	
	}
}
