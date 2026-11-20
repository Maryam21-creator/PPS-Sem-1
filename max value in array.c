#include<stdio.h>
int main()
{
	int M[5],i,max;
	printf("enter 5 value");

	for (i=0; i<5; i++)
	scanf("%d",&M[i]);
max=M[0];


	for (i=0; i<5; i++)
	{
		if (M[i]>max)
	{
		max=M[i];
	}
	}
	printf("max=%d,max");
	return 0;
}
