#include<stdio.h>
int main()
{
    int i,n,k,max;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=0;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]+k>=max)
        {
            max=arr[i];
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
    return 0;
}