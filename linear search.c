#include<stdio.h>

int main(void)
{
    int a[5],i,key,postion=-1;
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
        scanf("%d",&key);
    for(i=1;i<5;i++){
        if (a[i]==key){
            postion = i + 1;
            break;
        }
    }
    printf("%d/n",postion);
    return 0;
}


