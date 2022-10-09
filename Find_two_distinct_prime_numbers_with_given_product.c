#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c=1;
            return 0;
        }
    }
    if(c==0)
    {
        return 1;
    }
}
int main()
{
    int n,i,j,x=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(prime(i))
        {
            for(j=1;j<n;j++)
            {
                if(prime(j))
                {
                    if(i*j==n)
                    {
                        x=1;
                        printf("%d %d",i,j);
                        break;
                    }
                }
            }
        }
        if(x==1)
        {
            break;
        }
    }
    if(x==0)
    {
        printf("-1");
    }
}