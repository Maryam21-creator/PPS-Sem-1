#include<stdio.h>
int main()
{
    int a,b,temp;

    print("enter two numbers");
    scanf("%d%",&a,&b);
    printf("a=%d and b=%d",a,b);

    temp=a;
    a=b;
    b=temp;
    printf("a= %d and b=%d",a,b);

    return 0;
}

