#include<stdio.h>
int main()
{
    int n,d,res=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        res=res*10+d;
        n=n/10;
    }
    if(temp==res)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}