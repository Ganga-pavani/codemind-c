#include<stdio.h>
int main()
{
    int x,y,lcm;
    scanf("%d %d",&x,&y);
    lcm=(x>y)?x:y;
    while(1)
    {
        if(lcm%x==0&&lcm%y==0)
        {
            printf("%d",lcm);
            break;
        }
        ++lcm;
    }
    return 0;
}
