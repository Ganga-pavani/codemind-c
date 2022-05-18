#include<stdio.h>
int main()
{
    char ch[100];
    int i=0,z=0,o=0;
    scanf("%s",&ch);
    while(ch[i]!=NULL)
    {
        if(ch[i]=='z')
        {
            z++;
        }
        else if(ch[i]=='o')
        {
            o++;
        }
        i++;
        }
int x=2*z;
if(x==o)
{
    printf("Yes");
}
else
{
    printf("No");
    
}
return 0;
}