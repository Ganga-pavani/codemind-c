#include<stdio.h>
int main()
{
    char s[100];
    int i,c=0,j,x=0;
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        c=0;
        for(j=0;s[j]!=NULL;j++)
        {
            if(i!=j)
            {
                if(s[i]==s[j])
                {
                    c++;
                }
            }
        }
        if(c==0)
        {
            printf("%d",i);
            x=1;
            break;
        }
    }
    if(x==0)
    printf("-1");
}