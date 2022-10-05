#include<stdio.h>
int main()
{
    int t,l,r,i,c=0;
    scanf("%d
",&t);
    while(t--)
    {
        scanf("%d	%d
",&l,&r);
        c=0;
        for(i=l;i<=r;i++)
        {
            if(i%10==2||i%10==3||i%10==9)
            c++;
        }
        printf("%d
",c);
    }
    return 0;
}