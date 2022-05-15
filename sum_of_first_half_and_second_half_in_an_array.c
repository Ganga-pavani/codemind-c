#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[100],i,a,b,c;
    scanf("%d",&n);
    c=n/2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<c;i++)
    {
        a=a+arr[i];
    }
    for(i=c;i<n;i++)
    {
        b=b+arr[i];
    }
    printf("%d
%d",a,b);
    return 0;
}