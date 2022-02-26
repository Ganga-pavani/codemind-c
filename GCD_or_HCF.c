#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x==0)
    printf("%d",y);
    else if(y==0)
    printf("%d",x);
    else
    {
        while(x!=y)
        {
            if(x>y)
            x=x-y;
            else if(y>x)
            y=y-x;
        }
    }
        printf("%d",x);
        return 0;
    
}