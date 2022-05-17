#include<stdio.h>
int main()
{
    int r,c,a[10][10],evenr=0,oddr=0,i,j;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]%2==0)
            {
                evenr+=a[i][j];
            }
            else
            {
                oddr+=a[i][j];
            }
        }
    }
    printf("%d %d",evenr,oddr);
    return 0;
}