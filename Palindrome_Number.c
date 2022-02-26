#include<stdio.h>
int main()
{
    int temp,n,i,r,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]); 
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        sum=0;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum*10+r;
            temp=temp/10;
        }
        if(sum==arr[i])
        printf("True
");
        else
        printf("False
");
    }
    return 0;
}