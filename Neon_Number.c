#include<stdio.h>
int main()
{
    int n,sum=0,r,a;
    scanf("%d",&n);
    a=n*n;
    while(a>0)
    {
        r=a%10;
        sum=sum+r;
        a=a/10;
    }
if(sum==n)
printf("Neon Number");
else
printf("Not Neon Number");
return 0;
}