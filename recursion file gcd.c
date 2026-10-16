#include<stdio.h>

int gcd (int n1,int n2);

void main ()
{
int g,n1,n2;

printf ("enter n1,n2");

scanf ("%d %d", &n1,&n2);

g=gcd(n1,n2);

printf("%d",g);

}

int gcd (int n1,int n2)
{
	if (n2==0)
	return n1;
	else
	 return gcd(n2,n1%n2);
}
