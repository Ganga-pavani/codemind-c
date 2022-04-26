#include<stdio.h>
int main()
{
int t,c,a,b;
scanf("%d",&t);
while(t>0)
{
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%d",c);
    printf("
");
    t--;
}
return 0;
}