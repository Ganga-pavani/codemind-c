#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    if(n<3||n>100)
    {
        printf("The pattern is not possible");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("
");
        }
        for(i=n-1;i>=1;i--)
        {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("
");

         }        
    }
}