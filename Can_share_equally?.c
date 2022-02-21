#include<stdio.h>
int main()
{
    int x,y,result=0;
    scanf("%d %d",&x,&y);
    result=x+2*y;
    if(x==0&&y%2==0)
    {
        printf("YES");
    }
    else
    if(x==0&&y%2!=0)
    {
        printf("NO");
    }
    else
    if(result%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}