#include<stdio.h>
int main()
{
    int n,a[100],i,esum=0,osum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            esum=esum+a[i];
        }
        else
        {
            osum=osum+a[i];
        }
    }
    if(esum>osum)
    {
        printf("%d",esum-osum);
    }
    else
    {
        printf("%d",osum-esum);
    }
    return 0;
}