#include<stdio.h>
int main()
{
    int a[100],i,n;
    long long int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(1<=n && 0<=a[i]<=1010)
        {
            sum=sum+a[i];
        }
    }
    printf("%lld",sum);
    return 0;
}