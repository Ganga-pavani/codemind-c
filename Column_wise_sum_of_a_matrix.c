#include<stdio.h>
int main()
{
    int n,m,i,j,a[10][10],sum;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum+=a[j][i];
        }
        printf("%d ",sum);
    }
}