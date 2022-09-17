#include<stdio.h>
int main()
{
    int i;
    char str[100],c,x=0;
    scanf("%[^
]s",str);
    scanf(" %c",&c);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==c)
        {
            x++;
            break;
        }
    }
    if(x==0)
    {
        printf("False");
    }
    else
    {
        printf("True
");
        printf("%d",i);
    }
}