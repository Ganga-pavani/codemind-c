#include<stdio.h>
int main()
{
    int x,y,z,i,count=0;
    scanf("%d %d %d",&x,&y,&z);
    for(i=x;i<=y;i++)
    {
        if(i%z==0)
        count++;
    }
    printf("%d",count);
    return 0;
}