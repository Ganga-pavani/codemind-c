#include<stdio.h>
int main()
{
    int n,d,i,factorial=1,n1,result=0;
    scanf("%d",&n);
    n1=n;
    while(n1)
    {
        factorial=1;
        d=n1%10;
        for(i=1;i<=d;i++)
        {
            factorial=factorial*i;
        }
        result+=factorial;
        n1=n1/10;
    }
    if(result==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
    return 0;
}