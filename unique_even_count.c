#include<stdio.h>
int main()
{
    int n,i,j,m=0,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
        if(count==0 && arr[i]%2==0)
        {
            m++;
        }
    }
    printf("%d",m);
    return 0;
}