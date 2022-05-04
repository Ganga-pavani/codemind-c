#include<stdio.h>
int countdigits(int n)
{
    int d,count=0;
    while(n)
    {
        d=n%10;
        n=n/10;
        count++;
    }
    return count;
}
int main()
{
    int n,arr[100],i,x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        arr[i]=countdigits(arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            x++;
        }
    }
    printf("%d",x);
    return 0;
}